/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/DeliveryMediumType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The type of code delivery details being returned from the server.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API CodeDeliveryDetailsType
  {
  public:
    CodeDeliveryDetailsType();
    CodeDeliveryDetailsType(const Aws::Utils::Json::JsonValue& jsonValue);
    CodeDeliveryDetailsType& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The destination for the code delivery details.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The destination for the code delivery details.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The destination for the code delivery details.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The destination for the code delivery details.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The destination for the code delivery details.</p>
     */
    inline CodeDeliveryDetailsType& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination for the code delivery details.</p>
     */
    inline CodeDeliveryDetailsType& WithDestination(Aws::String&& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination for the code delivery details.</p>
     */
    inline CodeDeliveryDetailsType& WithDestination(const char* value) { SetDestination(value); return *this;}

    /**
     * <p>The delivery medium (email message or phone number).</p>
     */
    inline const DeliveryMediumType& GetDeliveryMedium() const{ return m_deliveryMedium; }

    /**
     * <p>The delivery medium (email message or phone number).</p>
     */
    inline void SetDeliveryMedium(const DeliveryMediumType& value) { m_deliveryMediumHasBeenSet = true; m_deliveryMedium = value; }

    /**
     * <p>The delivery medium (email message or phone number).</p>
     */
    inline void SetDeliveryMedium(DeliveryMediumType&& value) { m_deliveryMediumHasBeenSet = true; m_deliveryMedium = value; }

    /**
     * <p>The delivery medium (email message or phone number).</p>
     */
    inline CodeDeliveryDetailsType& WithDeliveryMedium(const DeliveryMediumType& value) { SetDeliveryMedium(value); return *this;}

    /**
     * <p>The delivery medium (email message or phone number).</p>
     */
    inline CodeDeliveryDetailsType& WithDeliveryMedium(DeliveryMediumType&& value) { SetDeliveryMedium(value); return *this;}

    /**
     * <p>The name of the attribute in the code delivery details type.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the attribute in the code delivery details type.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the attribute in the code delivery details type.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the attribute in the code delivery details type.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the attribute in the code delivery details type.</p>
     */
    inline CodeDeliveryDetailsType& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the attribute in the code delivery details type.</p>
     */
    inline CodeDeliveryDetailsType& WithAttributeName(Aws::String&& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the attribute in the code delivery details type.</p>
     */
    inline CodeDeliveryDetailsType& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}

  private:
    Aws::String m_destination;
    bool m_destinationHasBeenSet;
    DeliveryMediumType m_deliveryMedium;
    bool m_deliveryMediumHasBeenSet;
    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
