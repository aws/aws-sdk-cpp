/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Error for batch describe case rules API failure. In the Amazon Connect admin
   * website, case rules are known as <i>case field conditions</i>. For more
   * information about case field conditions, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">Add
   * case field conditions to a case template</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CaseRuleError">AWS
   * API Reference</a></p>
   */
  class CaseRuleError
  {
  public:
    AWS_CONNECTCASES_API CaseRuleError();
    AWS_CONNECTCASES_API CaseRuleError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API CaseRuleError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Error code from getting a case rule.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline CaseRuleError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline CaseRuleError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline CaseRuleError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The case rule identifier that caused the error.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CaseRuleError& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CaseRuleError& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CaseRuleError& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error message from getting a case rule.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline CaseRuleError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline CaseRuleError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline CaseRuleError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
