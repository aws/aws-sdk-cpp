/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/iot1click-projects/model/ProjectDescription.h>
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
namespace IoT1ClickProjects
{
namespace Model
{
  class DescribeProjectResult
  {
  public:
    AWS_IOT1CLICKPROJECTS_API DescribeProjectResult();
    AWS_IOT1CLICKPROJECTS_API DescribeProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT1CLICKPROJECTS_API DescribeProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object describing the project.</p>
     */
    inline const ProjectDescription& GetProject() const{ return m_project; }

    /**
     * <p>An object describing the project.</p>
     */
    inline void SetProject(const ProjectDescription& value) { m_project = value; }

    /**
     * <p>An object describing the project.</p>
     */
    inline void SetProject(ProjectDescription&& value) { m_project = std::move(value); }

    /**
     * <p>An object describing the project.</p>
     */
    inline DescribeProjectResult& WithProject(const ProjectDescription& value) { SetProject(value); return *this;}

    /**
     * <p>An object describing the project.</p>
     */
    inline DescribeProjectResult& WithProject(ProjectDescription&& value) { SetProject(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProjectDescription m_project;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
