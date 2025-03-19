/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appsync/model/DataSourceIntrospectionModelIndex.h>
#include <aws/appsync/model/DataSourceIntrospectionModelField.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Contains the introspected data that was retrieved from the data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DataSourceIntrospectionModel">AWS
   * API Reference</a></p>
   */
  class DataSourceIntrospectionModel
  {
  public:
    AWS_APPSYNC_API DataSourceIntrospectionModel() = default;
    AWS_APPSYNC_API DataSourceIntrospectionModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API DataSourceIntrospectionModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model. For example, this could be the name of a single table
     * in a database.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataSourceIntrospectionModel& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>DataSourceIntrospectionModelField</code> object data.</p>
     */
    inline const Aws::Vector<DataSourceIntrospectionModelField>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<DataSourceIntrospectionModelField>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<DataSourceIntrospectionModelField>>
    DataSourceIntrospectionModel& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = DataSourceIntrospectionModelField>
    DataSourceIntrospectionModel& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The primary key stored as a <code>DataSourceIntrospectionModelIndex</code>
     * object.</p>
     */
    inline const DataSourceIntrospectionModelIndex& GetPrimaryKey() const { return m_primaryKey; }
    inline bool PrimaryKeyHasBeenSet() const { return m_primaryKeyHasBeenSet; }
    template<typename PrimaryKeyT = DataSourceIntrospectionModelIndex>
    void SetPrimaryKey(PrimaryKeyT&& value) { m_primaryKeyHasBeenSet = true; m_primaryKey = std::forward<PrimaryKeyT>(value); }
    template<typename PrimaryKeyT = DataSourceIntrospectionModelIndex>
    DataSourceIntrospectionModel& WithPrimaryKey(PrimaryKeyT&& value) { SetPrimaryKey(std::forward<PrimaryKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array of <code>DataSourceIntrospectionModelIndex</code> objects.</p>
     */
    inline const Aws::Vector<DataSourceIntrospectionModelIndex>& GetIndexes() const { return m_indexes; }
    inline bool IndexesHasBeenSet() const { return m_indexesHasBeenSet; }
    template<typename IndexesT = Aws::Vector<DataSourceIntrospectionModelIndex>>
    void SetIndexes(IndexesT&& value) { m_indexesHasBeenSet = true; m_indexes = std::forward<IndexesT>(value); }
    template<typename IndexesT = Aws::Vector<DataSourceIntrospectionModelIndex>>
    DataSourceIntrospectionModel& WithIndexes(IndexesT&& value) { SetIndexes(std::forward<IndexesT>(value)); return *this;}
    template<typename IndexesT = DataSourceIntrospectionModelIndex>
    DataSourceIntrospectionModel& AddIndexes(IndexesT&& value) { m_indexesHasBeenSet = true; m_indexes.emplace_back(std::forward<IndexesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains the output of the SDL that was generated from the introspected
     * types. This is controlled by the <code>includeModelsSDL</code> parameter of the
     * <code>GetDataSourceIntrospection</code> operation.</p>
     */
    inline const Aws::String& GetSdl() const { return m_sdl; }
    inline bool SdlHasBeenSet() const { return m_sdlHasBeenSet; }
    template<typename SdlT = Aws::String>
    void SetSdl(SdlT&& value) { m_sdlHasBeenSet = true; m_sdl = std::forward<SdlT>(value); }
    template<typename SdlT = Aws::String>
    DataSourceIntrospectionModel& WithSdl(SdlT&& value) { SetSdl(std::forward<SdlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<DataSourceIntrospectionModelField> m_fields;
    bool m_fieldsHasBeenSet = false;

    DataSourceIntrospectionModelIndex m_primaryKey;
    bool m_primaryKeyHasBeenSet = false;

    Aws::Vector<DataSourceIntrospectionModelIndex> m_indexes;
    bool m_indexesHasBeenSet = false;

    Aws::String m_sdl;
    bool m_sdlHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
