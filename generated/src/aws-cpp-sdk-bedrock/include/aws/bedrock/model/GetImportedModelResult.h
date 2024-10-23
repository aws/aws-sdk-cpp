/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/ModelDataSource.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_BEDROCK_API GetImportedModelResult();
    AWS_BEDROCK_API GetImportedModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetImportedModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with this imported model.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }
    inline GetImportedModelResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline GetImportedModelResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline GetImportedModelResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the imported model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelName.assign(value); }
    inline GetImportedModelResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline GetImportedModelResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline GetImportedModelResult& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job name associated with the imported model.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobName.assign(value); }
    inline GetImportedModelResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline GetImportedModelResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline GetImportedModelResult& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job Amazon Resource Name (ARN) associated with the imported model.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }
    inline GetImportedModelResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline GetImportedModelResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline GetImportedModelResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source for this imported model.</p>
     */
    inline const ModelDataSource& GetModelDataSource() const{ return m_modelDataSource; }
    inline void SetModelDataSource(const ModelDataSource& value) { m_modelDataSource = value; }
    inline void SetModelDataSource(ModelDataSource&& value) { m_modelDataSource = std::move(value); }
    inline GetImportedModelResult& WithModelDataSource(const ModelDataSource& value) { SetModelDataSource(value); return *this;}
    inline GetImportedModelResult& WithModelDataSource(ModelDataSource&& value) { SetModelDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the imported model.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetImportedModelResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetImportedModelResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture of the imported model.</p>
     */
    inline const Aws::String& GetModelArchitecture() const{ return m_modelArchitecture; }
    inline void SetModelArchitecture(const Aws::String& value) { m_modelArchitecture = value; }
    inline void SetModelArchitecture(Aws::String&& value) { m_modelArchitecture = std::move(value); }
    inline void SetModelArchitecture(const char* value) { m_modelArchitecture.assign(value); }
    inline GetImportedModelResult& WithModelArchitecture(const Aws::String& value) { SetModelArchitecture(value); return *this;}
    inline GetImportedModelResult& WithModelArchitecture(Aws::String&& value) { SetModelArchitecture(std::move(value)); return *this;}
    inline GetImportedModelResult& WithModelArchitecture(const char* value) { SetModelArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The imported model is encrypted at rest using this key.</p>
     */
    inline const Aws::String& GetModelKmsKeyArn() const{ return m_modelKmsKeyArn; }
    inline void SetModelKmsKeyArn(const Aws::String& value) { m_modelKmsKeyArn = value; }
    inline void SetModelKmsKeyArn(Aws::String&& value) { m_modelKmsKeyArn = std::move(value); }
    inline void SetModelKmsKeyArn(const char* value) { m_modelKmsKeyArn.assign(value); }
    inline GetImportedModelResult& WithModelKmsKeyArn(const Aws::String& value) { SetModelKmsKeyArn(value); return *this;}
    inline GetImportedModelResult& WithModelKmsKeyArn(Aws::String&& value) { SetModelKmsKeyArn(std::move(value)); return *this;}
    inline GetImportedModelResult& WithModelKmsKeyArn(const char* value) { SetModelKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the imported model supports converse.</p>
     */
    inline bool GetInstructSupported() const{ return m_instructSupported; }
    inline void SetInstructSupported(bool value) { m_instructSupported = value; }
    inline GetImportedModelResult& WithInstructSupported(bool value) { SetInstructSupported(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetImportedModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetImportedModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetImportedModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;

    Aws::String m_modelName;

    Aws::String m_jobName;

    Aws::String m_jobArn;

    ModelDataSource m_modelDataSource;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_modelArchitecture;

    Aws::String m_modelKmsKeyArn;

    bool m_instructSupported;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
