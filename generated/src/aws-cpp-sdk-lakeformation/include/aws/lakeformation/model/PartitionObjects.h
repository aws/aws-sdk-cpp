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
    AWS_LAKEFORMATION_API PartitionObjects() = default;
    AWS_LAKEFORMATION_API PartitionObjects(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API PartitionObjects& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of partition values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionValues() const { return m_partitionValues; }
    inline bool PartitionValuesHasBeenSet() const { return m_partitionValuesHasBeenSet; }
    template<typename PartitionValuesT = Aws::Vector<Aws::String>>
    void SetPartitionValues(PartitionValuesT&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues = std::forward<PartitionValuesT>(value); }
    template<typename PartitionValuesT = Aws::Vector<Aws::String>>
    PartitionObjects& WithPartitionValues(PartitionValuesT&& value) { SetPartitionValues(std::forward<PartitionValuesT>(value)); return *this;}
    template<typename PartitionValuesT = Aws::String>
    PartitionObjects& AddPartitionValues(PartitionValuesT&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues.emplace_back(std::forward<PartitionValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of table objects</p>
     */
    inline const Aws::Vector<TableObject>& GetObjects() const { return m_objects; }
    inline bool ObjectsHasBeenSet() const { return m_objectsHasBeenSet; }
    template<typename ObjectsT = Aws::Vector<TableObject>>
    void SetObjects(ObjectsT&& value) { m_objectsHasBeenSet = true; m_objects = std::forward<ObjectsT>(value); }
    template<typename ObjectsT = Aws::Vector<TableObject>>
    PartitionObjects& WithObjects(ObjectsT&& value) { SetObjects(std::forward<ObjectsT>(value)); return *this;}
    template<typename ObjectsT = TableObject>
    PartitionObjects& AddObjects(ObjectsT&& value) { m_objectsHasBeenSet = true; m_objects.emplace_back(std::forward<ObjectsT>(value)); return *this; }
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
