/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/HealthLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/model/InputDataConfig.h>
#include <aws/healthlake/model/OutputDataConfig.h>
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
  class StartFHIRImportJobRequest : public HealthLakeRequest
  {
  public:
    AWS_HEALTHLAKE_API StartFHIRImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartFHIRImportJob"; }

    AWS_HEALTHLAKE_API Aws::String SerializePayload() const override;

    AWS_HEALTHLAKE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the FHIR Import job in the StartFHIRImport job request.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the FHIR Import job in the StartFHIRImport job request.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the FHIR Import job in the StartFHIRImport job request.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the FHIR Import job in the StartFHIRImport job request.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the FHIR Import job in the StartFHIRImport job request.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the FHIR Import job in the StartFHIRImport job request.</p>
     */
    inline StartFHIRImportJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the FHIR Import job in the StartFHIRImport job request.</p>
     */
    inline StartFHIRImportJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the FHIR Import job in the StartFHIRImport job request.</p>
     */
    inline StartFHIRImportJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The input properties of the FHIR Import job in the StartFHIRImport job
     * request.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>The input properties of the FHIR Import job in the StartFHIRImport job
     * request.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>The input properties of the FHIR Import job in the StartFHIRImport job
     * request.</p>
     */
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>The input properties of the FHIR Import job in the StartFHIRImport job
     * request.</p>
     */
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>The input properties of the FHIR Import job in the StartFHIRImport job
     * request.</p>
     */
    inline StartFHIRImportJobRequest& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>The input properties of the FHIR Import job in the StartFHIRImport job
     * request.</p>
     */
    inline StartFHIRImportJobRequest& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    
    inline const OutputDataConfig& GetJobOutputDataConfig() const{ return m_jobOutputDataConfig; }

    
    inline bool JobOutputDataConfigHasBeenSet() const { return m_jobOutputDataConfigHasBeenSet; }

    
    inline void SetJobOutputDataConfig(const OutputDataConfig& value) { m_jobOutputDataConfigHasBeenSet = true; m_jobOutputDataConfig = value; }

    
    inline void SetJobOutputDataConfig(OutputDataConfig&& value) { m_jobOutputDataConfigHasBeenSet = true; m_jobOutputDataConfig = std::move(value); }

    
    inline StartFHIRImportJobRequest& WithJobOutputDataConfig(const OutputDataConfig& value) { SetJobOutputDataConfig(value); return *this;}

    
    inline StartFHIRImportJobRequest& WithJobOutputDataConfig(OutputDataConfig&& value) { SetJobOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The AWS-generated Data Store ID.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }

    /**
     * <p>The AWS-generated Data Store ID.</p>
     */
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }

    /**
     * <p>The AWS-generated Data Store ID.</p>
     */
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }

    /**
     * <p>The AWS-generated Data Store ID.</p>
     */
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }

    /**
     * <p>The AWS-generated Data Store ID.</p>
     */
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }

    /**
     * <p>The AWS-generated Data Store ID.</p>
     */
    inline StartFHIRImportJobRequest& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}

    /**
     * <p>The AWS-generated Data Store ID.</p>
     */
    inline StartFHIRImportJobRequest& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}

    /**
     * <p>The AWS-generated Data Store ID.</p>
     */
    inline StartFHIRImportJobRequest& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that gives Amazon HealthLake access
     * permission.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that gives Amazon HealthLake access
     * permission.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that gives Amazon HealthLake access
     * permission.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that gives Amazon HealthLake access
     * permission.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that gives Amazon HealthLake access
     * permission.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that gives Amazon HealthLake access
     * permission.</p>
     */
    inline StartFHIRImportJobRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that gives Amazon HealthLake access
     * permission.</p>
     */
    inline StartFHIRImportJobRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that gives Amazon HealthLake access
     * permission.</p>
     */
    inline StartFHIRImportJobRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


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
    inline StartFHIRImportJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline StartFHIRImportJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Optional user provided token used for ensuring idempotency.</p>
     */
    inline StartFHIRImportJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    OutputDataConfig m_jobOutputDataConfig;
    bool m_jobOutputDataConfigHasBeenSet = false;

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
