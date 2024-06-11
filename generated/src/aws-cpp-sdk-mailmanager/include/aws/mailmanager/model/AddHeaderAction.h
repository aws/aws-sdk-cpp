/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The action to add a header to a message. When executed, this action will add
   * the given header to the message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/AddHeaderAction">AWS
   * API Reference</a></p>
   */
  class AddHeaderAction
  {
  public:
    AWS_MAILMANAGER_API AddHeaderAction();
    AWS_MAILMANAGER_API AddHeaderAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API AddHeaderAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the header to add to an email. The header must be prefixed with
     * "X-". Headers are added regardless of whether the header name pre-existed in the
     * email.</p>
     */
    inline const Aws::String& GetHeaderName() const{ return m_headerName; }
    inline bool HeaderNameHasBeenSet() const { return m_headerNameHasBeenSet; }
    inline void SetHeaderName(const Aws::String& value) { m_headerNameHasBeenSet = true; m_headerName = value; }
    inline void SetHeaderName(Aws::String&& value) { m_headerNameHasBeenSet = true; m_headerName = std::move(value); }
    inline void SetHeaderName(const char* value) { m_headerNameHasBeenSet = true; m_headerName.assign(value); }
    inline AddHeaderAction& WithHeaderName(const Aws::String& value) { SetHeaderName(value); return *this;}
    inline AddHeaderAction& WithHeaderName(Aws::String&& value) { SetHeaderName(std::move(value)); return *this;}
    inline AddHeaderAction& WithHeaderName(const char* value) { SetHeaderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the header to add to the email.</p>
     */
    inline const Aws::String& GetHeaderValue() const{ return m_headerValue; }
    inline bool HeaderValueHasBeenSet() const { return m_headerValueHasBeenSet; }
    inline void SetHeaderValue(const Aws::String& value) { m_headerValueHasBeenSet = true; m_headerValue = value; }
    inline void SetHeaderValue(Aws::String&& value) { m_headerValueHasBeenSet = true; m_headerValue = std::move(value); }
    inline void SetHeaderValue(const char* value) { m_headerValueHasBeenSet = true; m_headerValue.assign(value); }
    inline AddHeaderAction& WithHeaderValue(const Aws::String& value) { SetHeaderValue(value); return *this;}
    inline AddHeaderAction& WithHeaderValue(Aws::String&& value) { SetHeaderValue(std::move(value)); return *this;}
    inline AddHeaderAction& WithHeaderValue(const char* value) { SetHeaderValue(value); return *this;}
    ///@}
  private:

    Aws::String m_headerName;
    bool m_headerNameHasBeenSet = false;

    Aws::String m_headerValue;
    bool m_headerValueHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
