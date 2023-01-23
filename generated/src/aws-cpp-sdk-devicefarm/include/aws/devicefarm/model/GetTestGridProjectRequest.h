/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   */
  class GetTestGridProjectRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API GetTestGridProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTestGridProject"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the Selenium testing project, from either
     * <a>CreateTestGridProject</a> or <a>ListTestGridProjects</a>.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The ARN of the Selenium testing project, from either
     * <a>CreateTestGridProject</a> or <a>ListTestGridProjects</a>.</p>
     */
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }

    /**
     * <p>The ARN of the Selenium testing project, from either
     * <a>CreateTestGridProject</a> or <a>ListTestGridProjects</a>.</p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }

    /**
     * <p>The ARN of the Selenium testing project, from either
     * <a>CreateTestGridProject</a> or <a>ListTestGridProjects</a>.</p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }

    /**
     * <p>The ARN of the Selenium testing project, from either
     * <a>CreateTestGridProject</a> or <a>ListTestGridProjects</a>.</p>
     */
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }

    /**
     * <p>The ARN of the Selenium testing project, from either
     * <a>CreateTestGridProject</a> or <a>ListTestGridProjects</a>.</p>
     */
    inline GetTestGridProjectRequest& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The ARN of the Selenium testing project, from either
     * <a>CreateTestGridProject</a> or <a>ListTestGridProjects</a>.</p>
     */
    inline GetTestGridProjectRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Selenium testing project, from either
     * <a>CreateTestGridProject</a> or <a>ListTestGridProjects</a>.</p>
     */
    inline GetTestGridProjectRequest& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}

  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
