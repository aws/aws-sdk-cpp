/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class UpdateProjectRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API UpdateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the project to update.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }
    inline UpdateProjectRequest& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}
    inline UpdateProjectRequest& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}
    inline UpdateProjectRequest& WithProjectId(const char* value) { SetProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new friendly name for the project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline UpdateProjectRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline UpdateProjectRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline UpdateProjectRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the project.</p>
     */
    inline const Aws::String& GetProjectDescription() const{ return m_projectDescription; }
    inline bool ProjectDescriptionHasBeenSet() const { return m_projectDescriptionHasBeenSet; }
    inline void SetProjectDescription(const Aws::String& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = value; }
    inline void SetProjectDescription(Aws::String&& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = std::move(value); }
    inline void SetProjectDescription(const char* value) { m_projectDescriptionHasBeenSet = true; m_projectDescription.assign(value); }
    inline UpdateProjectRequest& WithProjectDescription(const Aws::String& value) { SetProjectDescription(value); return *this;}
    inline UpdateProjectRequest& WithProjectDescription(Aws::String&& value) { SetProjectDescription(std::move(value)); return *this;}
    inline UpdateProjectRequest& WithProjectDescription(const char* value) { SetProjectDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateProjectRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateProjectRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateProjectRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_projectDescription;
    bool m_projectDescriptionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
