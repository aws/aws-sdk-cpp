﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/Build.h>
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
namespace CodeBuild
{
namespace Model
{
  class BatchGetBuildsResult
  {
  public:
    AWS_CODEBUILD_API BatchGetBuildsResult();
    AWS_CODEBUILD_API BatchGetBuildsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API BatchGetBuildsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the requested builds.</p>
     */
    inline const Aws::Vector<Build>& GetBuilds() const{ return m_builds; }
    inline void SetBuilds(const Aws::Vector<Build>& value) { m_builds = value; }
    inline void SetBuilds(Aws::Vector<Build>&& value) { m_builds = std::move(value); }
    inline BatchGetBuildsResult& WithBuilds(const Aws::Vector<Build>& value) { SetBuilds(value); return *this;}
    inline BatchGetBuildsResult& WithBuilds(Aws::Vector<Build>&& value) { SetBuilds(std::move(value)); return *this;}
    inline BatchGetBuildsResult& AddBuilds(const Build& value) { m_builds.push_back(value); return *this; }
    inline BatchGetBuildsResult& AddBuilds(Build&& value) { m_builds.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of builds for which information could not be found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBuildsNotFound() const{ return m_buildsNotFound; }
    inline void SetBuildsNotFound(const Aws::Vector<Aws::String>& value) { m_buildsNotFound = value; }
    inline void SetBuildsNotFound(Aws::Vector<Aws::String>&& value) { m_buildsNotFound = std::move(value); }
    inline BatchGetBuildsResult& WithBuildsNotFound(const Aws::Vector<Aws::String>& value) { SetBuildsNotFound(value); return *this;}
    inline BatchGetBuildsResult& WithBuildsNotFound(Aws::Vector<Aws::String>&& value) { SetBuildsNotFound(std::move(value)); return *this;}
    inline BatchGetBuildsResult& AddBuildsNotFound(const Aws::String& value) { m_buildsNotFound.push_back(value); return *this; }
    inline BatchGetBuildsResult& AddBuildsNotFound(Aws::String&& value) { m_buildsNotFound.push_back(std::move(value)); return *this; }
    inline BatchGetBuildsResult& AddBuildsNotFound(const char* value) { m_buildsNotFound.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetBuildsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetBuildsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetBuildsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Build> m_builds;

    Aws::Vector<Aws::String> m_buildsNotFound;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
