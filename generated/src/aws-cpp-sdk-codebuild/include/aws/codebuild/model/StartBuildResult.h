/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
  class StartBuildResult
  {
  public:
    AWS_CODEBUILD_API StartBuildResult();
    AWS_CODEBUILD_API StartBuildResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API StartBuildResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the build to be run.</p>
     */
    inline const Build& GetBuild() const{ return m_build; }

    /**
     * <p>Information about the build to be run.</p>
     */
    inline void SetBuild(const Build& value) { m_build = value; }

    /**
     * <p>Information about the build to be run.</p>
     */
    inline void SetBuild(Build&& value) { m_build = std::move(value); }

    /**
     * <p>Information about the build to be run.</p>
     */
    inline StartBuildResult& WithBuild(const Build& value) { SetBuild(value); return *this;}

    /**
     * <p>Information about the build to be run.</p>
     */
    inline StartBuildResult& WithBuild(Build&& value) { SetBuild(std::move(value)); return *this;}

  private:

    Build m_build;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
