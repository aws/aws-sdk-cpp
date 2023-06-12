/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/CodegenGenericDataField.h>
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
   * <p>Describes a non-model in a generic data schema.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CodegenGenericDataNonModel">AWS
   * API Reference</a></p>
   */
  class CodegenGenericDataNonModel
  {
  public:
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataNonModel();
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataNonModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataNonModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fields in a generic data schema non model.</p>
     */
    inline const Aws::Map<Aws::String, CodegenGenericDataField>& GetFields() const{ return m_fields; }

    /**
     * <p>The fields in a generic data schema non model.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>The fields in a generic data schema non model.</p>
     */
    inline void SetFields(const Aws::Map<Aws::String, CodegenGenericDataField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>The fields in a generic data schema non model.</p>
     */
    inline void SetFields(Aws::Map<Aws::String, CodegenGenericDataField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>The fields in a generic data schema non model.</p>
     */
    inline CodegenGenericDataNonModel& WithFields(const Aws::Map<Aws::String, CodegenGenericDataField>& value) { SetFields(value); return *this;}

    /**
     * <p>The fields in a generic data schema non model.</p>
     */
    inline CodegenGenericDataNonModel& WithFields(Aws::Map<Aws::String, CodegenGenericDataField>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>The fields in a generic data schema non model.</p>
     */
    inline CodegenGenericDataNonModel& AddFields(const Aws::String& key, const CodegenGenericDataField& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }

    /**
     * <p>The fields in a generic data schema non model.</p>
     */
    inline CodegenGenericDataNonModel& AddFields(Aws::String&& key, const CodegenGenericDataField& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), value); return *this; }

    /**
     * <p>The fields in a generic data schema non model.</p>
     */
    inline CodegenGenericDataNonModel& AddFields(const Aws::String& key, CodegenGenericDataField&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The fields in a generic data schema non model.</p>
     */
    inline CodegenGenericDataNonModel& AddFields(Aws::String&& key, CodegenGenericDataField&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The fields in a generic data schema non model.</p>
     */
    inline CodegenGenericDataNonModel& AddFields(const char* key, CodegenGenericDataField&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The fields in a generic data schema non model.</p>
     */
    inline CodegenGenericDataNonModel& AddFields(const char* key, const CodegenGenericDataField& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, CodegenGenericDataField> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
