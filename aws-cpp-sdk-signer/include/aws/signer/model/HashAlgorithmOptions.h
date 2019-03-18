/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signer/model/HashAlgorithm.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>The hash algorithms that are available to an AWS Signer job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/HashAlgorithmOptions">AWS
   * API Reference</a></p>
   */
  class AWS_SIGNER_API HashAlgorithmOptions
  {
  public:
    HashAlgorithmOptions();
    HashAlgorithmOptions(Aws::Utils::Json::JsonView jsonValue);
    HashAlgorithmOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The set of accepted hash algorithms allowed in an AWS Signer job.</p>
     */
    inline const Aws::Vector<HashAlgorithm>& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * <p>The set of accepted hash algorithms allowed in an AWS Signer job.</p>
     */
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }

    /**
     * <p>The set of accepted hash algorithms allowed in an AWS Signer job.</p>
     */
    inline void SetAllowedValues(const Aws::Vector<HashAlgorithm>& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p>The set of accepted hash algorithms allowed in an AWS Signer job.</p>
     */
    inline void SetAllowedValues(Aws::Vector<HashAlgorithm>&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }

    /**
     * <p>The set of accepted hash algorithms allowed in an AWS Signer job.</p>
     */
    inline HashAlgorithmOptions& WithAllowedValues(const Aws::Vector<HashAlgorithm>& value) { SetAllowedValues(value); return *this;}

    /**
     * <p>The set of accepted hash algorithms allowed in an AWS Signer job.</p>
     */
    inline HashAlgorithmOptions& WithAllowedValues(Aws::Vector<HashAlgorithm>&& value) { SetAllowedValues(std::move(value)); return *this;}

    /**
     * <p>The set of accepted hash algorithms allowed in an AWS Signer job.</p>
     */
    inline HashAlgorithmOptions& AddAllowedValues(const HashAlgorithm& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }

    /**
     * <p>The set of accepted hash algorithms allowed in an AWS Signer job.</p>
     */
    inline HashAlgorithmOptions& AddAllowedValues(HashAlgorithm&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(std::move(value)); return *this; }


    /**
     * <p>The default hash algorithm that is used in an AWS Signer job.</p>
     */
    inline const HashAlgorithm& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default hash algorithm that is used in an AWS Signer job.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default hash algorithm that is used in an AWS Signer job.</p>
     */
    inline void SetDefaultValue(const HashAlgorithm& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default hash algorithm that is used in an AWS Signer job.</p>
     */
    inline void SetDefaultValue(HashAlgorithm&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default hash algorithm that is used in an AWS Signer job.</p>
     */
    inline HashAlgorithmOptions& WithDefaultValue(const HashAlgorithm& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default hash algorithm that is used in an AWS Signer job.</p>
     */
    inline HashAlgorithmOptions& WithDefaultValue(HashAlgorithm&& value) { SetDefaultValue(std::move(value)); return *this;}

  private:

    Aws::Vector<HashAlgorithm> m_allowedValues;
    bool m_allowedValuesHasBeenSet;

    HashAlgorithm m_defaultValue;
    bool m_defaultValueHasBeenSet;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
