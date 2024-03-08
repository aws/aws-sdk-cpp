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
    AWS_APPSYNC_API DataSourceIntrospectionModel();
    AWS_APPSYNC_API DataSourceIntrospectionModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API DataSourceIntrospectionModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the model. For example, this could be the name of a single table
     * in a database.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the model. For example, this could be the name of a single table
     * in a database.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the model. For example, this could be the name of a single table
     * in a database.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the model. For example, this could be the name of a single table
     * in a database.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the model. For example, this could be the name of a single table
     * in a database.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the model. For example, this could be the name of a single table
     * in a database.</p>
     */
    inline DataSourceIntrospectionModel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the model. For example, this could be the name of a single table
     * in a database.</p>
     */
    inline DataSourceIntrospectionModel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the model. For example, this could be the name of a single table
     * in a database.</p>
     */
    inline DataSourceIntrospectionModel& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The <code>DataSourceIntrospectionModelField</code> object data.</p>
     */
    inline const Aws::Vector<DataSourceIntrospectionModelField>& GetFields() const{ return m_fields; }

    /**
     * <p>The <code>DataSourceIntrospectionModelField</code> object data.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>The <code>DataSourceIntrospectionModelField</code> object data.</p>
     */
    inline void SetFields(const Aws::Vector<DataSourceIntrospectionModelField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>The <code>DataSourceIntrospectionModelField</code> object data.</p>
     */
    inline void SetFields(Aws::Vector<DataSourceIntrospectionModelField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>The <code>DataSourceIntrospectionModelField</code> object data.</p>
     */
    inline DataSourceIntrospectionModel& WithFields(const Aws::Vector<DataSourceIntrospectionModelField>& value) { SetFields(value); return *this;}

    /**
     * <p>The <code>DataSourceIntrospectionModelField</code> object data.</p>
     */
    inline DataSourceIntrospectionModel& WithFields(Aws::Vector<DataSourceIntrospectionModelField>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>The <code>DataSourceIntrospectionModelField</code> object data.</p>
     */
    inline DataSourceIntrospectionModel& AddFields(const DataSourceIntrospectionModelField& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>The <code>DataSourceIntrospectionModelField</code> object data.</p>
     */
    inline DataSourceIntrospectionModel& AddFields(DataSourceIntrospectionModelField&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }


    /**
     * <p>The primary key stored as a <code>DataSourceIntrospectionModelIndex</code>
     * object.</p>
     */
    inline const DataSourceIntrospectionModelIndex& GetPrimaryKey() const{ return m_primaryKey; }

    /**
     * <p>The primary key stored as a <code>DataSourceIntrospectionModelIndex</code>
     * object.</p>
     */
    inline bool PrimaryKeyHasBeenSet() const { return m_primaryKeyHasBeenSet; }

    /**
     * <p>The primary key stored as a <code>DataSourceIntrospectionModelIndex</code>
     * object.</p>
     */
    inline void SetPrimaryKey(const DataSourceIntrospectionModelIndex& value) { m_primaryKeyHasBeenSet = true; m_primaryKey = value; }

    /**
     * <p>The primary key stored as a <code>DataSourceIntrospectionModelIndex</code>
     * object.</p>
     */
    inline void SetPrimaryKey(DataSourceIntrospectionModelIndex&& value) { m_primaryKeyHasBeenSet = true; m_primaryKey = std::move(value); }

    /**
     * <p>The primary key stored as a <code>DataSourceIntrospectionModelIndex</code>
     * object.</p>
     */
    inline DataSourceIntrospectionModel& WithPrimaryKey(const DataSourceIntrospectionModelIndex& value) { SetPrimaryKey(value); return *this;}

    /**
     * <p>The primary key stored as a <code>DataSourceIntrospectionModelIndex</code>
     * object.</p>
     */
    inline DataSourceIntrospectionModel& WithPrimaryKey(DataSourceIntrospectionModelIndex&& value) { SetPrimaryKey(std::move(value)); return *this;}


    /**
     * <p>The array of <code>DataSourceIntrospectionModelIndex</code> objects.</p>
     */
    inline const Aws::Vector<DataSourceIntrospectionModelIndex>& GetIndexes() const{ return m_indexes; }

    /**
     * <p>The array of <code>DataSourceIntrospectionModelIndex</code> objects.</p>
     */
    inline bool IndexesHasBeenSet() const { return m_indexesHasBeenSet; }

    /**
     * <p>The array of <code>DataSourceIntrospectionModelIndex</code> objects.</p>
     */
    inline void SetIndexes(const Aws::Vector<DataSourceIntrospectionModelIndex>& value) { m_indexesHasBeenSet = true; m_indexes = value; }

    /**
     * <p>The array of <code>DataSourceIntrospectionModelIndex</code> objects.</p>
     */
    inline void SetIndexes(Aws::Vector<DataSourceIntrospectionModelIndex>&& value) { m_indexesHasBeenSet = true; m_indexes = std::move(value); }

    /**
     * <p>The array of <code>DataSourceIntrospectionModelIndex</code> objects.</p>
     */
    inline DataSourceIntrospectionModel& WithIndexes(const Aws::Vector<DataSourceIntrospectionModelIndex>& value) { SetIndexes(value); return *this;}

    /**
     * <p>The array of <code>DataSourceIntrospectionModelIndex</code> objects.</p>
     */
    inline DataSourceIntrospectionModel& WithIndexes(Aws::Vector<DataSourceIntrospectionModelIndex>&& value) { SetIndexes(std::move(value)); return *this;}

    /**
     * <p>The array of <code>DataSourceIntrospectionModelIndex</code> objects.</p>
     */
    inline DataSourceIntrospectionModel& AddIndexes(const DataSourceIntrospectionModelIndex& value) { m_indexesHasBeenSet = true; m_indexes.push_back(value); return *this; }

    /**
     * <p>The array of <code>DataSourceIntrospectionModelIndex</code> objects.</p>
     */
    inline DataSourceIntrospectionModel& AddIndexes(DataSourceIntrospectionModelIndex&& value) { m_indexesHasBeenSet = true; m_indexes.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains the output of the SDL that was generated from the introspected
     * types. This is controlled by the <code>includeModelsSDL</code> parameter of the
     * <code>GetDataSourceIntrospection</code> operation.</p>
     */
    inline const Aws::String& GetSdl() const{ return m_sdl; }

    /**
     * <p>Contains the output of the SDL that was generated from the introspected
     * types. This is controlled by the <code>includeModelsSDL</code> parameter of the
     * <code>GetDataSourceIntrospection</code> operation.</p>
     */
    inline bool SdlHasBeenSet() const { return m_sdlHasBeenSet; }

    /**
     * <p>Contains the output of the SDL that was generated from the introspected
     * types. This is controlled by the <code>includeModelsSDL</code> parameter of the
     * <code>GetDataSourceIntrospection</code> operation.</p>
     */
    inline void SetSdl(const Aws::String& value) { m_sdlHasBeenSet = true; m_sdl = value; }

    /**
     * <p>Contains the output of the SDL that was generated from the introspected
     * types. This is controlled by the <code>includeModelsSDL</code> parameter of the
     * <code>GetDataSourceIntrospection</code> operation.</p>
     */
    inline void SetSdl(Aws::String&& value) { m_sdlHasBeenSet = true; m_sdl = std::move(value); }

    /**
     * <p>Contains the output of the SDL that was generated from the introspected
     * types. This is controlled by the <code>includeModelsSDL</code> parameter of the
     * <code>GetDataSourceIntrospection</code> operation.</p>
     */
    inline void SetSdl(const char* value) { m_sdlHasBeenSet = true; m_sdl.assign(value); }

    /**
     * <p>Contains the output of the SDL that was generated from the introspected
     * types. This is controlled by the <code>includeModelsSDL</code> parameter of the
     * <code>GetDataSourceIntrospection</code> operation.</p>
     */
    inline DataSourceIntrospectionModel& WithSdl(const Aws::String& value) { SetSdl(value); return *this;}

    /**
     * <p>Contains the output of the SDL that was generated from the introspected
     * types. This is controlled by the <code>includeModelsSDL</code> parameter of the
     * <code>GetDataSourceIntrospection</code> operation.</p>
     */
    inline DataSourceIntrospectionModel& WithSdl(Aws::String&& value) { SetSdl(std::move(value)); return *this;}

    /**
     * <p>Contains the output of the SDL that was generated from the introspected
     * types. This is controlled by the <code>includeModelsSDL</code> parameter of the
     * <code>GetDataSourceIntrospection</code> operation.</p>
     */
    inline DataSourceIntrospectionModel& WithSdl(const char* value) { SetSdl(value); return *this;}

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
