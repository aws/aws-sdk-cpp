/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/ProjectMetadata.h>
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
namespace LookoutforVision
{
namespace Model
{
  class CreateProjectResult
  {
  public:
    AWS_LOOKOUTFORVISION_API CreateProjectResult() = default;
    AWS_LOOKOUTFORVISION_API CreateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API CreateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the project.</p>
     */
    inline const ProjectMetadata& GetProjectMetadata() const { return m_projectMetadata; }
    template<typename ProjectMetadataT = ProjectMetadata>
    void SetProjectMetadata(ProjectMetadataT&& value) { m_projectMetadataHasBeenSet = true; m_projectMetadata = std::forward<ProjectMetadataT>(value); }
    template<typename ProjectMetadataT = ProjectMetadata>
    CreateProjectResult& WithProjectMetadata(ProjectMetadataT&& value) { SetProjectMetadata(std::forward<ProjectMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateProjectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProjectMetadata m_projectMetadata;
    bool m_projectMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
