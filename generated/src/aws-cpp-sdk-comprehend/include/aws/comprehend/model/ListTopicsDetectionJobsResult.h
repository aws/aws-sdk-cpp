﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/TopicsDetectionJobProperties.h>
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
  class ListTopicsDetectionJobsResult
  {
  public:
    AWS_COMPREHEND_API ListTopicsDetectionJobsResult();
    AWS_COMPREHEND_API ListTopicsDetectionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListTopicsDetectionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline const Aws::Vector<TopicsDetectionJobProperties>& GetTopicsDetectionJobPropertiesList() const{ return m_topicsDetectionJobPropertiesList; }
    inline void SetTopicsDetectionJobPropertiesList(const Aws::Vector<TopicsDetectionJobProperties>& value) { m_topicsDetectionJobPropertiesList = value; }
    inline void SetTopicsDetectionJobPropertiesList(Aws::Vector<TopicsDetectionJobProperties>&& value) { m_topicsDetectionJobPropertiesList = std::move(value); }
    inline ListTopicsDetectionJobsResult& WithTopicsDetectionJobPropertiesList(const Aws::Vector<TopicsDetectionJobProperties>& value) { SetTopicsDetectionJobPropertiesList(value); return *this;}
    inline ListTopicsDetectionJobsResult& WithTopicsDetectionJobPropertiesList(Aws::Vector<TopicsDetectionJobProperties>&& value) { SetTopicsDetectionJobPropertiesList(std::move(value)); return *this;}
    inline ListTopicsDetectionJobsResult& AddTopicsDetectionJobPropertiesList(const TopicsDetectionJobProperties& value) { m_topicsDetectionJobPropertiesList.push_back(value); return *this; }
    inline ListTopicsDetectionJobsResult& AddTopicsDetectionJobPropertiesList(TopicsDetectionJobProperties&& value) { m_topicsDetectionJobPropertiesList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTopicsDetectionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTopicsDetectionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTopicsDetectionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTopicsDetectionJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTopicsDetectionJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTopicsDetectionJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TopicsDetectionJobProperties> m_topicsDetectionJobPropertiesList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
