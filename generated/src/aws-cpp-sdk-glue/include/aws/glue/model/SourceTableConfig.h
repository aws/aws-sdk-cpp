/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Properties used by the source leg to process data from the
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SourceTableConfig">AWS
   * API Reference</a></p>
   */
  class SourceTableConfig
  {
  public:
    AWS_GLUE_API SourceTableConfig() = default;
    AWS_GLUE_API SourceTableConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SourceTableConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of fields used for column-level filtering. Currently unsupported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<Aws::String>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<Aws::String>>
    SourceTableConfig& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = Aws::String>
    SourceTableConfig& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A condition clause used for row-level filtering. Currently unsupported.</p>
     */
    inline const Aws::String& GetFilterPredicate() const { return m_filterPredicate; }
    inline bool FilterPredicateHasBeenSet() const { return m_filterPredicateHasBeenSet; }
    template<typename FilterPredicateT = Aws::String>
    void SetFilterPredicate(FilterPredicateT&& value) { m_filterPredicateHasBeenSet = true; m_filterPredicate = std::forward<FilterPredicateT>(value); }
    template<typename FilterPredicateT = Aws::String>
    SourceTableConfig& WithFilterPredicate(FilterPredicateT&& value) { SetFilterPredicate(std::forward<FilterPredicateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provide the primary key set for this table. Currently supported specifically
     * for SAP <code>EntityOf</code> entities upon request. Contact Amazon Web Services
     * Support to make this feature available.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrimaryKey() const { return m_primaryKey; }
    inline bool PrimaryKeyHasBeenSet() const { return m_primaryKeyHasBeenSet; }
    template<typename PrimaryKeyT = Aws::Vector<Aws::String>>
    void SetPrimaryKey(PrimaryKeyT&& value) { m_primaryKeyHasBeenSet = true; m_primaryKey = std::forward<PrimaryKeyT>(value); }
    template<typename PrimaryKeyT = Aws::Vector<Aws::String>>
    SourceTableConfig& WithPrimaryKey(PrimaryKeyT&& value) { SetPrimaryKey(std::forward<PrimaryKeyT>(value)); return *this;}
    template<typename PrimaryKeyT = Aws::String>
    SourceTableConfig& AddPrimaryKey(PrimaryKeyT&& value) { m_primaryKeyHasBeenSet = true; m_primaryKey.emplace_back(std::forward<PrimaryKeyT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Incremental pull timestamp-based field. Currently unsupported.</p>
     */
    inline const Aws::String& GetRecordUpdateField() const { return m_recordUpdateField; }
    inline bool RecordUpdateFieldHasBeenSet() const { return m_recordUpdateFieldHasBeenSet; }
    template<typename RecordUpdateFieldT = Aws::String>
    void SetRecordUpdateField(RecordUpdateFieldT&& value) { m_recordUpdateFieldHasBeenSet = true; m_recordUpdateField = std::forward<RecordUpdateFieldT>(value); }
    template<typename RecordUpdateFieldT = Aws::String>
    SourceTableConfig& WithRecordUpdateField(RecordUpdateFieldT&& value) { SetRecordUpdateField(std::forward<RecordUpdateFieldT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_filterPredicate;
    bool m_filterPredicateHasBeenSet = false;

    Aws::Vector<Aws::String> m_primaryKey;
    bool m_primaryKeyHasBeenSet = false;

    Aws::String m_recordUpdateField;
    bool m_recordUpdateFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
