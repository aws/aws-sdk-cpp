/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleethub/IoTFleetHub_EXPORTS.h>
#include <aws/iotfleethub/IoTFleetHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTFleetHub
{
namespace Model
{

  /**
   */
  class DescribeApplicationRequest : public IoTFleetHubRequest
  {
  public:
    AWS_IOTFLEETHUB_API DescribeApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeApplication"; }

    AWS_IOTFLEETHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique Id of the web application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline DescribeApplicationRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline DescribeApplicationRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique Id of the web application.</p>
     */
    inline DescribeApplicationRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetHub
} // namespace Aws
