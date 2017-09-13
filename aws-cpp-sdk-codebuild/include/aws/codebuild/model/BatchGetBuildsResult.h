/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/Build.h>
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
namespace CodeBuild
{
namespace Model
{
  class AWS_CODEBUILD_API BatchGetBuildsResult
  {
  public:
    BatchGetBuildsResult();
    BatchGetBuildsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetBuildsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the requested builds.</p>
     */
    inline const Aws::Vector<Build>& GetBuilds() const{ return m_builds; }

    /**
     * <p>Information about the requested builds.</p>
     */
    inline void SetBuilds(const Aws::Vector<Build>& value) { m_builds = value; }

    /**
     * <p>Information about the requested builds.</p>
     */
    inline void SetBuilds(Aws::Vector<Build>&& value) { m_builds = std::move(value); }

    /**
     * <p>Information about the requested builds.</p>
     */
    inline BatchGetBuildsResult& WithBuilds(const Aws::Vector<Build>& value) { SetBuilds(value); return *this;}

    /**
     * <p>Information about the requested builds.</p>
     */
    inline BatchGetBuildsResult& WithBuilds(Aws::Vector<Build>&& value) { SetBuilds(std::move(value)); return *this;}

    /**
     * <p>Information about the requested builds.</p>
     */
    inline BatchGetBuildsResult& AddBuilds(const Build& value) { m_builds.push_back(value); return *this; }

    /**
     * <p>Information about the requested builds.</p>
     */
    inline BatchGetBuildsResult& AddBuilds(Build&& value) { m_builds.push_back(std::move(value)); return *this; }


    /**
     * <p>The IDs of builds for which information could not be found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBuildsNotFound() const{ return m_buildsNotFound; }

    /**
     * <p>The IDs of builds for which information could not be found.</p>
     */
    inline void SetBuildsNotFound(const Aws::Vector<Aws::String>& value) { m_buildsNotFound = value; }

    /**
     * <p>The IDs of builds for which information could not be found.</p>
     */
    inline void SetBuildsNotFound(Aws::Vector<Aws::String>&& value) { m_buildsNotFound = std::move(value); }

    /**
     * <p>The IDs of builds for which information could not be found.</p>
     */
    inline BatchGetBuildsResult& WithBuildsNotFound(const Aws::Vector<Aws::String>& value) { SetBuildsNotFound(value); return *this;}

    /**
     * <p>The IDs of builds for which information could not be found.</p>
     */
    inline BatchGetBuildsResult& WithBuildsNotFound(Aws::Vector<Aws::String>&& value) { SetBuildsNotFound(std::move(value)); return *this;}

    /**
     * <p>The IDs of builds for which information could not be found.</p>
     */
    inline BatchGetBuildsResult& AddBuildsNotFound(const Aws::String& value) { m_buildsNotFound.push_back(value); return *this; }

    /**
     * <p>The IDs of builds for which information could not be found.</p>
     */
    inline BatchGetBuildsResult& AddBuildsNotFound(Aws::String&& value) { m_buildsNotFound.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of builds for which information could not be found.</p>
     */
    inline BatchGetBuildsResult& AddBuildsNotFound(const char* value) { m_buildsNotFound.push_back(value); return *this; }

  private:

    Aws::Vector<Build> m_builds;

    Aws::Vector<Aws::String> m_buildsNotFound;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
