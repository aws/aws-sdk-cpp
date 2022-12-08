/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/Reference.h>
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
   * <p>Information about the task action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TaskActionDefinition">AWS
   * API Reference</a></p>
   */
  class TaskActionDefinition
  {
  public:
    AWS_CONNECT_API TaskActionDefinition();
    AWS_CONNECT_API TaskActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TaskActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name. Supports variable injection. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name. Supports variable injection. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name. Supports variable injection. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name. Supports variable injection. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name. Supports variable injection. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name. Supports variable injection. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline TaskActionDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name. Supports variable injection. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline TaskActionDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name. Supports variable injection. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline TaskActionDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description. Supports variable injection. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description. Supports variable injection. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description. Supports variable injection. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description. Supports variable injection. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description. Supports variable injection. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description. Supports variable injection. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline TaskActionDefinition& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description. Supports variable injection. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline TaskActionDefinition& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description. Supports variable injection. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-lens-variable-injection.html">JSONPath
     * reference</a> in the <i>Amazon Connect Administrators Guide</i>.</p>
     */
    inline TaskActionDefinition& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the flow.</p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = value; }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::move(value); }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetContactFlowId(const char* value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId.assign(value); }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline TaskActionDefinition& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}

    /**
     * <p>The identifier of the flow.</p>
     */
    inline TaskActionDefinition& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the flow.</p>
     */
    inline TaskActionDefinition& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}


    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null. (Supports variable injection in the
     * <code>Value</code> field.)</p>
     */
    inline const Aws::Map<Aws::String, Reference>& GetReferences() const{ return m_references; }

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null. (Supports variable injection in the
     * <code>Value</code> field.)</p>
     */
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null. (Supports variable injection in the
     * <code>Value</code> field.)</p>
     */
    inline void SetReferences(const Aws::Map<Aws::String, Reference>& value) { m_referencesHasBeenSet = true; m_references = value; }

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null. (Supports variable injection in the
     * <code>Value</code> field.)</p>
     */
    inline void SetReferences(Aws::Map<Aws::String, Reference>&& value) { m_referencesHasBeenSet = true; m_references = std::move(value); }

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null. (Supports variable injection in the
     * <code>Value</code> field.)</p>
     */
    inline TaskActionDefinition& WithReferences(const Aws::Map<Aws::String, Reference>& value) { SetReferences(value); return *this;}

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null. (Supports variable injection in the
     * <code>Value</code> field.)</p>
     */
    inline TaskActionDefinition& WithReferences(Aws::Map<Aws::String, Reference>&& value) { SetReferences(std::move(value)); return *this;}

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null. (Supports variable injection in the
     * <code>Value</code> field.)</p>
     */
    inline TaskActionDefinition& AddReferences(const Aws::String& key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(key, value); return *this; }

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null. (Supports variable injection in the
     * <code>Value</code> field.)</p>
     */
    inline TaskActionDefinition& AddReferences(Aws::String&& key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(std::move(key), value); return *this; }

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null. (Supports variable injection in the
     * <code>Value</code> field.)</p>
     */
    inline TaskActionDefinition& AddReferences(const Aws::String& key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null. (Supports variable injection in the
     * <code>Value</code> field.)</p>
     */
    inline TaskActionDefinition& AddReferences(Aws::String&& key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null. (Supports variable injection in the
     * <code>Value</code> field.)</p>
     */
    inline TaskActionDefinition& AddReferences(const char* key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Information about the reference when the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null. (Supports variable injection in the
     * <code>Value</code> field.)</p>
     */
    inline TaskActionDefinition& AddReferences(const char* key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet = false;

    Aws::Map<Aws::String, Reference> m_references;
    bool m_referencesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
