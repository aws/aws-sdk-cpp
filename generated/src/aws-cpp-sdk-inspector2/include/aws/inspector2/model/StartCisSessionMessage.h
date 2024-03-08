/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The start CIS session message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/StartCisSessionMessage">AWS
   * API Reference</a></p>
   */
  class StartCisSessionMessage
  {
  public:
    AWS_INSPECTOR2_API StartCisSessionMessage();
    AWS_INSPECTOR2_API StartCisSessionMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API StartCisSessionMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }

    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }

    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline void SetSessionToken(const Aws::String& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = value; }

    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline void SetSessionToken(Aws::String&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::move(value); }

    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline void SetSessionToken(const char* value) { m_sessionTokenHasBeenSet = true; m_sessionToken.assign(value); }

    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline StartCisSessionMessage& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}

    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline StartCisSessionMessage& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}

    /**
     * <p>The unique token that identifies the CIS session.</p>
     */
    inline StartCisSessionMessage& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}

  private:

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
