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
    AWS_APPSYNC_API DataSourceIntrospectionModelIndex() = default;
    AWS_APPSYNC_API DataSourceIntrospectionModelIndex(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API DataSourceIntrospectionModelIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the index.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataSourceIntrospectionModelIndex& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fields of the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<Aws::String>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<Aws::String>>
    DataSourceIntrospectionModelIndex& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = Aws::String>
    DataSourceIntrospectionModelIndex& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
