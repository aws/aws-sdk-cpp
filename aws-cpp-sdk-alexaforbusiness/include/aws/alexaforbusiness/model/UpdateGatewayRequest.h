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
  class AWS_ALEXAFORBUSINESS_API UpdateGatewayRequest : public AlexaForBusinessRequest
  {
  public:
    UpdateGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGateway"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the gateway to update.</p>
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }

    /**
     * <p>The ARN of the gateway to update.</p>
     */
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }

    /**
     * <p>The ARN of the gateway to update.</p>
     */
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = value; }

    /**
     * <p>The ARN of the gateway to update.</p>
     */
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::move(value); }

    /**
     * <p>The ARN of the gateway to update.</p>
     */
    inline void SetGatewayArn(const char* value) { m_gatewayArnHasBeenSet = true; m_gatewayArn.assign(value); }

    /**
     * <p>The ARN of the gateway to update.</p>
     */
    inline UpdateGatewayRequest& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}

    /**
     * <p>The ARN of the gateway to update.</p>
     */
    inline UpdateGatewayRequest& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the gateway to update.</p>
     */
    inline UpdateGatewayRequest& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}


    /**
     * <p>The updated name of the gateway.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The updated name of the gateway.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The updated name of the gateway.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The updated name of the gateway.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The updated name of the gateway.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The updated name of the gateway.</p>
     */
    inline UpdateGatewayRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The updated name of the gateway.</p>
     */
    inline UpdateGatewayRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The updated name of the gateway.</p>
     */
    inline UpdateGatewayRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The updated description of the gateway.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated description of the gateway.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The updated description of the gateway.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The updated description of the gateway.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The updated description of the gateway.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The updated description of the gateway.</p>
     */
    inline UpdateGatewayRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated description of the gateway.</p>
     */
    inline UpdateGatewayRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The updated description of the gateway.</p>
     */
    inline UpdateGatewayRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The updated software version of the gateway. The gateway automatically
     * updates its software version during normal operation.</p>
     */
    inline const Aws::String& GetSoftwareVersion() const{ return m_softwareVersion; }

    /**
     * <p>The updated software version of the gateway. The gateway automatically
     * updates its software version during normal operation.</p>
     */
    inline bool SoftwareVersionHasBeenSet() const { return m_softwareVersionHasBeenSet; }

    /**
     * <p>The updated software version of the gateway. The gateway automatically
     * updates its software version during normal operation.</p>
     */
    inline void SetSoftwareVersion(const Aws::String& value) { m_softwareVersionHasBeenSet = true; m_softwareVersion = value; }

    /**
     * <p>The updated software version of the gateway. The gateway automatically
     * updates its software version during normal operation.</p>
     */
    inline void SetSoftwareVersion(Aws::String&& value) { m_softwareVersionHasBeenSet = true; m_softwareVersion = std::move(value); }

    /**
     * <p>The updated software version of the gateway. The gateway automatically
     * updates its software version during normal operation.</p>
     */
    inline void SetSoftwareVersion(const char* value) { m_softwareVersionHasBeenSet = true; m_softwareVersion.assign(value); }

    /**
     * <p>The updated software version of the gateway. The gateway automatically
     * updates its software version during normal operation.</p>
     */
    inline UpdateGatewayRequest& WithSoftwareVersion(const Aws::String& value) { SetSoftwareVersion(value); return *this;}

    /**
     * <p>The updated software version of the gateway. The gateway automatically
     * updates its software version during normal operation.</p>
     */
    inline UpdateGatewayRequest& WithSoftwareVersion(Aws::String&& value) { SetSoftwareVersion(std::move(value)); return *this;}

    /**
     * <p>The updated software version of the gateway. The gateway automatically
     * updates its software version during normal operation.</p>
     */
    inline UpdateGatewayRequest& WithSoftwareVersion(const char* value) { SetSoftwareVersion(value); return *this;}

  private:

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_softwareVersion;
    bool m_softwareVersionHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
