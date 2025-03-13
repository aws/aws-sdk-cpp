/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/FormDataSourceType.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the data type configuration for the data source associated with a
   * form.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/FormDataTypeConfig">AWS
   * API Reference</a></p>
   */
  class FormDataTypeConfig
  {
  public:
    AWS_AMPLIFYUIBUILDER_API FormDataTypeConfig() = default;
    AWS_AMPLIFYUIBUILDER_API FormDataTypeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FormDataTypeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data source type, either an Amplify DataStore model or a custom data
     * type.</p>
     */
    inline FormDataSourceType GetDataSourceType() const { return m_dataSourceType; }
    inline bool DataSourceTypeHasBeenSet() const { return m_dataSourceTypeHasBeenSet; }
    inline void SetDataSourceType(FormDataSourceType value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = value; }
    inline FormDataTypeConfig& WithDataSourceType(FormDataSourceType value) { SetDataSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the data type you are using as the data source for the
     * form.</p>
     */
    inline const Aws::String& GetDataTypeName() const { return m_dataTypeName; }
    inline bool DataTypeNameHasBeenSet() const { return m_dataTypeNameHasBeenSet; }
    template<typename DataTypeNameT = Aws::String>
    void SetDataTypeName(DataTypeNameT&& value) { m_dataTypeNameHasBeenSet = true; m_dataTypeName = std::forward<DataTypeNameT>(value); }
    template<typename DataTypeNameT = Aws::String>
    FormDataTypeConfig& WithDataTypeName(DataTypeNameT&& value) { SetDataTypeName(std::forward<DataTypeNameT>(value)); return *this;}
    ///@}
  private:

    FormDataSourceType m_dataSourceType{FormDataSourceType::NOT_SET};
    bool m_dataSourceTypeHasBeenSet = false;

    Aws::String m_dataTypeName;
    bool m_dataTypeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
