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
    AWS_COGNITOIDENTITYPROVIDER_API InvalidParameterException() = default;
    AWS_COGNITOIDENTITYPROVIDER_API InvalidParameterException(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API InvalidParameterException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message returned when the Amazon Cognito service throws an invalid
     * parameter exception.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InvalidParameterException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason code of the exception.</p>
     */
    inline const Aws::String& GetReasonCode() const { return m_reasonCode; }
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
    template<typename ReasonCodeT = Aws::String>
    void SetReasonCode(ReasonCodeT&& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = std::forward<ReasonCodeT>(value); }
    template<typename ReasonCodeT = Aws::String>
    InvalidParameterException& WithReasonCode(ReasonCodeT&& value) { SetReasonCode(std::forward<ReasonCodeT>(value)); return *this;}
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
