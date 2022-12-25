/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/HealthLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/model/FHIRVersion.h>
#include <aws/healthlake/model/SseConfiguration.h>
#include <aws/healthlake/model/PreloadDataConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/healthlake/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace HealthLake
{
namespace Model
{

  /**
   */
  class CreateFHIRDatastoreRequest : public HealthLakeRequest
  {
  public:
    AWS_HEALTHLAKE_API CreateFHIRDatastoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFHIRDatastore"; }

    AWS_HEALTHLAKE_API Aws::String SerializePayload() const override;

    AWS_HEALTHLAKE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user generated name for the Data Store.</p>
     */
    inline const Aws::String& GetDatastoreName() const{ return m_datastoreName; }

    /**
     * <p>The user generated name for the Data Store.</p>
     */
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }

    /**
     * <p>The user generated name for the Data Store.</p>
     */
    inline void SetDatastoreName(const Aws::String& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = value; }

    /**
     * <p>The user generated name for the Data Store.</p>
     */
    inline void SetDatastoreName(Aws::String&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::move(value); }

    /**
     * <p>The user generated name for the Data Store.</p>
     */
    inline void SetDatastoreName(const char* value) { m_datastoreNameHasBeenSet = true; m_datastoreName.assign(value); }

    /**
     * <p>The user generated name for the Data Store.</p>
     */
    inline CreateFHIRDatastoreRequest& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}

    /**
     * <p>The user generated name for the Data Store.</p>
     */
    inline CreateFHIRDatastoreRequest& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}

    /**
     * <p>The user generated name for the Data Store.</p>
     */
    inline CreateFHIRDatastoreRequest& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}


    /**
     * <p>The FHIR version of the Data Store. The only supported version is R4.</p>
     */
    inline const FHIRVersion& GetDatastoreTypeVersion() const{ return m_datastoreTypeVersion; }

    /**
     * <p>The FHIR version of the Data Store. The only supported version is R4.</p>
     */
    inline bool DatastoreTypeVersionHasBeenSet() const { return m_datastoreTypeVersionHasBeenSet; }

    /**
     * <p>The FHIR version of the Data Store. The only supported version is R4.</p>
     */
    inline void SetDatastoreTypeVersion(const FHIRVersion& value) { m_datastoreTypeVersionHasBeenSet = true; m_datastoreTypeVersion = value; }

    /**
     * <p>The FHIR version of the Data Store. The only supported version is R4.</p>
     */
    inline void SetDatastoreTypeVersion(FHIRVersion&& value) { m_datastoreTypeVersionHasBeenSet = true; m_datastoreTypeVersion = std::move(value); }

    /**
     * <p>The FHIR version of the Data Store. The only supported version is R4.</p>
     */
    inline CreateFHIRDatastoreRequest& WithDatastoreTypeVersion(const FHIRVersion& value) { SetDatastoreTypeVersion(value); return *this;}

    /**
     * <p>The FHIR version of the Data Store. The only supported version is R4.</p>
     */
    inline CreateFHIRDatastoreRequest& WithDatastoreTypeVersion(FHIRVersion&& value) { SetDatastoreTypeVersion(std::move(value)); return *this;}


    /**
     * <p> The server-side encryption key configuration for a customer provided
     * encryption key specified for creating a Data Store. </p>
     */
    inline const SseConfiguration& GetSseConfiguration() const{ return m_sseConfiguration; }

    /**
     * <p> The server-side encryption key configuration for a customer provided
     * encryption key specified for creating a Data Store. </p>
     */
    inline bool SseConfigurationHasBeenSet() const { return m_sseConfigurationHasBeenSet; }

    /**
     * <p> The server-side encryption key configuration for a customer provided
     * encryption key specified for creating a Data Store. </p>
     */
    inline void SetSseConfiguration(const SseConfiguration& value) { m_sseConfigurationHasBeenSet = true; m_sseConfiguration = value; }

    /**
     * <p> The server-side encryption key configuration for a customer provided
     * encryption key specified for creating a Data Store. </p>
     */
    inline void SetSseConfiguration(SseConfiguration&& value) { m_sseConfigurationHasBeenSet = true; m_sseConfiguration = std::move(value); }

    /**
     * <p> The server-side encryption key configuration for a customer provided
     * encryption key specified for creating a Data Store. </p>
     */
    inline CreateFHIRDatastoreRequest& WithSseConfiguration(const SseConfiguration& value) { SetSseConfiguration(value); return *this;}

    /**
     * <p> The server-side encryption key configuration for a customer provided
     * encryption key specified for creating a Data Store. </p>
     */
    inline CreateFHIRDatastoreRequest& WithSseConfiguration(SseConfiguration&& value) { SetSseConfiguration(std::move(value)); return *this;}


    /**
     * <p>Optional parameter to preload data upon creation of the Data Store.
     * Currently, the only supported preloaded data is synthetic data generated from
     * Synthea.</p>
     */
    inline const PreloadDataConfig& GetPreloadDataConfig() const{ return m_preloadDataConfig; }

    /**
     * <p>Optional parameter to preload data upon creation of the Data Store.
     * Currently, the only supported preloaded data is synthetic data generated from
     * Synthea.</p>
     */
    inline bool PreloadDataConfigHasBeenSet() const { return m_preloadDataConfigHasBeenSet; }

    /**
     * <p>Optional parameter to preload data upon creation of the Data Store.
     * Currently, the only supported preloaded data is synthetic data generated from
     * Synthea.</p>
     */
    inline void SetPreloadDataConfig(const PreloadDataConfig& value) { m_preloadDataConfigHasBeenSet = true; m_preloadDataConfig = value; }

    /**
     * <p>Optional parameter to preload data upon creation of the Data Store.
     * Currently, the only supported preloaded data is synthetic data generated from
     * Synthea.</p>
     */
    inline void SetPreloadDataConfig(PreloadDataConfig&& value) { m_preloadDataConfigHasBeenSet = true; m_preloadDataConfig = std::move(value); }

    /**
     * <p>Optional parameter to preload data upon creation of the Data Store.
     * Currently, the only supported preloaded data is synthetic data generated from
     * Synthea.</p>
     */
    inline CreateFHIRDatastoreRequest& WithPreloadDataConfig(const PreloadDataConfig& value) { SetPreloadDataConfig(value); return *this;}

    /**
     * <p>Optional parameter to preload data upon creation of the Data Store.
     * Currently, the only supported preloaded data is synthetic data generated from
     * Synthea.</p>
     */
    inline CreateFHIRDatastoreRequest& WithPreloadDataConfig(PreloadDataConfig&& value) { SetPreloadDataConfig(std::move(value)); return *this;}


    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline CreateFHIRDatastoreRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline CreateFHIRDatastoreRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline CreateFHIRDatastoreRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p> Resource tags that are applied to a Data Store when it is created. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> Resource tags that are applied to a Data Store when it is created. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> Resource tags that are applied to a Data Store when it is created. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> Resource tags that are applied to a Data Store when it is created. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> Resource tags that are applied to a Data Store when it is created. </p>
     */
    inline CreateFHIRDatastoreRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> Resource tags that are applied to a Data Store when it is created. </p>
     */
    inline CreateFHIRDatastoreRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> Resource tags that are applied to a Data Store when it is created. </p>
     */
    inline CreateFHIRDatastoreRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> Resource tags that are applied to a Data Store when it is created. </p>
     */
    inline CreateFHIRDatastoreRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet = false;

    FHIRVersion m_datastoreTypeVersion;
    bool m_datastoreTypeVersionHasBeenSet = false;

    SseConfiguration m_sseConfiguration;
    bool m_sseConfigurationHasBeenSet = false;

    PreloadDataConfig m_preloadDataConfig;
    bool m_preloadDataConfigHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
