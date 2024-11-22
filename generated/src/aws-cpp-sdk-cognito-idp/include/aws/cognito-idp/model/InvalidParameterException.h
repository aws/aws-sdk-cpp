/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>This exception is thrown when the Amazon Cognito service encounters an
   * invalid parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/InvalidParameterException">AWS
   * API Reference</a></p>
   */
  class InvalidParameterException
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API InvalidParameterException();
    AWS_COGNITOIDENTITYPROVIDER_API InvalidParameterException(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API InvalidParameterException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message returned when the Amazon Cognito service throws an invalid
     * parameter exception.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline InvalidParameterException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline InvalidParameterException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline InvalidParameterException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason code of the exception.</p>
     */
    inline const Aws::String& GetReasonCode() const{ return m_reasonCode; }
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
    inline void SetReasonCode(const Aws::String& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = value; }
    inline void SetReasonCode(Aws::String&& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = std::move(value); }
    inline void SetReasonCode(const char* value) { m_reasonCodeHasBeenSet = true; m_reasonCode.assign(value); }
    inline InvalidParameterException& WithReasonCode(const Aws::String& value) { SetReasonCode(value); return *this;}
    inline InvalidParameterException& WithReasonCode(Aws::String&& value) { SetReasonCode(std::move(value)); return *this;}
    inline InvalidParameterException& WithReasonCode(const char* value) { SetReasonCode(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_reasonCode;
    bool m_reasonCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
