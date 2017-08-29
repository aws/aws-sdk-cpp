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
#include <aws/codebuild/model/EnvironmentPlatform.h>
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
  class AWS_CODEBUILD_API ListCuratedEnvironmentImagesResult
  {
  public:
    ListCuratedEnvironmentImagesResult();
    ListCuratedEnvironmentImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCuratedEnvironmentImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about supported platforms for Docker images that are managed by
     * AWS CodeBuild.</p>
     */
    inline const Aws::Vector<EnvironmentPlatform>& GetPlatforms() const{ return m_platforms; }

    /**
     * <p>Information about supported platforms for Docker images that are managed by
     * AWS CodeBuild.</p>
     */
    inline void SetPlatforms(const Aws::Vector<EnvironmentPlatform>& value) { m_platforms = value; }

    /**
     * <p>Information about supported platforms for Docker images that are managed by
     * AWS CodeBuild.</p>
     */
    inline void SetPlatforms(Aws::Vector<EnvironmentPlatform>&& value) { m_platforms = std::move(value); }

    /**
     * <p>Information about supported platforms for Docker images that are managed by
     * AWS CodeBuild.</p>
     */
    inline ListCuratedEnvironmentImagesResult& WithPlatforms(const Aws::Vector<EnvironmentPlatform>& value) { SetPlatforms(value); return *this;}

    /**
     * <p>Information about supported platforms for Docker images that are managed by
     * AWS CodeBuild.</p>
     */
    inline ListCuratedEnvironmentImagesResult& WithPlatforms(Aws::Vector<EnvironmentPlatform>&& value) { SetPlatforms(std::move(value)); return *this;}

    /**
     * <p>Information about supported platforms for Docker images that are managed by
     * AWS CodeBuild.</p>
     */
    inline ListCuratedEnvironmentImagesResult& AddPlatforms(const EnvironmentPlatform& value) { m_platforms.push_back(value); return *this; }

    /**
     * <p>Information about supported platforms for Docker images that are managed by
     * AWS CodeBuild.</p>
     */
    inline ListCuratedEnvironmentImagesResult& AddPlatforms(EnvironmentPlatform&& value) { m_platforms.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EnvironmentPlatform> m_platforms;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
