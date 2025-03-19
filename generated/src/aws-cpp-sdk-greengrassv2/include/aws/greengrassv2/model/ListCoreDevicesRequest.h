/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/GreengrassV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/CoreDeviceStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GreengrassV2
{
namespace Model
{

  /**
   */
  class ListCoreDevicesRequest : public GreengrassV2Request
  {
  public:
    AWS_GREENGRASSV2_API ListCoreDevicesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCoreDevices"; }

    AWS_GREENGRASSV2_API Aws::String SerializePayload() const override;

    AWS_GREENGRASSV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IoT thing group by which to filter. If you specify this parameter, the
     * list includes only core devices that have successfully deployed a deployment
     * that targets the thing group. When you remove a core device from a thing group,
     * the list continues to include that core device.</p>
     */
    inline const Aws::String& GetThingGroupArn() const { return m_thingGroupArn; }
    inline bool ThingGroupArnHasBeenSet() const { return m_thingGroupArnHasBeenSet; }
    template<typename ThingGroupArnT = Aws::String>
    void SetThingGroupArn(ThingGroupArnT&& value) { m_thingGroupArnHasBeenSet = true; m_thingGroupArn = std::forward<ThingGroupArnT>(value); }
    template<typename ThingGroupArnT = Aws::String>
    ListCoreDevicesRequest& WithThingGroupArn(ThingGroupArnT&& value) { SetThingGroupArn(std::forward<ThingGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The core device status by which to filter. If you specify this parameter, the
     * list includes only core devices that have this status. Choose one of the
     * following options:</p> <ul> <li> <p> <code>HEALTHY</code> – The IoT Greengrass
     * Core software and all components run on the core device without issue.</p> </li>
     * <li> <p> <code>UNHEALTHY</code> – The IoT Greengrass Core software or a
     * component is in a failed state on the core device.</p> </li> </ul>
     */
    inline CoreDeviceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CoreDeviceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListCoreDevicesRequest& WithStatus(CoreDeviceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned per paginated request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCoreDevicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCoreDevicesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime to be used by the core device. The runtime can be:</p> <ul> <li>
     * <p> <code>aws_nucleus_classic</code> </p> </li> <li> <p>
     * <code>aws_nucleus_lite</code> </p> </li> </ul>
     */
    inline const Aws::String& GetRuntime() const { return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    template<typename RuntimeT = Aws::String>
    void SetRuntime(RuntimeT&& value) { m_runtimeHasBeenSet = true; m_runtime = std::forward<RuntimeT>(value); }
    template<typename RuntimeT = Aws::String>
    ListCoreDevicesRequest& WithRuntime(RuntimeT&& value) { SetRuntime(std::forward<RuntimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingGroupArn;
    bool m_thingGroupArnHasBeenSet = false;

    CoreDeviceStatus m_status{CoreDeviceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_runtime;
    bool m_runtimeHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
