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
   * <p>Displays the properties of the Data Store, including the ID, Arn, name, and
   * the status of the Data Store.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The AWS-generated ID number for the Data Store.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }

    /**
     * <p>The AWS-generated ID number for the Data Store.</p>
     */
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }

    /**
     * <p>The AWS-generated ID number for the Data Store.</p>
     */
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }

    /**
     * <p>The AWS-generated ID number for the Data Store.</p>
     */
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }

    /**
     * <p>The AWS-generated ID number for the Data Store.</p>
     */
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }

    /**
     * <p>The AWS-generated ID number for the Data Store.</p>
     */
    inline DatastoreProperties& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}

    /**
     * <p>The AWS-generated ID number for the Data Store.</p>
     */
    inline DatastoreProperties& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}

    /**
     * <p>The AWS-generated ID number for the Data Store.</p>
     */
    inline DatastoreProperties& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}


    /**
     * <p>The Amazon Resource Name used in the creation of the Data Store.</p>
     */
    inline const Aws::String& GetDatastoreArn() const{ return m_datastoreArn; }

    /**
     * <p>The Amazon Resource Name used in the creation of the Data Store.</p>
     */
    inline bool DatastoreArnHasBeenSet() const { return m_datastoreArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name used in the creation of the Data Store.</p>
     */
    inline void SetDatastoreArn(const Aws::String& value) { m_datastoreArnHasBeenSet = true; m_datastoreArn = value; }

    /**
     * <p>The Amazon Resource Name used in the creation of the Data Store.</p>
     */
    inline void SetDatastoreArn(Aws::String&& value) { m_datastoreArnHasBeenSet = true; m_datastoreArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name used in the creation of the Data Store.</p>
     */
    inline void SetDatastoreArn(const char* value) { m_datastoreArnHasBeenSet = true; m_datastoreArn.assign(value); }

    /**
     * <p>The Amazon Resource Name used in the creation of the Data Store.</p>
     */
    inline DatastoreProperties& WithDatastoreArn(const Aws::String& value) { SetDatastoreArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name used in the creation of the Data Store.</p>
     */
    inline DatastoreProperties& WithDatastoreArn(Aws::String&& value) { SetDatastoreArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name used in the creation of the Data Store.</p>
     */
    inline DatastoreProperties& WithDatastoreArn(const char* value) { SetDatastoreArn(value); return *this;}


    /**
     * <p>The user-generated name for the Data Store.</p>
     */
    inline const Aws::String& GetDatastoreName() const{ return m_datastoreName; }

    /**
     * <p>The user-generated name for the Data Store.</p>
     */
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }

    /**
     * <p>The user-generated name for the Data Store.</p>
     */
    inline void SetDatastoreName(const Aws::String& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = value; }

    /**
     * <p>The user-generated name for the Data Store.</p>
     */
    inline void SetDatastoreName(Aws::String&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::move(value); }

    /**
     * <p>The user-generated name for the Data Store.</p>
     */
    inline void SetDatastoreName(const char* value) { m_datastoreNameHasBeenSet = true; m_datastoreName.assign(value); }

    /**
     * <p>The user-generated name for the Data Store.</p>
     */
    inline DatastoreProperties& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}

    /**
     * <p>The user-generated name for the Data Store.</p>
     */
    inline DatastoreProperties& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}

    /**
     * <p>The user-generated name for the Data Store.</p>
     */
    inline DatastoreProperties& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}


    /**
     * <p>The status of the Data Store. Possible statuses are 'CREATING', 'ACTIVE',
     * 'DELETING', or 'DELETED'.</p>
     */
    inline const DatastoreStatus& GetDatastoreStatus() const{ return m_datastoreStatus; }

    /**
     * <p>The status of the Data Store. Possible statuses are 'CREATING', 'ACTIVE',
     * 'DELETING', or 'DELETED'.</p>
     */
    inline bool DatastoreStatusHasBeenSet() const { return m_datastoreStatusHasBeenSet; }

    /**
     * <p>The status of the Data Store. Possible statuses are 'CREATING', 'ACTIVE',
     * 'DELETING', or 'DELETED'.</p>
     */
    inline void SetDatastoreStatus(const DatastoreStatus& value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = value; }

    /**
     * <p>The status of the Data Store. Possible statuses are 'CREATING', 'ACTIVE',
     * 'DELETING', or 'DELETED'.</p>
     */
    inline void SetDatastoreStatus(DatastoreStatus&& value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = std::move(value); }

    /**
     * <p>The status of the Data Store. Possible statuses are 'CREATING', 'ACTIVE',
     * 'DELETING', or 'DELETED'.</p>
     */
    inline DatastoreProperties& WithDatastoreStatus(const DatastoreStatus& value) { SetDatastoreStatus(value); return *this;}

    /**
     * <p>The status of the Data Store. Possible statuses are 'CREATING', 'ACTIVE',
     * 'DELETING', or 'DELETED'.</p>
     */
    inline DatastoreProperties& WithDatastoreStatus(DatastoreStatus&& value) { SetDatastoreStatus(std::move(value)); return *this;}


    /**
     * <p>The time that a Data Store was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time that a Data Store was created. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time that a Data Store was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time that a Data Store was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time that a Data Store was created. </p>
     */
    inline DatastoreProperties& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time that a Data Store was created. </p>
     */
    inline DatastoreProperties& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The FHIR version. Only R4 version data is supported.</p>
     */
    inline const FHIRVersion& GetDatastoreTypeVersion() const{ return m_datastoreTypeVersion; }

    /**
     * <p>The FHIR version. Only R4 version data is supported.</p>
     */
    inline bool DatastoreTypeVersionHasBeenSet() const { return m_datastoreTypeVersionHasBeenSet; }

    /**
     * <p>The FHIR version. Only R4 version data is supported.</p>
     */
    inline void SetDatastoreTypeVersion(const FHIRVersion& value) { m_datastoreTypeVersionHasBeenSet = true; m_datastoreTypeVersion = value; }

    /**
     * <p>The FHIR version. Only R4 version data is supported.</p>
     */
    inline void SetDatastoreTypeVersion(FHIRVersion&& value) { m_datastoreTypeVersionHasBeenSet = true; m_datastoreTypeVersion = std::move(value); }

    /**
     * <p>The FHIR version. Only R4 version data is supported.</p>
     */
    inline DatastoreProperties& WithDatastoreTypeVersion(const FHIRVersion& value) { SetDatastoreTypeVersion(value); return *this;}

    /**
     * <p>The FHIR version. Only R4 version data is supported.</p>
     */
    inline DatastoreProperties& WithDatastoreTypeVersion(FHIRVersion&& value) { SetDatastoreTypeVersion(std::move(value)); return *this;}


    /**
     * <p>The AWS endpoint for the Data Store. Each Data Store will have it's own
     * endpoint with Data Store ID in the endpoint URL.</p>
     */
    inline const Aws::String& GetDatastoreEndpoint() const{ return m_datastoreEndpoint; }

    /**
     * <p>The AWS endpoint for the Data Store. Each Data Store will have it's own
     * endpoint with Data Store ID in the endpoint URL.</p>
     */
    inline bool DatastoreEndpointHasBeenSet() const { return m_datastoreEndpointHasBeenSet; }

    /**
     * <p>The AWS endpoint for the Data Store. Each Data Store will have it's own
     * endpoint with Data Store ID in the endpoint URL.</p>
     */
    inline void SetDatastoreEndpoint(const Aws::String& value) { m_datastoreEndpointHasBeenSet = true; m_datastoreEndpoint = value; }

    /**
     * <p>The AWS endpoint for the Data Store. Each Data Store will have it's own
     * endpoint with Data Store ID in the endpoint URL.</p>
     */
    inline void SetDatastoreEndpoint(Aws::String&& value) { m_datastoreEndpointHasBeenSet = true; m_datastoreEndpoint = std::move(value); }

    /**
     * <p>The AWS endpoint for the Data Store. Each Data Store will have it's own
     * endpoint with Data Store ID in the endpoint URL.</p>
     */
    inline void SetDatastoreEndpoint(const char* value) { m_datastoreEndpointHasBeenSet = true; m_datastoreEndpoint.assign(value); }

    /**
     * <p>The AWS endpoint for the Data Store. Each Data Store will have it's own
     * endpoint with Data Store ID in the endpoint URL.</p>
     */
    inline DatastoreProperties& WithDatastoreEndpoint(const Aws::String& value) { SetDatastoreEndpoint(value); return *this;}

    /**
     * <p>The AWS endpoint for the Data Store. Each Data Store will have it's own
     * endpoint with Data Store ID in the endpoint URL.</p>
     */
    inline DatastoreProperties& WithDatastoreEndpoint(Aws::String&& value) { SetDatastoreEndpoint(std::move(value)); return *this;}

    /**
     * <p>The AWS endpoint for the Data Store. Each Data Store will have it's own
     * endpoint with Data Store ID in the endpoint URL.</p>
     */
    inline DatastoreProperties& WithDatastoreEndpoint(const char* value) { SetDatastoreEndpoint(value); return *this;}


    /**
     * <p> The server-side encryption key configuration for a customer provided
     * encryption key (CMK). </p>
     */
    inline const SseConfiguration& GetSseConfiguration() const{ return m_sseConfiguration; }

    /**
     * <p> The server-side encryption key configuration for a customer provided
     * encryption key (CMK). </p>
     */
    inline bool SseConfigurationHasBeenSet() const { return m_sseConfigurationHasBeenSet; }

    /**
     * <p> The server-side encryption key configuration for a customer provided
     * encryption key (CMK). </p>
     */
    inline void SetSseConfiguration(const SseConfiguration& value) { m_sseConfigurationHasBeenSet = true; m_sseConfiguration = value; }

    /**
     * <p> The server-side encryption key configuration for a customer provided
     * encryption key (CMK). </p>
     */
    inline void SetSseConfiguration(SseConfiguration&& value) { m_sseConfigurationHasBeenSet = true; m_sseConfiguration = std::move(value); }

    /**
     * <p> The server-side encryption key configuration for a customer provided
     * encryption key (CMK). </p>
     */
    inline DatastoreProperties& WithSseConfiguration(const SseConfiguration& value) { SetSseConfiguration(value); return *this;}

    /**
     * <p> The server-side encryption key configuration for a customer provided
     * encryption key (CMK). </p>
     */
    inline DatastoreProperties& WithSseConfiguration(SseConfiguration&& value) { SetSseConfiguration(std::move(value)); return *this;}


    /**
     * <p>The preloaded data configuration for the Data Store. Only data preloaded from
     * Synthea is supported.</p>
     */
    inline const PreloadDataConfig& GetPreloadDataConfig() const{ return m_preloadDataConfig; }

    /**
     * <p>The preloaded data configuration for the Data Store. Only data preloaded from
     * Synthea is supported.</p>
     */
    inline bool PreloadDataConfigHasBeenSet() const { return m_preloadDataConfigHasBeenSet; }

    /**
     * <p>The preloaded data configuration for the Data Store. Only data preloaded from
     * Synthea is supported.</p>
     */
    inline void SetPreloadDataConfig(const PreloadDataConfig& value) { m_preloadDataConfigHasBeenSet = true; m_preloadDataConfig = value; }

    /**
     * <p>The preloaded data configuration for the Data Store. Only data preloaded from
     * Synthea is supported.</p>
     */
    inline void SetPreloadDataConfig(PreloadDataConfig&& value) { m_preloadDataConfigHasBeenSet = true; m_preloadDataConfig = std::move(value); }

    /**
     * <p>The preloaded data configuration for the Data Store. Only data preloaded from
     * Synthea is supported.</p>
     */
    inline DatastoreProperties& WithPreloadDataConfig(const PreloadDataConfig& value) { SetPreloadDataConfig(value); return *this;}

    /**
     * <p>The preloaded data configuration for the Data Store. Only data preloaded from
     * Synthea is supported.</p>
     */
    inline DatastoreProperties& WithPreloadDataConfig(PreloadDataConfig&& value) { SetPreloadDataConfig(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
