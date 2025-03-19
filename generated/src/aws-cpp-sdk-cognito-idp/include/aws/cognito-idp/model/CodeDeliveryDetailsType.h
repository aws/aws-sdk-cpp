/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/DeliveryMediumType.h>
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
   * <p>The delivery details for an email or SMS message that Amazon Cognito sent for
   * authentication or verification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CodeDeliveryDetailsType">AWS
   * API Reference</a></p>
   */
  class CodeDeliveryDetailsType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CodeDeliveryDetailsType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API CodeDeliveryDetailsType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API CodeDeliveryDetailsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email address or phone number destination where Amazon Cognito sent the
     * code.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    CodeDeliveryDetailsType& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method that Amazon Cognito used to send the code.</p>
     */
    inline DeliveryMediumType GetDeliveryMedium() const { return m_deliveryMedium; }
    inline bool DeliveryMediumHasBeenSet() const { return m_deliveryMediumHasBeenSet; }
    inline void SetDeliveryMedium(DeliveryMediumType value) { m_deliveryMediumHasBeenSet = true; m_deliveryMedium = value; }
    inline CodeDeliveryDetailsType& WithDeliveryMedium(DeliveryMediumType value) { SetDeliveryMedium(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the attribute that Amazon Cognito verifies with the code.</p>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    CodeDeliveryDetailsType& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    DeliveryMediumType m_deliveryMedium{DeliveryMediumType::NOT_SET};
    bool m_deliveryMediumHasBeenSet = false;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
