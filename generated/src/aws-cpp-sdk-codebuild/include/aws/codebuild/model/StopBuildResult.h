/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
  class StopBuildResult
  {
  public:
    AWS_CODEBUILD_API StopBuildResult();
    AWS_CODEBUILD_API StopBuildResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API StopBuildResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the build.</p>
     */
    inline const Build& GetBuild() const{ return m_build; }

    /**
     * <p>Information about the build.</p>
     */
    inline void SetBuild(const Build& value) { m_build = value; }

    /**
     * <p>Information about the build.</p>
     */
    inline void SetBuild(Build&& value) { m_build = std::move(value); }

    /**
     * <p>Information about the build.</p>
     */
    inline StopBuildResult& WithBuild(const Build& value) { SetBuild(value); return *this;}

    /**
     * <p>Information about the build.</p>
     */
    inline StopBuildResult& WithBuild(Build&& value) { SetBuild(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StopBuildResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StopBuildResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StopBuildResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Build m_build;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
