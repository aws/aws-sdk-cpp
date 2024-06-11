/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/iot1click-projects/IoT1ClickProjectsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT1ClickProjects
{
namespace Model
{

  /**
   */
  class DeleteProjectRequest : public IoT1ClickProjectsRequest
  {
  public:
    AWS_IOT1CLICKPROJECTS_API DeleteProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteProject"; }

    AWS_IOT1CLICKPROJECTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the empty project to delete.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline DeleteProjectRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline DeleteProjectRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline DeleteProjectRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
