/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotanalytics/model/DatastorePartition.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p> Contains information about the partition dimensions in a data store.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatastorePartitions">AWS
   * API Reference</a></p>
   */
  class DatastorePartitions
  {
  public:
    AWS_IOTANALYTICS_API DatastorePartitions();
    AWS_IOTANALYTICS_API DatastorePartitions(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatastorePartitions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A list of partition dimensions in a data store. </p>
     */
    inline const Aws::Vector<DatastorePartition>& GetPartitions() const{ return m_partitions; }

    /**
     * <p> A list of partition dimensions in a data store. </p>
     */
    inline bool PartitionsHasBeenSet() const { return m_partitionsHasBeenSet; }

    /**
     * <p> A list of partition dimensions in a data store. </p>
     */
    inline void SetPartitions(const Aws::Vector<DatastorePartition>& value) { m_partitionsHasBeenSet = true; m_partitions = value; }

    /**
     * <p> A list of partition dimensions in a data store. </p>
     */
    inline void SetPartitions(Aws::Vector<DatastorePartition>&& value) { m_partitionsHasBeenSet = true; m_partitions = std::move(value); }

    /**
     * <p> A list of partition dimensions in a data store. </p>
     */
    inline DatastorePartitions& WithPartitions(const Aws::Vector<DatastorePartition>& value) { SetPartitions(value); return *this;}

    /**
     * <p> A list of partition dimensions in a data store. </p>
     */
    inline DatastorePartitions& WithPartitions(Aws::Vector<DatastorePartition>&& value) { SetPartitions(std::move(value)); return *this;}

    /**
     * <p> A list of partition dimensions in a data store. </p>
     */
    inline DatastorePartitions& AddPartitions(const DatastorePartition& value) { m_partitionsHasBeenSet = true; m_partitions.push_back(value); return *this; }

    /**
     * <p> A list of partition dimensions in a data store. </p>
     */
    inline DatastorePartitions& AddPartitions(DatastorePartition&& value) { m_partitionsHasBeenSet = true; m_partitions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DatastorePartition> m_partitions;
    bool m_partitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
