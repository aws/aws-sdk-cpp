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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API UpdateGatewayGroupRequest : public AlexaForBusinessRequest
  {
  public:
    UpdateGatewayGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGatewayGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the gateway group to update.</p>
     */
    inline const Aws::String& GetGatewayGroupArn() const{ return m_gatewayGroupArn; }

    /**
     * <p>The ARN of the gateway group to update.</p>
     */
    inline bool GatewayGroupArnHasBeenSet() const { return m_gatewayGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the gateway group to update.</p>
     */
    inline void SetGatewayGroupArn(const Aws::String& value) { m_gatewayGroupArnHasBeenSet = true; m_gatewayGroupArn = value; }

    /**
     * <p>The ARN of the gateway group to update.</p>
     */
    inline void SetGatewayGroupArn(Aws::String&& value) { m_gatewayGroupArnHasBeenSet = true; m_gatewayGroupArn = std::move(value); }

    /**
     * <p>The ARN of the gateway group to update.</p>
     */
    inline void SetGatewayGroupArn(const char* value) { m_gatewayGroupArnHasBeenSet = true; m_gatewayGroupArn.assign(value); }

    /**
     * <p>The ARN of the gateway group to update.</p>
     */
    inline UpdateGatewayGroupRequest& WithGatewayGroupArn(const Aws::String& value) { SetGatewayGroupArn(value); return *this;}

    /**
     * <p>The ARN of the gateway group to update.</p>
     */
    inline UpdateGatewayGroupRequest& WithGatewayGroupArn(Aws::String&& value) { SetGatewayGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the gateway group to update.</p>
     */
    inline UpdateGatewayGroupRequest& WithGatewayGroupArn(const char* value) { SetGatewayGroupArn(value); return *this;}


    /**
     * <p>The updated name of the gateway group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The updated name of the gateway group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The updated name of the gateway group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The updated name of the gateway group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The updated name of the gateway group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The updated name of the gateway group.</p>
     */
    inline UpdateGatewayGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The updated name of the gateway group.</p>
     */
    inline UpdateGatewayGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The updated name of the gateway group.</p>
     */
    inline UpdateGatewayGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The updated description of the gateway group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated description of the gateway group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The updated description of the gateway group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The updated description of the gateway group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The updated description of the gateway group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The updated description of the gateway group.</p>
     */
    inline UpdateGatewayGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated description of the gateway group.</p>
     */
    inline UpdateGatewayGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The updated description of the gateway group.</p>
     */
    inline UpdateGatewayGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_gatewayGroupArn;
    bool m_gatewayGroupArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
