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
    AWS_CONNECT_API UpdateCaseActionDefinition() = default;
    AWS_CONNECT_API UpdateCaseActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UpdateCaseActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects with <code>Field ID</code> and Value data.</p>
     */
    inline const Aws::Vector<FieldValue>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<FieldValue>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<FieldValue>>
    UpdateCaseActionDefinition& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = FieldValue>
    UpdateCaseActionDefinition& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FieldValue> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
