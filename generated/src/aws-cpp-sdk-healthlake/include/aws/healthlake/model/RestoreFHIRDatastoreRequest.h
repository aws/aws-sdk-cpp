/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/healthlake/HealthLakeRequest.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/AnalyticsConfiguration.h>
#include <aws/healthlake/model/IdentityProviderConfiguration.h>
#include <aws/healthlake/model/NlpConfiguration.h>
#include <aws/healthlake/model/ProfileConfiguration.h>
#include <aws/healthlake/model/RestoreConfiguration.h>
#include <aws/healthlake/model/SseConfiguration.h>
#include <aws/healthlake/model/Tag.h>

#include <utility>

namespace Aws {
namespace HealthLake {
namespace Model {

/**
 */
class RestoreFHIRDatastoreRequest : public HealthLakeRequest {
 public:
  AWS_HEALTHLAKE_API RestoreFHIRDatastoreRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RestoreFHIRDatastore"; }

  AWS_HEALTHLAKE_API Aws::String SerializePayload() const override;

  AWS_HEALTHLAKE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The identifier of the source data store to restore from.</p>
   */
  inline const Aws::String& GetSourceDatastoreId() const { return m_sourceDatastoreId; }
  inline bool SourceDatastoreIdHasBeenSet() const { return m_sourceDatastoreIdHasBeenSet; }
  template <typename SourceDatastoreIdT = Aws::String>
  void SetSourceDatastoreId(SourceDatastoreIdT&& value) {
    m_sourceDatastoreIdHasBeenSet = true;
    m_sourceDatastoreId = std::forward<SourceDatastoreIdT>(value);
  }
  template <typename SourceDatastoreIdT = Aws::String>
  RestoreFHIRDatastoreRequest& WithSourceDatastoreId(SourceDatastoreIdT&& value) {
    SetSourceDatastoreId(std::forward<SourceDatastoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The restore configuration specifying the type and parameters for the
   * restore.</p>
   */
  inline const RestoreConfiguration& GetRestoreConfiguration() const { return m_restoreConfiguration; }
  inline bool RestoreConfigurationHasBeenSet() const { return m_restoreConfigurationHasBeenSet; }
  template <typename RestoreConfigurationT = RestoreConfiguration>
  void SetRestoreConfiguration(RestoreConfigurationT&& value) {
    m_restoreConfigurationHasBeenSet = true;
    m_restoreConfiguration = std::forward<RestoreConfigurationT>(value);
  }
  template <typename RestoreConfigurationT = RestoreConfiguration>
  RestoreFHIRDatastoreRequest& WithRestoreConfiguration(RestoreConfigurationT&& value) {
    SetRestoreConfiguration(std::forward<RestoreConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the restored data store.</p>
   */
  inline const Aws::String& GetDatastoreName() const { return m_datastoreName; }
  inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }
  template <typename DatastoreNameT = Aws::String>
  void SetDatastoreName(DatastoreNameT&& value) {
    m_datastoreNameHasBeenSet = true;
    m_datastoreName = std::forward<DatastoreNameT>(value);
  }
  template <typename DatastoreNameT = Aws::String>
  RestoreFHIRDatastoreRequest& WithDatastoreName(DatastoreNameT&& value) {
    SetDatastoreName(std::forward<DatastoreNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The server-side encryption key configuration for the restored data store.</p>
   */
  inline const SseConfiguration& GetSseConfiguration() const { return m_sseConfiguration; }
  inline bool SseConfigurationHasBeenSet() const { return m_sseConfigurationHasBeenSet; }
  template <typename SseConfigurationT = SseConfiguration>
  void SetSseConfiguration(SseConfigurationT&& value) {
    m_sseConfigurationHasBeenSet = true;
    m_sseConfiguration = std::forward<SseConfigurationT>(value);
  }
  template <typename SseConfigurationT = SseConfiguration>
  RestoreFHIRDatastoreRequest& WithSseConfiguration(SseConfigurationT&& value) {
    SetSseConfiguration(std::forward<SseConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional user-provided token to ensure API idempotency of the restore.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  RestoreFHIRDatastoreRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource tags applied to the restored data store.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  RestoreFHIRDatastoreRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  RestoreFHIRDatastoreRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity provider configuration for the restored data store.</p>
   */
  inline const IdentityProviderConfiguration& GetIdentityProviderConfiguration() const { return m_identityProviderConfiguration; }
  inline bool IdentityProviderConfigurationHasBeenSet() const { return m_identityProviderConfigurationHasBeenSet; }
  template <typename IdentityProviderConfigurationT = IdentityProviderConfiguration>
  void SetIdentityProviderConfiguration(IdentityProviderConfigurationT&& value) {
    m_identityProviderConfigurationHasBeenSet = true;
    m_identityProviderConfiguration = std::forward<IdentityProviderConfigurationT>(value);
  }
  template <typename IdentityProviderConfigurationT = IdentityProviderConfiguration>
  RestoreFHIRDatastoreRequest& WithIdentityProviderConfiguration(IdentityProviderConfigurationT&& value) {
    SetIdentityProviderConfiguration(std::forward<IdentityProviderConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The analytics configuration for the restored data store.</p>
   */
  inline const AnalyticsConfiguration& GetAnalyticsConfiguration() const { return m_analyticsConfiguration; }
  inline bool AnalyticsConfigurationHasBeenSet() const { return m_analyticsConfigurationHasBeenSet; }
  template <typename AnalyticsConfigurationT = AnalyticsConfiguration>
  void SetAnalyticsConfiguration(AnalyticsConfigurationT&& value) {
    m_analyticsConfigurationHasBeenSet = true;
    m_analyticsConfiguration = std::forward<AnalyticsConfigurationT>(value);
  }
  template <typename AnalyticsConfigurationT = AnalyticsConfiguration>
  RestoreFHIRDatastoreRequest& WithAnalyticsConfiguration(AnalyticsConfigurationT&& value) {
    SetAnalyticsConfiguration(std::forward<AnalyticsConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The NLP configuration for the restored data store.</p>
   */
  inline const NlpConfiguration& GetNlpConfiguration() const { return m_nlpConfiguration; }
  inline bool NlpConfigurationHasBeenSet() const { return m_nlpConfigurationHasBeenSet; }
  template <typename NlpConfigurationT = NlpConfiguration>
  void SetNlpConfiguration(NlpConfigurationT&& value) {
    m_nlpConfigurationHasBeenSet = true;
    m_nlpConfiguration = std::forward<NlpConfigurationT>(value);
  }
  template <typename NlpConfigurationT = NlpConfiguration>
  RestoreFHIRDatastoreRequest& WithNlpConfiguration(NlpConfigurationT&& value) {
    SetNlpConfiguration(std::forward<NlpConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The profile configuration for the restored data store.</p>
   */
  inline const ProfileConfiguration& GetProfileConfiguration() const { return m_profileConfiguration; }
  inline bool ProfileConfigurationHasBeenSet() const { return m_profileConfigurationHasBeenSet; }
  template <typename ProfileConfigurationT = ProfileConfiguration>
  void SetProfileConfiguration(ProfileConfigurationT&& value) {
    m_profileConfigurationHasBeenSet = true;
    m_profileConfiguration = std::forward<ProfileConfigurationT>(value);
  }
  template <typename ProfileConfigurationT = ProfileConfiguration>
  RestoreFHIRDatastoreRequest& WithProfileConfiguration(ProfileConfigurationT&& value) {
    SetProfileConfiguration(std::forward<ProfileConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceDatastoreId;

  RestoreConfiguration m_restoreConfiguration;

  Aws::String m_datastoreName;

  SseConfiguration m_sseConfiguration;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Vector<Tag> m_tags;

  IdentityProviderConfiguration m_identityProviderConfiguration;

  AnalyticsConfiguration m_analyticsConfiguration;

  NlpConfiguration m_nlpConfiguration;

  ProfileConfiguration m_profileConfiguration;
  bool m_sourceDatastoreIdHasBeenSet = false;
  bool m_restoreConfigurationHasBeenSet = false;
  bool m_datastoreNameHasBeenSet = false;
  bool m_sseConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
  bool m_identityProviderConfigurationHasBeenSet = false;
  bool m_analyticsConfigurationHasBeenSet = false;
  bool m_nlpConfigurationHasBeenSet = false;
  bool m_profileConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
