/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutvision/model/ModelPackagingJobMetadata.h>
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
namespace LookoutforVision
{
namespace Model
{
  class ListModelPackagingJobsResult
  {
  public:
    AWS_LOOKOUTFORVISION_API ListModelPackagingJobsResult() = default;
    AWS_LOOKOUTFORVISION_API ListModelPackagingJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API ListModelPackagingJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of the model packaging jobs created for the specified Amazon Lookout
     * for Vision project. </p>
     */
    inline const Aws::Vector<ModelPackagingJobMetadata>& GetModelPackagingJobs() const { return m_modelPackagingJobs; }
    template<typename ModelPackagingJobsT = Aws::Vector<ModelPackagingJobMetadata>>
    void SetModelPackagingJobs(ModelPackagingJobsT&& value) { m_modelPackagingJobsHasBeenSet = true; m_modelPackagingJobs = std::forward<ModelPackagingJobsT>(value); }
    template<typename ModelPackagingJobsT = Aws::Vector<ModelPackagingJobMetadata>>
    ListModelPackagingJobsResult& WithModelPackagingJobs(ModelPackagingJobsT&& value) { SetModelPackagingJobs(std::forward<ModelPackagingJobsT>(value)); return *this;}
    template<typename ModelPackagingJobsT = ModelPackagingJobMetadata>
    ListModelPackagingJobsResult& AddModelPackagingJobs(ModelPackagingJobsT&& value) { m_modelPackagingJobsHasBeenSet = true; m_modelPackagingJobs.emplace_back(std::forward<ModelPackagingJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Lookout for Vision returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelPackagingJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListModelPackagingJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ModelPackagingJobMetadata> m_modelPackagingJobs;
    bool m_modelPackagingJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
