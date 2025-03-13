/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/Validator.h>
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
   * <p>Array of up to 10 validators.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ValidationDataConfig">AWS
   * API Reference</a></p>
   */
  class ValidationDataConfig
  {
  public:
    AWS_BEDROCK_API ValidationDataConfig() = default;
    AWS_BEDROCK_API ValidationDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ValidationDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the validators.</p>
     */
    inline const Aws::Vector<Validator>& GetValidators() const { return m_validators; }
    inline bool ValidatorsHasBeenSet() const { return m_validatorsHasBeenSet; }
    template<typename ValidatorsT = Aws::Vector<Validator>>
    void SetValidators(ValidatorsT&& value) { m_validatorsHasBeenSet = true; m_validators = std::forward<ValidatorsT>(value); }
    template<typename ValidatorsT = Aws::Vector<Validator>>
    ValidationDataConfig& WithValidators(ValidatorsT&& value) { SetValidators(std::forward<ValidatorsT>(value)); return *this;}
    template<typename ValidatorsT = Validator>
    ValidationDataConfig& AddValidators(ValidatorsT&& value) { m_validatorsHasBeenSet = true; m_validators.emplace_back(std::forward<ValidatorsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Validator> m_validators;
    bool m_validatorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
