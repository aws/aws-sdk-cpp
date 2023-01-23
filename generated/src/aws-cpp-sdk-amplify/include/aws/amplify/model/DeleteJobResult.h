/**
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
   * <p> The result structure for the delete job request. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteJobResult">AWS
   * API Reference</a></p>
   */
  class DeleteJobResult
  {
  public:
    AWS_AMPLIFY_API DeleteJobResult();
    AWS_AMPLIFY_API DeleteJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API DeleteJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const JobSummary& GetJobSummary() const{ return m_jobSummary; }

    
    inline void SetJobSummary(const JobSummary& value) { m_jobSummary = value; }

    
    inline void SetJobSummary(JobSummary&& value) { m_jobSummary = std::move(value); }

    
    inline DeleteJobResult& WithJobSummary(const JobSummary& value) { SetJobSummary(value); return *this;}

    
    inline DeleteJobResult& WithJobSummary(JobSummary&& value) { SetJobSummary(std::move(value)); return *this;}

  private:

    JobSummary m_jobSummary;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
