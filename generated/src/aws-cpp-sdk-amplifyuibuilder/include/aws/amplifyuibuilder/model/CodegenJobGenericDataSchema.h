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
    AWS_AMPLIFYUIBUILDER_API CodegenJobGenericDataSchema();
    AWS_AMPLIFYUIBUILDER_API CodegenJobGenericDataSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CodegenJobGenericDataSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the data source for the schema. Currently, the only valid value
     * is an Amplify <code>DataStore</code>.</p>
     */
    inline const CodegenJobGenericDataSourceType& GetDataSourceType() const{ return m_dataSourceType; }

    /**
     * <p>The type of the data source for the schema. Currently, the only valid value
     * is an Amplify <code>DataStore</code>.</p>
     */
    inline bool DataSourceTypeHasBeenSet() const { return m_dataSourceTypeHasBeenSet; }

    /**
     * <p>The type of the data source for the schema. Currently, the only valid value
     * is an Amplify <code>DataStore</code>.</p>
     */
    inline void SetDataSourceType(const CodegenJobGenericDataSourceType& value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = value; }

    /**
     * <p>The type of the data source for the schema. Currently, the only valid value
     * is an Amplify <code>DataStore</code>.</p>
     */
    inline void SetDataSourceType(CodegenJobGenericDataSourceType&& value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = std::move(value); }

    /**
     * <p>The type of the data source for the schema. Currently, the only valid value
     * is an Amplify <code>DataStore</code>.</p>
     */
    inline CodegenJobGenericDataSchema& WithDataSourceType(const CodegenJobGenericDataSourceType& value) { SetDataSourceType(value); return *this;}

    /**
     * <p>The type of the data source for the schema. Currently, the only valid value
     * is an Amplify <code>DataStore</code>.</p>
     */
    inline CodegenJobGenericDataSchema& WithDataSourceType(CodegenJobGenericDataSourceType&& value) { SetDataSourceType(std::move(value)); return *this;}


    /**
     * <p>The name of a <code>CodegenGenericDataModel</code>.</p>
     */
    inline const Aws::Map<Aws::String, CodegenGenericDataModel>& GetModels() const{ return m_models; }

    /**
     * <p>The name of a <code>CodegenGenericDataModel</code>.</p>
     */
    inline bool ModelsHasBeenSet() const { return m_modelsHasBeenSet; }

    /**
     * <p>The name of a <code>CodegenGenericDataModel</code>.</p>
     */
    inline void SetModels(const Aws::Map<Aws::String, CodegenGenericDataModel>& value) { m_modelsHasBeenSet = true; m_models = value; }

    /**
     * <p>The name of a <code>CodegenGenericDataModel</code>.</p>
     */
    inline void SetModels(Aws::Map<Aws::String, CodegenGenericDataModel>&& value) { m_modelsHasBeenSet = true; m_models = std::move(value); }

    /**
     * <p>The name of a <code>CodegenGenericDataModel</code>.</p>
     */
    inline CodegenJobGenericDataSchema& WithModels(const Aws::Map<Aws::String, CodegenGenericDataModel>& value) { SetModels(value); return *this;}

    /**
     * <p>The name of a <code>CodegenGenericDataModel</code>.</p>
     */
    inline CodegenJobGenericDataSchema& WithModels(Aws::Map<Aws::String, CodegenGenericDataModel>&& value) { SetModels(std::move(value)); return *this;}

    /**
     * <p>The name of a <code>CodegenGenericDataModel</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddModels(const Aws::String& key, const CodegenGenericDataModel& value) { m_modelsHasBeenSet = true; m_models.emplace(key, value); return *this; }

    /**
     * <p>The name of a <code>CodegenGenericDataModel</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddModels(Aws::String&& key, const CodegenGenericDataModel& value) { m_modelsHasBeenSet = true; m_models.emplace(std::move(key), value); return *this; }

    /**
     * <p>The name of a <code>CodegenGenericDataModel</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddModels(const Aws::String& key, CodegenGenericDataModel&& value) { m_modelsHasBeenSet = true; m_models.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The name of a <code>CodegenGenericDataModel</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddModels(Aws::String&& key, CodegenGenericDataModel&& value) { m_modelsHasBeenSet = true; m_models.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The name of a <code>CodegenGenericDataModel</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddModels(const char* key, CodegenGenericDataModel&& value) { m_modelsHasBeenSet = true; m_models.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The name of a <code>CodegenGenericDataModel</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddModels(const char* key, const CodegenGenericDataModel& value) { m_modelsHasBeenSet = true; m_models.emplace(key, value); return *this; }


    /**
     * <p>The name of a <code>CodegenGenericDataEnum</code>.</p>
     */
    inline const Aws::Map<Aws::String, CodegenGenericDataEnum>& GetEnums() const{ return m_enums; }

    /**
     * <p>The name of a <code>CodegenGenericDataEnum</code>.</p>
     */
    inline bool EnumsHasBeenSet() const { return m_enumsHasBeenSet; }

    /**
     * <p>The name of a <code>CodegenGenericDataEnum</code>.</p>
     */
    inline void SetEnums(const Aws::Map<Aws::String, CodegenGenericDataEnum>& value) { m_enumsHasBeenSet = true; m_enums = value; }

    /**
     * <p>The name of a <code>CodegenGenericDataEnum</code>.</p>
     */
    inline void SetEnums(Aws::Map<Aws::String, CodegenGenericDataEnum>&& value) { m_enumsHasBeenSet = true; m_enums = std::move(value); }

    /**
     * <p>The name of a <code>CodegenGenericDataEnum</code>.</p>
     */
    inline CodegenJobGenericDataSchema& WithEnums(const Aws::Map<Aws::String, CodegenGenericDataEnum>& value) { SetEnums(value); return *this;}

    /**
     * <p>The name of a <code>CodegenGenericDataEnum</code>.</p>
     */
    inline CodegenJobGenericDataSchema& WithEnums(Aws::Map<Aws::String, CodegenGenericDataEnum>&& value) { SetEnums(std::move(value)); return *this;}

    /**
     * <p>The name of a <code>CodegenGenericDataEnum</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddEnums(const Aws::String& key, const CodegenGenericDataEnum& value) { m_enumsHasBeenSet = true; m_enums.emplace(key, value); return *this; }

    /**
     * <p>The name of a <code>CodegenGenericDataEnum</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddEnums(Aws::String&& key, const CodegenGenericDataEnum& value) { m_enumsHasBeenSet = true; m_enums.emplace(std::move(key), value); return *this; }

    /**
     * <p>The name of a <code>CodegenGenericDataEnum</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddEnums(const Aws::String& key, CodegenGenericDataEnum&& value) { m_enumsHasBeenSet = true; m_enums.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The name of a <code>CodegenGenericDataEnum</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddEnums(Aws::String&& key, CodegenGenericDataEnum&& value) { m_enumsHasBeenSet = true; m_enums.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The name of a <code>CodegenGenericDataEnum</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddEnums(const char* key, CodegenGenericDataEnum&& value) { m_enumsHasBeenSet = true; m_enums.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The name of a <code>CodegenGenericDataEnum</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddEnums(const char* key, const CodegenGenericDataEnum& value) { m_enumsHasBeenSet = true; m_enums.emplace(key, value); return *this; }


    /**
     * <p>The name of a <code>CodegenGenericDataNonModel</code>.</p>
     */
    inline const Aws::Map<Aws::String, CodegenGenericDataNonModel>& GetNonModels() const{ return m_nonModels; }

    /**
     * <p>The name of a <code>CodegenGenericDataNonModel</code>.</p>
     */
    inline bool NonModelsHasBeenSet() const { return m_nonModelsHasBeenSet; }

    /**
     * <p>The name of a <code>CodegenGenericDataNonModel</code>.</p>
     */
    inline void SetNonModels(const Aws::Map<Aws::String, CodegenGenericDataNonModel>& value) { m_nonModelsHasBeenSet = true; m_nonModels = value; }

    /**
     * <p>The name of a <code>CodegenGenericDataNonModel</code>.</p>
     */
    inline void SetNonModels(Aws::Map<Aws::String, CodegenGenericDataNonModel>&& value) { m_nonModelsHasBeenSet = true; m_nonModels = std::move(value); }

    /**
     * <p>The name of a <code>CodegenGenericDataNonModel</code>.</p>
     */
    inline CodegenJobGenericDataSchema& WithNonModels(const Aws::Map<Aws::String, CodegenGenericDataNonModel>& value) { SetNonModels(value); return *this;}

    /**
     * <p>The name of a <code>CodegenGenericDataNonModel</code>.</p>
     */
    inline CodegenJobGenericDataSchema& WithNonModels(Aws::Map<Aws::String, CodegenGenericDataNonModel>&& value) { SetNonModels(std::move(value)); return *this;}

    /**
     * <p>The name of a <code>CodegenGenericDataNonModel</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddNonModels(const Aws::String& key, const CodegenGenericDataNonModel& value) { m_nonModelsHasBeenSet = true; m_nonModels.emplace(key, value); return *this; }

    /**
     * <p>The name of a <code>CodegenGenericDataNonModel</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddNonModels(Aws::String&& key, const CodegenGenericDataNonModel& value) { m_nonModelsHasBeenSet = true; m_nonModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>The name of a <code>CodegenGenericDataNonModel</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddNonModels(const Aws::String& key, CodegenGenericDataNonModel&& value) { m_nonModelsHasBeenSet = true; m_nonModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The name of a <code>CodegenGenericDataNonModel</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddNonModels(Aws::String&& key, CodegenGenericDataNonModel&& value) { m_nonModelsHasBeenSet = true; m_nonModels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The name of a <code>CodegenGenericDataNonModel</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddNonModels(const char* key, CodegenGenericDataNonModel&& value) { m_nonModelsHasBeenSet = true; m_nonModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The name of a <code>CodegenGenericDataNonModel</code>.</p>
     */
    inline CodegenJobGenericDataSchema& AddNonModels(const char* key, const CodegenGenericDataNonModel& value) { m_nonModelsHasBeenSet = true; m_nonModels.emplace(key, value); return *this; }

  private:

    CodegenJobGenericDataSourceType m_dataSourceType;
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
