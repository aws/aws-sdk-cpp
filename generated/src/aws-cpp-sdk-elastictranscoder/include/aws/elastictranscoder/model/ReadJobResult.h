/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/model/Job.h>
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
namespace ElasticTranscoder
{
namespace Model
{
  /**
   * <p>The <code>ReadJobResponse</code> structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ReadJobResponse">AWS
   * API Reference</a></p>
   */
  class ReadJobResult
  {
  public:
    AWS_ELASTICTRANSCODER_API ReadJobResult();
    AWS_ELASTICTRANSCODER_API ReadJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICTRANSCODER_API ReadJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A section of the response body that provides information about the job.</p>
     */
    inline const Job& GetJob() const{ return m_job; }

    /**
     * <p>A section of the response body that provides information about the job.</p>
     */
    inline void SetJob(const Job& value) { m_job = value; }

    /**
     * <p>A section of the response body that provides information about the job.</p>
     */
    inline void SetJob(Job&& value) { m_job = std::move(value); }

    /**
     * <p>A section of the response body that provides information about the job.</p>
     */
    inline ReadJobResult& WithJob(const Job& value) { SetJob(value); return *this;}

    /**
     * <p>A section of the response body that provides information about the job.</p>
     */
    inline ReadJobResult& WithJob(Job&& value) { SetJob(std::move(value)); return *this;}

  private:

    Job m_job;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
