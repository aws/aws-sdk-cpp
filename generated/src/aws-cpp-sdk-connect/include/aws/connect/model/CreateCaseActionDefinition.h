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
    AWS_CONNECT_API CreateCaseActionDefinition();
    AWS_CONNECT_API CreateCaseActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API CreateCaseActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of objects with <code>Field ID</code> and <code>Value</code>
     * data.</p>
     */
    inline const Aws::Vector<FieldValue>& GetFields() const{ return m_fields; }

    /**
     * <p>An array of objects with <code>Field ID</code> and <code>Value</code>
     * data.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>An array of objects with <code>Field ID</code> and <code>Value</code>
     * data.</p>
     */
    inline void SetFields(const Aws::Vector<FieldValue>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>An array of objects with <code>Field ID</code> and <code>Value</code>
     * data.</p>
     */
    inline void SetFields(Aws::Vector<FieldValue>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>An array of objects with <code>Field ID</code> and <code>Value</code>
     * data.</p>
     */
    inline CreateCaseActionDefinition& WithFields(const Aws::Vector<FieldValue>& value) { SetFields(value); return *this;}

    /**
     * <p>An array of objects with <code>Field ID</code> and <code>Value</code>
     * data.</p>
     */
    inline CreateCaseActionDefinition& WithFields(Aws::Vector<FieldValue>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>An array of objects with <code>Field ID</code> and <code>Value</code>
     * data.</p>
     */
    inline CreateCaseActionDefinition& AddFields(const FieldValue& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>An array of objects with <code>Field ID</code> and <code>Value</code>
     * data.</p>
     */
    inline CreateCaseActionDefinition& AddFields(FieldValue&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique identifier of a template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline CreateCaseActionDefinition& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline CreateCaseActionDefinition& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of a template.</p>
     */
    inline CreateCaseActionDefinition& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}

  private:

    Aws::Vector<FieldValue> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
