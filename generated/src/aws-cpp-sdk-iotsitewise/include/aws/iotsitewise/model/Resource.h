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
    AWS_IOTSITEWISE_API Resource();
    AWS_IOTSITEWISE_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A portal resource.</p>
     */
    inline const PortalResource& GetPortal() const{ return m_portal; }

    /**
     * <p>A portal resource.</p>
     */
    inline bool PortalHasBeenSet() const { return m_portalHasBeenSet; }

    /**
     * <p>A portal resource.</p>
     */
    inline void SetPortal(const PortalResource& value) { m_portalHasBeenSet = true; m_portal = value; }

    /**
     * <p>A portal resource.</p>
     */
    inline void SetPortal(PortalResource&& value) { m_portalHasBeenSet = true; m_portal = std::move(value); }

    /**
     * <p>A portal resource.</p>
     */
    inline Resource& WithPortal(const PortalResource& value) { SetPortal(value); return *this;}

    /**
     * <p>A portal resource.</p>
     */
    inline Resource& WithPortal(PortalResource&& value) { SetPortal(std::move(value)); return *this;}


    /**
     * <p>A project resource.</p>
     */
    inline const ProjectResource& GetProject() const{ return m_project; }

    /**
     * <p>A project resource.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>A project resource.</p>
     */
    inline void SetProject(const ProjectResource& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>A project resource.</p>
     */
    inline void SetProject(ProjectResource&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>A project resource.</p>
     */
    inline Resource& WithProject(const ProjectResource& value) { SetProject(value); return *this;}

    /**
     * <p>A project resource.</p>
     */
    inline Resource& WithProject(ProjectResource&& value) { SetProject(std::move(value)); return *this;}

  private:

    PortalResource m_portal;
    bool m_portalHasBeenSet = false;

    ProjectResource m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
