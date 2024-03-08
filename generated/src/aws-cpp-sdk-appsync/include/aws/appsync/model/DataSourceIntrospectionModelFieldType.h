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
   * <p>Represents the type data for each field retrieved from the
   * introspection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DataSourceIntrospectionModelFieldType">AWS
   * API Reference</a></p>
   */
  class DataSourceIntrospectionModelFieldType
  {
  public:
    AWS_APPSYNC_API DataSourceIntrospectionModelFieldType();
    AWS_APPSYNC_API DataSourceIntrospectionModelFieldType(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API DataSourceIntrospectionModelFieldType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the classification of data. For example, this could be set to
     * values like <code>Scalar</code> or <code>NonNull</code> to indicate a
     * fundamental property of the field.</p> <p>Valid values include:</p> <ul> <li>
     * <p> <code>Scalar</code>: Indicates the value is a primitive type (scalar).</p>
     * </li> <li> <p> <code>NonNull</code>: Indicates the field cannot be
     * <code>null</code>.</p> </li> <li> <p> <code>List</code>: Indicates the field
     * contains a list.</p> </li> </ul>
     */
    inline const Aws::String& GetKind() const{ return m_kind; }

    /**
     * <p>Specifies the classification of data. For example, this could be set to
     * values like <code>Scalar</code> or <code>NonNull</code> to indicate a
     * fundamental property of the field.</p> <p>Valid values include:</p> <ul> <li>
     * <p> <code>Scalar</code>: Indicates the value is a primitive type (scalar).</p>
     * </li> <li> <p> <code>NonNull</code>: Indicates the field cannot be
     * <code>null</code>.</p> </li> <li> <p> <code>List</code>: Indicates the field
     * contains a list.</p> </li> </ul>
     */
    inline bool KindHasBeenSet() const { return m_kindHasBeenSet; }

    /**
     * <p>Specifies the classification of data. For example, this could be set to
     * values like <code>Scalar</code> or <code>NonNull</code> to indicate a
     * fundamental property of the field.</p> <p>Valid values include:</p> <ul> <li>
     * <p> <code>Scalar</code>: Indicates the value is a primitive type (scalar).</p>
     * </li> <li> <p> <code>NonNull</code>: Indicates the field cannot be
     * <code>null</code>.</p> </li> <li> <p> <code>List</code>: Indicates the field
     * contains a list.</p> </li> </ul>
     */
    inline void SetKind(const Aws::String& value) { m_kindHasBeenSet = true; m_kind = value; }

    /**
     * <p>Specifies the classification of data. For example, this could be set to
     * values like <code>Scalar</code> or <code>NonNull</code> to indicate a
     * fundamental property of the field.</p> <p>Valid values include:</p> <ul> <li>
     * <p> <code>Scalar</code>: Indicates the value is a primitive type (scalar).</p>
     * </li> <li> <p> <code>NonNull</code>: Indicates the field cannot be
     * <code>null</code>.</p> </li> <li> <p> <code>List</code>: Indicates the field
     * contains a list.</p> </li> </ul>
     */
    inline void SetKind(Aws::String&& value) { m_kindHasBeenSet = true; m_kind = std::move(value); }

    /**
     * <p>Specifies the classification of data. For example, this could be set to
     * values like <code>Scalar</code> or <code>NonNull</code> to indicate a
     * fundamental property of the field.</p> <p>Valid values include:</p> <ul> <li>
     * <p> <code>Scalar</code>: Indicates the value is a primitive type (scalar).</p>
     * </li> <li> <p> <code>NonNull</code>: Indicates the field cannot be
     * <code>null</code>.</p> </li> <li> <p> <code>List</code>: Indicates the field
     * contains a list.</p> </li> </ul>
     */
    inline void SetKind(const char* value) { m_kindHasBeenSet = true; m_kind.assign(value); }

    /**
     * <p>Specifies the classification of data. For example, this could be set to
     * values like <code>Scalar</code> or <code>NonNull</code> to indicate a
     * fundamental property of the field.</p> <p>Valid values include:</p> <ul> <li>
     * <p> <code>Scalar</code>: Indicates the value is a primitive type (scalar).</p>
     * </li> <li> <p> <code>NonNull</code>: Indicates the field cannot be
     * <code>null</code>.</p> </li> <li> <p> <code>List</code>: Indicates the field
     * contains a list.</p> </li> </ul>
     */
    inline DataSourceIntrospectionModelFieldType& WithKind(const Aws::String& value) { SetKind(value); return *this;}

    /**
     * <p>Specifies the classification of data. For example, this could be set to
     * values like <code>Scalar</code> or <code>NonNull</code> to indicate a
     * fundamental property of the field.</p> <p>Valid values include:</p> <ul> <li>
     * <p> <code>Scalar</code>: Indicates the value is a primitive type (scalar).</p>
     * </li> <li> <p> <code>NonNull</code>: Indicates the field cannot be
     * <code>null</code>.</p> </li> <li> <p> <code>List</code>: Indicates the field
     * contains a list.</p> </li> </ul>
     */
    inline DataSourceIntrospectionModelFieldType& WithKind(Aws::String&& value) { SetKind(std::move(value)); return *this;}

    /**
     * <p>Specifies the classification of data. For example, this could be set to
     * values like <code>Scalar</code> or <code>NonNull</code> to indicate a
     * fundamental property of the field.</p> <p>Valid values include:</p> <ul> <li>
     * <p> <code>Scalar</code>: Indicates the value is a primitive type (scalar).</p>
     * </li> <li> <p> <code>NonNull</code>: Indicates the field cannot be
     * <code>null</code>.</p> </li> <li> <p> <code>List</code>: Indicates the field
     * contains a list.</p> </li> </ul>
     */
    inline DataSourceIntrospectionModelFieldType& WithKind(const char* value) { SetKind(value); return *this;}


    /**
     * <p>The name of the data type that represents the field. For example,
     * <code>String</code> is a valid <code>name</code> value.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data type that represents the field. For example,
     * <code>String</code> is a valid <code>name</code> value.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data type that represents the field. For example,
     * <code>String</code> is a valid <code>name</code> value.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data type that represents the field. For example,
     * <code>String</code> is a valid <code>name</code> value.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data type that represents the field. For example,
     * <code>String</code> is a valid <code>name</code> value.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data type that represents the field. For example,
     * <code>String</code> is a valid <code>name</code> value.</p>
     */
    inline DataSourceIntrospectionModelFieldType& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data type that represents the field. For example,
     * <code>String</code> is a valid <code>name</code> value.</p>
     */
    inline DataSourceIntrospectionModelFieldType& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data type that represents the field. For example,
     * <code>String</code> is a valid <code>name</code> value.</p>
     */
    inline DataSourceIntrospectionModelFieldType& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The <code>DataSourceIntrospectionModelFieldType</code> object data. The
     * <code>type</code> is only present if
     * <code>DataSourceIntrospectionModelFieldType.kind</code> is set to
     * <code>NonNull</code> or <code>List</code>. </p> <p>The <code>type</code>
     * typically contains its own <code>kind</code> and <code>name</code> fields to
     * represent the actual type data. For instance, <code>type</code> could contain a
     * <code>kind</code> value of <code>Scalar</code> with a <code>name</code> value of
     * <code>String</code>. The values <code>Scalar</code> and <code>String</code> will
     * be collectively stored in the <code>values</code> field.</p>
     */
    AWS_APPSYNC_API const DataSourceIntrospectionModelFieldType& GetType() const;

    /**
     * <p>The <code>DataSourceIntrospectionModelFieldType</code> object data. The
     * <code>type</code> is only present if
     * <code>DataSourceIntrospectionModelFieldType.kind</code> is set to
     * <code>NonNull</code> or <code>List</code>. </p> <p>The <code>type</code>
     * typically contains its own <code>kind</code> and <code>name</code> fields to
     * represent the actual type data. For instance, <code>type</code> could contain a
     * <code>kind</code> value of <code>Scalar</code> with a <code>name</code> value of
     * <code>String</code>. The values <code>Scalar</code> and <code>String</code> will
     * be collectively stored in the <code>values</code> field.</p>
     */
    AWS_APPSYNC_API bool TypeHasBeenSet() const;

    /**
     * <p>The <code>DataSourceIntrospectionModelFieldType</code> object data. The
     * <code>type</code> is only present if
     * <code>DataSourceIntrospectionModelFieldType.kind</code> is set to
     * <code>NonNull</code> or <code>List</code>. </p> <p>The <code>type</code>
     * typically contains its own <code>kind</code> and <code>name</code> fields to
     * represent the actual type data. For instance, <code>type</code> could contain a
     * <code>kind</code> value of <code>Scalar</code> with a <code>name</code> value of
     * <code>String</code>. The values <code>Scalar</code> and <code>String</code> will
     * be collectively stored in the <code>values</code> field.</p>
     */
    AWS_APPSYNC_API void SetType(const DataSourceIntrospectionModelFieldType& value);

    /**
     * <p>The <code>DataSourceIntrospectionModelFieldType</code> object data. The
     * <code>type</code> is only present if
     * <code>DataSourceIntrospectionModelFieldType.kind</code> is set to
     * <code>NonNull</code> or <code>List</code>. </p> <p>The <code>type</code>
     * typically contains its own <code>kind</code> and <code>name</code> fields to
     * represent the actual type data. For instance, <code>type</code> could contain a
     * <code>kind</code> value of <code>Scalar</code> with a <code>name</code> value of
     * <code>String</code>. The values <code>Scalar</code> and <code>String</code> will
     * be collectively stored in the <code>values</code> field.</p>
     */
    AWS_APPSYNC_API void SetType(DataSourceIntrospectionModelFieldType&& value);

    /**
     * <p>The <code>DataSourceIntrospectionModelFieldType</code> object data. The
     * <code>type</code> is only present if
     * <code>DataSourceIntrospectionModelFieldType.kind</code> is set to
     * <code>NonNull</code> or <code>List</code>. </p> <p>The <code>type</code>
     * typically contains its own <code>kind</code> and <code>name</code> fields to
     * represent the actual type data. For instance, <code>type</code> could contain a
     * <code>kind</code> value of <code>Scalar</code> with a <code>name</code> value of
     * <code>String</code>. The values <code>Scalar</code> and <code>String</code> will
     * be collectively stored in the <code>values</code> field.</p>
     */
    AWS_APPSYNC_API DataSourceIntrospectionModelFieldType& WithType(const DataSourceIntrospectionModelFieldType& value);

    /**
     * <p>The <code>DataSourceIntrospectionModelFieldType</code> object data. The
     * <code>type</code> is only present if
     * <code>DataSourceIntrospectionModelFieldType.kind</code> is set to
     * <code>NonNull</code> or <code>List</code>. </p> <p>The <code>type</code>
     * typically contains its own <code>kind</code> and <code>name</code> fields to
     * represent the actual type data. For instance, <code>type</code> could contain a
     * <code>kind</code> value of <code>Scalar</code> with a <code>name</code> value of
     * <code>String</code>. The values <code>Scalar</code> and <code>String</code> will
     * be collectively stored in the <code>values</code> field.</p>
     */
    AWS_APPSYNC_API DataSourceIntrospectionModelFieldType& WithType(DataSourceIntrospectionModelFieldType&& value);


    /**
     * <p>The values of the <code>type</code> field. This field represents the AppSync
     * data type equivalent of the introspected field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values of the <code>type</code> field. This field represents the AppSync
     * data type equivalent of the introspected field.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values of the <code>type</code> field. This field represents the AppSync
     * data type equivalent of the introspected field.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values of the <code>type</code> field. This field represents the AppSync
     * data type equivalent of the introspected field.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values of the <code>type</code> field. This field represents the AppSync
     * data type equivalent of the introspected field.</p>
     */
    inline DataSourceIntrospectionModelFieldType& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values of the <code>type</code> field. This field represents the AppSync
     * data type equivalent of the introspected field.</p>
     */
    inline DataSourceIntrospectionModelFieldType& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values of the <code>type</code> field. This field represents the AppSync
     * data type equivalent of the introspected field.</p>
     */
    inline DataSourceIntrospectionModelFieldType& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values of the <code>type</code> field. This field represents the AppSync
     * data type equivalent of the introspected field.</p>
     */
    inline DataSourceIntrospectionModelFieldType& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values of the <code>type</code> field. This field represents the AppSync
     * data type equivalent of the introspected field.</p>
     */
    inline DataSourceIntrospectionModelFieldType& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_kind;
    bool m_kindHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    std::shared_ptr<DataSourceIntrospectionModelFieldType> m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
