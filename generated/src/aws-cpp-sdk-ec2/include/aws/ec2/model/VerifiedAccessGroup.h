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
    AWS_EC2_API VerifiedAccessGroup();
    AWS_EC2_API VerifiedAccessGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline const Aws::String& GetVerifiedAccessGroupId() const{ return m_verifiedAccessGroupId; }
    inline bool VerifiedAccessGroupIdHasBeenSet() const { return m_verifiedAccessGroupIdHasBeenSet; }
    inline void SetVerifiedAccessGroupId(const Aws::String& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = value; }
    inline void SetVerifiedAccessGroupId(Aws::String&& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = std::move(value); }
    inline void SetVerifiedAccessGroupId(const char* value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId.assign(value); }
    inline VerifiedAccessGroup& WithVerifiedAccessGroupId(const Aws::String& value) { SetVerifiedAccessGroupId(value); return *this;}
    inline VerifiedAccessGroup& WithVerifiedAccessGroupId(Aws::String&& value) { SetVerifiedAccessGroupId(std::move(value)); return *this;}
    inline VerifiedAccessGroup& WithVerifiedAccessGroupId(const char* value) { SetVerifiedAccessGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline const Aws::String& GetVerifiedAccessInstanceId() const{ return m_verifiedAccessInstanceId; }
    inline bool VerifiedAccessInstanceIdHasBeenSet() const { return m_verifiedAccessInstanceIdHasBeenSet; }
    inline void SetVerifiedAccessInstanceId(const Aws::String& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = value; }
    inline void SetVerifiedAccessInstanceId(Aws::String&& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = std::move(value); }
    inline void SetVerifiedAccessInstanceId(const char* value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId.assign(value); }
    inline VerifiedAccessGroup& WithVerifiedAccessInstanceId(const Aws::String& value) { SetVerifiedAccessInstanceId(value); return *this;}
    inline VerifiedAccessGroup& WithVerifiedAccessInstanceId(Aws::String&& value) { SetVerifiedAccessInstanceId(std::move(value)); return *this;}
    inline VerifiedAccessGroup& WithVerifiedAccessInstanceId(const char* value) { SetVerifiedAccessInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline VerifiedAccessGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline VerifiedAccessGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline VerifiedAccessGroup& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account number that owns the group.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline VerifiedAccessGroup& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline VerifiedAccessGroup& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline VerifiedAccessGroup& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Verified Access group.</p>
     */
    inline const Aws::String& GetVerifiedAccessGroupArn() const{ return m_verifiedAccessGroupArn; }
    inline bool VerifiedAccessGroupArnHasBeenSet() const { return m_verifiedAccessGroupArnHasBeenSet; }
    inline void SetVerifiedAccessGroupArn(const Aws::String& value) { m_verifiedAccessGroupArnHasBeenSet = true; m_verifiedAccessGroupArn = value; }
    inline void SetVerifiedAccessGroupArn(Aws::String&& value) { m_verifiedAccessGroupArnHasBeenSet = true; m_verifiedAccessGroupArn = std::move(value); }
    inline void SetVerifiedAccessGroupArn(const char* value) { m_verifiedAccessGroupArnHasBeenSet = true; m_verifiedAccessGroupArn.assign(value); }
    inline VerifiedAccessGroup& WithVerifiedAccessGroupArn(const Aws::String& value) { SetVerifiedAccessGroupArn(value); return *this;}
    inline VerifiedAccessGroup& WithVerifiedAccessGroupArn(Aws::String&& value) { SetVerifiedAccessGroupArn(std::move(value)); return *this;}
    inline VerifiedAccessGroup& WithVerifiedAccessGroupArn(const char* value) { SetVerifiedAccessGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }
    inline VerifiedAccessGroup& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}
    inline VerifiedAccessGroup& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}
    inline VerifiedAccessGroup& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last updated time.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::String& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::String&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline void SetLastUpdatedTime(const char* value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime.assign(value); }
    inline VerifiedAccessGroup& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}
    inline VerifiedAccessGroup& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    inline VerifiedAccessGroup& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deletion time.</p>
     */
    inline const Aws::String& GetDeletionTime() const{ return m_deletionTime; }
    inline bool DeletionTimeHasBeenSet() const { return m_deletionTimeHasBeenSet; }
    inline void SetDeletionTime(const Aws::String& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = value; }
    inline void SetDeletionTime(Aws::String&& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = std::move(value); }
    inline void SetDeletionTime(const char* value) { m_deletionTimeHasBeenSet = true; m_deletionTime.assign(value); }
    inline VerifiedAccessGroup& WithDeletionTime(const Aws::String& value) { SetDeletionTime(value); return *this;}
    inline VerifiedAccessGroup& WithDeletionTime(Aws::String&& value) { SetDeletionTime(std::move(value)); return *this;}
    inline VerifiedAccessGroup& WithDeletionTime(const char* value) { SetDeletionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline VerifiedAccessGroup& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline VerifiedAccessGroup& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline VerifiedAccessGroup& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline VerifiedAccessGroup& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The options in use for server side encryption.</p>
     */
    inline const VerifiedAccessSseSpecificationResponse& GetSseSpecification() const{ return m_sseSpecification; }
    inline bool SseSpecificationHasBeenSet() const { return m_sseSpecificationHasBeenSet; }
    inline void SetSseSpecification(const VerifiedAccessSseSpecificationResponse& value) { m_sseSpecificationHasBeenSet = true; m_sseSpecification = value; }
    inline void SetSseSpecification(VerifiedAccessSseSpecificationResponse&& value) { m_sseSpecificationHasBeenSet = true; m_sseSpecification = std::move(value); }
    inline VerifiedAccessGroup& WithSseSpecification(const VerifiedAccessSseSpecificationResponse& value) { SetSseSpecification(value); return *this;}
    inline VerifiedAccessGroup& WithSseSpecification(VerifiedAccessSseSpecificationResponse&& value) { SetSseSpecification(std::move(value)); return *this;}
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
