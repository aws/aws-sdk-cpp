/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/DiscoveryType.h>
#include <aws/iot-managed-integrations/model/DeviceDiscoveryStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class ListDeviceDiscoveriesRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ListDeviceDiscoveriesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDeviceDiscoveries"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;

    AWS_IOTMANAGEDINTEGRATIONS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>A token used for pagination of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDeviceDiscoveriesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of device discovery jobs to return in a single
     * response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDeviceDiscoveriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The discovery type to filter device discovery jobs by.</p>
     */
    inline DiscoveryType GetTypeFilter() const { return m_typeFilter; }
    inline bool TypeFilterHasBeenSet() const { return m_typeFilterHasBeenSet; }
    inline void SetTypeFilter(DiscoveryType value) { m_typeFilterHasBeenSet = true; m_typeFilter = value; }
    inline ListDeviceDiscoveriesRequest& WithTypeFilter(DiscoveryType value) { SetTypeFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status to filter device discovery jobs by.</p>
     */
    inline DeviceDiscoveryStatus GetStatusFilter() const { return m_statusFilter; }
    inline bool StatusFilterHasBeenSet() const { return m_statusFilterHasBeenSet; }
    inline void SetStatusFilter(DeviceDiscoveryStatus value) { m_statusFilterHasBeenSet = true; m_statusFilter = value; }
    inline ListDeviceDiscoveriesRequest& WithStatusFilter(DeviceDiscoveryStatus value) { SetStatusFilter(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    DiscoveryType m_typeFilter{DiscoveryType::NOT_SET};
    bool m_typeFilterHasBeenSet = false;

    DeviceDiscoveryStatus m_statusFilter{DeviceDiscoveryStatus::NOT_SET};
    bool m_statusFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
