﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/LookoutforVisionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

  /**
   */
  class CreateProjectRequest : public LookoutforVisionRequest
  {
  public:
    AWS_LOOKOUTFORVISION_API CreateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

    AWS_LOOKOUTFORVISION_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTFORVISION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline CreateProjectRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline CreateProjectRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline CreateProjectRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>CreateProject</code> completes only once. You choose the value to pass.
     * For example, An issue might prevent you from getting a response from
     * <code>CreateProject</code>. In this case, safely retry your call to
     * <code>CreateProject</code> by using the same <code>ClientToken</code> parameter
     * value. </p> <p>If you don't supply a value for <code>ClientToken</code>, the AWS
     * SDK you are using inserts a value for you. This prevents retries after a network
     * error from making multiple project creation requests. You'll need to provide
     * your own value for other use cases. </p> <p>An error occurs if the other input
     * parameters are not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>CreateProject</code>.
     * An idempotency token is active for 8 hours.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateProjectRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateProjectRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateProjectRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
