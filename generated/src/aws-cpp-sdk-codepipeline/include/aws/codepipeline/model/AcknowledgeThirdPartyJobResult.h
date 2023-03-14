/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/JobStatus.h>
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
namespace CodePipeline
{
namespace Model
{
  /**
   * <p>Represents the output of an AcknowledgeThirdPartyJob action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/AcknowledgeThirdPartyJobOutput">AWS
   * API Reference</a></p>
   */
  class AcknowledgeThirdPartyJobResult
  {
  public:
    AWS_CODEPIPELINE_API AcknowledgeThirdPartyJobResult();
    AWS_CODEPIPELINE_API AcknowledgeThirdPartyJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API AcknowledgeThirdPartyJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status information for the third party job, if any.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status information for the third party job, if any.</p>
     */
    inline void SetStatus(const JobStatus& value) { m_status = value; }

    /**
     * <p>The status information for the third party job, if any.</p>
     */
    inline void SetStatus(JobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status information for the third party job, if any.</p>
     */
    inline AcknowledgeThirdPartyJobResult& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status information for the third party job, if any.</p>
     */
    inline AcknowledgeThirdPartyJobResult& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AcknowledgeThirdPartyJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AcknowledgeThirdPartyJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AcknowledgeThirdPartyJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    JobStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
