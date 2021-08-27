/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/ParameterExceptionField.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>The operation failed because AWS WAF didn't recognize a parameter in the
   * request. For example: </p> <ul> <li> <p>You specified an invalid parameter name
   * or value.</p> </li> <li> <p>Your nested statement isn't valid. You might have
   * tried to nest a statement that can’t be nested. </p> </li> <li> <p>You tried to
   * update a <code>WebACL</code> with a <code>DefaultAction</code> that isn't among
   * the types available at <a>DefaultAction</a>.</p> </li> <li> <p>Your request
   * references an ARN that is malformed, or corresponds to a resource with which a
   * Web ACL cannot be associated.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/WAFInvalidParameterException">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API WAFInvalidParameterException
  {
  public:
    WAFInvalidParameterException();
    WAFInvalidParameterException(Aws::Utils::Json::JsonView jsonValue);
    WAFInvalidParameterException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline WAFInvalidParameterException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline WAFInvalidParameterException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline WAFInvalidParameterException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const ParameterExceptionField& GetField() const{ return m_field; }

    
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    
    inline void SetField(const ParameterExceptionField& value) { m_fieldHasBeenSet = true; m_field = value; }

    
    inline void SetField(ParameterExceptionField&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    
    inline WAFInvalidParameterException& WithField(const ParameterExceptionField& value) { SetField(value); return *this;}

    
    inline WAFInvalidParameterException& WithField(ParameterExceptionField&& value) { SetField(std::move(value)); return *this;}


    
    inline const Aws::String& GetParameter() const{ return m_parameter; }

    
    inline bool ParameterHasBeenSet() const { return m_parameterHasBeenSet; }

    
    inline void SetParameter(const Aws::String& value) { m_parameterHasBeenSet = true; m_parameter = value; }

    
    inline void SetParameter(Aws::String&& value) { m_parameterHasBeenSet = true; m_parameter = std::move(value); }

    
    inline void SetParameter(const char* value) { m_parameterHasBeenSet = true; m_parameter.assign(value); }

    
    inline WAFInvalidParameterException& WithParameter(const Aws::String& value) { SetParameter(value); return *this;}

    
    inline WAFInvalidParameterException& WithParameter(Aws::String&& value) { SetParameter(std::move(value)); return *this;}

    
    inline WAFInvalidParameterException& WithParameter(const char* value) { SetParameter(value); return *this;}


    
    inline const Aws::String& GetReason() const{ return m_reason; }

    
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    
    inline WAFInvalidParameterException& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    
    inline WAFInvalidParameterException& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    
    inline WAFInvalidParameterException& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    ParameterExceptionField m_field;
    bool m_fieldHasBeenSet;

    Aws::String m_parameter;
    bool m_parameterHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
