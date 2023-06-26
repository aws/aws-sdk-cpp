/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/TableObject.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure containing a list of partition values and table
   * objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/PartitionObjects">AWS
   * API Reference</a></p>
   */
  class PartitionObjects
  {
  public:
    AWS_LAKEFORMATION_API PartitionObjects();
    AWS_LAKEFORMATION_API PartitionObjects(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API PartitionObjects& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of partition values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionValues() const{ return m_partitionValues; }

    /**
     * <p>A list of partition values.</p>
     */
    inline bool PartitionValuesHasBeenSet() const { return m_partitionValuesHasBeenSet; }

    /**
     * <p>A list of partition values.</p>
     */
    inline void SetPartitionValues(const Aws::Vector<Aws::String>& value) { m_partitionValuesHasBeenSet = true; m_partitionValues = value; }

    /**
     * <p>A list of partition values.</p>
     */
    inline void SetPartitionValues(Aws::Vector<Aws::String>&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues = std::move(value); }

    /**
     * <p>A list of partition values.</p>
     */
    inline PartitionObjects& WithPartitionValues(const Aws::Vector<Aws::String>& value) { SetPartitionValues(value); return *this;}

    /**
     * <p>A list of partition values.</p>
     */
    inline PartitionObjects& WithPartitionValues(Aws::Vector<Aws::String>&& value) { SetPartitionValues(std::move(value)); return *this;}

    /**
     * <p>A list of partition values.</p>
     */
    inline PartitionObjects& AddPartitionValues(const Aws::String& value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(value); return *this; }

    /**
     * <p>A list of partition values.</p>
     */
    inline PartitionObjects& AddPartitionValues(Aws::String&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of partition values.</p>
     */
    inline PartitionObjects& AddPartitionValues(const char* value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(value); return *this; }


    /**
     * <p>A list of table objects</p>
     */
    inline const Aws::Vector<TableObject>& GetObjects() const{ return m_objects; }

    /**
     * <p>A list of table objects</p>
     */
    inline bool ObjectsHasBeenSet() const { return m_objectsHasBeenSet; }

    /**
     * <p>A list of table objects</p>
     */
    inline void SetObjects(const Aws::Vector<TableObject>& value) { m_objectsHasBeenSet = true; m_objects = value; }

    /**
     * <p>A list of table objects</p>
     */
    inline void SetObjects(Aws::Vector<TableObject>&& value) { m_objectsHasBeenSet = true; m_objects = std::move(value); }

    /**
     * <p>A list of table objects</p>
     */
    inline PartitionObjects& WithObjects(const Aws::Vector<TableObject>& value) { SetObjects(value); return *this;}

    /**
     * <p>A list of table objects</p>
     */
    inline PartitionObjects& WithObjects(Aws::Vector<TableObject>&& value) { SetObjects(std::move(value)); return *this;}

    /**
     * <p>A list of table objects</p>
     */
    inline PartitionObjects& AddObjects(const TableObject& value) { m_objectsHasBeenSet = true; m_objects.push_back(value); return *this; }

    /**
     * <p>A list of table objects</p>
     */
    inline PartitionObjects& AddObjects(TableObject&& value) { m_objectsHasBeenSet = true; m_objects.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_partitionValues;
    bool m_partitionValuesHasBeenSet = false;

    Aws::Vector<TableObject> m_objects;
    bool m_objectsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
