/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/CodegenJobGenericDataSourceType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/CodegenGenericDataModel.h>
#include <aws/amplifyuibuilder/model/CodegenGenericDataEnum.h>
#include <aws/amplifyuibuilder/model/CodegenGenericDataNonModel.h>
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
   * <p>Describes the data schema for a code generation job.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CodegenJobGenericDataSchema">AWS
   * API Reference</a></p>
   */
  class CodegenJobGenericDataSchema
  {
  public:
    AWS_AMPLIFYUIBUILDER_API CodegenJobGenericDataSchema() = default;
    AWS_AMPLIFYUIBUILDER_API CodegenJobGenericDataSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CodegenJobGenericDataSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the data source for the schema. Currently, the only valid value
     * is an Amplify <code>DataStore</code>.</p>
     */
    inline CodegenJobGenericDataSourceType GetDataSourceType() const { return m_dataSourceType; }
    inline bool DataSourceTypeHasBeenSet() const { return m_dataSourceTypeHasBeenSet; }
    inline void SetDataSourceType(CodegenJobGenericDataSourceType value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = value; }
    inline CodegenJobGenericDataSchema& WithDataSourceType(CodegenJobGenericDataSourceType value) { SetDataSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a <code>CodegenGenericDataModel</code>.</p>
     */
    inline const Aws::Map<Aws::String, CodegenGenericDataModel>& GetModels() const { return m_models; }
    inline bool ModelsHasBeenSet() const { return m_modelsHasBeenSet; }
    template<typename ModelsT = Aws::Map<Aws::String, CodegenGenericDataModel>>
    void SetModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models = std::forward<ModelsT>(value); }
    template<typename ModelsT = Aws::Map<Aws::String, CodegenGenericDataModel>>
    CodegenJobGenericDataSchema& WithModels(ModelsT&& value) { SetModels(std::forward<ModelsT>(value)); return *this;}
    template<typename ModelsKeyT = Aws::String, typename ModelsValueT = CodegenGenericDataModel>
    CodegenJobGenericDataSchema& AddModels(ModelsKeyT&& key, ModelsValueT&& value) {
      m_modelsHasBeenSet = true; m_models.emplace(std::forward<ModelsKeyT>(key), std::forward<ModelsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of a <code>CodegenGenericDataEnum</code>.</p>
     */
    inline const Aws::Map<Aws::String, CodegenGenericDataEnum>& GetEnums() const { return m_enums; }
    inline bool EnumsHasBeenSet() const { return m_enumsHasBeenSet; }
    template<typename EnumsT = Aws::Map<Aws::String, CodegenGenericDataEnum>>
    void SetEnums(EnumsT&& value) { m_enumsHasBeenSet = true; m_enums = std::forward<EnumsT>(value); }
    template<typename EnumsT = Aws::Map<Aws::String, CodegenGenericDataEnum>>
    CodegenJobGenericDataSchema& WithEnums(EnumsT&& value) { SetEnums(std::forward<EnumsT>(value)); return *this;}
    template<typename EnumsKeyT = Aws::String, typename EnumsValueT = CodegenGenericDataEnum>
    CodegenJobGenericDataSchema& AddEnums(EnumsKeyT&& key, EnumsValueT&& value) {
      m_enumsHasBeenSet = true; m_enums.emplace(std::forward<EnumsKeyT>(key), std::forward<EnumsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of a <code>CodegenGenericDataNonModel</code>.</p>
     */
    inline const Aws::Map<Aws::String, CodegenGenericDataNonModel>& GetNonModels() const { return m_nonModels; }
    inline bool NonModelsHasBeenSet() const { return m_nonModelsHasBeenSet; }
    template<typename NonModelsT = Aws::Map<Aws::String, CodegenGenericDataNonModel>>
    void SetNonModels(NonModelsT&& value) { m_nonModelsHasBeenSet = true; m_nonModels = std::forward<NonModelsT>(value); }
    template<typename NonModelsT = Aws::Map<Aws::String, CodegenGenericDataNonModel>>
    CodegenJobGenericDataSchema& WithNonModels(NonModelsT&& value) { SetNonModels(std::forward<NonModelsT>(value)); return *this;}
    template<typename NonModelsKeyT = Aws::String, typename NonModelsValueT = CodegenGenericDataNonModel>
    CodegenJobGenericDataSchema& AddNonModels(NonModelsKeyT&& key, NonModelsValueT&& value) {
      m_nonModelsHasBeenSet = true; m_nonModels.emplace(std::forward<NonModelsKeyT>(key), std::forward<NonModelsValueT>(value)); return *this;
    }
    ///@}
  private:

    CodegenJobGenericDataSourceType m_dataSourceType{CodegenJobGenericDataSourceType::NOT_SET};
    bool m_dataSourceTypeHasBeenSet = false;

    Aws::Map<Aws::String, CodegenGenericDataModel> m_models;
    bool m_modelsHasBeenSet = false;

    Aws::Map<Aws::String, CodegenGenericDataEnum> m_enums;
    bool m_enumsHasBeenSet = false;

    Aws::Map<Aws::String, CodegenGenericDataNonModel> m_nonModels;
    bool m_nonModelsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
