﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/JobSummary.h>
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
   * <p> The result structure for the run job request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StartJobResult">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API StartJobResult
  {
  public:
    StartJobResult();
    StartJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The summary for the job. </p>
     */
    inline const JobSummary& GetJobSummary() const{ return m_jobSummary; }

    /**
     * <p> The summary for the job. </p>
     */
    inline void SetJobSummary(const JobSummary& value) { m_jobSummary = value; }

    /**
     * <p> The summary for the job. </p>
     */
    inline void SetJobSummary(JobSummary&& value) { m_jobSummary = std::move(value); }

    /**
     * <p> The summary for the job. </p>
     */
    inline StartJobResult& WithJobSummary(const JobSummary& value) { SetJobSummary(value); return *this;}

    /**
     * <p> The summary for the job. </p>
     */
    inline StartJobResult& WithJobSummary(JobSummary&& value) { SetJobSummary(std::move(value)); return *this;}

  private:

    JobSummary m_jobSummary;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
