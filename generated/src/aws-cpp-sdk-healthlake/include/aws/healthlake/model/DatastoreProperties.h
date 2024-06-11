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
   * <p>Displays the properties of the data store, including the ID, ARN, name, and
   * the status of the data store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DatastoreProperties">AWS
   * API Reference</a></p>
   */
  class DatastoreProperties
  {
  public:
    AWS_HEALTHLAKE_API DatastoreProperties();
    AWS_HEALTHLAKE_API DatastoreProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API DatastoreProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AWS-generated ID number for the data store.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }
    inline DatastoreProperties& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}
    inline DatastoreProperties& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}
    inline DatastoreProperties& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name used in the creation of the data store.</p>
     */
    inline const Aws::String& GetDatastoreArn() const{ return m_datastoreArn; }
    inline bool DatastoreArnHasBeenSet() const { return m_datastoreArnHasBeenSet; }
    inline void SetDatastoreArn(const Aws::String& value) { m_datastoreArnHasBeenSet = true; m_datastoreArn = value; }
    inline void SetDatastoreArn(Aws::String&& value) { m_datastoreArnHasBeenSet = true; m_datastoreArn = std::move(value); }
    inline void SetDatastoreArn(const char* value) { m_datastoreArnHasBeenSet = true; m_datastoreArn.assign(value); }
    inline DatastoreProperties& WithDatastoreArn(const Aws::String& value) { SetDatastoreArn(value); return *this;}
    inline DatastoreProperties& WithDatastoreArn(Aws::String&& value) { SetDatastoreArn(std::move(value)); return *this;}
    inline DatastoreProperties& WithDatastoreArn(const char* value) { SetDatastoreArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-generated name for the data store.</p>
     */
    inline const Aws::String& GetDatastoreName() const{ return m_datastoreName; }
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }
    inline void SetDatastoreName(const Aws::String& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = value; }
    inline void SetDatastoreName(Aws::String&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::move(value); }
    inline void SetDatastoreName(const char* value) { m_datastoreNameHasBeenSet = true; m_datastoreName.assign(value); }
    inline DatastoreProperties& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}
    inline DatastoreProperties& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}
    inline DatastoreProperties& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the data store.</p>
     */
    inline const DatastoreStatus& GetDatastoreStatus() const{ return m_datastoreStatus; }
    inline bool DatastoreStatusHasBeenSet() const { return m_datastoreStatusHasBeenSet; }
    inline void SetDatastoreStatus(const DatastoreStatus& value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = value; }
    inline void SetDatastoreStatus(DatastoreStatus&& value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = std::move(value); }
    inline DatastoreProperties& WithDatastoreStatus(const DatastoreStatus& value) { SetDatastoreStatus(value); return *this;}
    inline DatastoreProperties& WithDatastoreStatus(DatastoreStatus&& value) { SetDatastoreStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that a data store was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline DatastoreProperties& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DatastoreProperties& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The FHIR version. Only R4 version data is supported.</p>
     */
    inline const FHIRVersion& GetDatastoreTypeVersion() const{ return m_datastoreTypeVersion; }
    inline bool DatastoreTypeVersionHasBeenSet() const { return m_datastoreTypeVersionHasBeenSet; }
    inline void SetDatastoreTypeVersion(const FHIRVersion& value) { m_datastoreTypeVersionHasBeenSet = true; m_datastoreTypeVersion = value; }
    inline void SetDatastoreTypeVersion(FHIRVersion&& value) { m_datastoreTypeVersionHasBeenSet = true; m_datastoreTypeVersion = std::move(value); }
    inline DatastoreProperties& WithDatastoreTypeVersion(const FHIRVersion& value) { SetDatastoreTypeVersion(value); return *this;}
    inline DatastoreProperties& WithDatastoreTypeVersion(FHIRVersion&& value) { SetDatastoreTypeVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS endpoint for the data store. Each data store will have it's own
     * endpoint with data store ID in the endpoint URL.</p>
     */
    inline const Aws::String& GetDatastoreEndpoint() const{ return m_datastoreEndpoint; }
    inline bool DatastoreEndpointHasBeenSet() const { return m_datastoreEndpointHasBeenSet; }
    inline void SetDatastoreEndpoint(const Aws::String& value) { m_datastoreEndpointHasBeenSet = true; m_datastoreEndpoint = value; }
    inline void SetDatastoreEndpoint(Aws::String&& value) { m_datastoreEndpointHasBeenSet = true; m_datastoreEndpoint = std::move(value); }
    inline void SetDatastoreEndpoint(const char* value) { m_datastoreEndpointHasBeenSet = true; m_datastoreEndpoint.assign(value); }
    inline DatastoreProperties& WithDatastoreEndpoint(const Aws::String& value) { SetDatastoreEndpoint(value); return *this;}
    inline DatastoreProperties& WithDatastoreEndpoint(Aws::String&& value) { SetDatastoreEndpoint(std::move(value)); return *this;}
    inline DatastoreProperties& WithDatastoreEndpoint(const char* value) { SetDatastoreEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The server-side encryption key configuration for a customer provided
     * encryption key (CMK). </p>
     */
    inline const SseConfiguration& GetSseConfiguration() const{ return m_sseConfiguration; }
    inline bool SseConfigurationHasBeenSet() const { return m_sseConfigurationHasBeenSet; }
    inline void SetSseConfiguration(const SseConfiguration& value) { m_sseConfigurationHasBeenSet = true; m_sseConfiguration = value; }
    inline void SetSseConfiguration(SseConfiguration&& value) { m_sseConfigurationHasBeenSet = true; m_sseConfiguration = std::move(value); }
    inline DatastoreProperties& WithSseConfiguration(const SseConfiguration& value) { SetSseConfiguration(value); return *this;}
    inline DatastoreProperties& WithSseConfiguration(SseConfiguration&& value) { SetSseConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preloaded data configuration for the data store. Only data preloaded from
     * Synthea is supported.</p>
     */
    inline const PreloadDataConfig& GetPreloadDataConfig() const{ return m_preloadDataConfig; }
    inline bool PreloadDataConfigHasBeenSet() const { return m_preloadDataConfigHasBeenSet; }
    inline void SetPreloadDataConfig(const PreloadDataConfig& value) { m_preloadDataConfigHasBeenSet = true; m_preloadDataConfig = value; }
    inline void SetPreloadDataConfig(PreloadDataConfig&& value) { m_preloadDataConfigHasBeenSet = true; m_preloadDataConfig = std::move(value); }
    inline DatastoreProperties& WithPreloadDataConfig(const PreloadDataConfig& value) { SetPreloadDataConfig(value); return *this;}
    inline DatastoreProperties& WithPreloadDataConfig(PreloadDataConfig&& value) { SetPreloadDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity provider that you selected when you created the data store.</p>
     */
    inline const IdentityProviderConfiguration& GetIdentityProviderConfiguration() const{ return m_identityProviderConfiguration; }
    inline bool IdentityProviderConfigurationHasBeenSet() const { return m_identityProviderConfigurationHasBeenSet; }
    inline void SetIdentityProviderConfiguration(const IdentityProviderConfiguration& value) { m_identityProviderConfigurationHasBeenSet = true; m_identityProviderConfiguration = value; }
    inline void SetIdentityProviderConfiguration(IdentityProviderConfiguration&& value) { m_identityProviderConfigurationHasBeenSet = true; m_identityProviderConfiguration = std::move(value); }
    inline DatastoreProperties& WithIdentityProviderConfiguration(const IdentityProviderConfiguration& value) { SetIdentityProviderConfiguration(value); return *this;}
    inline DatastoreProperties& WithIdentityProviderConfiguration(IdentityProviderConfiguration&& value) { SetIdentityProviderConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error cause for the current data store operation.</p>
     */
    inline const ErrorCause& GetErrorCause() const{ return m_errorCause; }
    inline bool ErrorCauseHasBeenSet() const { return m_errorCauseHasBeenSet; }
    inline void SetErrorCause(const ErrorCause& value) { m_errorCauseHasBeenSet = true; m_errorCause = value; }
    inline void SetErrorCause(ErrorCause&& value) { m_errorCauseHasBeenSet = true; m_errorCause = std::move(value); }
    inline DatastoreProperties& WithErrorCause(const ErrorCause& value) { SetErrorCause(value); return *this;}
    inline DatastoreProperties& WithErrorCause(ErrorCause&& value) { SetErrorCause(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_datastoreArn;
    bool m_datastoreArnHasBeenSet = false;

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet = false;

    DatastoreStatus m_datastoreStatus;
    bool m_datastoreStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    FHIRVersion m_datastoreTypeVersion;
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
