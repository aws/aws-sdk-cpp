/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides information about the user context for a Amazon Kendra
   * index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UserContext">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API UserContext
  {
  public:
    UserContext();
    UserContext(Aws::Utils::Json::JsonView jsonValue);
    UserContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user context token. It must be a JWT or a JSON token.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>The user context token. It must be a JWT or a JSON token.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>The user context token. It must be a JWT or a JSON token.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The user context token. It must be a JWT or a JSON token.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>The user context token. It must be a JWT or a JSON token.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>The user context token. It must be a JWT or a JSON token.</p>
     */
    inline UserContext& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>The user context token. It must be a JWT or a JSON token.</p>
     */
    inline UserContext& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>The user context token. It must be a JWT or a JSON token.</p>
     */
    inline UserContext& WithToken(const char* value) { SetToken(value); return *this;}

  private:

    Aws::String m_token;
    bool m_tokenHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
