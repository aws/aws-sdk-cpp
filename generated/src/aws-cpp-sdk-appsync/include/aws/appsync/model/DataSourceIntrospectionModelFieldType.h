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
    AWS_APPSYNC_API DataSourceIntrospectionModelFieldType() = default;
    AWS_APPSYNC_API DataSourceIntrospectionModelFieldType(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API DataSourceIntrospectionModelFieldType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the classification of data. For example, this could be set to
     * values like <code>Scalar</code> or <code>NonNull</code> to indicate a
     * fundamental property of the field.</p> <p>Valid values include:</p> <ul> <li>
     * <p> <code>Scalar</code>: Indicates the value is a primitive type (scalar).</p>
     * </li> <li> <p> <code>NonNull</code>: Indicates the field cannot be
     * <code>null</code>.</p> </li> <li> <p> <code>List</code>: Indicates the field
     * contains a list.</p> </li> </ul>
     */
    inline const Aws::String& GetKind() const { return m_kind; }
    inline bool KindHasBeenSet() const { return m_kindHasBeenSet; }
    template<typename KindT = Aws::String>
    void SetKind(KindT&& value) { m_kindHasBeenSet = true; m_kind = std::forward<KindT>(value); }
    template<typename KindT = Aws::String>
    DataSourceIntrospectionModelFieldType& WithKind(KindT&& value) { SetKind(std::forward<KindT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data type that represents the field. For example,
     * <code>String</code> is a valid <code>name</code> value.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataSourceIntrospectionModelFieldType& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const DataSourceIntrospectionModelFieldType& GetType() const{
      return *m_type;
    }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = DataSourceIntrospectionModelFieldType>
    void SetType(TypeT&& value) {
      m_typeHasBeenSet = true; 
      m_type = Aws::MakeShared<DataSourceIntrospectionModelFieldType>("DataSourceIntrospectionModelFieldType", std::forward<TypeT>(value));
    }
    template<typename TypeT = DataSourceIntrospectionModelFieldType>
    DataSourceIntrospectionModelFieldType& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of the <code>type</code> field. This field represents the AppSync
     * data type equivalent of the introspected field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    DataSourceIntrospectionModelFieldType& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    DataSourceIntrospectionModelFieldType& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
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
