/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/PortalResource.h>
#include <aws/iotsitewise/model/ProjectResource.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains an IoT SiteWise Monitor resource ID for a portal or
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_IOTSITEWISE_API Resource() = default;
    AWS_IOTSITEWISE_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A portal resource.</p>
     */
    inline const PortalResource& GetPortal() const { return m_portal; }
    inline bool PortalHasBeenSet() const { return m_portalHasBeenSet; }
    template<typename PortalT = PortalResource>
    void SetPortal(PortalT&& value) { m_portalHasBeenSet = true; m_portal = std::forward<PortalT>(value); }
    template<typename PortalT = PortalResource>
    Resource& WithPortal(PortalT&& value) { SetPortal(std::forward<PortalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A project resource.</p>
     */
    inline const ProjectResource& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = ProjectResource>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = ProjectResource>
    Resource& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}
  private:

    PortalResource m_portal;
    bool m_portalHasBeenSet = false;

    ProjectResource m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
