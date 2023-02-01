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
    AWS_KENDRA_API DocumentAttributeCondition();
    AWS_KENDRA_API DocumentAttributeCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DocumentAttributeCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the document attribute used for the condition.</p> <p>For
     * example, 'Source_URI' could be an identifier for the attribute or metadata field
     * that contains source URIs associated with the documents.</p> <p>Amazon Kendra
     * currently does not support <code>_document_body</code> as an attribute key used
     * for the condition.</p>
     */
    inline const Aws::String& GetConditionDocumentAttributeKey() const{ return m_conditionDocumentAttributeKey; }

    /**
     * <p>The identifier of the document attribute used for the condition.</p> <p>For
     * example, 'Source_URI' could be an identifier for the attribute or metadata field
     * that contains source URIs associated with the documents.</p> <p>Amazon Kendra
     * currently does not support <code>_document_body</code> as an attribute key used
     * for the condition.</p>
     */
    inline bool ConditionDocumentAttributeKeyHasBeenSet() const { return m_conditionDocumentAttributeKeyHasBeenSet; }

    /**
     * <p>The identifier of the document attribute used for the condition.</p> <p>For
     * example, 'Source_URI' could be an identifier for the attribute or metadata field
     * that contains source URIs associated with the documents.</p> <p>Amazon Kendra
     * currently does not support <code>_document_body</code> as an attribute key used
     * for the condition.</p>
     */
    inline void SetConditionDocumentAttributeKey(const Aws::String& value) { m_conditionDocumentAttributeKeyHasBeenSet = true; m_conditionDocumentAttributeKey = value; }

    /**
     * <p>The identifier of the document attribute used for the condition.</p> <p>For
     * example, 'Source_URI' could be an identifier for the attribute or metadata field
     * that contains source URIs associated with the documents.</p> <p>Amazon Kendra
     * currently does not support <code>_document_body</code> as an attribute key used
     * for the condition.</p>
     */
    inline void SetConditionDocumentAttributeKey(Aws::String&& value) { m_conditionDocumentAttributeKeyHasBeenSet = true; m_conditionDocumentAttributeKey = std::move(value); }

    /**
     * <p>The identifier of the document attribute used for the condition.</p> <p>For
     * example, 'Source_URI' could be an identifier for the attribute or metadata field
     * that contains source URIs associated with the documents.</p> <p>Amazon Kendra
     * currently does not support <code>_document_body</code> as an attribute key used
     * for the condition.</p>
     */
    inline void SetConditionDocumentAttributeKey(const char* value) { m_conditionDocumentAttributeKeyHasBeenSet = true; m_conditionDocumentAttributeKey.assign(value); }

    /**
     * <p>The identifier of the document attribute used for the condition.</p> <p>For
     * example, 'Source_URI' could be an identifier for the attribute or metadata field
     * that contains source URIs associated with the documents.</p> <p>Amazon Kendra
     * currently does not support <code>_document_body</code> as an attribute key used
     * for the condition.</p>
     */
    inline DocumentAttributeCondition& WithConditionDocumentAttributeKey(const Aws::String& value) { SetConditionDocumentAttributeKey(value); return *this;}

    /**
     * <p>The identifier of the document attribute used for the condition.</p> <p>For
     * example, 'Source_URI' could be an identifier for the attribute or metadata field
     * that contains source URIs associated with the documents.</p> <p>Amazon Kendra
     * currently does not support <code>_document_body</code> as an attribute key used
     * for the condition.</p>
     */
    inline DocumentAttributeCondition& WithConditionDocumentAttributeKey(Aws::String&& value) { SetConditionDocumentAttributeKey(std::move(value)); return *this;}

    /**
     * <p>The identifier of the document attribute used for the condition.</p> <p>For
     * example, 'Source_URI' could be an identifier for the attribute or metadata field
     * that contains source URIs associated with the documents.</p> <p>Amazon Kendra
     * currently does not support <code>_document_body</code> as an attribute key used
     * for the condition.</p>
     */
    inline DocumentAttributeCondition& WithConditionDocumentAttributeKey(const char* value) { SetConditionDocumentAttributeKey(value); return *this;}


    /**
     * <p>The condition operator.</p> <p>For example, you can use 'Contains' to
     * partially match a string.</p>
     */
    inline const ConditionOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The condition operator.</p> <p>For example, you can use 'Contains' to
     * partially match a string.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The condition operator.</p> <p>For example, you can use 'Contains' to
     * partially match a string.</p>
     */
    inline void SetOperator(const ConditionOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The condition operator.</p> <p>For example, you can use 'Contains' to
     * partially match a string.</p>
     */
    inline void SetOperator(ConditionOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The condition operator.</p> <p>For example, you can use 'Contains' to
     * partially match a string.</p>
     */
    inline DocumentAttributeCondition& WithOperator(const ConditionOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The condition operator.</p> <p>For example, you can use 'Contains' to
     * partially match a string.</p>
     */
    inline DocumentAttributeCondition& WithOperator(ConditionOperator&& value) { SetOperator(std::move(value)); return *this;}


    /**
     * <p>The value used by the operator.</p> <p>For example, you can specify the value
     * 'financial' for strings in the 'Source_URI' field that partially match or
     * contain this value.</p>
     */
    inline const DocumentAttributeValue& GetConditionOnValue() const{ return m_conditionOnValue; }

    /**
     * <p>The value used by the operator.</p> <p>For example, you can specify the value
     * 'financial' for strings in the 'Source_URI' field that partially match or
     * contain this value.</p>
     */
    inline bool ConditionOnValueHasBeenSet() const { return m_conditionOnValueHasBeenSet; }

    /**
     * <p>The value used by the operator.</p> <p>For example, you can specify the value
     * 'financial' for strings in the 'Source_URI' field that partially match or
     * contain this value.</p>
     */
    inline void SetConditionOnValue(const DocumentAttributeValue& value) { m_conditionOnValueHasBeenSet = true; m_conditionOnValue = value; }

    /**
     * <p>The value used by the operator.</p> <p>For example, you can specify the value
     * 'financial' for strings in the 'Source_URI' field that partially match or
     * contain this value.</p>
     */
    inline void SetConditionOnValue(DocumentAttributeValue&& value) { m_conditionOnValueHasBeenSet = true; m_conditionOnValue = std::move(value); }

    /**
     * <p>The value used by the operator.</p> <p>For example, you can specify the value
     * 'financial' for strings in the 'Source_URI' field that partially match or
     * contain this value.</p>
     */
    inline DocumentAttributeCondition& WithConditionOnValue(const DocumentAttributeValue& value) { SetConditionOnValue(value); return *this;}

    /**
     * <p>The value used by the operator.</p> <p>For example, you can specify the value
     * 'financial' for strings in the 'Source_URI' field that partially match or
     * contain this value.</p>
     */
    inline DocumentAttributeCondition& WithConditionOnValue(DocumentAttributeValue&& value) { SetConditionOnValue(std::move(value)); return *this;}

  private:

    Aws::String m_conditionDocumentAttributeKey;
    bool m_conditionDocumentAttributeKeyHasBeenSet = false;

    ConditionOperator m_operator;
    bool m_operatorHasBeenSet = false;

    DocumentAttributeValue m_conditionOnValue;
    bool m_conditionOnValueHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
