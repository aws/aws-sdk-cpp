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
    AWS_BEDROCK_API ValidationDataConfig();
    AWS_BEDROCK_API ValidationDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ValidationDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the validators.</p>
     */
    inline const Aws::Vector<Validator>& GetValidators() const{ return m_validators; }

    /**
     * <p>Information about the validators.</p>
     */
    inline bool ValidatorsHasBeenSet() const { return m_validatorsHasBeenSet; }

    /**
     * <p>Information about the validators.</p>
     */
    inline void SetValidators(const Aws::Vector<Validator>& value) { m_validatorsHasBeenSet = true; m_validators = value; }

    /**
     * <p>Information about the validators.</p>
     */
    inline void SetValidators(Aws::Vector<Validator>&& value) { m_validatorsHasBeenSet = true; m_validators = std::move(value); }

    /**
     * <p>Information about the validators.</p>
     */
    inline ValidationDataConfig& WithValidators(const Aws::Vector<Validator>& value) { SetValidators(value); return *this;}

    /**
     * <p>Information about the validators.</p>
     */
    inline ValidationDataConfig& WithValidators(Aws::Vector<Validator>&& value) { SetValidators(std::move(value)); return *this;}

    /**
     * <p>Information about the validators.</p>
     */
    inline ValidationDataConfig& AddValidators(const Validator& value) { m_validatorsHasBeenSet = true; m_validators.push_back(value); return *this; }

    /**
     * <p>Information about the validators.</p>
     */
    inline ValidationDataConfig& AddValidators(Validator&& value) { m_validatorsHasBeenSet = true; m_validators.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Validator> m_validators;
    bool m_validatorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
