/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsEc2NetworkInterfaceAttachment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEc2NetworkInterfaceSecurityGroup.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about the network interface</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2NetworkInterfaceDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsEc2NetworkInterfaceDetails
  {
  public:
    AwsEc2NetworkInterfaceDetails();
    AwsEc2NetworkInterfaceDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsEc2NetworkInterfaceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The network interface attachment.</p>
     */
    inline const AwsEc2NetworkInterfaceAttachment& GetAttachment() const{ return m_attachment; }

    /**
     * <p>The network interface attachment.</p>
     */
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }

    /**
     * <p>The network interface attachment.</p>
     */
    inline void SetAttachment(const AwsEc2NetworkInterfaceAttachment& value) { m_attachmentHasBeenSet = true; m_attachment = value; }

    /**
     * <p>The network interface attachment.</p>
     */
    inline void SetAttachment(AwsEc2NetworkInterfaceAttachment&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }

    /**
     * <p>The network interface attachment.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithAttachment(const AwsEc2NetworkInterfaceAttachment& value) { SetAttachment(value); return *this;}

    /**
     * <p>The network interface attachment.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithAttachment(AwsEc2NetworkInterfaceAttachment&& value) { SetAttachment(std::move(value)); return *this;}


    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>Security groups for the network interface.</p>
     */
    inline const Aws::Vector<AwsEc2NetworkInterfaceSecurityGroup>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>Security groups for the network interface.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>Security groups for the network interface.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<AwsEc2NetworkInterfaceSecurityGroup>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>Security groups for the network interface.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<AwsEc2NetworkInterfaceSecurityGroup>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>Security groups for the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithSecurityGroups(const Aws::Vector<AwsEc2NetworkInterfaceSecurityGroup>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>Security groups for the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithSecurityGroups(Aws::Vector<AwsEc2NetworkInterfaceSecurityGroup>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>Security groups for the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& AddSecurityGroups(const AwsEc2NetworkInterfaceSecurityGroup& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>Security groups for the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& AddSecurityGroups(AwsEc2NetworkInterfaceSecurityGroup&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether traffic to or from the instance is validated.</p>
     */
    inline bool GetSourceDestCheck() const{ return m_sourceDestCheck; }

    /**
     * <p>Indicates whether traffic to or from the instance is validated.</p>
     */
    inline bool SourceDestCheckHasBeenSet() const { return m_sourceDestCheckHasBeenSet; }

    /**
     * <p>Indicates whether traffic to or from the instance is validated.</p>
     */
    inline void SetSourceDestCheck(bool value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }

    /**
     * <p>Indicates whether traffic to or from the instance is validated.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithSourceDestCheck(bool value) { SetSourceDestCheck(value); return *this;}

  private:

    AwsEc2NetworkInterfaceAttachment m_attachment;
    bool m_attachmentHasBeenSet;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;

    Aws::Vector<AwsEc2NetworkInterfaceSecurityGroup> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    bool m_sourceDestCheck;
    bool m_sourceDestCheckHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
