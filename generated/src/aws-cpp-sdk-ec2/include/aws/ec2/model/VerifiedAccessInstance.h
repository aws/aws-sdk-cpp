/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VerifiedAccessInstanceCustomSubDomain.h>
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
    AWS_EC2_API VerifiedAccessInstance() = default;
    AWS_EC2_API VerifiedAccessInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services Verified Access instance.</p>
     */
    inline const Aws::String& GetVerifiedAccessInstanceId() const { return m_verifiedAccessInstanceId; }
    inline bool VerifiedAccessInstanceIdHasBeenSet() const { return m_verifiedAccessInstanceIdHasBeenSet; }
    template<typename VerifiedAccessInstanceIdT = Aws::String>
    void SetVerifiedAccessInstanceId(VerifiedAccessInstanceIdT&& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = std::forward<VerifiedAccessInstanceIdT>(value); }
    template<typename VerifiedAccessInstanceIdT = Aws::String>
    VerifiedAccessInstance& WithVerifiedAccessInstanceId(VerifiedAccessInstanceIdT&& value) { SetVerifiedAccessInstanceId(std::forward<VerifiedAccessInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Amazon Web Services Verified Access instance.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    VerifiedAccessInstance& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the Amazon Web Services Verified Access trust providers.</p>
     */
    inline const Aws::Vector<VerifiedAccessTrustProviderCondensed>& GetVerifiedAccessTrustProviders() const { return m_verifiedAccessTrustProviders; }
    inline bool VerifiedAccessTrustProvidersHasBeenSet() const { return m_verifiedAccessTrustProvidersHasBeenSet; }
    template<typename VerifiedAccessTrustProvidersT = Aws::Vector<VerifiedAccessTrustProviderCondensed>>
    void SetVerifiedAccessTrustProviders(VerifiedAccessTrustProvidersT&& value) { m_verifiedAccessTrustProvidersHasBeenSet = true; m_verifiedAccessTrustProviders = std::forward<VerifiedAccessTrustProvidersT>(value); }
    template<typename VerifiedAccessTrustProvidersT = Aws::Vector<VerifiedAccessTrustProviderCondensed>>
    VerifiedAccessInstance& WithVerifiedAccessTrustProviders(VerifiedAccessTrustProvidersT&& value) { SetVerifiedAccessTrustProviders(std::forward<VerifiedAccessTrustProvidersT>(value)); return *this;}
    template<typename VerifiedAccessTrustProvidersT = VerifiedAccessTrustProviderCondensed>
    VerifiedAccessInstance& AddVerifiedAccessTrustProviders(VerifiedAccessTrustProvidersT&& value) { m_verifiedAccessTrustProvidersHasBeenSet = true; m_verifiedAccessTrustProviders.emplace_back(std::forward<VerifiedAccessTrustProvidersT>(value)); return *this; }
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
    VerifiedAccessInstance& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    VerifiedAccessInstance& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
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
    VerifiedAccessInstance& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    VerifiedAccessInstance& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether support for Federal Information Processing Standards (FIPS)
     * is enabled on the instance.</p>
     */
    inline bool GetFipsEnabled() const { return m_fipsEnabled; }
    inline bool FipsEnabledHasBeenSet() const { return m_fipsEnabledHasBeenSet; }
    inline void SetFipsEnabled(bool value) { m_fipsEnabledHasBeenSet = true; m_fipsEnabled = value; }
    inline VerifiedAccessInstance& WithFipsEnabled(bool value) { SetFipsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom subdomain.</p>
     */
    inline const VerifiedAccessInstanceCustomSubDomain& GetCidrEndpointsCustomSubDomain() const { return m_cidrEndpointsCustomSubDomain; }
    inline bool CidrEndpointsCustomSubDomainHasBeenSet() const { return m_cidrEndpointsCustomSubDomainHasBeenSet; }
    template<typename CidrEndpointsCustomSubDomainT = VerifiedAccessInstanceCustomSubDomain>
    void SetCidrEndpointsCustomSubDomain(CidrEndpointsCustomSubDomainT&& value) { m_cidrEndpointsCustomSubDomainHasBeenSet = true; m_cidrEndpointsCustomSubDomain = std::forward<CidrEndpointsCustomSubDomainT>(value); }
    template<typename CidrEndpointsCustomSubDomainT = VerifiedAccessInstanceCustomSubDomain>
    VerifiedAccessInstance& WithCidrEndpointsCustomSubDomain(CidrEndpointsCustomSubDomainT&& value) { SetCidrEndpointsCustomSubDomain(std::forward<CidrEndpointsCustomSubDomainT>(value)); return *this;}
    ///@}
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

    bool m_fipsEnabled{false};
    bool m_fipsEnabledHasBeenSet = false;

    VerifiedAccessInstanceCustomSubDomain m_cidrEndpointsCustomSubDomain;
    bool m_cidrEndpointsCustomSubDomainHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
