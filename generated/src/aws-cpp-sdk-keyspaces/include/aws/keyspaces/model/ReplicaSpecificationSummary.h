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
    AWS_KEYSPACES_API ReplicaSpecificationSummary();
    AWS_KEYSPACES_API ReplicaSpecificationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API ReplicaSpecificationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline ReplicaSpecificationSummary& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline ReplicaSpecificationSummary& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline ReplicaSpecificationSummary& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The status of the multi-Region table in the specified Amazon Web Services
     * Region.</p>
     */
    inline const TableStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the multi-Region table in the specified Amazon Web Services
     * Region.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the multi-Region table in the specified Amazon Web Services
     * Region.</p>
     */
    inline void SetStatus(const TableStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the multi-Region table in the specified Amazon Web Services
     * Region.</p>
     */
    inline void SetStatus(TableStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the multi-Region table in the specified Amazon Web Services
     * Region.</p>
     */
    inline ReplicaSpecificationSummary& WithStatus(const TableStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the multi-Region table in the specified Amazon Web Services
     * Region.</p>
     */
    inline ReplicaSpecificationSummary& WithStatus(TableStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const CapacitySpecificationSummary& GetCapacitySpecification() const{ return m_capacitySpecification; }

    
    inline bool CapacitySpecificationHasBeenSet() const { return m_capacitySpecificationHasBeenSet; }

    
    inline void SetCapacitySpecification(const CapacitySpecificationSummary& value) { m_capacitySpecificationHasBeenSet = true; m_capacitySpecification = value; }

    
    inline void SetCapacitySpecification(CapacitySpecificationSummary&& value) { m_capacitySpecificationHasBeenSet = true; m_capacitySpecification = std::move(value); }

    
    inline ReplicaSpecificationSummary& WithCapacitySpecification(const CapacitySpecificationSummary& value) { SetCapacitySpecification(value); return *this;}

    
    inline ReplicaSpecificationSummary& WithCapacitySpecification(CapacitySpecificationSummary&& value) { SetCapacitySpecification(std::move(value)); return *this;}

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    TableStatus m_status;
    bool m_statusHasBeenSet = false;

    CapacitySpecificationSummary m_capacitySpecification;
    bool m_capacitySpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
