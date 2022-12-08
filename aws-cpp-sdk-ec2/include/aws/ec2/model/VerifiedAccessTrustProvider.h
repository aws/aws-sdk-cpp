/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TrustProviderType.h>
#include <aws/ec2/model/UserTrustProviderType.h>
#include <aws/ec2/model/DeviceTrustProviderType.h>
#include <aws/ec2/model/OidcOptions.h>
#include <aws/ec2/model/DeviceOptions.h>
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
   * <p>Describes a Verified Access trust provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessTrustProvider">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessTrustProvider
  {
  public:
    AWS_EC2_API VerifiedAccessTrustProvider();
    AWS_EC2_API VerifiedAccessTrustProvider(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessTrustProvider& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline const Aws::String& GetVerifiedAccessTrustProviderId() const{ return m_verifiedAccessTrustProviderId; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline bool VerifiedAccessTrustProviderIdHasBeenSet() const { return m_verifiedAccessTrustProviderIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline void SetVerifiedAccessTrustProviderId(const Aws::String& value) { m_verifiedAccessTrustProviderIdHasBeenSet = true; m_verifiedAccessTrustProviderId = value; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline void SetVerifiedAccessTrustProviderId(Aws::String&& value) { m_verifiedAccessTrustProviderIdHasBeenSet = true; m_verifiedAccessTrustProviderId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline void SetVerifiedAccessTrustProviderId(const char* value) { m_verifiedAccessTrustProviderIdHasBeenSet = true; m_verifiedAccessTrustProviderId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline VerifiedAccessTrustProvider& WithVerifiedAccessTrustProviderId(const Aws::String& value) { SetVerifiedAccessTrustProviderId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline VerifiedAccessTrustProvider& WithVerifiedAccessTrustProviderId(Aws::String&& value) { SetVerifiedAccessTrustProviderId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline VerifiedAccessTrustProvider& WithVerifiedAccessTrustProviderId(const char* value) { SetVerifiedAccessTrustProviderId(value); return *this;}


    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline VerifiedAccessTrustProvider& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline VerifiedAccessTrustProvider& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline VerifiedAccessTrustProvider& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of Verified Access trust provider.</p>
     */
    inline const TrustProviderType& GetTrustProviderType() const{ return m_trustProviderType; }

    /**
     * <p>The type of Verified Access trust provider.</p>
     */
    inline bool TrustProviderTypeHasBeenSet() const { return m_trustProviderTypeHasBeenSet; }

    /**
     * <p>The type of Verified Access trust provider.</p>
     */
    inline void SetTrustProviderType(const TrustProviderType& value) { m_trustProviderTypeHasBeenSet = true; m_trustProviderType = value; }

    /**
     * <p>The type of Verified Access trust provider.</p>
     */
    inline void SetTrustProviderType(TrustProviderType&& value) { m_trustProviderTypeHasBeenSet = true; m_trustProviderType = std::move(value); }

    /**
     * <p>The type of Verified Access trust provider.</p>
     */
    inline VerifiedAccessTrustProvider& WithTrustProviderType(const TrustProviderType& value) { SetTrustProviderType(value); return *this;}

    /**
     * <p>The type of Verified Access trust provider.</p>
     */
    inline VerifiedAccessTrustProvider& WithTrustProviderType(TrustProviderType&& value) { SetTrustProviderType(std::move(value)); return *this;}


    /**
     * <p>The type of user-based trust provider.</p>
     */
    inline const UserTrustProviderType& GetUserTrustProviderType() const{ return m_userTrustProviderType; }

    /**
     * <p>The type of user-based trust provider.</p>
     */
    inline bool UserTrustProviderTypeHasBeenSet() const { return m_userTrustProviderTypeHasBeenSet; }

    /**
     * <p>The type of user-based trust provider.</p>
     */
    inline void SetUserTrustProviderType(const UserTrustProviderType& value) { m_userTrustProviderTypeHasBeenSet = true; m_userTrustProviderType = value; }

    /**
     * <p>The type of user-based trust provider.</p>
     */
    inline void SetUserTrustProviderType(UserTrustProviderType&& value) { m_userTrustProviderTypeHasBeenSet = true; m_userTrustProviderType = std::move(value); }

    /**
     * <p>The type of user-based trust provider.</p>
     */
    inline VerifiedAccessTrustProvider& WithUserTrustProviderType(const UserTrustProviderType& value) { SetUserTrustProviderType(value); return *this;}

    /**
     * <p>The type of user-based trust provider.</p>
     */
    inline VerifiedAccessTrustProvider& WithUserTrustProviderType(UserTrustProviderType&& value) { SetUserTrustProviderType(std::move(value)); return *this;}


    /**
     * <p>The type of device-based trust provider.</p>
     */
    inline const DeviceTrustProviderType& GetDeviceTrustProviderType() const{ return m_deviceTrustProviderType; }

    /**
     * <p>The type of device-based trust provider.</p>
     */
    inline bool DeviceTrustProviderTypeHasBeenSet() const { return m_deviceTrustProviderTypeHasBeenSet; }

    /**
     * <p>The type of device-based trust provider.</p>
     */
    inline void SetDeviceTrustProviderType(const DeviceTrustProviderType& value) { m_deviceTrustProviderTypeHasBeenSet = true; m_deviceTrustProviderType = value; }

    /**
     * <p>The type of device-based trust provider.</p>
     */
    inline void SetDeviceTrustProviderType(DeviceTrustProviderType&& value) { m_deviceTrustProviderTypeHasBeenSet = true; m_deviceTrustProviderType = std::move(value); }

    /**
     * <p>The type of device-based trust provider.</p>
     */
    inline VerifiedAccessTrustProvider& WithDeviceTrustProviderType(const DeviceTrustProviderType& value) { SetDeviceTrustProviderType(value); return *this;}

    /**
     * <p>The type of device-based trust provider.</p>
     */
    inline VerifiedAccessTrustProvider& WithDeviceTrustProviderType(DeviceTrustProviderType&& value) { SetDeviceTrustProviderType(std::move(value)); return *this;}


    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline const OidcOptions& GetOidcOptions() const{ return m_oidcOptions; }

    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline bool OidcOptionsHasBeenSet() const { return m_oidcOptionsHasBeenSet; }

    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline void SetOidcOptions(const OidcOptions& value) { m_oidcOptionsHasBeenSet = true; m_oidcOptions = value; }

    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline void SetOidcOptions(OidcOptions&& value) { m_oidcOptionsHasBeenSet = true; m_oidcOptions = std::move(value); }

    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline VerifiedAccessTrustProvider& WithOidcOptions(const OidcOptions& value) { SetOidcOptions(value); return *this;}

    /**
     * <p>The OpenID Connect details for an <code>oidc</code>-type, user-identity based
     * trust provider.</p>
     */
    inline VerifiedAccessTrustProvider& WithOidcOptions(OidcOptions&& value) { SetOidcOptions(std::move(value)); return *this;}


    /**
     * <p>The options for device-identity type trust provider.</p>
     */
    inline const DeviceOptions& GetDeviceOptions() const{ return m_deviceOptions; }

    /**
     * <p>The options for device-identity type trust provider.</p>
     */
    inline bool DeviceOptionsHasBeenSet() const { return m_deviceOptionsHasBeenSet; }

    /**
     * <p>The options for device-identity type trust provider.</p>
     */
    inline void SetDeviceOptions(const DeviceOptions& value) { m_deviceOptionsHasBeenSet = true; m_deviceOptions = value; }

    /**
     * <p>The options for device-identity type trust provider.</p>
     */
    inline void SetDeviceOptions(DeviceOptions&& value) { m_deviceOptionsHasBeenSet = true; m_deviceOptions = std::move(value); }

    /**
     * <p>The options for device-identity type trust provider.</p>
     */
    inline VerifiedAccessTrustProvider& WithDeviceOptions(const DeviceOptions& value) { SetDeviceOptions(value); return *this;}

    /**
     * <p>The options for device-identity type trust provider.</p>
     */
    inline VerifiedAccessTrustProvider& WithDeviceOptions(DeviceOptions&& value) { SetDeviceOptions(std::move(value)); return *this;}


    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline const Aws::String& GetPolicyReferenceName() const{ return m_policyReferenceName; }

    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline bool PolicyReferenceNameHasBeenSet() const { return m_policyReferenceNameHasBeenSet; }

    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline void SetPolicyReferenceName(const Aws::String& value) { m_policyReferenceNameHasBeenSet = true; m_policyReferenceName = value; }

    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline void SetPolicyReferenceName(Aws::String&& value) { m_policyReferenceNameHasBeenSet = true; m_policyReferenceName = std::move(value); }

    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline void SetPolicyReferenceName(const char* value) { m_policyReferenceNameHasBeenSet = true; m_policyReferenceName.assign(value); }

    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline VerifiedAccessTrustProvider& WithPolicyReferenceName(const Aws::String& value) { SetPolicyReferenceName(value); return *this;}

    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline VerifiedAccessTrustProvider& WithPolicyReferenceName(Aws::String&& value) { SetPolicyReferenceName(std::move(value)); return *this;}

    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline VerifiedAccessTrustProvider& WithPolicyReferenceName(const char* value) { SetPolicyReferenceName(value); return *this;}


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
    inline VerifiedAccessTrustProvider& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline VerifiedAccessTrustProvider& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline VerifiedAccessTrustProvider& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


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
    inline VerifiedAccessTrustProvider& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The last updated time.</p>
     */
    inline VerifiedAccessTrustProvider& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

    /**
     * <p>The last updated time.</p>
     */
    inline VerifiedAccessTrustProvider& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}


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
    inline VerifiedAccessTrustProvider& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline VerifiedAccessTrustProvider& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline VerifiedAccessTrustProvider& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline VerifiedAccessTrustProvider& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_verifiedAccessTrustProviderId;
    bool m_verifiedAccessTrustProviderIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TrustProviderType m_trustProviderType;
    bool m_trustProviderTypeHasBeenSet = false;

    UserTrustProviderType m_userTrustProviderType;
    bool m_userTrustProviderTypeHasBeenSet = false;

    DeviceTrustProviderType m_deviceTrustProviderType;
    bool m_deviceTrustProviderTypeHasBeenSet = false;

    OidcOptions m_oidcOptions;
    bool m_oidcOptionsHasBeenSet = false;

    DeviceOptions m_deviceOptions;
    bool m_deviceOptionsHasBeenSet = false;

    Aws::String m_policyReferenceName;
    bool m_policyReferenceNameHasBeenSet = false;

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
