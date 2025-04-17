/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/RatingScaleItemValue.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Defines the value and corresponding definition for one rating in a custom
   * metric rating scale.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/RatingScaleItem">AWS
   * API Reference</a></p>
   */
  class RatingScaleItem
  {
  public:
    AWS_BEDROCK_API RatingScaleItem() = default;
    AWS_BEDROCK_API RatingScaleItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API RatingScaleItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the definition for one rating in a custom metric rating scale.</p>
     */
    inline const Aws::String& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = Aws::String>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = Aws::String>
    RatingScaleItem& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the value for one rating in a custom metric rating scale.</p>
     */
    inline const RatingScaleItemValue& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = RatingScaleItemValue>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = RatingScaleItemValue>
    RatingScaleItem& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    RatingScaleItemValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
