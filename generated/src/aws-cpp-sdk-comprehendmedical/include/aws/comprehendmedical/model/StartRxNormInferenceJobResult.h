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
  class StartRxNormInferenceJobResult
  {
  public:
    AWS_COMPREHENDMEDICAL_API StartRxNormInferenceJobResult();
    AWS_COMPREHENDMEDICAL_API StartRxNormInferenceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHENDMEDICAL_API StartRxNormInferenceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier of the job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The identifier of the job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The identifier of the job.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The identifier of the job.</p>
     */
    inline StartRxNormInferenceJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier of the job.</p>
     */
    inline StartRxNormInferenceJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the job.</p>
     */
    inline StartRxNormInferenceJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_jobId;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
