/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class DescribeProjectResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeProjectResult() = default;
    AWS_IOTSITEWISE_API DescribeProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the project.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    DescribeProjectResult& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the project, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:project/${ProjectId}</code>
     * </p>
     */
    inline const Aws::String& GetProjectArn() const { return m_projectArn; }
    template<typename ProjectArnT = Aws::String>
    void SetProjectArn(ProjectArnT&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::forward<ProjectArnT>(value); }
    template<typename ProjectArnT = Aws::String>
    DescribeProjectResult& WithProjectArn(ProjectArnT&& value) { SetProjectArn(std::forward<ProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    DescribeProjectResult& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the portal that the project is in.</p>
     */
    inline const Aws::String& GetPortalId() const { return m_portalId; }
    template<typename PortalIdT = Aws::String>
    void SetPortalId(PortalIdT&& value) { m_portalIdHasBeenSet = true; m_portalId = std::forward<PortalIdT>(value); }
    template<typename PortalIdT = Aws::String>
    DescribeProjectResult& WithPortalId(PortalIdT&& value) { SetPortalId(std::forward<PortalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project's description.</p>
     */
    inline const Aws::String& GetProjectDescription() const { return m_projectDescription; }
    template<typename ProjectDescriptionT = Aws::String>
    void SetProjectDescription(ProjectDescriptionT&& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = std::forward<ProjectDescriptionT>(value); }
    template<typename ProjectDescriptionT = Aws::String>
    DescribeProjectResult& WithProjectDescription(ProjectDescriptionT&& value) { SetProjectDescription(std::forward<ProjectDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the project was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetProjectCreationDate() const { return m_projectCreationDate; }
    template<typename ProjectCreationDateT = Aws::Utils::DateTime>
    void SetProjectCreationDate(ProjectCreationDateT&& value) { m_projectCreationDateHasBeenSet = true; m_projectCreationDate = std::forward<ProjectCreationDateT>(value); }
    template<typename ProjectCreationDateT = Aws::Utils::DateTime>
    DescribeProjectResult& WithProjectCreationDate(ProjectCreationDateT&& value) { SetProjectCreationDate(std::forward<ProjectCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the project was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetProjectLastUpdateDate() const { return m_projectLastUpdateDate; }
    template<typename ProjectLastUpdateDateT = Aws::Utils::DateTime>
    void SetProjectLastUpdateDate(ProjectLastUpdateDateT&& value) { m_projectLastUpdateDateHasBeenSet = true; m_projectLastUpdateDate = std::forward<ProjectLastUpdateDateT>(value); }
    template<typename ProjectLastUpdateDateT = Aws::Utils::DateTime>
    DescribeProjectResult& WithProjectLastUpdateDate(ProjectLastUpdateDateT&& value) { SetProjectLastUpdateDate(std::forward<ProjectLastUpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeProjectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_portalId;
    bool m_portalIdHasBeenSet = false;

    Aws::String m_projectDescription;
    bool m_projectDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_projectCreationDate{};
    bool m_projectCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_projectLastUpdateDate{};
    bool m_projectLastUpdateDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
