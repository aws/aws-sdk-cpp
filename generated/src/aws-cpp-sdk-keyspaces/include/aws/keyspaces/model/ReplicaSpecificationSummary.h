/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspaces/model/TableStatus.h>
#include <aws/keyspaces/model/CapacitySpecificationSummary.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>The Region-specific settings of a multi-Region table in the specified Amazon
   * Web Services Region.</p> <p>If the multi-Region table is using provisioned
   * capacity and has optional auto scaling policies configured, note that the Region
   * specific summary returns both read and write capacity settings. But only Region
   * specific read capacity settings can be configured for a multi-Region table. In a
   * multi-Region table, your write capacity units will be synced across all Amazon
   * Web Services Regions to ensure that there is enough capacity to replicate write
   * events across Regions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/ReplicaSpecificationSummary">AWS
   * API Reference</a></p>
   */
  class ReplicaSpecificationSummary
  {
  public:
    AWS_KEYSPACES_API ReplicaSpecificationSummary() = default;
    AWS_KEYSPACES_API ReplicaSpecificationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API ReplicaSpecificationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    ReplicaSpecificationSummary& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the multi-Region table in the specified Amazon Web Services
     * Region.</p>
     */
    inline TableStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TableStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReplicaSpecificationSummary& WithStatus(TableStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const CapacitySpecificationSummary& GetCapacitySpecification() const { return m_capacitySpecification; }
    inline bool CapacitySpecificationHasBeenSet() const { return m_capacitySpecificationHasBeenSet; }
    template<typename CapacitySpecificationT = CapacitySpecificationSummary>
    void SetCapacitySpecification(CapacitySpecificationT&& value) { m_capacitySpecificationHasBeenSet = true; m_capacitySpecification = std::forward<CapacitySpecificationT>(value); }
    template<typename CapacitySpecificationT = CapacitySpecificationSummary>
    ReplicaSpecificationSummary& WithCapacitySpecification(CapacitySpecificationT&& value) { SetCapacitySpecification(std::forward<CapacitySpecificationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    TableStatus m_status{TableStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    CapacitySpecificationSummary m_capacitySpecification;
    bool m_capacitySpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
