/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains details about why a contact was disconnected. Only Amazon Connect
   * outbound campaigns can provide this field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisconnectReason">AWS
   * API Reference</a></p>
   */
  class DisconnectReason
  {
  public:
    AWS_CONNECT_API DisconnectReason();
    AWS_CONNECT_API DisconnectReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API DisconnectReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A code that indicates how the contact was terminated.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>A code that indicates how the contact was terminated.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>A code that indicates how the contact was terminated.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>A code that indicates how the contact was terminated.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>A code that indicates how the contact was terminated.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>A code that indicates how the contact was terminated.</p>
     */
    inline DisconnectReason& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>A code that indicates how the contact was terminated.</p>
     */
    inline DisconnectReason& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>A code that indicates how the contact was terminated.</p>
     */
    inline DisconnectReason& WithCode(const char* value) { SetCode(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
