﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/EntitiesDetectionJobProperties.h>
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
  class ListEntitiesDetectionJobsResult
  {
  public:
    AWS_COMPREHEND_API ListEntitiesDetectionJobsResult();
    AWS_COMPREHEND_API ListEntitiesDetectionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListEntitiesDetectionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline const Aws::Vector<EntitiesDetectionJobProperties>& GetEntitiesDetectionJobPropertiesList() const{ return m_entitiesDetectionJobPropertiesList; }
    inline void SetEntitiesDetectionJobPropertiesList(const Aws::Vector<EntitiesDetectionJobProperties>& value) { m_entitiesDetectionJobPropertiesList = value; }
    inline void SetEntitiesDetectionJobPropertiesList(Aws::Vector<EntitiesDetectionJobProperties>&& value) { m_entitiesDetectionJobPropertiesList = std::move(value); }
    inline ListEntitiesDetectionJobsResult& WithEntitiesDetectionJobPropertiesList(const Aws::Vector<EntitiesDetectionJobProperties>& value) { SetEntitiesDetectionJobPropertiesList(value); return *this;}
    inline ListEntitiesDetectionJobsResult& WithEntitiesDetectionJobPropertiesList(Aws::Vector<EntitiesDetectionJobProperties>&& value) { SetEntitiesDetectionJobPropertiesList(std::move(value)); return *this;}
    inline ListEntitiesDetectionJobsResult& AddEntitiesDetectionJobPropertiesList(const EntitiesDetectionJobProperties& value) { m_entitiesDetectionJobPropertiesList.push_back(value); return *this; }
    inline ListEntitiesDetectionJobsResult& AddEntitiesDetectionJobPropertiesList(EntitiesDetectionJobProperties&& value) { m_entitiesDetectionJobPropertiesList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEntitiesDetectionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEntitiesDetectionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEntitiesDetectionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEntitiesDetectionJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEntitiesDetectionJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEntitiesDetectionJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EntitiesDetectionJobProperties> m_entitiesDetectionJobPropertiesList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
