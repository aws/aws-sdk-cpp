﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/FieldIdentifier.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Details of what case data is published through the case event
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CaseEventIncludedData">AWS
   * API Reference</a></p>
   */
  class CaseEventIncludedData
  {
  public:
    AWS_CONNECTCASES_API CaseEventIncludedData() = default;
    AWS_CONNECTCASES_API CaseEventIncludedData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API CaseEventIncludedData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of field identifiers.</p>
     */
    inline const Aws::Vector<FieldIdentifier>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<FieldIdentifier>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<FieldIdentifier>>
    CaseEventIncludedData& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = FieldIdentifier>
    CaseEventIncludedData& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FieldIdentifier> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
