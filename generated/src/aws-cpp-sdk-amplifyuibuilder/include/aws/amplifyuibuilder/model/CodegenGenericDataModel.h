/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/CodegenGenericDataField.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes a model in a generic data schema.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CodegenGenericDataModel">AWS
   * API Reference</a></p>
   */
  class CodegenGenericDataModel
  {
  public:
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataModel() = default;
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fields in the generic data model.</p>
     */
    inline const Aws::Map<Aws::String, CodegenGenericDataField>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Map<Aws::String, CodegenGenericDataField>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Map<Aws::String, CodegenGenericDataField>>
    CodegenGenericDataModel& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsKeyT = Aws::String, typename FieldsValueT = CodegenGenericDataField>
    CodegenGenericDataModel& AddFields(FieldsKeyT&& key, FieldsValueT&& value) {
      m_fieldsHasBeenSet = true; m_fields.emplace(std::forward<FieldsKeyT>(key), std::forward<FieldsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the generic data model is a join table.</p>
     */
    inline bool GetIsJoinTable() const { return m_isJoinTable; }
    inline bool IsJoinTableHasBeenSet() const { return m_isJoinTableHasBeenSet; }
    inline void SetIsJoinTable(bool value) { m_isJoinTableHasBeenSet = true; m_isJoinTable = value; }
    inline CodegenGenericDataModel& WithIsJoinTable(bool value) { SetIsJoinTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary keys of the generic data model.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrimaryKeys() const { return m_primaryKeys; }
    inline bool PrimaryKeysHasBeenSet() const { return m_primaryKeysHasBeenSet; }
    template<typename PrimaryKeysT = Aws::Vector<Aws::String>>
    void SetPrimaryKeys(PrimaryKeysT&& value) { m_primaryKeysHasBeenSet = true; m_primaryKeys = std::forward<PrimaryKeysT>(value); }
    template<typename PrimaryKeysT = Aws::Vector<Aws::String>>
    CodegenGenericDataModel& WithPrimaryKeys(PrimaryKeysT&& value) { SetPrimaryKeys(std::forward<PrimaryKeysT>(value)); return *this;}
    template<typename PrimaryKeysT = Aws::String>
    CodegenGenericDataModel& AddPrimaryKeys(PrimaryKeysT&& value) { m_primaryKeysHasBeenSet = true; m_primaryKeys.emplace_back(std::forward<PrimaryKeysT>(value)); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, CodegenGenericDataField> m_fields;
    bool m_fieldsHasBeenSet = false;

    bool m_isJoinTable{false};
    bool m_isJoinTableHasBeenSet = false;

    Aws::Vector<Aws::String> m_primaryKeys;
    bool m_primaryKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
