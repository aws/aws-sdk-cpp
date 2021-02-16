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
  class AWS_LOOKOUTFORVISION_API CreateProjectRequest : public LookoutforVisionRequest
  {
  public:
    CreateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name for the project.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name for the project.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name for the project.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name for the project.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name for the project.</p>
     */
    inline CreateProjectRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name for the project.</p>
     */
    inline CreateProjectRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name for the project.</p>
     */
    inline CreateProjectRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>CreateProject</code> completes only once. You choose the value to pass.
     * For example, An issue, such as an network outage, might prevent you from getting
     * a response from <code>CreateProject</code>. In this case, safely retry your call
     * to <code>CreateProject</code> by using the same <code>ClientToken</code>
     * parameter value. An error occurs if the other input parameters are not the same
     * as in the first request. Using a different value for <code>ClientToken</code> is
     * considered a new call to <code>CreateProject</code>. An idempotency token is
     * active for 8 hours.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>CreateProject</code> completes only once. You choose the value to pass.
     * For example, An issue, such as an network outage, might prevent you from getting
     * a response from <code>CreateProject</code>. In this case, safely retry your call
     * to <code>CreateProject</code> by using the same <code>ClientToken</code>
     * parameter value. An error occurs if the other input parameters are not the same
     * as in the first request. Using a different value for <code>ClientToken</code> is
     * considered a new call to <code>CreateProject</code>. An idempotency token is
     * active for 8 hours.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>CreateProject</code> completes only once. You choose the value to pass.
     * For example, An issue, such as an network outage, might prevent you from getting
     * a response from <code>CreateProject</code>. In this case, safely retry your call
     * to <code>CreateProject</code> by using the same <code>ClientToken</code>
     * parameter value. An error occurs if the other input parameters are not the same
     * as in the first request. Using a different value for <code>ClientToken</code> is
     * considered a new call to <code>CreateProject</code>. An idempotency token is
     * active for 8 hours.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>CreateProject</code> completes only once. You choose the value to pass.
     * For example, An issue, such as an network outage, might prevent you from getting
     * a response from <code>CreateProject</code>. In this case, safely retry your call
     * to <code>CreateProject</code> by using the same <code>ClientToken</code>
     * parameter value. An error occurs if the other input parameters are not the same
     * as in the first request. Using a different value for <code>ClientToken</code> is
     * considered a new call to <code>CreateProject</code>. An idempotency token is
     * active for 8 hours.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>CreateProject</code> completes only once. You choose the value to pass.
     * For example, An issue, such as an network outage, might prevent you from getting
     * a response from <code>CreateProject</code>. In this case, safely retry your call
     * to <code>CreateProject</code> by using the same <code>ClientToken</code>
     * parameter value. An error occurs if the other input parameters are not the same
     * as in the first request. Using a different value for <code>ClientToken</code> is
     * considered a new call to <code>CreateProject</code>. An idempotency token is
     * active for 8 hours.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>CreateProject</code> completes only once. You choose the value to pass.
     * For example, An issue, such as an network outage, might prevent you from getting
     * a response from <code>CreateProject</code>. In this case, safely retry your call
     * to <code>CreateProject</code> by using the same <code>ClientToken</code>
     * parameter value. An error occurs if the other input parameters are not the same
     * as in the first request. Using a different value for <code>ClientToken</code> is
     * considered a new call to <code>CreateProject</code>. An idempotency token is
     * active for 8 hours.</p>
     */
    inline CreateProjectRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>CreateProject</code> completes only once. You choose the value to pass.
     * For example, An issue, such as an network outage, might prevent you from getting
     * a response from <code>CreateProject</code>. In this case, safely retry your call
     * to <code>CreateProject</code> by using the same <code>ClientToken</code>
     * parameter value. An error occurs if the other input parameters are not the same
     * as in the first request. Using a different value for <code>ClientToken</code> is
     * considered a new call to <code>CreateProject</code>. An idempotency token is
     * active for 8 hours.</p>
     */
    inline CreateProjectRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>CreateProject</code> completes only once. You choose the value to pass.
     * For example, An issue, such as an network outage, might prevent you from getting
     * a response from <code>CreateProject</code>. In this case, safely retry your call
     * to <code>CreateProject</code> by using the same <code>ClientToken</code>
     * parameter value. An error occurs if the other input parameters are not the same
     * as in the first request. Using a different value for <code>ClientToken</code> is
     * considered a new call to <code>CreateProject</code>. An idempotency token is
     * active for 8 hours.</p>
     */
    inline CreateProjectRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
