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
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/iot1click-projects/model/ProjectDescription.h>
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
  class AWS_IOT1CLICKPROJECTS_API DescribeProjectResult
  {
  public:
    DescribeProjectResult();
    DescribeProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    ProjectDescription m_project;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
