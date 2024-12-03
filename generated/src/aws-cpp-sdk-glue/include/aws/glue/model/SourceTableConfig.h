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
    AWS_GLUE_API SourceTableConfig();
    AWS_GLUE_API SourceTableConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SourceTableConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of fields used for column-level filtering.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Vector<Aws::String>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Vector<Aws::String>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline SourceTableConfig& WithFields(const Aws::Vector<Aws::String>& value) { SetFields(value); return *this;}
    inline SourceTableConfig& WithFields(Aws::Vector<Aws::String>&& value) { SetFields(std::move(value)); return *this;}
    inline SourceTableConfig& AddFields(const Aws::String& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }
    inline SourceTableConfig& AddFields(Aws::String&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }
    inline SourceTableConfig& AddFields(const char* value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A condition clause used for row-level filtering.</p>
     */
    inline const Aws::String& GetFilterPredicate() const{ return m_filterPredicate; }
    inline bool FilterPredicateHasBeenSet() const { return m_filterPredicateHasBeenSet; }
    inline void SetFilterPredicate(const Aws::String& value) { m_filterPredicateHasBeenSet = true; m_filterPredicate = value; }
    inline void SetFilterPredicate(Aws::String&& value) { m_filterPredicateHasBeenSet = true; m_filterPredicate = std::move(value); }
    inline void SetFilterPredicate(const char* value) { m_filterPredicateHasBeenSet = true; m_filterPredicate.assign(value); }
    inline SourceTableConfig& WithFilterPredicate(const Aws::String& value) { SetFilterPredicate(value); return *this;}
    inline SourceTableConfig& WithFilterPredicate(Aws::String&& value) { SetFilterPredicate(std::move(value)); return *this;}
    inline SourceTableConfig& WithFilterPredicate(const char* value) { SetFilterPredicate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of a record.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrimaryKey() const{ return m_primaryKey; }
    inline bool PrimaryKeyHasBeenSet() const { return m_primaryKeyHasBeenSet; }
    inline void SetPrimaryKey(const Aws::Vector<Aws::String>& value) { m_primaryKeyHasBeenSet = true; m_primaryKey = value; }
    inline void SetPrimaryKey(Aws::Vector<Aws::String>&& value) { m_primaryKeyHasBeenSet = true; m_primaryKey = std::move(value); }
    inline SourceTableConfig& WithPrimaryKey(const Aws::Vector<Aws::String>& value) { SetPrimaryKey(value); return *this;}
    inline SourceTableConfig& WithPrimaryKey(Aws::Vector<Aws::String>&& value) { SetPrimaryKey(std::move(value)); return *this;}
    inline SourceTableConfig& AddPrimaryKey(const Aws::String& value) { m_primaryKeyHasBeenSet = true; m_primaryKey.push_back(value); return *this; }
    inline SourceTableConfig& AddPrimaryKey(Aws::String&& value) { m_primaryKeyHasBeenSet = true; m_primaryKey.push_back(std::move(value)); return *this; }
    inline SourceTableConfig& AddPrimaryKey(const char* value) { m_primaryKeyHasBeenSet = true; m_primaryKey.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Incremental pull timestamp-based field.</p>
     */
    inline const Aws::String& GetRecordUpdateField() const{ return m_recordUpdateField; }
    inline bool RecordUpdateFieldHasBeenSet() const { return m_recordUpdateFieldHasBeenSet; }
    inline void SetRecordUpdateField(const Aws::String& value) { m_recordUpdateFieldHasBeenSet = true; m_recordUpdateField = value; }
    inline void SetRecordUpdateField(Aws::String&& value) { m_recordUpdateFieldHasBeenSet = true; m_recordUpdateField = std::move(value); }
    inline void SetRecordUpdateField(const char* value) { m_recordUpdateFieldHasBeenSet = true; m_recordUpdateField.assign(value); }
    inline SourceTableConfig& WithRecordUpdateField(const Aws::String& value) { SetRecordUpdateField(value); return *this;}
    inline SourceTableConfig& WithRecordUpdateField(Aws::String&& value) { SetRecordUpdateField(std::move(value)); return *this;}
    inline SourceTableConfig& WithRecordUpdateField(const char* value) { SetRecordUpdateField(value); return *this;}
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
