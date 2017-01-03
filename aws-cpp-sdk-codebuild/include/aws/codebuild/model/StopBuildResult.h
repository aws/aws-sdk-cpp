﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codebuild/model/Build.h>

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
  class AWS_CODEBUILD_API StopBuildResult
  {
  public:
    StopBuildResult();
    StopBuildResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StopBuildResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Information about the build that was attempted to be stopped.</p>
     */
    inline const Build& GetBuild() const{ return m_build; }

    /**
     * <p>Information about the build that was attempted to be stopped.</p>
     */
    inline void SetBuild(const Build& value) { m_build = value; }

    /**
     * <p>Information about the build that was attempted to be stopped.</p>
     */
    inline void SetBuild(Build&& value) { m_build = value; }

    /**
     * <p>Information about the build that was attempted to be stopped.</p>
     */
    inline StopBuildResult& WithBuild(const Build& value) { SetBuild(value); return *this;}

    /**
     * <p>Information about the build that was attempted to be stopped.</p>
     */
    inline StopBuildResult& WithBuild(Build&& value) { SetBuild(value); return *this;}

  private:
    Build m_build;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
