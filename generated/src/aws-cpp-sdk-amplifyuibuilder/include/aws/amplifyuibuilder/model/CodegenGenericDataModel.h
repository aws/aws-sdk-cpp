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
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataModel();
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fields in the generic data model.</p>
     */
    inline const Aws::Map<Aws::String, CodegenGenericDataField>& GetFields() const{ return m_fields; }

    /**
     * <p>The fields in the generic data model.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>The fields in the generic data model.</p>
     */
    inline void SetFields(const Aws::Map<Aws::String, CodegenGenericDataField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>The fields in the generic data model.</p>
     */
    inline void SetFields(Aws::Map<Aws::String, CodegenGenericDataField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>The fields in the generic data model.</p>
     */
    inline CodegenGenericDataModel& WithFields(const Aws::Map<Aws::String, CodegenGenericDataField>& value) { SetFields(value); return *this;}

    /**
     * <p>The fields in the generic data model.</p>
     */
    inline CodegenGenericDataModel& WithFields(Aws::Map<Aws::String, CodegenGenericDataField>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>The fields in the generic data model.</p>
     */
    inline CodegenGenericDataModel& AddFields(const Aws::String& key, const CodegenGenericDataField& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }

    /**
     * <p>The fields in the generic data model.</p>
     */
    inline CodegenGenericDataModel& AddFields(Aws::String&& key, const CodegenGenericDataField& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), value); return *this; }

    /**
     * <p>The fields in the generic data model.</p>
     */
    inline CodegenGenericDataModel& AddFields(const Aws::String& key, CodegenGenericDataField&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The fields in the generic data model.</p>
     */
    inline CodegenGenericDataModel& AddFields(Aws::String&& key, CodegenGenericDataField&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The fields in the generic data model.</p>
     */
    inline CodegenGenericDataModel& AddFields(const char* key, CodegenGenericDataField&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The fields in the generic data model.</p>
     */
    inline CodegenGenericDataModel& AddFields(const char* key, const CodegenGenericDataField& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }


    /**
     * <p>Specifies whether the generic data model is a join table.</p>
     */
    inline bool GetIsJoinTable() const{ return m_isJoinTable; }

    /**
     * <p>Specifies whether the generic data model is a join table.</p>
     */
    inline bool IsJoinTableHasBeenSet() const { return m_isJoinTableHasBeenSet; }

    /**
     * <p>Specifies whether the generic data model is a join table.</p>
     */
    inline void SetIsJoinTable(bool value) { m_isJoinTableHasBeenSet = true; m_isJoinTable = value; }

    /**
     * <p>Specifies whether the generic data model is a join table.</p>
     */
    inline CodegenGenericDataModel& WithIsJoinTable(bool value) { SetIsJoinTable(value); return *this;}


    /**
     * <p>The primary keys of the generic data model.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrimaryKeys() const{ return m_primaryKeys; }

    /**
     * <p>The primary keys of the generic data model.</p>
     */
    inline bool PrimaryKeysHasBeenSet() const { return m_primaryKeysHasBeenSet; }

    /**
     * <p>The primary keys of the generic data model.</p>
     */
    inline void SetPrimaryKeys(const Aws::Vector<Aws::String>& value) { m_primaryKeysHasBeenSet = true; m_primaryKeys = value; }

    /**
     * <p>The primary keys of the generic data model.</p>
     */
    inline void SetPrimaryKeys(Aws::Vector<Aws::String>&& value) { m_primaryKeysHasBeenSet = true; m_primaryKeys = std::move(value); }

    /**
     * <p>The primary keys of the generic data model.</p>
     */
    inline CodegenGenericDataModel& WithPrimaryKeys(const Aws::Vector<Aws::String>& value) { SetPrimaryKeys(value); return *this;}

    /**
     * <p>The primary keys of the generic data model.</p>
     */
    inline CodegenGenericDataModel& WithPrimaryKeys(Aws::Vector<Aws::String>&& value) { SetPrimaryKeys(std::move(value)); return *this;}

    /**
     * <p>The primary keys of the generic data model.</p>
     */
    inline CodegenGenericDataModel& AddPrimaryKeys(const Aws::String& value) { m_primaryKeysHasBeenSet = true; m_primaryKeys.push_back(value); return *this; }

    /**
     * <p>The primary keys of the generic data model.</p>
     */
    inline CodegenGenericDataModel& AddPrimaryKeys(Aws::String&& value) { m_primaryKeysHasBeenSet = true; m_primaryKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The primary keys of the generic data model.</p>
     */
    inline CodegenGenericDataModel& AddPrimaryKeys(const char* value) { m_primaryKeysHasBeenSet = true; m_primaryKeys.push_back(value); return *this; }

  private:

    Aws::Map<Aws::String, CodegenGenericDataField> m_fields;
    bool m_fieldsHasBeenSet = false;

    bool m_isJoinTable;
    bool m_isJoinTableHasBeenSet = false;

    Aws::Vector<Aws::String> m_primaryKeys;
    bool m_primaryKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
