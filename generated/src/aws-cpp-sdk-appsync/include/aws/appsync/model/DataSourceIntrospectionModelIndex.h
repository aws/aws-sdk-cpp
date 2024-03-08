/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The index that was retrieved from the introspected data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DataSourceIntrospectionModelIndex">AWS
   * API Reference</a></p>
   */
  class DataSourceIntrospectionModelIndex
  {
  public:
    AWS_APPSYNC_API DataSourceIntrospectionModelIndex();
    AWS_APPSYNC_API DataSourceIntrospectionModelIndex(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API DataSourceIntrospectionModelIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the index.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the index.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the index.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the index.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the index.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the index.</p>
     */
    inline DataSourceIntrospectionModelIndex& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the index.</p>
     */
    inline DataSourceIntrospectionModelIndex& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the index.</p>
     */
    inline DataSourceIntrospectionModelIndex& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The fields of the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFields() const{ return m_fields; }

    /**
     * <p>The fields of the index.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>The fields of the index.</p>
     */
    inline void SetFields(const Aws::Vector<Aws::String>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>The fields of the index.</p>
     */
    inline void SetFields(Aws::Vector<Aws::String>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>The fields of the index.</p>
     */
    inline DataSourceIntrospectionModelIndex& WithFields(const Aws::Vector<Aws::String>& value) { SetFields(value); return *this;}

    /**
     * <p>The fields of the index.</p>
     */
    inline DataSourceIntrospectionModelIndex& WithFields(Aws::Vector<Aws::String>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>The fields of the index.</p>
     */
    inline DataSourceIntrospectionModelIndex& AddFields(const Aws::String& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>The fields of the index.</p>
     */
    inline DataSourceIntrospectionModelIndex& AddFields(Aws::String&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }

    /**
     * <p>The fields of the index.</p>
     */
    inline DataSourceIntrospectionModelIndex& AddFields(const char* value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
