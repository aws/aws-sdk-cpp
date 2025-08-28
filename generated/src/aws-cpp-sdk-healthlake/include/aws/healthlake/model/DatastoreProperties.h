/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/model/DatastoreStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/healthlake/model/FHIRVersion.h>
#include <aws/healthlake/model/SseConfiguration.h>
#include <aws/healthlake/model/PreloadDataConfig.h>
#include <aws/healthlake/model/IdentityProviderConfiguration.h>
#include <aws/healthlake/model/ErrorCause.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace HealthLake
{
namespace Model
{

  /**
   * <p>The data store properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DatastoreProperties">AWS
   * API Reference</a></p>
   */
  class DatastoreProperties
  {
  public:
    AWS_HEALTHLAKE_API DatastoreProperties() = default;
    AWS_HEALTHLAKE_API DatastoreProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API DatastoreProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const { return m_datastoreId; }
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }
    template<typename DatastoreIdT = Aws::String>
    void SetDatastoreId(DatastoreIdT&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::forward<DatastoreIdT>(value); }
    template<typename DatastoreIdT = Aws::String>
    DatastoreProperties& WithDatastoreId(DatastoreIdT&& value) { SetDatastoreId(std::forward<DatastoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) used in the creation of the data store.</p>
     */
    inline const Aws::String& GetDatastoreArn() const { return m_datastoreArn; }
    inline bool DatastoreArnHasBeenSet() const { return m_datastoreArnHasBeenSet; }
    template<typename DatastoreArnT = Aws::String>
    void SetDatastoreArn(DatastoreArnT&& value) { m_datastoreArnHasBeenSet = true; m_datastoreArn = std::forward<DatastoreArnT>(value); }
    template<typename DatastoreArnT = Aws::String>
    DatastoreProperties& WithDatastoreArn(DatastoreArnT&& value) { SetDatastoreArn(std::forward<DatastoreArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data store name.</p>
     */
    inline const Aws::String& GetDatastoreName() const { return m_datastoreName; }
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }
    template<typename DatastoreNameT = Aws::String>
    void SetDatastoreName(DatastoreNameT&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::forward<DatastoreNameT>(value); }
    template<typename DatastoreNameT = Aws::String>
    DatastoreProperties& WithDatastoreName(DatastoreNameT&& value) { SetDatastoreName(std::forward<DatastoreNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data store status.</p>
     */
    inline DatastoreStatus GetDatastoreStatus() const { return m_datastoreStatus; }
    inline bool DatastoreStatusHasBeenSet() const { return m_datastoreStatusHasBeenSet; }
    inline void SetDatastoreStatus(DatastoreStatus value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = value; }
    inline DatastoreProperties& WithDatastoreStatus(DatastoreStatus value) { SetDatastoreStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the data store was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DatastoreProperties& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The FHIR release version supported by the data store. Current support is for
     * version <code>R4</code>.</p>
     */
    inline FHIRVersion GetDatastoreTypeVersion() const { return m_datastoreTypeVersion; }
    inline bool DatastoreTypeVersionHasBeenSet() const { return m_datastoreTypeVersionHasBeenSet; }
    inline void SetDatastoreTypeVersion(FHIRVersion value) { m_datastoreTypeVersionHasBeenSet = true; m_datastoreTypeVersion = value; }
    inline DatastoreProperties& WithDatastoreTypeVersion(FHIRVersion value) { SetDatastoreTypeVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS endpoint for the data store.</p>
     */
    inline const Aws::String& GetDatastoreEndpoint() const { return m_datastoreEndpoint; }
    inline bool DatastoreEndpointHasBeenSet() const { return m_datastoreEndpointHasBeenSet; }
    template<typename DatastoreEndpointT = Aws::String>
    void SetDatastoreEndpoint(DatastoreEndpointT&& value) { m_datastoreEndpointHasBeenSet = true; m_datastoreEndpoint = std::forward<DatastoreEndpointT>(value); }
    template<typename DatastoreEndpointT = Aws::String>
    DatastoreProperties& WithDatastoreEndpoint(DatastoreEndpointT&& value) { SetDatastoreEndpoint(std::forward<DatastoreEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The server-side encryption key configuration for a customer provided
     * encryption key.</p>
     */
    inline const SseConfiguration& GetSseConfiguration() const { return m_sseConfiguration; }
    inline bool SseConfigurationHasBeenSet() const { return m_sseConfigurationHasBeenSet; }
    template<typename SseConfigurationT = SseConfiguration>
    void SetSseConfiguration(SseConfigurationT&& value) { m_sseConfigurationHasBeenSet = true; m_sseConfiguration = std::forward<SseConfigurationT>(value); }
    template<typename SseConfigurationT = SseConfiguration>
    DatastoreProperties& WithSseConfiguration(SseConfigurationT&& value) { SetSseConfiguration(std::forward<SseConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preloaded Synthea data configuration for the data store.</p>
     */
    inline const PreloadDataConfig& GetPreloadDataConfig() const { return m_preloadDataConfig; }
    inline bool PreloadDataConfigHasBeenSet() const { return m_preloadDataConfigHasBeenSet; }
    template<typename PreloadDataConfigT = PreloadDataConfig>
    void SetPreloadDataConfig(PreloadDataConfigT&& value) { m_preloadDataConfigHasBeenSet = true; m_preloadDataConfig = std::forward<PreloadDataConfigT>(value); }
    template<typename PreloadDataConfigT = PreloadDataConfig>
    DatastoreProperties& WithPreloadDataConfig(PreloadDataConfigT&& value) { SetPreloadDataConfig(std::forward<PreloadDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity provider selected during data store creation.</p>
     */
    inline const IdentityProviderConfiguration& GetIdentityProviderConfiguration() const { return m_identityProviderConfiguration; }
    inline bool IdentityProviderConfigurationHasBeenSet() const { return m_identityProviderConfigurationHasBeenSet; }
    template<typename IdentityProviderConfigurationT = IdentityProviderConfiguration>
    void SetIdentityProviderConfiguration(IdentityProviderConfigurationT&& value) { m_identityProviderConfigurationHasBeenSet = true; m_identityProviderConfiguration = std::forward<IdentityProviderConfigurationT>(value); }
    template<typename IdentityProviderConfigurationT = IdentityProviderConfiguration>
    DatastoreProperties& WithIdentityProviderConfiguration(IdentityProviderConfigurationT&& value) { SetIdentityProviderConfiguration(std::forward<IdentityProviderConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error cause for the current data store operation.</p>
     */
    inline const ErrorCause& GetErrorCause() const { return m_errorCause; }
    inline bool ErrorCauseHasBeenSet() const { return m_errorCauseHasBeenSet; }
    template<typename ErrorCauseT = ErrorCause>
    void SetErrorCause(ErrorCauseT&& value) { m_errorCauseHasBeenSet = true; m_errorCause = std::forward<ErrorCauseT>(value); }
    template<typename ErrorCauseT = ErrorCause>
    DatastoreProperties& WithErrorCause(ErrorCauseT&& value) { SetErrorCause(std::forward<ErrorCauseT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_datastoreArn;
    bool m_datastoreArnHasBeenSet = false;

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet = false;

    DatastoreStatus m_datastoreStatus{DatastoreStatus::NOT_SET};
    bool m_datastoreStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    FHIRVersion m_datastoreTypeVersion{FHIRVersion::NOT_SET};
    bool m_datastoreTypeVersionHasBeenSet = false;

    Aws::String m_datastoreEndpoint;
    bool m_datastoreEndpointHasBeenSet = false;

    SseConfiguration m_sseConfiguration;
    bool m_sseConfigurationHasBeenSet = false;

    PreloadDataConfig m_preloadDataConfig;
    bool m_preloadDataConfigHasBeenSet = false;

    IdentityProviderConfiguration m_identityProviderConfiguration;
    bool m_identityProviderConfigurationHasBeenSet = false;

    ErrorCause m_errorCause;
    bool m_errorCauseHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
