﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/IdMappingJobOutputSource.h>
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
namespace EntityResolution
{
namespace Model
{
  class StartIdMappingJobResult
  {
  public:
    AWS_ENTITYRESOLUTION_API StartIdMappingJobResult();
    AWS_ENTITYRESOLUTION_API StartIdMappingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API StartIdMappingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline StartIdMappingJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline StartIdMappingJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline StartIdMappingJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>OutputSource</code> objects.</p>
     */
    inline const Aws::Vector<IdMappingJobOutputSource>& GetOutputSourceConfig() const{ return m_outputSourceConfig; }
    inline void SetOutputSourceConfig(const Aws::Vector<IdMappingJobOutputSource>& value) { m_outputSourceConfig = value; }
    inline void SetOutputSourceConfig(Aws::Vector<IdMappingJobOutputSource>&& value) { m_outputSourceConfig = std::move(value); }
    inline StartIdMappingJobResult& WithOutputSourceConfig(const Aws::Vector<IdMappingJobOutputSource>& value) { SetOutputSourceConfig(value); return *this;}
    inline StartIdMappingJobResult& WithOutputSourceConfig(Aws::Vector<IdMappingJobOutputSource>&& value) { SetOutputSourceConfig(std::move(value)); return *this;}
    inline StartIdMappingJobResult& AddOutputSourceConfig(const IdMappingJobOutputSource& value) { m_outputSourceConfig.push_back(value); return *this; }
    inline StartIdMappingJobResult& AddOutputSourceConfig(IdMappingJobOutputSource&& value) { m_outputSourceConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartIdMappingJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartIdMappingJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartIdMappingJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;

    Aws::Vector<IdMappingJobOutputSource> m_outputSourceConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
