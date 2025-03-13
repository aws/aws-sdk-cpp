/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datasync/model/P95Metrics.h>
#include <aws/datasync/model/Capacity.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/DiscoveryResourceType.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Information, including performance data and capacity usage, provided by
   * DataSync Discovery about a resource in your on-premises storage
   * system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ResourceMetrics">AWS
   * API Reference</a></p>
   */
  class ResourceMetrics
  {
  public:
    AWS_DATASYNC_API ResourceMetrics() = default;
    AWS_DATASYNC_API ResourceMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API ResourceMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time when DataSync Discovery collected this information from the
     * resource.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    ResourceMetrics& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of performance data that DataSync Discovery collects about the
     * on-premises storage system resource.</p>
     */
    inline const P95Metrics& GetP95Metrics() const { return m_p95Metrics; }
    inline bool P95MetricsHasBeenSet() const { return m_p95MetricsHasBeenSet; }
    template<typename P95MetricsT = P95Metrics>
    void SetP95Metrics(P95MetricsT&& value) { m_p95MetricsHasBeenSet = true; m_p95Metrics = std::forward<P95MetricsT>(value); }
    template<typename P95MetricsT = P95Metrics>
    ResourceMetrics& WithP95Metrics(P95MetricsT&& value) { SetP95Metrics(std::forward<P95MetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage capacity of the on-premises storage system resource.</p>
     */
    inline const Capacity& GetCapacity() const { return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    template<typename CapacityT = Capacity>
    void SetCapacity(CapacityT&& value) { m_capacityHasBeenSet = true; m_capacity = std::forward<CapacityT>(value); }
    template<typename CapacityT = Capacity>
    ResourceMetrics& WithCapacity(CapacityT&& value) { SetCapacity(std::forward<CapacityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The universally unique identifier (UUID) of the on-premises storage system
     * resource.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ResourceMetrics& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of on-premises storage system resource.</p>
     */
    inline DiscoveryResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(DiscoveryResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline ResourceMetrics& WithResourceType(DiscoveryResourceType value) { SetResourceType(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    P95Metrics m_p95Metrics;
    bool m_p95MetricsHasBeenSet = false;

    Capacity m_capacity;
    bool m_capacityHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    DiscoveryResourceType m_resourceType{DiscoveryResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
