/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VerifiedAccessTrustProviderCondensed.h>
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
   * <p>Describes a Verified Access instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessInstance">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessInstance
  {
  public:
    AWS_EC2_API VerifiedAccessInstance();
    AWS_EC2_API VerifiedAccessInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline VerifiedAccessInstance& WithVerifiedAccessInstanceId(const Aws::String& value) { SetVerifiedAccessInstanceId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline VerifiedAccessInstance& WithVerifiedAccessInstanceId(Aws::String&& value) { SetVerifiedAccessInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline VerifiedAccessInstance& WithVerifiedAccessInstanceId(const char* value) { SetVerifiedAccessInstanceId(value); return *this;}


    /**
     * <p>A description for the Amazon Web Services Verified Access instance.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the Amazon Web Services Verified Access instance.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the Amazon Web Services Verified Access instance.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the Amazon Web Services Verified Access instance.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the Amazon Web Services Verified Access instance.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the Amazon Web Services Verified Access instance.</p>
     */
    inline VerifiedAccessInstance& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access instance.</p>
     */
    inline VerifiedAccessInstance& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access instance.</p>
     */
    inline VerifiedAccessInstance& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The IDs of the Amazon Web Services Verified Access trust providers.</p>
     */
    inline const Aws::Vector<VerifiedAccessTrustProviderCondensed>& GetVerifiedAccessTrustProviders() const{ return m_verifiedAccessTrustProviders; }

    /**
     * <p>The IDs of the Amazon Web Services Verified Access trust providers.</p>
     */
    inline bool VerifiedAccessTrustProvidersHasBeenSet() const { return m_verifiedAccessTrustProvidersHasBeenSet; }

    /**
     * <p>The IDs of the Amazon Web Services Verified Access trust providers.</p>
     */
    inline void SetVerifiedAccessTrustProviders(const Aws::Vector<VerifiedAccessTrustProviderCondensed>& value) { m_verifiedAccessTrustProvidersHasBeenSet = true; m_verifiedAccessTrustProviders = value; }

    /**
     * <p>The IDs of the Amazon Web Services Verified Access trust providers.</p>
     */
    inline void SetVerifiedAccessTrustProviders(Aws::Vector<VerifiedAccessTrustProviderCondensed>&& value) { m_verifiedAccessTrustProvidersHasBeenSet = true; m_verifiedAccessTrustProviders = std::move(value); }

    /**
     * <p>The IDs of the Amazon Web Services Verified Access trust providers.</p>
     */
    inline VerifiedAccessInstance& WithVerifiedAccessTrustProviders(const Aws::Vector<VerifiedAccessTrustProviderCondensed>& value) { SetVerifiedAccessTrustProviders(value); return *this;}

    /**
     * <p>The IDs of the Amazon Web Services Verified Access trust providers.</p>
     */
    inline VerifiedAccessInstance& WithVerifiedAccessTrustProviders(Aws::Vector<VerifiedAccessTrustProviderCondensed>&& value) { SetVerifiedAccessTrustProviders(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Amazon Web Services Verified Access trust providers.</p>
     */
    inline VerifiedAccessInstance& AddVerifiedAccessTrustProviders(const VerifiedAccessTrustProviderCondensed& value) { m_verifiedAccessTrustProvidersHasBeenSet = true; m_verifiedAccessTrustProviders.push_back(value); return *this; }

    /**
     * <p>The IDs of the Amazon Web Services Verified Access trust providers.</p>
     */
    inline VerifiedAccessInstance& AddVerifiedAccessTrustProviders(VerifiedAccessTrustProviderCondensed&& value) { m_verifiedAccessTrustProvidersHasBeenSet = true; m_verifiedAccessTrustProviders.push_back(std::move(value)); return *this; }


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
    inline VerifiedAccessInstance& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline VerifiedAccessInstance& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline VerifiedAccessInstance& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


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
    inline VerifiedAccessInstance& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The last updated time.</p>
     */
    inline VerifiedAccessInstance& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

    /**
     * <p>The last updated time.</p>
     */
    inline VerifiedAccessInstance& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}


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
    inline VerifiedAccessInstance& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline VerifiedAccessInstance& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline VerifiedAccessInstance& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline VerifiedAccessInstance& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_verifiedAccessInstanceId;
    bool m_verifiedAccessInstanceIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<VerifiedAccessTrustProviderCondensed> m_verifiedAccessTrustProviders;
    bool m_verifiedAccessTrustProvidersHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
