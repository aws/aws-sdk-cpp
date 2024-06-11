﻿/**
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
    AWS_LOOKOUTFORVISION_API ListModelPackagingJobsResult();
    AWS_LOOKOUTFORVISION_API ListModelPackagingJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API ListModelPackagingJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of the model packaging jobs created for the specified Amazon Lookout
     * for Vision project. </p>
     */
    inline const Aws::Vector<ModelPackagingJobMetadata>& GetModelPackagingJobs() const{ return m_modelPackagingJobs; }
    inline void SetModelPackagingJobs(const Aws::Vector<ModelPackagingJobMetadata>& value) { m_modelPackagingJobs = value; }
    inline void SetModelPackagingJobs(Aws::Vector<ModelPackagingJobMetadata>&& value) { m_modelPackagingJobs = std::move(value); }
    inline ListModelPackagingJobsResult& WithModelPackagingJobs(const Aws::Vector<ModelPackagingJobMetadata>& value) { SetModelPackagingJobs(value); return *this;}
    inline ListModelPackagingJobsResult& WithModelPackagingJobs(Aws::Vector<ModelPackagingJobMetadata>&& value) { SetModelPackagingJobs(std::move(value)); return *this;}
    inline ListModelPackagingJobsResult& AddModelPackagingJobs(const ModelPackagingJobMetadata& value) { m_modelPackagingJobs.push_back(value); return *this; }
    inline ListModelPackagingJobsResult& AddModelPackagingJobs(ModelPackagingJobMetadata&& value) { m_modelPackagingJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Lookout for Vision returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListModelPackagingJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListModelPackagingJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListModelPackagingJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListModelPackagingJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListModelPackagingJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListModelPackagingJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ModelPackagingJobMetadata> m_modelPackagingJobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
