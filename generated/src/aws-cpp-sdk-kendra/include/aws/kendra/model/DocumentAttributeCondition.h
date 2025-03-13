/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/ConditionOperator.h>
#include <aws/kendra/model/DocumentAttributeValue.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>The condition used for the target document attribute or metadata field when
   * ingesting documents into Amazon Kendra. You use this with <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/API_DocumentAttributeTarget.html">DocumentAttributeTarget
   * to apply the condition</a>.</p> <p>For example, you can create the 'Department'
   * target field and have it prefill department names associated with the documents
   * based on information in the 'Source_URI' field. Set the condition that if the
   * 'Source_URI' field contains 'financial' in its URI value, then prefill the
   * target field 'Department' with the target value 'Finance' for the document.</p>
   * <p>Amazon Kendra cannot create a target field if it has not already been created
   * as an index field. After you create your index field, you can create a document
   * metadata field using <code>DocumentAttributeTarget</code>. Amazon Kendra then
   * will map your newly created metadata field to your index field.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DocumentAttributeCondition">AWS
   * API Reference</a></p>
   */
  class DocumentAttributeCondition
  {
  public:
    AWS_KENDRA_API DocumentAttributeCondition() = default;
    AWS_KENDRA_API DocumentAttributeCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DocumentAttributeCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the document attribute used for the condition.</p> <p>For
     * example, 'Source_URI' could be an identifier for the attribute or metadata field
     * that contains source URIs associated with the documents.</p> <p>Amazon Kendra
     * currently does not support <code>_document_body</code> as an attribute key used
     * for the condition.</p>
     */
    inline const Aws::String& GetConditionDocumentAttributeKey() const { return m_conditionDocumentAttributeKey; }
    inline bool ConditionDocumentAttributeKeyHasBeenSet() const { return m_conditionDocumentAttributeKeyHasBeenSet; }
    template<typename ConditionDocumentAttributeKeyT = Aws::String>
    void SetConditionDocumentAttributeKey(ConditionDocumentAttributeKeyT&& value) { m_conditionDocumentAttributeKeyHasBeenSet = true; m_conditionDocumentAttributeKey = std::forward<ConditionDocumentAttributeKeyT>(value); }
    template<typename ConditionDocumentAttributeKeyT = Aws::String>
    DocumentAttributeCondition& WithConditionDocumentAttributeKey(ConditionDocumentAttributeKeyT&& value) { SetConditionDocumentAttributeKey(std::forward<ConditionDocumentAttributeKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition operator.</p> <p>For example, you can use 'Contains' to
     * partially match a string.</p>
     */
    inline ConditionOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(ConditionOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline DocumentAttributeCondition& WithOperator(ConditionOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value used by the operator.</p> <p>For example, you can specify the value
     * 'financial' for strings in the 'Source_URI' field that partially match or
     * contain this value.</p>
     */
    inline const DocumentAttributeValue& GetConditionOnValue() const { return m_conditionOnValue; }
    inline bool ConditionOnValueHasBeenSet() const { return m_conditionOnValueHasBeenSet; }
    template<typename ConditionOnValueT = DocumentAttributeValue>
    void SetConditionOnValue(ConditionOnValueT&& value) { m_conditionOnValueHasBeenSet = true; m_conditionOnValue = std::forward<ConditionOnValueT>(value); }
    template<typename ConditionOnValueT = DocumentAttributeValue>
    DocumentAttributeCondition& WithConditionOnValue(ConditionOnValueT&& value) { SetConditionOnValue(std::forward<ConditionOnValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_conditionDocumentAttributeKey;
    bool m_conditionDocumentAttributeKeyHasBeenSet = false;

    ConditionOperator m_operator{ConditionOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    DocumentAttributeValue m_conditionOnValue;
    bool m_conditionOnValueHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
