/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/UpdateAttributesRequest.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class AWS_PINPOINT_API RemoveAttributesRequest : public PinpointRequest
  {
  public:
    RemoveAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveAttributes"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline RemoveAttributesRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline RemoveAttributesRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline RemoveAttributesRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The type of attribute or attributes to remove. Valid values are:</p>
     * <ul><li><p>endpoint-custom-attributes - Custom attributes that describe
     * endpoints, such as the date when an associated user opted in or out of receiving
     * communications from you through a specific type of channel.</p></li>
     * <li><p>endpoint-custom-metrics - Custom metrics that your app reports to Amazon
     * Pinpoint for endpoints, such as the number of app sessions or the number of
     * items left in a cart.</p></li> <li><p>endpoint-user-attributes - Custom
     * attributes that describe users, such as first name, last name, and
     * age.</p></li></ul>
     */
    inline const Aws::String& GetAttributeType() const{ return m_attributeType; }

    /**
     * <p>The type of attribute or attributes to remove. Valid values are:</p>
     * <ul><li><p>endpoint-custom-attributes - Custom attributes that describe
     * endpoints, such as the date when an associated user opted in or out of receiving
     * communications from you through a specific type of channel.</p></li>
     * <li><p>endpoint-custom-metrics - Custom metrics that your app reports to Amazon
     * Pinpoint for endpoints, such as the number of app sessions or the number of
     * items left in a cart.</p></li> <li><p>endpoint-user-attributes - Custom
     * attributes that describe users, such as first name, last name, and
     * age.</p></li></ul>
     */
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }

    /**
     * <p>The type of attribute or attributes to remove. Valid values are:</p>
     * <ul><li><p>endpoint-custom-attributes - Custom attributes that describe
     * endpoints, such as the date when an associated user opted in or out of receiving
     * communications from you through a specific type of channel.</p></li>
     * <li><p>endpoint-custom-metrics - Custom metrics that your app reports to Amazon
     * Pinpoint for endpoints, such as the number of app sessions or the number of
     * items left in a cart.</p></li> <li><p>endpoint-user-attributes - Custom
     * attributes that describe users, such as first name, last name, and
     * age.</p></li></ul>
     */
    inline void SetAttributeType(const Aws::String& value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }

    /**
     * <p>The type of attribute or attributes to remove. Valid values are:</p>
     * <ul><li><p>endpoint-custom-attributes - Custom attributes that describe
     * endpoints, such as the date when an associated user opted in or out of receiving
     * communications from you through a specific type of channel.</p></li>
     * <li><p>endpoint-custom-metrics - Custom metrics that your app reports to Amazon
     * Pinpoint for endpoints, such as the number of app sessions or the number of
     * items left in a cart.</p></li> <li><p>endpoint-user-attributes - Custom
     * attributes that describe users, such as first name, last name, and
     * age.</p></li></ul>
     */
    inline void SetAttributeType(Aws::String&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::move(value); }

    /**
     * <p>The type of attribute or attributes to remove. Valid values are:</p>
     * <ul><li><p>endpoint-custom-attributes - Custom attributes that describe
     * endpoints, such as the date when an associated user opted in or out of receiving
     * communications from you through a specific type of channel.</p></li>
     * <li><p>endpoint-custom-metrics - Custom metrics that your app reports to Amazon
     * Pinpoint for endpoints, such as the number of app sessions or the number of
     * items left in a cart.</p></li> <li><p>endpoint-user-attributes - Custom
     * attributes that describe users, such as first name, last name, and
     * age.</p></li></ul>
     */
    inline void SetAttributeType(const char* value) { m_attributeTypeHasBeenSet = true; m_attributeType.assign(value); }

    /**
     * <p>The type of attribute or attributes to remove. Valid values are:</p>
     * <ul><li><p>endpoint-custom-attributes - Custom attributes that describe
     * endpoints, such as the date when an associated user opted in or out of receiving
     * communications from you through a specific type of channel.</p></li>
     * <li><p>endpoint-custom-metrics - Custom metrics that your app reports to Amazon
     * Pinpoint for endpoints, such as the number of app sessions or the number of
     * items left in a cart.</p></li> <li><p>endpoint-user-attributes - Custom
     * attributes that describe users, such as first name, last name, and
     * age.</p></li></ul>
     */
    inline RemoveAttributesRequest& WithAttributeType(const Aws::String& value) { SetAttributeType(value); return *this;}

    /**
     * <p>The type of attribute or attributes to remove. Valid values are:</p>
     * <ul><li><p>endpoint-custom-attributes - Custom attributes that describe
     * endpoints, such as the date when an associated user opted in or out of receiving
     * communications from you through a specific type of channel.</p></li>
     * <li><p>endpoint-custom-metrics - Custom metrics that your app reports to Amazon
     * Pinpoint for endpoints, such as the number of app sessions or the number of
     * items left in a cart.</p></li> <li><p>endpoint-user-attributes - Custom
     * attributes that describe users, such as first name, last name, and
     * age.</p></li></ul>
     */
    inline RemoveAttributesRequest& WithAttributeType(Aws::String&& value) { SetAttributeType(std::move(value)); return *this;}

    /**
     * <p>The type of attribute or attributes to remove. Valid values are:</p>
     * <ul><li><p>endpoint-custom-attributes - Custom attributes that describe
     * endpoints, such as the date when an associated user opted in or out of receiving
     * communications from you through a specific type of channel.</p></li>
     * <li><p>endpoint-custom-metrics - Custom metrics that your app reports to Amazon
     * Pinpoint for endpoints, such as the number of app sessions or the number of
     * items left in a cart.</p></li> <li><p>endpoint-user-attributes - Custom
     * attributes that describe users, such as first name, last name, and
     * age.</p></li></ul>
     */
    inline RemoveAttributesRequest& WithAttributeType(const char* value) { SetAttributeType(value); return *this;}


    
    inline const UpdateAttributesRequest& GetUpdateAttributesRequest() const{ return m_updateAttributesRequest; }

    
    inline bool UpdateAttributesRequestHasBeenSet() const { return m_updateAttributesRequestHasBeenSet; }

    
    inline void SetUpdateAttributesRequest(const UpdateAttributesRequest& value) { m_updateAttributesRequestHasBeenSet = true; m_updateAttributesRequest = value; }

    
    inline void SetUpdateAttributesRequest(UpdateAttributesRequest&& value) { m_updateAttributesRequestHasBeenSet = true; m_updateAttributesRequest = std::move(value); }

    
    inline RemoveAttributesRequest& WithUpdateAttributesRequest(const UpdateAttributesRequest& value) { SetUpdateAttributesRequest(value); return *this;}

    
    inline RemoveAttributesRequest& WithUpdateAttributesRequest(UpdateAttributesRequest&& value) { SetUpdateAttributesRequest(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_attributeType;
    bool m_attributeTypeHasBeenSet;

    UpdateAttributesRequest m_updateAttributesRequest;
    bool m_updateAttributesRequestHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
