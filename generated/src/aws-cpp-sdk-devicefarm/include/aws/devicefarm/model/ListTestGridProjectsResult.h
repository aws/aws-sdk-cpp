﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/TestGridProject.h>
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
namespace DeviceFarm
{
namespace Model
{
  class ListTestGridProjectsResult
  {
  public:
    AWS_DEVICEFARM_API ListTestGridProjectsResult();
    AWS_DEVICEFARM_API ListTestGridProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListTestGridProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of TestGridProjects, based on a
     * <a>ListTestGridProjectsRequest</a>.</p>
     */
    inline const Aws::Vector<TestGridProject>& GetTestGridProjects() const{ return m_testGridProjects; }
    inline void SetTestGridProjects(const Aws::Vector<TestGridProject>& value) { m_testGridProjects = value; }
    inline void SetTestGridProjects(Aws::Vector<TestGridProject>&& value) { m_testGridProjects = std::move(value); }
    inline ListTestGridProjectsResult& WithTestGridProjects(const Aws::Vector<TestGridProject>& value) { SetTestGridProjects(value); return *this;}
    inline ListTestGridProjectsResult& WithTestGridProjects(Aws::Vector<TestGridProject>&& value) { SetTestGridProjects(std::move(value)); return *this;}
    inline ListTestGridProjectsResult& AddTestGridProjects(const TestGridProject& value) { m_testGridProjects.push_back(value); return *this; }
    inline ListTestGridProjectsResult& AddTestGridProjects(TestGridProject&& value) { m_testGridProjects.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Used for pagination. Pass into <a>ListTestGridProjects</a> to get more
     * results in a paginated request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTestGridProjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTestGridProjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTestGridProjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTestGridProjectsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTestGridProjectsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTestGridProjectsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TestGridProject> m_testGridProjects;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
