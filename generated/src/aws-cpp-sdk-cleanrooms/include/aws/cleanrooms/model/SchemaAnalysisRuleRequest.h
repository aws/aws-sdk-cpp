/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/AnalysisRuleType.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Defines the information that's necessary to retrieve an analysis rule schema.
   * Schema analysis rules are uniquely identiﬁed by a combination of the schema name
   * and the analysis rule type for a given collaboration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/SchemaAnalysisRuleRequest">AWS
   * API Reference</a></p>
   */
  class SchemaAnalysisRuleRequest
  {
  public:
    AWS_CLEANROOMS_API SchemaAnalysisRuleRequest() = default;
    AWS_CLEANROOMS_API SchemaAnalysisRuleRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API SchemaAnalysisRuleRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the analysis rule schema that you are requesting.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SchemaAnalysisRuleRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of analysis rule schema that you are requesting.</p>
     */
    inline AnalysisRuleType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AnalysisRuleType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SchemaAnalysisRuleRequest& WithType(AnalysisRuleType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AnalysisRuleType m_type{AnalysisRuleType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
