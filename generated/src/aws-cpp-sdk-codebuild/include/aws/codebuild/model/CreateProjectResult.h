/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/Project.h>
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
  class CreateProjectResult
  {
  public:
    AWS_CODEBUILD_API CreateProjectResult();
    AWS_CODEBUILD_API CreateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API CreateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Project m_project;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
