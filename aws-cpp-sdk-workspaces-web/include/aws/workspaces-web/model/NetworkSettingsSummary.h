/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The summary of network settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/NetworkSettingsSummary">AWS
   * API Reference</a></p>
   */
  class NetworkSettingsSummary
  {
  public:
    AWS_WORKSPACESWEB_API NetworkSettingsSummary();
    AWS_WORKSPACESWEB_API NetworkSettingsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API NetworkSettingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the network settings.</p>
     */
    inline const Aws::String& GetNetworkSettingsArn() const{ return m_networkSettingsArn; }

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline bool NetworkSettingsArnHasBeenSet() const { return m_networkSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline void SetNetworkSettingsArn(const Aws::String& value) { m_networkSettingsArnHasBeenSet = true; m_networkSettingsArn = value; }

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline void SetNetworkSettingsArn(Aws::String&& value) { m_networkSettingsArnHasBeenSet = true; m_networkSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline void SetNetworkSettingsArn(const char* value) { m_networkSettingsArnHasBeenSet = true; m_networkSettingsArn.assign(value); }

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline NetworkSettingsSummary& WithNetworkSettingsArn(const Aws::String& value) { SetNetworkSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline NetworkSettingsSummary& WithNetworkSettingsArn(Aws::String&& value) { SetNetworkSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline NetworkSettingsSummary& WithNetworkSettingsArn(const char* value) { SetNetworkSettingsArn(value); return *this;}


    /**
     * <p>The VPC ID of the network settings.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC ID of the network settings.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The VPC ID of the network settings.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC ID of the network settings.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The VPC ID of the network settings.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The VPC ID of the network settings.</p>
     */
    inline NetworkSettingsSummary& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC ID of the network settings.</p>
     */
    inline NetworkSettingsSummary& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The VPC ID of the network settings.</p>
     */
    inline NetworkSettingsSummary& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::String m_networkSettingsArn;
    bool m_networkSettingsArnHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
