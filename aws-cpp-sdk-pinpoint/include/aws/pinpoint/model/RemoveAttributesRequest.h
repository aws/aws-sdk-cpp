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
     * The unique ID of your Amazon Pinpoint application.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline RemoveAttributesRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline RemoveAttributesRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The unique ID of your Amazon Pinpoint application.
     */
    inline RemoveAttributesRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * Type of attribute. Can be endpoint-custom-attributes, endpoint-custom-metrics,
     * endpoint-user-attributes.
     */
    inline const Aws::String& GetAttributeType() const{ return m_attributeType; }

    /**
     * Type of attribute. Can be endpoint-custom-attributes, endpoint-custom-metrics,
     * endpoint-user-attributes.
     */
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }

    /**
     * Type of attribute. Can be endpoint-custom-attributes, endpoint-custom-metrics,
     * endpoint-user-attributes.
     */
    inline void SetAttributeType(const Aws::String& value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }

    /**
     * Type of attribute. Can be endpoint-custom-attributes, endpoint-custom-metrics,
     * endpoint-user-attributes.
     */
    inline void SetAttributeType(Aws::String&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::move(value); }

    /**
     * Type of attribute. Can be endpoint-custom-attributes, endpoint-custom-metrics,
     * endpoint-user-attributes.
     */
    inline void SetAttributeType(const char* value) { m_attributeTypeHasBeenSet = true; m_attributeType.assign(value); }

    /**
     * Type of attribute. Can be endpoint-custom-attributes, endpoint-custom-metrics,
     * endpoint-user-attributes.
     */
    inline RemoveAttributesRequest& WithAttributeType(const Aws::String& value) { SetAttributeType(value); return *this;}

    /**
     * Type of attribute. Can be endpoint-custom-attributes, endpoint-custom-metrics,
     * endpoint-user-attributes.
     */
    inline RemoveAttributesRequest& WithAttributeType(Aws::String&& value) { SetAttributeType(std::move(value)); return *this;}

    /**
     * Type of attribute. Can be endpoint-custom-attributes, endpoint-custom-metrics,
     * endpoint-user-attributes.
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
