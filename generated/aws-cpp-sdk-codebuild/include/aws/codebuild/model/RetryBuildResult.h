﻿/**
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
  class AWS_CODEBUILD_API RetryBuildResult
  {
  public:
    RetryBuildResult();
    RetryBuildResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RetryBuildResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Build& GetBuild() const{ return m_build; }

    
    inline void SetBuild(const Build& value) { m_build = value; }

    
    inline void SetBuild(Build&& value) { m_build = std::move(value); }

    
    inline RetryBuildResult& WithBuild(const Build& value) { SetBuild(value); return *this;}

    
    inline RetryBuildResult& WithBuild(Build&& value) { SetBuild(std::move(value)); return *this;}

  private:

    Build m_build;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
