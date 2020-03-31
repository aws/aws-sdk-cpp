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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/ProjectStatus.h>
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
namespace Rekognition
{
namespace Model
{
  class AWS_REKOGNITION_API DeleteProjectResult
  {
  public:
    DeleteProjectResult();
    DeleteProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current status of the delete project operation.</p>
     */
    inline const ProjectStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the delete project operation.</p>
     */
    inline void SetStatus(const ProjectStatus& value) { m_status = value; }

    /**
     * <p>The current status of the delete project operation.</p>
     */
    inline void SetStatus(ProjectStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the delete project operation.</p>
     */
    inline DeleteProjectResult& WithStatus(const ProjectStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the delete project operation.</p>
     */
    inline DeleteProjectResult& WithStatus(ProjectStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ProjectStatus m_status;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
