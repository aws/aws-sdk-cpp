/*
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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Project.h>

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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of a create project request.</p>
   */
  class AWS_DEVICEFARM_API CreateProjectResult
  {
  public:
    CreateProjectResult();
    CreateProjectResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateProjectResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The newly created project.</p>
     */
    inline const Project& GetProject() const{ return m_project; }

    /**
     * <p>The newly created project.</p>
     */
    inline void SetProject(const Project& value) { m_project = value; }

    /**
     * <p>The newly created project.</p>
     */
    inline void SetProject(Project&& value) { m_project = value; }

    /**
     * <p>The newly created project.</p>
     */
    inline CreateProjectResult& WithProject(const Project& value) { SetProject(value); return *this;}

    /**
     * <p>The newly created project.</p>
     */
    inline CreateProjectResult& WithProject(Project&& value) { SetProject(value); return *this;}

  private:
    Project m_project;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
