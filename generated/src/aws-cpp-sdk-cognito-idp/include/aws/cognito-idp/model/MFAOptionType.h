/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/DeliveryMediumType.h>
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
   * <p> <i>This data type is no longer supported.</i> Applies only to SMS
   * multi-factor authentication (MFA) configurations. Does not apply to time-based
   * one-time password (TOTP) software token MFA configurations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/MFAOptionType">AWS
   * API Reference</a></p>
   */
  class MFAOptionType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API MFAOptionType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API MFAOptionType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API MFAOptionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The delivery medium to send the MFA code. You can use this parameter to set
     * only the <code>SMS</code> delivery medium value.</p>
     */
    inline DeliveryMediumType GetDeliveryMedium() const { return m_deliveryMedium; }
    inline bool DeliveryMediumHasBeenSet() const { return m_deliveryMediumHasBeenSet; }
    inline void SetDeliveryMedium(DeliveryMediumType value) { m_deliveryMediumHasBeenSet = true; m_deliveryMedium = value; }
    inline MFAOptionType& WithDeliveryMedium(DeliveryMediumType value) { SetDeliveryMedium(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute name of the MFA option type. The only valid value is
     * <code>phone_number</code>.</p>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    MFAOptionType& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}
  private:

    DeliveryMediumType m_deliveryMedium{DeliveryMediumType::NOT_SET};
    bool m_deliveryMediumHasBeenSet = false;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
