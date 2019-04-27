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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The details of the gateway. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/Gateway">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API Gateway
  {
  public:
    Gateway();
    Gateway(Aws::Utils::Json::JsonView jsonValue);
    Gateway& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the gateway.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline Gateway& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline Gateway& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline Gateway& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the gateway.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the gateway.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the gateway.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the gateway.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the gateway.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the gateway.</p>
     */
    inline Gateway& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the gateway.</p>
     */
    inline Gateway& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the gateway.</p>
     */
    inline Gateway& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the gateway.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the gateway.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the gateway.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the gateway.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the gateway.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the gateway.</p>
     */
    inline Gateway& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the gateway.</p>
     */
    inline Gateway& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the gateway.</p>
     */
    inline Gateway& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the gateway group that the gateway is associated to.</p>
     */
    inline const Aws::String& GetGatewayGroupArn() const{ return m_gatewayGroupArn; }

    /**
     * <p>The ARN of the gateway group that the gateway is associated to.</p>
     */
    inline bool GatewayGroupArnHasBeenSet() const { return m_gatewayGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the gateway group that the gateway is associated to.</p>
     */
    inline void SetGatewayGroupArn(const Aws::String& value) { m_gatewayGroupArnHasBeenSet = true; m_gatewayGroupArn = value; }

    /**
     * <p>The ARN of the gateway group that the gateway is associated to.</p>
     */
    inline void SetGatewayGroupArn(Aws::String&& value) { m_gatewayGroupArnHasBeenSet = true; m_gatewayGroupArn = std::move(value); }

    /**
     * <p>The ARN of the gateway group that the gateway is associated to.</p>
     */
    inline void SetGatewayGroupArn(const char* value) { m_gatewayGroupArnHasBeenSet = true; m_gatewayGroupArn.assign(value); }

    /**
     * <p>The ARN of the gateway group that the gateway is associated to.</p>
     */
    inline Gateway& WithGatewayGroupArn(const Aws::String& value) { SetGatewayGroupArn(value); return *this;}

    /**
     * <p>The ARN of the gateway group that the gateway is associated to.</p>
     */
    inline Gateway& WithGatewayGroupArn(Aws::String&& value) { SetGatewayGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the gateway group that the gateway is associated to.</p>
     */
    inline Gateway& WithGatewayGroupArn(const char* value) { SetGatewayGroupArn(value); return *this;}


    /**
     * <p>The software version of the gateway. The gateway automatically updates its
     * software version during normal operation.</p>
     */
    inline const Aws::String& GetSoftwareVersion() const{ return m_softwareVersion; }

    /**
     * <p>The software version of the gateway. The gateway automatically updates its
     * software version during normal operation.</p>
     */
    inline bool SoftwareVersionHasBeenSet() const { return m_softwareVersionHasBeenSet; }

    /**
     * <p>The software version of the gateway. The gateway automatically updates its
     * software version during normal operation.</p>
     */
    inline void SetSoftwareVersion(const Aws::String& value) { m_softwareVersionHasBeenSet = true; m_softwareVersion = value; }

    /**
     * <p>The software version of the gateway. The gateway automatically updates its
     * software version during normal operation.</p>
     */
    inline void SetSoftwareVersion(Aws::String&& value) { m_softwareVersionHasBeenSet = true; m_softwareVersion = std::move(value); }

    /**
     * <p>The software version of the gateway. The gateway automatically updates its
     * software version during normal operation.</p>
     */
    inline void SetSoftwareVersion(const char* value) { m_softwareVersionHasBeenSet = true; m_softwareVersion.assign(value); }

    /**
     * <p>The software version of the gateway. The gateway automatically updates its
     * software version during normal operation.</p>
     */
    inline Gateway& WithSoftwareVersion(const Aws::String& value) { SetSoftwareVersion(value); return *this;}

    /**
     * <p>The software version of the gateway. The gateway automatically updates its
     * software version during normal operation.</p>
     */
    inline Gateway& WithSoftwareVersion(Aws::String&& value) { SetSoftwareVersion(std::move(value)); return *this;}

    /**
     * <p>The software version of the gateway. The gateway automatically updates its
     * software version during normal operation.</p>
     */
    inline Gateway& WithSoftwareVersion(const char* value) { SetSoftwareVersion(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_gatewayGroupArn;
    bool m_gatewayGroupArnHasBeenSet;

    Aws::String m_softwareVersion;
    bool m_softwareVersionHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
