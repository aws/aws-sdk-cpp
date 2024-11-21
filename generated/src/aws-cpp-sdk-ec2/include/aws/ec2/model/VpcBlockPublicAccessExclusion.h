/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InternetGatewayExclusionMode.h>
#include <aws/ec2/model/VpcBlockPublicAccessExclusionState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>A VPC BPA exclusion is a mode that can be applied to a single VPC or subnet
   * that exempts it from the account’s BPA mode and will allow bidirectional or
   * egress-only access. You can create BPA exclusions for VPCs and subnets even when
   * BPA is not enabled on the account to ensure that there is no traffic disruption
   * to the exclusions when VPC BPA is turned on. To learn more about VPC BPA, see <a
   * href="https://docs.aws.amazon.com/vpc/latest/userguide/security-vpc-bpa.html">Block
   * public access to VPCs and subnets</a> in the <i>Amazon VPC User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcBlockPublicAccessExclusion">AWS
   * API Reference</a></p>
   */
  class VpcBlockPublicAccessExclusion
  {
  public:
    AWS_EC2_API VpcBlockPublicAccessExclusion();
    AWS_EC2_API VpcBlockPublicAccessExclusion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcBlockPublicAccessExclusion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the exclusion.</p>
     */
    inline const Aws::String& GetExclusionId() const{ return m_exclusionId; }
    inline bool ExclusionIdHasBeenSet() const { return m_exclusionIdHasBeenSet; }
    inline void SetExclusionId(const Aws::String& value) { m_exclusionIdHasBeenSet = true; m_exclusionId = value; }
    inline void SetExclusionId(Aws::String&& value) { m_exclusionIdHasBeenSet = true; m_exclusionId = std::move(value); }
    inline void SetExclusionId(const char* value) { m_exclusionIdHasBeenSet = true; m_exclusionId.assign(value); }
    inline VpcBlockPublicAccessExclusion& WithExclusionId(const Aws::String& value) { SetExclusionId(value); return *this;}
    inline VpcBlockPublicAccessExclusion& WithExclusionId(Aws::String&& value) { SetExclusionId(std::move(value)); return *this;}
    inline VpcBlockPublicAccessExclusion& WithExclusionId(const char* value) { SetExclusionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusion mode for internet gateway traffic.</p> <ul> <li> <p>
     * <code>allow-bidirectional</code>: Allow all internet traffic to and from the
     * excluded VPCs and subnets.</p> </li> <li> <p> <code>allow-egress</code>: Allow
     * outbound internet traffic from the excluded VPCs and subnets. Block inbound
     * internet traffic to the excluded VPCs and subnets. Only applies when VPC Block
     * Public Access is set to Bidirectional.</p> </li> </ul>
     */
    inline const InternetGatewayExclusionMode& GetInternetGatewayExclusionMode() const{ return m_internetGatewayExclusionMode; }
    inline bool InternetGatewayExclusionModeHasBeenSet() const { return m_internetGatewayExclusionModeHasBeenSet; }
    inline void SetInternetGatewayExclusionMode(const InternetGatewayExclusionMode& value) { m_internetGatewayExclusionModeHasBeenSet = true; m_internetGatewayExclusionMode = value; }
    inline void SetInternetGatewayExclusionMode(InternetGatewayExclusionMode&& value) { m_internetGatewayExclusionModeHasBeenSet = true; m_internetGatewayExclusionMode = std::move(value); }
    inline VpcBlockPublicAccessExclusion& WithInternetGatewayExclusionMode(const InternetGatewayExclusionMode& value) { SetInternetGatewayExclusionMode(value); return *this;}
    inline VpcBlockPublicAccessExclusion& WithInternetGatewayExclusionMode(InternetGatewayExclusionMode&& value) { SetInternetGatewayExclusionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the exclusion.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline VpcBlockPublicAccessExclusion& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline VpcBlockPublicAccessExclusion& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline VpcBlockPublicAccessExclusion& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the exclusion.</p>
     */
    inline const VpcBlockPublicAccessExclusionState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const VpcBlockPublicAccessExclusionState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(VpcBlockPublicAccessExclusionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline VpcBlockPublicAccessExclusion& WithState(const VpcBlockPublicAccessExclusionState& value) { SetState(value); return *this;}
    inline VpcBlockPublicAccessExclusion& WithState(VpcBlockPublicAccessExclusionState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current exclusion state.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline VpcBlockPublicAccessExclusion& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline VpcBlockPublicAccessExclusion& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline VpcBlockPublicAccessExclusion& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the exclusion was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }
    inline VpcBlockPublicAccessExclusion& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline VpcBlockPublicAccessExclusion& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the exclusion was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const{ return m_lastUpdateTimestamp; }
    inline bool LastUpdateTimestampHasBeenSet() const { return m_lastUpdateTimestampHasBeenSet; }
    inline void SetLastUpdateTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = value; }
    inline void SetLastUpdateTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = std::move(value); }
    inline VpcBlockPublicAccessExclusion& WithLastUpdateTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdateTimestamp(value); return *this;}
    inline VpcBlockPublicAccessExclusion& WithLastUpdateTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdateTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the exclusion was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionTimestamp() const{ return m_deletionTimestamp; }
    inline bool DeletionTimestampHasBeenSet() const { return m_deletionTimestampHasBeenSet; }
    inline void SetDeletionTimestamp(const Aws::Utils::DateTime& value) { m_deletionTimestampHasBeenSet = true; m_deletionTimestamp = value; }
    inline void SetDeletionTimestamp(Aws::Utils::DateTime&& value) { m_deletionTimestampHasBeenSet = true; m_deletionTimestamp = std::move(value); }
    inline VpcBlockPublicAccessExclusion& WithDeletionTimestamp(const Aws::Utils::DateTime& value) { SetDeletionTimestamp(value); return *this;}
    inline VpcBlockPublicAccessExclusion& WithDeletionTimestamp(Aws::Utils::DateTime&& value) { SetDeletionTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>tag</code> - The key/value combination of a tag assigned to the
     * resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline VpcBlockPublicAccessExclusion& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline VpcBlockPublicAccessExclusion& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline VpcBlockPublicAccessExclusion& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline VpcBlockPublicAccessExclusion& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_exclusionId;
    bool m_exclusionIdHasBeenSet = false;

    InternetGatewayExclusionMode m_internetGatewayExclusionMode;
    bool m_internetGatewayExclusionModeHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    VpcBlockPublicAccessExclusionState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTimestamp;
    bool m_lastUpdateTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_deletionTimestamp;
    bool m_deletionTimestampHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
