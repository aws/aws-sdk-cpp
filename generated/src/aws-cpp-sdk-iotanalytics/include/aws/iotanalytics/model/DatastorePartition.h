/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/Partition.h>
#include <aws/iotanalytics/model/TimestampPartition.h>
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
   * <p> A single dimension to partition a data store. The dimension must be an
   * <code>AttributePartition</code> or a <code>TimestampPartition</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatastorePartition">AWS
   * API Reference</a></p>
   */
  class DatastorePartition
  {
  public:
    AWS_IOTANALYTICS_API DatastorePartition() = default;
    AWS_IOTANALYTICS_API DatastorePartition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatastorePartition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A partition dimension defined by an <code>attributeName</code>. </p>
     */
    inline const Partition& GetAttributePartition() const { return m_attributePartition; }
    inline bool AttributePartitionHasBeenSet() const { return m_attributePartitionHasBeenSet; }
    template<typename AttributePartitionT = Partition>
    void SetAttributePartition(AttributePartitionT&& value) { m_attributePartitionHasBeenSet = true; m_attributePartition = std::forward<AttributePartitionT>(value); }
    template<typename AttributePartitionT = Partition>
    DatastorePartition& WithAttributePartition(AttributePartitionT&& value) { SetAttributePartition(std::forward<AttributePartitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A partition dimension defined by a timestamp attribute. </p>
     */
    inline const TimestampPartition& GetTimestampPartition() const { return m_timestampPartition; }
    inline bool TimestampPartitionHasBeenSet() const { return m_timestampPartitionHasBeenSet; }
    template<typename TimestampPartitionT = TimestampPartition>
    void SetTimestampPartition(TimestampPartitionT&& value) { m_timestampPartitionHasBeenSet = true; m_timestampPartition = std::forward<TimestampPartitionT>(value); }
    template<typename TimestampPartitionT = TimestampPartition>
    DatastorePartition& WithTimestampPartition(TimestampPartitionT&& value) { SetTimestampPartition(std::forward<TimestampPartitionT>(value)); return *this;}
    ///@}
  private:

    Partition m_attributePartition;
    bool m_attributePartitionHasBeenSet = false;

    TimestampPartition m_timestampPartition;
    bool m_timestampPartitionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
