﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ComprehendMedical
{
namespace Model
{
  class StartICD10CMInferenceJobResult
  {
  public:
    AWS_COMPREHENDMEDICAL_API StartICD10CMInferenceJobResult();
    AWS_COMPREHENDMEDICAL_API StartICD10CMInferenceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHENDMEDICAL_API StartICD10CMInferenceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier generated for the job. To get the status of a job, use this
     * identifier with the <code>StartICD10CMInferenceJob</code> operation.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline StartICD10CMInferenceJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline StartICD10CMInferenceJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline StartICD10CMInferenceJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartICD10CMInferenceJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartICD10CMInferenceJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartICD10CMInferenceJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
