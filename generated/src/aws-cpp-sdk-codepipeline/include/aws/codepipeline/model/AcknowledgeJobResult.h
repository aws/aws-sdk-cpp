/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/JobStatus.h>
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
namespace CodePipeline
{
namespace Model
{
  /**
   * <p>Represents the output of an AcknowledgeJob action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/AcknowledgeJobOutput">AWS
   * API Reference</a></p>
   */
  class AcknowledgeJobResult
  {
  public:
    AWS_CODEPIPELINE_API AcknowledgeJobResult();
    AWS_CODEPIPELINE_API AcknowledgeJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API AcknowledgeJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Whether the job worker has received the specified job.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Whether the job worker has received the specified job.</p>
     */
    inline void SetStatus(const JobStatus& value) { m_status = value; }

    /**
     * <p>Whether the job worker has received the specified job.</p>
     */
    inline void SetStatus(JobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Whether the job worker has received the specified job.</p>
     */
    inline AcknowledgeJobResult& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Whether the job worker has received the specified job.</p>
     */
    inline AcknowledgeJobResult& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    JobStatus m_status;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
