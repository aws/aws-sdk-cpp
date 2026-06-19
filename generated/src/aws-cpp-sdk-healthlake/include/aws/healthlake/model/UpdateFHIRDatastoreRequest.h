/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLakeRequest.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/AnalyticsConfiguration.h>
#include <aws/healthlake/model/IdentityProviderConfiguration.h>
#include <aws/healthlake/model/NlpConfiguration.h>
#include <aws/healthlake/model/ProfileConfiguration.h>

#include <utility>

namespace Aws {
namespace HealthLake {
namespace Model {

/**
 */
class UpdateFHIRDatastoreRequest : public HealthLakeRequest {
 public:
  AWS_HEALTHLAKE_API UpdateFHIRDatastoreRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateFHIRDatastore"; }

  AWS_HEALTHLAKE_API Aws::String SerializePayload() const override;

  AWS_HEALTHLAKE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The data store identifier.</p>
   */
  inline const Aws::String& GetDatastoreId() const { return m_datastoreId; }
  inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }
  template <typename DatastoreIdT = Aws::String>
  void SetDatastoreId(DatastoreIdT&& value) {
    m_datastoreIdHasBeenSet = true;
    m_datastoreId = std::forward<DatastoreIdT>(value);
  }
  template <typename DatastoreIdT = Aws::String>
  UpdateFHIRDatastoreRequest& WithDatastoreId(DatastoreIdT&& value) {
    SetDatastoreId(std::forward<DatastoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data store name.</p>
   */
  inline const Aws::String& GetDatastoreName() const { return m_datastoreName; }
  inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }
  template <typename DatastoreNameT = Aws::String>
  void SetDatastoreName(DatastoreNameT&& value) {
    m_datastoreNameHasBeenSet = true;
    m_datastoreName = std::forward<DatastoreNameT>(value);
  }
  template <typename DatastoreNameT = Aws::String>
  UpdateFHIRDatastoreRequest& WithDatastoreName(DatastoreNameT&& value) {
    SetDatastoreName(std::forward<DatastoreNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The natural language processing (NLP) configuration for the data store.</p>
   */
  inline const NlpConfiguration& GetNlpConfiguration() const { return m_nlpConfiguration; }
  inline bool NlpConfigurationHasBeenSet() const { return m_nlpConfigurationHasBeenSet; }
  template <typename NlpConfigurationT = NlpConfiguration>
  void SetNlpConfiguration(NlpConfigurationT&& value) {
    m_nlpConfigurationHasBeenSet = true;
    m_nlpConfiguration = std::forward<NlpConfigurationT>(value);
  }
  template <typename NlpConfigurationT = NlpConfiguration>
  UpdateFHIRDatastoreRequest& WithNlpConfiguration(NlpConfigurationT&& value) {
    SetNlpConfiguration(std::forward<NlpConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The analytics configuration for the data store.</p>
   */
  inline const AnalyticsConfiguration& GetAnalyticsConfiguration() const { return m_analyticsConfiguration; }
  inline bool AnalyticsConfigurationHasBeenSet() const { return m_analyticsConfigurationHasBeenSet; }
  template <typename AnalyticsConfigurationT = AnalyticsConfiguration>
  void SetAnalyticsConfiguration(AnalyticsConfigurationT&& value) {
    m_analyticsConfigurationHasBeenSet = true;
    m_analyticsConfiguration = std::forward<AnalyticsConfigurationT>(value);
  }
  template <typename AnalyticsConfigurationT = AnalyticsConfiguration>
  UpdateFHIRDatastoreRequest& WithAnalyticsConfiguration(AnalyticsConfigurationT&& value) {
    SetAnalyticsConfiguration(std::forward<AnalyticsConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The profile configuration for the data store.</p>
   */
  inline const ProfileConfiguration& GetProfileConfiguration() const { return m_profileConfiguration; }
  inline bool ProfileConfigurationHasBeenSet() const { return m_profileConfigurationHasBeenSet; }
  template <typename ProfileConfigurationT = ProfileConfiguration>
  void SetProfileConfiguration(ProfileConfigurationT&& value) {
    m_profileConfigurationHasBeenSet = true;
    m_profileConfiguration = std::forward<ProfileConfigurationT>(value);
  }
  template <typename ProfileConfigurationT = ProfileConfiguration>
  UpdateFHIRDatastoreRequest& WithProfileConfiguration(ProfileConfigurationT&& value) {
    SetProfileConfiguration(std::forward<ProfileConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity provider configuration for the data store.</p>
   */
  inline const IdentityProviderConfiguration& GetIdentityProviderConfiguration() const { return m_identityProviderConfiguration; }
  inline bool IdentityProviderConfigurationHasBeenSet() const { return m_identityProviderConfigurationHasBeenSet; }
  template <typename IdentityProviderConfigurationT = IdentityProviderConfiguration>
  void SetIdentityProviderConfiguration(IdentityProviderConfigurationT&& value) {
    m_identityProviderConfigurationHasBeenSet = true;
    m_identityProviderConfiguration = std::forward<IdentityProviderConfigurationT>(value);
  }
  template <typename IdentityProviderConfigurationT = IdentityProviderConfiguration>
  UpdateFHIRDatastoreRequest& WithIdentityProviderConfiguration(IdentityProviderConfigurationT&& value) {
    SetIdentityProviderConfiguration(std::forward<IdentityProviderConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_datastoreId;

  Aws::String m_datastoreName;

  NlpConfiguration m_nlpConfiguration;

  AnalyticsConfiguration m_analyticsConfiguration;

  ProfileConfiguration m_profileConfiguration;

  IdentityProviderConfiguration m_identityProviderConfiguration;
  bool m_datastoreIdHasBeenSet = false;
  bool m_datastoreNameHasBeenSet = false;
  bool m_nlpConfigurationHasBeenSet = false;
  bool m_analyticsConfigurationHasBeenSet = false;
  bool m_profileConfigurationHasBeenSet = false;
  bool m_identityProviderConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
