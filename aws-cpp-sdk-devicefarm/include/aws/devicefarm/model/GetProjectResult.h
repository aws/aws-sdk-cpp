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
   * <p>Represents the result of a get project request.</p>
   */
  class AWS_DEVICEFARM_API GetProjectResult
  {
  public:
    GetProjectResult();
    GetProjectResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetProjectResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Project& GetProject() const{ return m_project; }

    
    inline void SetProject(const Project& value) { m_project = value; }

    
    inline void SetProject(Project&& value) { m_project = value; }

    
    inline GetProjectResult& WithProject(const Project& value) { SetProject(value); return *this;}

    
    inline GetProjectResult& WithProject(Project&& value) { SetProject(value); return *this;}

  private:
    Project m_project;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
