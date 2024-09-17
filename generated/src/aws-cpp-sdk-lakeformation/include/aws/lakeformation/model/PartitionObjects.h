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


    ///@{
    /**
     * <p>A list of partition values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionValues() const{ return m_partitionValues; }
    inline bool PartitionValuesHasBeenSet() const { return m_partitionValuesHasBeenSet; }
    inline void SetPartitionValues(const Aws::Vector<Aws::String>& value) { m_partitionValuesHasBeenSet = true; m_partitionValues = value; }
    inline void SetPartitionValues(Aws::Vector<Aws::String>&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues = std::move(value); }
    inline PartitionObjects& WithPartitionValues(const Aws::Vector<Aws::String>& value) { SetPartitionValues(value); return *this;}
    inline PartitionObjects& WithPartitionValues(Aws::Vector<Aws::String>&& value) { SetPartitionValues(std::move(value)); return *this;}
    inline PartitionObjects& AddPartitionValues(const Aws::String& value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(value); return *this; }
    inline PartitionObjects& AddPartitionValues(Aws::String&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(std::move(value)); return *this; }
    inline PartitionObjects& AddPartitionValues(const char* value) { m_partitionValuesHasBeenSet = true; m_partitionValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of table objects</p>
     */
    inline const Aws::Vector<TableObject>& GetObjects() const{ return m_objects; }
    inline bool ObjectsHasBeenSet() const { return m_objectsHasBeenSet; }
    inline void SetObjects(const Aws::Vector<TableObject>& value) { m_objectsHasBeenSet = true; m_objects = value; }
    inline void SetObjects(Aws::Vector<TableObject>&& value) { m_objectsHasBeenSet = true; m_objects = std::move(value); }
    inline PartitionObjects& WithObjects(const Aws::Vector<TableObject>& value) { SetObjects(value); return *this;}
    inline PartitionObjects& WithObjects(Aws::Vector<TableObject>&& value) { SetObjects(std::move(value)); return *this;}
    inline PartitionObjects& AddObjects(const TableObject& value) { m_objectsHasBeenSet = true; m_objects.push_back(value); return *this; }
    inline PartitionObjects& AddObjects(TableObject&& value) { m_objectsHasBeenSet = true; m_objects.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_partitionValues;
    bool m_partitionValuesHasBeenSet = false;

    Aws::Vector<TableObject> m_objects;
    bool m_objectsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
