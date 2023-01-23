/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline const Aws::String& GetVerifiedAccessGroupId() const{ return m_verifiedAccessGroupId; }

    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline bool VerifiedAccessGroupIdHasBeenSet() const { return m_verifiedAccessGroupIdHasBeenSet; }

    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroupId(const Aws::String& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = value; }

    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroupId(Aws::String&& value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId = std::move(value); }

    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroupId(const char* value) { m_verifiedAccessGroupIdHasBeenSet = true; m_verifiedAccessGroupId.assign(value); }

    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline VerifiedAccessGroup& WithVerifiedAccessGroupId(const Aws::String& value) { SetVerifiedAccessGroupId(value); return *this;}

    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline VerifiedAccessGroup& WithVerifiedAccessGroupId(Aws::String&& value) { SetVerifiedAccessGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Verified Access group.</p>
     */
    inline VerifiedAccessGroup& WithVerifiedAccessGroupId(const char* value) { SetVerifiedAccessGroupId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline const Aws::String& GetVerifiedAccessInstanceId() const{ return m_verifiedAccessInstanceId; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline bool VerifiedAccessInstanceIdHasBeenSet() const { return m_verifiedAccessInstanceIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline void SetVerifiedAccessInstanceId(const Aws::String& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = value; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline void SetVerifiedAccessInstanceId(Aws::String&& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline void SetVerifiedAccessInstanceId(const char* value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline VerifiedAccessGroup& WithVerifiedAccessInstanceId(const Aws::String& value) { SetVerifiedAccessInstanceId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline VerifiedAccessGroup& WithVerifiedAccessInstanceId(Aws::String&& value) { SetVerifiedAccessInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline VerifiedAccessGroup& WithVerifiedAccessInstanceId(const char* value) { SetVerifiedAccessInstanceId(value); return *this;}


    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline VerifiedAccessGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline VerifiedAccessGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access group.</p>
     */
    inline VerifiedAccessGroup& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Web Services account number that owns the group.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The Amazon Web Services account number that owns the group.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The Amazon Web Services account number that owns the group.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The Amazon Web Services account number that owns the group.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The Amazon Web Services account number that owns the group.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The Amazon Web Services account number that owns the group.</p>
     */
    inline VerifiedAccessGroup& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services account number that owns the group.</p>
     */
    inline VerifiedAccessGroup& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account number that owns the group.</p>
     */
    inline VerifiedAccessGroup& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The ARN of the Verified Access group.</p>
     */
    inline const Aws::String& GetVerifiedAccessGroupArn() const{ return m_verifiedAccessGroupArn; }

    /**
     * <p>The ARN of the Verified Access group.</p>
     */
    inline bool VerifiedAccessGroupArnHasBeenSet() const { return m_verifiedAccessGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroupArn(const Aws::String& value) { m_verifiedAccessGroupArnHasBeenSet = true; m_verifiedAccessGroupArn = value; }

    /**
     * <p>The ARN of the Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroupArn(Aws::String&& value) { m_verifiedAccessGroupArnHasBeenSet = true; m_verifiedAccessGroupArn = std::move(value); }

    /**
     * <p>The ARN of the Verified Access group.</p>
     */
    inline void SetVerifiedAccessGroupArn(const char* value) { m_verifiedAccessGroupArnHasBeenSet = true; m_verifiedAccessGroupArn.assign(value); }

    /**
     * <p>The ARN of the Verified Access group.</p>
     */
    inline VerifiedAccessGroup& WithVerifiedAccessGroupArn(const Aws::String& value) { SetVerifiedAccessGroupArn(value); return *this;}

    /**
     * <p>The ARN of the Verified Access group.</p>
     */
    inline VerifiedAccessGroup& WithVerifiedAccessGroupArn(Aws::String&& value) { SetVerifiedAccessGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Verified Access group.</p>
     */
    inline VerifiedAccessGroup& WithVerifiedAccessGroupArn(const char* value) { SetVerifiedAccessGroupArn(value); return *this;}


    /**
     * <p>The creation time.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }

    /**
     * <p>The creation time.</p>
     */
    inline VerifiedAccessGroup& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline VerifiedAccessGroup& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline VerifiedAccessGroup& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>The last updated time.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The last updated time.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The last updated time.</p>
     */
    inline void SetLastUpdatedTime(const Aws::String& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The last updated time.</p>
     */
    inline void SetLastUpdatedTime(Aws::String&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The last updated time.</p>
     */
    inline void SetLastUpdatedTime(const char* value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime.assign(value); }

    /**
     * <p>The last updated time.</p>
     */
    inline VerifiedAccessGroup& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The last updated time.</p>
     */
    inline VerifiedAccessGroup& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

    /**
     * <p>The last updated time.</p>
     */
    inline VerifiedAccessGroup& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}


    /**
     * <p>The deletion time.</p>
     */
    inline const Aws::String& GetDeletionTime() const{ return m_deletionTime; }

    /**
     * <p>The deletion time.</p>
     */
    inline bool DeletionTimeHasBeenSet() const { return m_deletionTimeHasBeenSet; }

    /**
     * <p>The deletion time.</p>
     */
    inline void SetDeletionTime(const Aws::String& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = value; }

    /**
     * <p>The deletion time.</p>
     */
    inline void SetDeletionTime(Aws::String&& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = std::move(value); }

    /**
     * <p>The deletion time.</p>
     */
    inline void SetDeletionTime(const char* value) { m_deletionTimeHasBeenSet = true; m_deletionTime.assign(value); }

    /**
     * <p>The deletion time.</p>
     */
    inline VerifiedAccessGroup& WithDeletionTime(const Aws::String& value) { SetDeletionTime(value); return *this;}

    /**
     * <p>The deletion time.</p>
     */
    inline VerifiedAccessGroup& WithDeletionTime(Aws::String&& value) { SetDeletionTime(std::move(value)); return *this;}

    /**
     * <p>The deletion time.</p>
     */
    inline VerifiedAccessGroup& WithDeletionTime(const char* value) { SetDeletionTime(value); return *this;}


    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags.</p>
     */
    inline VerifiedAccessGroup& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline VerifiedAccessGroup& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline VerifiedAccessGroup& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline VerifiedAccessGroup& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
