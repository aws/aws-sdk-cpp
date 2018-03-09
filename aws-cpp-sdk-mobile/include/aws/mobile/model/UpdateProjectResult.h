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
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/mobile/model/ProjectDetails.h>
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
namespace Mobile
{
namespace Model
{
  /**
   * <p> Result structure used for requests to updated project configuration.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/UpdateProjectResult">AWS
   * API Reference</a></p>
   */
  class AWS_MOBILE_API UpdateProjectResult
  {
  public:
    UpdateProjectResult();
    UpdateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Detailed information about the updated AWS Mobile Hub project. </p>
     */
    inline const ProjectDetails& GetDetails() const{ return m_details; }

    /**
     * <p> Detailed information about the updated AWS Mobile Hub project. </p>
     */
    inline void SetDetails(const ProjectDetails& value) { m_details = value; }

    /**
     * <p> Detailed information about the updated AWS Mobile Hub project. </p>
     */
    inline void SetDetails(ProjectDetails&& value) { m_details = std::move(value); }

    /**
     * <p> Detailed information about the updated AWS Mobile Hub project. </p>
     */
    inline UpdateProjectResult& WithDetails(const ProjectDetails& value) { SetDetails(value); return *this;}

    /**
     * <p> Detailed information about the updated AWS Mobile Hub project. </p>
     */
    inline UpdateProjectResult& WithDetails(ProjectDetails&& value) { SetDetails(std::move(value)); return *this;}

  private:

    ProjectDetails m_details;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
