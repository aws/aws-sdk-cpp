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
    AWS_EC2_API VerifiedAccessTrustProvider() = default;
    AWS_EC2_API VerifiedAccessTrustProvider(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessTrustProvider& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services Verified Access trust provider.</p>
     */
    inline const Aws::String& GetVerifiedAccessTrustProviderId() const { return m_verifiedAccessTrustProviderId; }
    inline bool VerifiedAccessTrustProviderIdHasBeenSet() const { return m_verifiedAccessTrustProviderIdHasBeenSet; }
    template<typename VerifiedAccessTrustProviderIdT = Aws::String>
    void SetVerifiedAccessTrustProviderId(VerifiedAccessTrustProviderIdT&& value) { m_verifiedAccessTrustProviderIdHasBeenSet = true; m_verifiedAccessTrustProviderId = std::forward<VerifiedAccessTrustProviderIdT>(value); }
    template<typename VerifiedAccessTrustProviderIdT = Aws::String>
    VerifiedAccessTrustProvider& WithVerifiedAccessTrustProviderId(VerifiedAccessTrustProviderIdT&& value) { SetVerifiedAccessTrustProviderId(std::forward<VerifiedAccessTrustProviderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Amazon Web Services Verified Access trust provider.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    VerifiedAccessTrustProvider& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Verified Access trust provider.</p>
     */
    inline TrustProviderType GetTrustProviderType() const { return m_trustProviderType; }
    inline bool TrustProviderTypeHasBeenSet() const { return m_trustProviderTypeHasBeenSet; }
    inline void SetTrustProviderType(TrustProviderType value) { m_trustProviderTypeHasBeenSet = true; m_trustProviderType = value; }
    inline VerifiedAccessTrustProvider& WithTrustProviderType(TrustProviderType value) { SetTrustProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of user-based trust provider.</p>
     */
    inline UserTrustProviderType GetUserTrustProviderType() const { return m_userTrustProviderType; }
    inline bool UserTrustProviderTypeHasBeenSet() const { return m_userTrustProviderTypeHasBeenSet; }
    inline void SetUserTrustProviderType(UserTrustProviderType value) { m_userTrustProviderTypeHasBeenSet = true; m_userTrustProviderType = value; }
    inline VerifiedAccessTrustProvider& WithUserTrustProviderType(UserTrustProviderType value) { SetUserTrustProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of device-based trust provider.</p>
     */
    inline DeviceTrustProviderType GetDeviceTrustProviderType() const { return m_deviceTrustProviderType; }
    inline bool DeviceTrustProviderTypeHasBeenSet() const { return m_deviceTrustProviderTypeHasBeenSet; }
    inline void SetDeviceTrustProviderType(DeviceTrustProviderType value) { m_deviceTrustProviderTypeHasBeenSet = true; m_deviceTrustProviderType = value; }
    inline VerifiedAccessTrustProvider& WithDeviceTrustProviderType(DeviceTrustProviderType value) { SetDeviceTrustProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for an OpenID Connect-compatible user-identity trust
     * provider.</p>
     */
    inline const OidcOptions& GetOidcOptions() const { return m_oidcOptions; }
    inline bool OidcOptionsHasBeenSet() const { return m_oidcOptionsHasBeenSet; }
    template<typename OidcOptionsT = OidcOptions>
    void SetOidcOptions(OidcOptionsT&& value) { m_oidcOptionsHasBeenSet = true; m_oidcOptions = std::forward<OidcOptionsT>(value); }
    template<typename OidcOptionsT = OidcOptions>
    VerifiedAccessTrustProvider& WithOidcOptions(OidcOptionsT&& value) { SetOidcOptions(std::forward<OidcOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for device-identity trust provider.</p>
     */
    inline const DeviceOptions& GetDeviceOptions() const { return m_deviceOptions; }
    inline bool DeviceOptionsHasBeenSet() const { return m_deviceOptionsHasBeenSet; }
    template<typename DeviceOptionsT = DeviceOptions>
    void SetDeviceOptions(DeviceOptionsT&& value) { m_deviceOptionsHasBeenSet = true; m_deviceOptions = std::forward<DeviceOptionsT>(value); }
    template<typename DeviceOptionsT = DeviceOptions>
    VerifiedAccessTrustProvider& WithDeviceOptions(DeviceOptionsT&& value) { SetDeviceOptions(std::forward<DeviceOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier to be used when working with policy rules.</p>
     */
    inline const Aws::String& GetPolicyReferenceName() const { return m_policyReferenceName; }
    inline bool PolicyReferenceNameHasBeenSet() const { return m_policyReferenceNameHasBeenSet; }
    template<typename PolicyReferenceNameT = Aws::String>
    void SetPolicyReferenceName(PolicyReferenceNameT&& value) { m_policyReferenceNameHasBeenSet = true; m_policyReferenceName = std::forward<PolicyReferenceNameT>(value); }
    template<typename PolicyReferenceNameT = Aws::String>
    VerifiedAccessTrustProvider& WithPolicyReferenceName(PolicyReferenceNameT&& value) { SetPolicyReferenceName(std::forward<PolicyReferenceNameT>(value)); return *this;}
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
    VerifiedAccessTrustProvider& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    VerifiedAccessTrustProvider& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
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
    VerifiedAccessTrustProvider& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    VerifiedAccessTrustProvider& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    VerifiedAccessTrustProvider& WithSseSpecification(SseSpecificationT&& value) { SetSseSpecification(std::forward<SseSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpenID Connect (OIDC) options.</p>
     */
    inline const NativeApplicationOidcOptions& GetNativeApplicationOidcOptions() const { return m_nativeApplicationOidcOptions; }
    inline bool NativeApplicationOidcOptionsHasBeenSet() const { return m_nativeApplicationOidcOptionsHasBeenSet; }
    template<typename NativeApplicationOidcOptionsT = NativeApplicationOidcOptions>
    void SetNativeApplicationOidcOptions(NativeApplicationOidcOptionsT&& value) { m_nativeApplicationOidcOptionsHasBeenSet = true; m_nativeApplicationOidcOptions = std::forward<NativeApplicationOidcOptionsT>(value); }
    template<typename NativeApplicationOidcOptionsT = NativeApplicationOidcOptions>
    VerifiedAccessTrustProvider& WithNativeApplicationOidcOptions(NativeApplicationOidcOptionsT&& value) { SetNativeApplicationOidcOptions(std::forward<NativeApplicationOidcOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_verifiedAccessTrustProviderId;
    bool m_verifiedAccessTrustProviderIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TrustProviderType m_trustProviderType{TrustProviderType::NOT_SET};
    bool m_trustProviderTypeHasBeenSet = false;

    UserTrustProviderType m_userTrustProviderType{UserTrustProviderType::NOT_SET};
    bool m_userTrustProviderTypeHasBeenSet = false;

    DeviceTrustProviderType m_deviceTrustProviderType{DeviceTrustProviderType::NOT_SET};
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
