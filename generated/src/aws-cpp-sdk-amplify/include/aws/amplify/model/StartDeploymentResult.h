﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/JobSummary.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p>The result structure for the start a deployment request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StartDeploymentResult">AWS
   * API Reference</a></p>
   */
  class StartDeploymentResult
  {
  public:
    AWS_AMPLIFY_API StartDeploymentResult();
    AWS_AMPLIFY_API StartDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API StartDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summary for the job. </p>
     */
    inline const JobSummary& GetJobSummary() const{ return m_jobSummary; }
    inline void SetJobSummary(const JobSummary& value) { m_jobSummary = value; }
    inline void SetJobSummary(JobSummary&& value) { m_jobSummary = std::move(value); }
    inline StartDeploymentResult& WithJobSummary(const JobSummary& value) { SetJobSummary(value); return *this;}
    inline StartDeploymentResult& WithJobSummary(JobSummary&& value) { SetJobSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    JobSummary m_jobSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
