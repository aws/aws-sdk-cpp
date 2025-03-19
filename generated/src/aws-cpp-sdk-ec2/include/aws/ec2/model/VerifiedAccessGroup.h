/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VerifiedAccessSseSpecificationResponse.h>
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
   * <p>Describes a Verified Access group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessGroup">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessGroup
  {
  public:
    AWS_EC2_API VerifiedAccessGroup() = default;
    AWS_EC2_API VerifiedAccessGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline const Aws::String& GetVerifiedAccessGroupId() const { return m_verifiedAccessGroupId; }
    inline bool VerifiedAccessGroupIdHasBeenSet() const { return m_verifiedAccessGroupIdHasBeenSet; }
    template<typename VerifiedAccessGroupIdT = Aws::String>
    void SetVerifiedAccessGroupId(VerifiedAccessGroupIdT&& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = std::forward<VerifiedAccessGroupIdT>(value); }
    template<typename VerifiedAccessGroupIdT = Aws::String>
    VerifiedAccessGroup& WithVerifiedAccessGroupId(VerifiedAccessGroupIdT&& value) { SetVerifiedAccessGroupId(std::forward<VerifiedAccessGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline const Aws::String& GetVerifiedAccessInstanceId() const { return m_verifiedAccessInstanceId; }
    inline bool VerifiedAccessInstanceIdHasBeenSet() const { return m_verifiedAccessInstanceIdHasBeenSet; }
    template<typename VerifiedAccessInstanceIdT = Aws::String>
    void SetVerifiedAccessInstanceId(VerifiedAccessInstanceIdT&& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = std::forward<VerifiedAccessInstanceIdT>(value); }
    template<typename VerifiedAccessInstanceIdT = Aws::String>
    VerifiedAccessGroup& WithVerifiedAccessInstanceId(VerifiedAccessInstanceIdT&& value) { SetVerifiedAccessInstanceId(std::forward<VerifiedAccessInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    VerifiedAccessGroup& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account number that owns the group.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    VerifiedAccessGroup& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Verified Access group.</p>
     */
    inline const Aws::String& GetVerifiedAccessGroupArn() const { return m_verifiedAccessGroupArn; }
    inline bool VerifiedAccessGroupArnHasBeenSet() const { return m_verifiedAccessGroupArnHasBeenSet; }
    template<typename VerifiedAccessGroupArnT = Aws::String>
    void SetVerifiedAccessGroupArn(VerifiedAccessGroupArnT&& value) { m_verifiedAccessGroupArnHasBeenSet = true; m_verifiedAccessGroupArn = std::forward<VerifiedAccessGroupArnT>(value); }
    template<typename VerifiedAccessGroupArnT = Aws::String>
    VerifiedAccessGroup& WithVerifiedAccessGroupArn(VerifiedAccessGroupArnT&& value) { SetVerifiedAccessGroupArn(std::forward<VerifiedAccessGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::String& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::String>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::String>
    VerifiedAccessGroup& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last updated time.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::String>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::String>
    VerifiedAccessGroup& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deletion time.</p>
     */
    inline const Aws::String& GetDeletionTime() const { return m_deletionTime; }
    inline bool DeletionTimeHasBeenSet() const { return m_deletionTimeHasBeenSet; }
    template<typename DeletionTimeT = Aws::String>
    void SetDeletionTime(DeletionTimeT&& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = std::forward<DeletionTimeT>(value); }
    template<typename DeletionTimeT = Aws::String>
    VerifiedAccessGroup& WithDeletionTime(DeletionTimeT&& value) { SetDeletionTime(std::forward<DeletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    VerifiedAccessGroup& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    VerifiedAccessGroup& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The options in use for server side encryption.</p>
     */
    inline const VerifiedAccessSseSpecificationResponse& GetSseSpecification() const { return m_sseSpecification; }
    inline bool SseSpecificationHasBeenSet() const { return m_sseSpecificationHasBeenSet; }
    template<typename SseSpecificationT = VerifiedAccessSseSpecificationResponse>
    void SetSseSpecification(SseSpecificationT&& value) { m_sseSpecificationHasBeenSet = true; m_sseSpecification = std::forward<SseSpecificationT>(value); }
    template<typename SseSpecificationT = VerifiedAccessSseSpecificationResponse>
    VerifiedAccessGroup& WithSseSpecification(SseSpecificationT&& value) { SetSseSpecification(std::forward<SseSpecificationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_verifiedAccessGroupId;
    bool m_verifiedAccessGroupIdHasBeenSet = false;

    Aws::String m_verifiedAccessInstanceId;
    bool m_verifiedAccessInstanceIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_verifiedAccessGroupArn;
    bool m_verifiedAccessGroupArnHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_deletionTime;
    bool m_deletionTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    VerifiedAccessSseSpecificationResponse m_sseSpecification;
    bool m_sseSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
