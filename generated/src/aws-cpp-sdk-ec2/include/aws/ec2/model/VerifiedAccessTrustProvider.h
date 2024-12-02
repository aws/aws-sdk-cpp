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
#include <aws/ec2/model/VerifiedAccessSseSpecificationResponse.h>
#include <aws/ec2/model/NativeApplicationOidcOptions.h>
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


    ///@{
    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline const Aws::String& GetVerifiedAccessTrustProviderId() const{ return m_verifiedAccessTrustProviderId; }
    inline bool VerifiedAccessTrustProviderIdHasBeenSet() const { return m_verifiedAccessTrustProviderIdHasBeenSet; }
    inline void SetVerifiedAccessTrustProviderId(const Aws::String& value) { m_verifiedAccessTrustProviderIdHasBeenSet = true; m_verifiedAccessTrustProviderId = value; }
    inline void SetVerifiedAccessTrustProviderId(Aws::String&& value) { m_verifiedAccessTrustProviderIdHasBeenSet = true; m_verifiedAccessTrustProviderId = std::move(value); }
    inline void SetVerifiedAccessTrustProviderId(const char* value) { m_verifiedAccessTrustProviderIdHasBeenSet = true; m_verifiedAccessTrustProviderId.assign(value); }
    inline VerifiedAccessTrustProvider& WithVerifiedAccessTrustProviderId(const Aws::String& value) { SetVerifiedAccessTrustProviderId(value); return *this;}
    inline VerifiedAccessTrustProvider& WithVerifiedAccessTrustProviderId(Aws::String&& value) { SetVerifiedAccessTrustProviderId(std::move(value)); return *this;}
    inline VerifiedAccessTrustProvider& WithVerifiedAccessTrustProviderId(const char* value) { SetVerifiedAccessTrustProviderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline VerifiedAccessTrustProvider& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline VerifiedAccessTrustProvider& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline VerifiedAccessTrustProvider& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Verified Access trust provider.</p>
     */
    inline const TrustProviderType& GetTrustProviderType() const{ return m_trustProviderType; }
    inline bool TrustProviderTypeHasBeenSet() const { return m_trustProviderTypeHasBeenSet; }
    inline void SetTrustProviderType(const TrustProviderType& value) { m_trustProviderTypeHasBeenSet = true; m_trustProviderType = value; }
    inline void SetTrustProviderType(TrustProviderType&& value) { m_trustProviderTypeHasBeenSet = true; m_trustProviderType = std::move(value); }
    inline VerifiedAccessTrustProvider& WithTrustProviderType(const TrustProviderType& value) { SetTrustProviderType(value); return *this;}
    inline VerifiedAccessTrustProvider& WithTrustProviderType(TrustProviderType&& value) { SetTrustProviderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of user-based trust provider.</p>
     */
    inline const UserTrustProviderType& GetUserTrustProviderType() const{ return m_userTrustProviderType; }
    inline bool UserTrustProviderTypeHasBeenSet() const { return m_userTrustProviderTypeHasBeenSet; }
    inline void SetUserTrustProviderType(const UserTrustProviderType& value) { m_userTrustProviderTypeHasBeenSet = true; m_userTrustProviderType = value; }
    inline void SetUserTrustProviderType(UserTrustProviderType&& value) { m_userTrustProviderTypeHasBeenSet = true; m_userTrustProviderType = std::move(value); }
    inline VerifiedAccessTrustProvider& WithUserTrustProviderType(const UserTrustProviderType& value) { SetUserTrustProviderType(value); return *this;}
    inline VerifiedAccessTrustProvider& WithUserTrustProviderType(UserTrustProviderType&& value) { SetUserTrustProviderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of device-based trust provider.</p>
     */
    inline const DeviceTrustProviderType& GetDeviceTrustProviderType() const{ return m_deviceTrustProviderType; }
    inline bool DeviceTrustProviderTypeHasBeenSet() const { return m_deviceTrustProviderTypeHasBeenSet; }
    inline void SetDeviceTrustProviderType(const DeviceTrustProviderType& value) { m_deviceTrustProviderTypeHasBeenSet = true; m_deviceTrustProviderType = value; }
    inline void SetDeviceTrustProviderType(DeviceTrustProviderType&& value) { m_deviceTrustProviderTypeHasBeenSet = true; m_deviceTrustProviderType = std::move(value); }
    inline VerifiedAccessTrustProvider& WithDeviceTrustProviderType(const DeviceTrustProviderType& value) { SetDeviceTrustProviderType(value); return *this;}
    inline VerifiedAccessTrustProvider& WithDeviceTrustProviderType(DeviceTrustProviderType&& value) { SetDeviceTrustProviderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for an OpenID Connect-compatible user-identity trust
     * provider.</p>
     */
    inline const OidcOptions& GetOidcOptions() const{ return m_oidcOptions; }
    inline bool OidcOptionsHasBeenSet() const { return m_oidcOptionsHasBeenSet; }
    inline void SetOidcOptions(const OidcOptions& value) { m_oidcOptionsHasBeenSet = true; m_oidcOptions = value; }
    inline void SetOidcOptions(OidcOptions&& value) { m_oidcOptionsHasBeenSet = true; m_oidcOptions = std::move(value); }
    inline VerifiedAccessTrustProvider& WithOidcOptions(const OidcOptions& value) { SetOidcOptions(value); return *this;}
    inline VerifiedAccessTrustProvider& WithOidcOptions(OidcOptions&& value) { SetOidcOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for device-identity trust provider.</p>
     */
    inline const DeviceOptions& GetDeviceOptions() const{ return m_deviceOptions; }
    inline bool DeviceOptionsHasBeenSet() const { return m_deviceOptionsHasBeenSet; }
    inline void SetDeviceOptions(const DeviceOptions& value) { m_deviceOptionsHasBeenSet = true; m_deviceOptions = value; }
    inline void SetDeviceOptions(DeviceOptions&& value) { m_deviceOptionsHasBeenSet = true; m_deviceOptions = std::move(value); }
    inline VerifiedAccessTrustProvider& WithDeviceOptions(const DeviceOptions& value) { SetDeviceOptions(value); return *this;}
    inline VerifiedAccessTrustProvider& WithDeviceOptions(DeviceOptions&& value) { SetDeviceOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline const Aws::String& GetPolicyReferenceName() const{ return m_policyReferenceName; }
    inline bool PolicyReferenceNameHasBeenSet() const { return m_policyReferenceNameHasBeenSet; }
    inline void SetPolicyReferenceName(const Aws::String& value) { m_policyReferenceNameHasBeenSet = true; m_policyReferenceName = value; }
    inline void SetPolicyReferenceName(Aws::String&& value) { m_policyReferenceNameHasBeenSet = true; m_policyReferenceName = std::move(value); }
    inline void SetPolicyReferenceName(const char* value) { m_policyReferenceNameHasBeenSet = true; m_policyReferenceName.assign(value); }
    inline VerifiedAccessTrustProvider& WithPolicyReferenceName(const Aws::String& value) { SetPolicyReferenceName(value); return *this;}
    inline VerifiedAccessTrustProvider& WithPolicyReferenceName(Aws::String&& value) { SetPolicyReferenceName(std::move(value)); return *this;}
    inline VerifiedAccessTrustProvider& WithPolicyReferenceName(const char* value) { SetPolicyReferenceName(value); return *this;}
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
    inline VerifiedAccessTrustProvider& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}
    inline VerifiedAccessTrustProvider& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}
    inline VerifiedAccessTrustProvider& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}
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
    inline VerifiedAccessTrustProvider& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}
    inline VerifiedAccessTrustProvider& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    inline VerifiedAccessTrustProvider& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline VerifiedAccessTrustProvider& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline VerifiedAccessTrustProvider& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline VerifiedAccessTrustProvider& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline VerifiedAccessTrustProvider& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The options in use for server side encryption.</p>
     */
    inline const VerifiedAccessSseSpecificationResponse& GetSseSpecification() const{ return m_sseSpecification; }
    inline bool SseSpecificationHasBeenSet() const { return m_sseSpecificationHasBeenSet; }
    inline void SetSseSpecification(const VerifiedAccessSseSpecificationResponse& value) { m_sseSpecificationHasBeenSet = true; m_sseSpecification = value; }
    inline void SetSseSpecification(VerifiedAccessSseSpecificationResponse&& value) { m_sseSpecificationHasBeenSet = true; m_sseSpecification = std::move(value); }
    inline VerifiedAccessTrustProvider& WithSseSpecification(const VerifiedAccessSseSpecificationResponse& value) { SetSseSpecification(value); return *this;}
    inline VerifiedAccessTrustProvider& WithSseSpecification(VerifiedAccessSseSpecificationResponse&& value) { SetSseSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpenID Connect (OIDC) options.</p>
     */
    inline const NativeApplicationOidcOptions& GetNativeApplicationOidcOptions() const{ return m_nativeApplicationOidcOptions; }
    inline bool NativeApplicationOidcOptionsHasBeenSet() const { return m_nativeApplicationOidcOptionsHasBeenSet; }
    inline void SetNativeApplicationOidcOptions(const NativeApplicationOidcOptions& value) { m_nativeApplicationOidcOptionsHasBeenSet = true; m_nativeApplicationOidcOptions = value; }
    inline void SetNativeApplicationOidcOptions(NativeApplicationOidcOptions&& value) { m_nativeApplicationOidcOptionsHasBeenSet = true; m_nativeApplicationOidcOptions = std::move(value); }
    inline VerifiedAccessTrustProvider& WithNativeApplicationOidcOptions(const NativeApplicationOidcOptions& value) { SetNativeApplicationOidcOptions(value); return *this;}
    inline VerifiedAccessTrustProvider& WithNativeApplicationOidcOptions(NativeApplicationOidcOptions&& value) { SetNativeApplicationOidcOptions(std::move(value)); return *this;}
    ///@}
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

    VerifiedAccessSseSpecificationResponse m_sseSpecification;
    bool m_sseSpecificationHasBeenSet = false;

    NativeApplicationOidcOptions m_nativeApplicationOidcOptions;
    bool m_nativeApplicationOidcOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
