/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The <code>UpdateCase</code> action definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateCaseActionDefinition">AWS
   * API Reference</a></p>
   */
  class UpdateCaseActionDefinition
  {
  public:
    AWS_CONNECT_API UpdateCaseActionDefinition();
    AWS_CONNECT_API UpdateCaseActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UpdateCaseActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of objects with <code>Field ID</code> and Value data.</p>
     */
    inline const Aws::Vector<FieldValue>& GetFields() const{ return m_fields; }

    /**
     * <p>An array of objects with <code>Field ID</code> and Value data.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>An array of objects with <code>Field ID</code> and Value data.</p>
     */
    inline void SetFields(const Aws::Vector<FieldValue>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>An array of objects with <code>Field ID</code> and Value data.</p>
     */
    inline void SetFields(Aws::Vector<FieldValue>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>An array of objects with <code>Field ID</code> and Value data.</p>
     */
    inline UpdateCaseActionDefinition& WithFields(const Aws::Vector<FieldValue>& value) { SetFields(value); return *this;}

    /**
     * <p>An array of objects with <code>Field ID</code> and Value data.</p>
     */
    inline UpdateCaseActionDefinition& WithFields(Aws::Vector<FieldValue>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>An array of objects with <code>Field ID</code> and Value data.</p>
     */
    inline UpdateCaseActionDefinition& AddFields(const FieldValue& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>An array of objects with <code>Field ID</code> and Value data.</p>
     */
    inline UpdateCaseActionDefinition& AddFields(FieldValue&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FieldValue> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
