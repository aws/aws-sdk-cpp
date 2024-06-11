﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/SentimentDetectionJobProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class ListSentimentDetectionJobsResult
  {
  public:
    AWS_COMPREHEND_API ListSentimentDetectionJobsResult();
    AWS_COMPREHEND_API ListSentimentDetectionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListSentimentDetectionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline const Aws::Vector<SentimentDetectionJobProperties>& GetSentimentDetectionJobPropertiesList() const{ return m_sentimentDetectionJobPropertiesList; }
    inline void SetSentimentDetectionJobPropertiesList(const Aws::Vector<SentimentDetectionJobProperties>& value) { m_sentimentDetectionJobPropertiesList = value; }
    inline void SetSentimentDetectionJobPropertiesList(Aws::Vector<SentimentDetectionJobProperties>&& value) { m_sentimentDetectionJobPropertiesList = std::move(value); }
    inline ListSentimentDetectionJobsResult& WithSentimentDetectionJobPropertiesList(const Aws::Vector<SentimentDetectionJobProperties>& value) { SetSentimentDetectionJobPropertiesList(value); return *this;}
    inline ListSentimentDetectionJobsResult& WithSentimentDetectionJobPropertiesList(Aws::Vector<SentimentDetectionJobProperties>&& value) { SetSentimentDetectionJobPropertiesList(std::move(value)); return *this;}
    inline ListSentimentDetectionJobsResult& AddSentimentDetectionJobPropertiesList(const SentimentDetectionJobProperties& value) { m_sentimentDetectionJobPropertiesList.push_back(value); return *this; }
    inline ListSentimentDetectionJobsResult& AddSentimentDetectionJobPropertiesList(SentimentDetectionJobProperties&& value) { m_sentimentDetectionJobPropertiesList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSentimentDetectionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSentimentDetectionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSentimentDetectionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSentimentDetectionJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSentimentDetectionJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSentimentDetectionJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SentimentDetectionJobProperties> m_sentimentDetectionJobPropertiesList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
