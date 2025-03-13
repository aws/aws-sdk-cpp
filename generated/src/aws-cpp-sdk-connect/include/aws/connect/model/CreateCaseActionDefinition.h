/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/FieldValue.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The <code>CreateCase</code> action definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateCaseActionDefinition">AWS
   * API Reference</a></p>
   */
  class CreateCaseActionDefinition
  {
  public:
    AWS_CONNECT_API CreateCaseActionDefinition() = default;
    AWS_CONNECT_API CreateCaseActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API CreateCaseActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects with <code>Field ID</code> and <code>Value</code>
     * data.</p>
     */
    inline const Aws::Vector<FieldValue>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<FieldValue>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<FieldValue>>
    CreateCaseActionDefinition& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = FieldValue>
    CreateCaseActionDefinition& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier of a template.</p>
     */
    inline const Aws::String& GetTemplateId() const { return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    template<typename TemplateIdT = Aws::String>
    void SetTemplateId(TemplateIdT&& value) { m_templateIdHasBeenSet = true; m_templateId = std::forward<TemplateIdT>(value); }
    template<typename TemplateIdT = Aws::String>
    CreateCaseActionDefinition& WithTemplateId(TemplateIdT&& value) { SetTemplateId(std::forward<TemplateIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FieldValue> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
