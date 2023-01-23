/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/ProjectMetadata.h>
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
namespace LookoutforVision
{
namespace Model
{
  class CreateProjectResult
  {
  public:
    AWS_LOOKOUTFORVISION_API CreateProjectResult();
    AWS_LOOKOUTFORVISION_API CreateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API CreateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the project.</p>
     */
    inline const ProjectMetadata& GetProjectMetadata() const{ return m_projectMetadata; }

    /**
     * <p>Information about the project.</p>
     */
    inline void SetProjectMetadata(const ProjectMetadata& value) { m_projectMetadata = value; }

    /**
     * <p>Information about the project.</p>
     */
    inline void SetProjectMetadata(ProjectMetadata&& value) { m_projectMetadata = std::move(value); }

    /**
     * <p>Information about the project.</p>
     */
    inline CreateProjectResult& WithProjectMetadata(const ProjectMetadata& value) { SetProjectMetadata(value); return *this;}

    /**
     * <p>Information about the project.</p>
     */
    inline CreateProjectResult& WithProjectMetadata(ProjectMetadata&& value) { SetProjectMetadata(std::move(value)); return *this;}

  private:

    ProjectMetadata m_projectMetadata;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
