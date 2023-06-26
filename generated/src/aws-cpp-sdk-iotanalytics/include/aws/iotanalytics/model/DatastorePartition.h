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
    AWS_IOTANALYTICS_API DatastorePartition();
    AWS_IOTANALYTICS_API DatastorePartition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatastorePartition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A partition dimension defined by an <code>attributeName</code>. </p>
     */
    inline const Partition& GetAttributePartition() const{ return m_attributePartition; }

    /**
     * <p> A partition dimension defined by an <code>attributeName</code>. </p>
     */
    inline bool AttributePartitionHasBeenSet() const { return m_attributePartitionHasBeenSet; }

    /**
     * <p> A partition dimension defined by an <code>attributeName</code>. </p>
     */
    inline void SetAttributePartition(const Partition& value) { m_attributePartitionHasBeenSet = true; m_attributePartition = value; }

    /**
     * <p> A partition dimension defined by an <code>attributeName</code>. </p>
     */
    inline void SetAttributePartition(Partition&& value) { m_attributePartitionHasBeenSet = true; m_attributePartition = std::move(value); }

    /**
     * <p> A partition dimension defined by an <code>attributeName</code>. </p>
     */
    inline DatastorePartition& WithAttributePartition(const Partition& value) { SetAttributePartition(value); return *this;}

    /**
     * <p> A partition dimension defined by an <code>attributeName</code>. </p>
     */
    inline DatastorePartition& WithAttributePartition(Partition&& value) { SetAttributePartition(std::move(value)); return *this;}


    /**
     * <p> A partition dimension defined by a timestamp attribute. </p>
     */
    inline const TimestampPartition& GetTimestampPartition() const{ return m_timestampPartition; }

    /**
     * <p> A partition dimension defined by a timestamp attribute. </p>
     */
    inline bool TimestampPartitionHasBeenSet() const { return m_timestampPartitionHasBeenSet; }

    /**
     * <p> A partition dimension defined by a timestamp attribute. </p>
     */
    inline void SetTimestampPartition(const TimestampPartition& value) { m_timestampPartitionHasBeenSet = true; m_timestampPartition = value; }

    /**
     * <p> A partition dimension defined by a timestamp attribute. </p>
     */
    inline void SetTimestampPartition(TimestampPartition&& value) { m_timestampPartitionHasBeenSet = true; m_timestampPartition = std::move(value); }

    /**
     * <p> A partition dimension defined by a timestamp attribute. </p>
     */
    inline DatastorePartition& WithTimestampPartition(const TimestampPartition& value) { SetTimestampPartition(value); return *this;}

    /**
     * <p> A partition dimension defined by a timestamp attribute. </p>
     */
    inline DatastorePartition& WithTimestampPartition(TimestampPartition&& value) { SetTimestampPartition(std::move(value)); return *this;}

  private:

    Partition m_attributePartition;
    bool m_attributePartitionHasBeenSet = false;

    TimestampPartition m_timestampPartition;
    bool m_timestampPartitionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
