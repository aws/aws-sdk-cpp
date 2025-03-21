/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/ModelDataSource.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/CustomModelUnits.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Bedrock
{
namespace Model
{
  class GetImportedModelResult
  {
  public:
    AWS_BEDROCK_API GetImportedModelResult() = default;
    AWS_BEDROCK_API GetImportedModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetImportedModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with this imported model.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    GetImportedModelResult& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the imported model.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    GetImportedModelResult& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job name associated with the imported model.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    GetImportedModelResult& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job Amazon Resource Name (ARN) associated with the imported model.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    GetImportedModelResult& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source for this imported model.</p>
     */
    inline const ModelDataSource& GetModelDataSource() const { return m_modelDataSource; }
    template<typename ModelDataSourceT = ModelDataSource>
    void SetModelDataSource(ModelDataSourceT&& value) { m_modelDataSourceHasBeenSet = true; m_modelDataSource = std::forward<ModelDataSourceT>(value); }
    template<typename ModelDataSourceT = ModelDataSource>
    GetImportedModelResult& WithModelDataSource(ModelDataSourceT&& value) { SetModelDataSource(std::forward<ModelDataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the imported model.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetImportedModelResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture of the imported model.</p>
     */
    inline const Aws::String& GetModelArchitecture() const { return m_modelArchitecture; }
    template<typename ModelArchitectureT = Aws::String>
    void SetModelArchitecture(ModelArchitectureT&& value) { m_modelArchitectureHasBeenSet = true; m_modelArchitecture = std::forward<ModelArchitectureT>(value); }
    template<typename ModelArchitectureT = Aws::String>
    GetImportedModelResult& WithModelArchitecture(ModelArchitectureT&& value) { SetModelArchitecture(std::forward<ModelArchitectureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The imported model is encrypted at rest using this key.</p>
     */
    inline const Aws::String& GetModelKmsKeyArn() const { return m_modelKmsKeyArn; }
    template<typename ModelKmsKeyArnT = Aws::String>
    void SetModelKmsKeyArn(ModelKmsKeyArnT&& value) { m_modelKmsKeyArnHasBeenSet = true; m_modelKmsKeyArn = std::forward<ModelKmsKeyArnT>(value); }
    template<typename ModelKmsKeyArnT = Aws::String>
    GetImportedModelResult& WithModelKmsKeyArn(ModelKmsKeyArnT&& value) { SetModelKmsKeyArn(std::forward<ModelKmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the imported model supports converse.</p>
     */
    inline bool GetInstructSupported() const { return m_instructSupported; }
    inline void SetInstructSupported(bool value) { m_instructSupportedHasBeenSet = true; m_instructSupported = value; }
    inline GetImportedModelResult& WithInstructSupported(bool value) { SetInstructSupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the hardware utilization for a single copy of the
     * model.</p>
     */
    inline const CustomModelUnits& GetCustomModelUnits() const { return m_customModelUnits; }
    template<typename CustomModelUnitsT = CustomModelUnits>
    void SetCustomModelUnits(CustomModelUnitsT&& value) { m_customModelUnitsHasBeenSet = true; m_customModelUnits = std::forward<CustomModelUnitsT>(value); }
    template<typename CustomModelUnitsT = CustomModelUnits>
    GetImportedModelResult& WithCustomModelUnits(CustomModelUnitsT&& value) { SetCustomModelUnits(std::forward<CustomModelUnitsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetImportedModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    ModelDataSource m_modelDataSource;
    bool m_modelDataSourceHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_modelArchitecture;
    bool m_modelArchitectureHasBeenSet = false;

    Aws::String m_modelKmsKeyArn;
    bool m_modelKmsKeyArnHasBeenSet = false;

    bool m_instructSupported{false};
    bool m_instructSupportedHasBeenSet = false;

    CustomModelUnits m_customModelUnits;
    bool m_customModelUnitsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
