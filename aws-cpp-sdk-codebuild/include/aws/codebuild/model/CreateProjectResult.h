﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/Project.h>
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
  class AWS_CODEBUILD_API CreateProjectResult
  {
  public:
    CreateProjectResult();
    CreateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the build project that was created.</p>
     */
    inline const Project& GetProject() const{ return m_project; }

    /**
     * <p>Information about the build project that was created.</p>
     */
    inline void SetProject(const Project& value) { m_project = value; }

    /**
     * <p>Information about the build project that was created.</p>
     */
    inline void SetProject(Project&& value) { m_project = std::move(value); }

    /**
     * <p>Information about the build project that was created.</p>
     */
    inline CreateProjectResult& WithProject(const Project& value) { SetProject(value); return *this;}

    /**
     * <p>Information about the build project that was created.</p>
     */
    inline CreateProjectResult& WithProject(Project&& value) { SetProject(std::move(value)); return *this;}

  private:

    Project m_project;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
