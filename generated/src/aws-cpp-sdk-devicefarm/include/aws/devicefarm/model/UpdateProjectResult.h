/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Project.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of an update project request.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateProjectResult">AWS
   * API Reference</a></p>
   */
  class UpdateProjectResult
  {
  public:
    AWS_DEVICEFARM_API UpdateProjectResult();
    AWS_DEVICEFARM_API UpdateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API UpdateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The project to update.</p>
     */
    inline const Project& GetProject() const{ return m_project; }

    /**
     * <p>The project to update.</p>
     */
    inline void SetProject(const Project& value) { m_project = value; }

    /**
     * <p>The project to update.</p>
     */
    inline void SetProject(Project&& value) { m_project = std::move(value); }

    /**
     * <p>The project to update.</p>
     */
    inline UpdateProjectResult& WithProject(const Project& value) { SetProject(value); return *this;}

    /**
     * <p>The project to update.</p>
     */
    inline UpdateProjectResult& WithProject(Project&& value) { SetProject(std::move(value)); return *this;}

  private:

    Project m_project;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
