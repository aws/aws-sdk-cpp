/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListCuratedEnvironmentImagesResult
  {
  public:
    AWS_CODEBUILD_API ListCuratedEnvironmentImagesResult();
    AWS_CODEBUILD_API ListCuratedEnvironmentImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API ListCuratedEnvironmentImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about supported platforms for Docker images that are managed by
     * CodeBuild.</p>
     */
    inline const Aws::Vector<EnvironmentPlatform>& GetPlatforms() const{ return m_platforms; }

    /**
     * <p>Information about supported platforms for Docker images that are managed by
     * CodeBuild.</p>
     */
    inline void SetPlatforms(const Aws::Vector<EnvironmentPlatform>& value) { m_platforms = value; }

    /**
     * <p>Information about supported platforms for Docker images that are managed by
     * CodeBuild.</p>
     */
    inline void SetPlatforms(Aws::Vector<EnvironmentPlatform>&& value) { m_platforms = std::move(value); }

    /**
     * <p>Information about supported platforms for Docker images that are managed by
     * CodeBuild.</p>
     */
    inline ListCuratedEnvironmentImagesResult& WithPlatforms(const Aws::Vector<EnvironmentPlatform>& value) { SetPlatforms(value); return *this;}

    /**
     * <p>Information about supported platforms for Docker images that are managed by
     * CodeBuild.</p>
     */
    inline ListCuratedEnvironmentImagesResult& WithPlatforms(Aws::Vector<EnvironmentPlatform>&& value) { SetPlatforms(std::move(value)); return *this;}

    /**
     * <p>Information about supported platforms for Docker images that are managed by
     * CodeBuild.</p>
     */
    inline ListCuratedEnvironmentImagesResult& AddPlatforms(const EnvironmentPlatform& value) { m_platforms.push_back(value); return *this; }

    /**
     * <p>Information about supported platforms for Docker images that are managed by
     * CodeBuild.</p>
     */
    inline ListCuratedEnvironmentImagesResult& AddPlatforms(EnvironmentPlatform&& value) { m_platforms.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EnvironmentPlatform> m_platforms;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
