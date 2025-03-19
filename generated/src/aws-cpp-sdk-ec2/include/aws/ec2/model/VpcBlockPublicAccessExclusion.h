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
    AWS_EC2_API VpcBlockPublicAccessExclusion() = default;
    AWS_EC2_API VpcBlockPublicAccessExclusion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcBlockPublicAccessExclusion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the exclusion.</p>
     */
    inline const Aws::String& GetExclusionId() const { return m_exclusionId; }
    inline bool ExclusionIdHasBeenSet() const { return m_exclusionIdHasBeenSet; }
    template<typename ExclusionIdT = Aws::String>
    void SetExclusionId(ExclusionIdT&& value) { m_exclusionIdHasBeenSet = true; m_exclusionId = std::forward<ExclusionIdT>(value); }
    template<typename ExclusionIdT = Aws::String>
    VpcBlockPublicAccessExclusion& WithExclusionId(ExclusionIdT&& value) { SetExclusionId(std::forward<ExclusionIdT>(value)); return *this;}
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
    inline InternetGatewayExclusionMode GetInternetGatewayExclusionMode() const { return m_internetGatewayExclusionMode; }
    inline bool InternetGatewayExclusionModeHasBeenSet() const { return m_internetGatewayExclusionModeHasBeenSet; }
    inline void SetInternetGatewayExclusionMode(InternetGatewayExclusionMode value) { m_internetGatewayExclusionModeHasBeenSet = true; m_internetGatewayExclusionMode = value; }
    inline VpcBlockPublicAccessExclusion& WithInternetGatewayExclusionMode(InternetGatewayExclusionMode value) { SetInternetGatewayExclusionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the exclusion.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    VpcBlockPublicAccessExclusion& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the exclusion.</p>
     */
    inline VpcBlockPublicAccessExclusionState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(VpcBlockPublicAccessExclusionState value) { m_stateHasBeenSet = true; m_state = value; }
    inline VpcBlockPublicAccessExclusion& WithState(VpcBlockPublicAccessExclusionState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current exclusion state.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    VpcBlockPublicAccessExclusion& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the exclusion was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    VpcBlockPublicAccessExclusion& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the exclusion was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const { return m_lastUpdateTimestamp; }
    inline bool LastUpdateTimestampHasBeenSet() const { return m_lastUpdateTimestampHasBeenSet; }
    template<typename LastUpdateTimestampT = Aws::Utils::DateTime>
    void SetLastUpdateTimestamp(LastUpdateTimestampT&& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = std::forward<LastUpdateTimestampT>(value); }
    template<typename LastUpdateTimestampT = Aws::Utils::DateTime>
    VpcBlockPublicAccessExclusion& WithLastUpdateTimestamp(LastUpdateTimestampT&& value) { SetLastUpdateTimestamp(std::forward<LastUpdateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the exclusion was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionTimestamp() const { return m_deletionTimestamp; }
    inline bool DeletionTimestampHasBeenSet() const { return m_deletionTimestampHasBeenSet; }
    template<typename DeletionTimestampT = Aws::Utils::DateTime>
    void SetDeletionTimestamp(DeletionTimestampT&& value) { m_deletionTimestampHasBeenSet = true; m_deletionTimestamp = std::forward<DeletionTimestampT>(value); }
    template<typename DeletionTimestampT = Aws::Utils::DateTime>
    VpcBlockPublicAccessExclusion& WithDeletionTimestamp(DeletionTimestampT&& value) { SetDeletionTimestamp(std::forward<DeletionTimestampT>(value)); return *this;}
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
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    VpcBlockPublicAccessExclusion& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    VpcBlockPublicAccessExclusion& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_exclusionId;
    bool m_exclusionIdHasBeenSet = false;

    InternetGatewayExclusionMode m_internetGatewayExclusionMode{InternetGatewayExclusionMode::NOT_SET};
    bool m_internetGatewayExclusionModeHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    VpcBlockPublicAccessExclusionState m_state{VpcBlockPublicAccessExclusionState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTimestamp{};
    bool m_lastUpdateTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_deletionTimestamp{};
    bool m_deletionTimestampHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
