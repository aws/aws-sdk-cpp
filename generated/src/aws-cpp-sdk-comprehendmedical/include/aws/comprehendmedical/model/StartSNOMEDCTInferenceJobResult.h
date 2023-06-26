/**
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
  class StartSNOMEDCTInferenceJobResult
  {
  public:
    AWS_COMPREHENDMEDICAL_API StartSNOMEDCTInferenceJobResult();
    AWS_COMPREHENDMEDICAL_API StartSNOMEDCTInferenceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHENDMEDICAL_API StartSNOMEDCTInferenceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The identifier generated for the job. To get the status of a job, use this
     * identifier with the StartSNOMEDCTInferenceJob operation. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p> The identifier generated for the job. To get the status of a job, use this
     * identifier with the StartSNOMEDCTInferenceJob operation. </p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p> The identifier generated for the job. To get the status of a job, use this
     * identifier with the StartSNOMEDCTInferenceJob operation. </p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p> The identifier generated for the job. To get the status of a job, use this
     * identifier with the StartSNOMEDCTInferenceJob operation. </p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p> The identifier generated for the job. To get the status of a job, use this
     * identifier with the StartSNOMEDCTInferenceJob operation. </p>
     */
    inline StartSNOMEDCTInferenceJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p> The identifier generated for the job. To get the status of a job, use this
     * identifier with the StartSNOMEDCTInferenceJob operation. </p>
     */
    inline StartSNOMEDCTInferenceJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p> The identifier generated for the job. To get the status of a job, use this
     * identifier with the StartSNOMEDCTInferenceJob operation. </p>
     */
    inline StartSNOMEDCTInferenceJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartSNOMEDCTInferenceJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartSNOMEDCTInferenceJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartSNOMEDCTInferenceJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_jobId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
