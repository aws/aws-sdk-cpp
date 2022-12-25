/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The hash algorithms that are available to a code signing job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/HashAlgorithmOptions">AWS
   * API Reference</a></p>
   */
  class HashAlgorithmOptions
  {
  public:
    AWS_SIGNER_API HashAlgorithmOptions();
    AWS_SIGNER_API HashAlgorithmOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API HashAlgorithmOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The set of accepted hash algorithms allowed in a code signing job.</p>
     */
    inline const Aws::Vector<HashAlgorithm>& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * <p>The set of accepted hash algorithms allowed in a code signing job.</p>
     */
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }

    /**
     * <p>The set of accepted hash algorithms allowed in a code signing job.</p>
     */
    inline void SetAllowedValues(const Aws::Vector<HashAlgorithm>& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p>The set of accepted hash algorithms allowed in a code signing job.</p>
     */
    inline void SetAllowedValues(Aws::Vector<HashAlgorithm>&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }

    /**
     * <p>The set of accepted hash algorithms allowed in a code signing job.</p>
     */
    inline HashAlgorithmOptions& WithAllowedValues(const Aws::Vector<HashAlgorithm>& value) { SetAllowedValues(value); return *this;}

    /**
     * <p>The set of accepted hash algorithms allowed in a code signing job.</p>
     */
    inline HashAlgorithmOptions& WithAllowedValues(Aws::Vector<HashAlgorithm>&& value) { SetAllowedValues(std::move(value)); return *this;}

    /**
     * <p>The set of accepted hash algorithms allowed in a code signing job.</p>
     */
    inline HashAlgorithmOptions& AddAllowedValues(const HashAlgorithm& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }

    /**
     * <p>The set of accepted hash algorithms allowed in a code signing job.</p>
     */
    inline HashAlgorithmOptions& AddAllowedValues(HashAlgorithm&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(std::move(value)); return *this; }


    /**
     * <p>The default hash algorithm that is used in a code signing job.</p>
     */
    inline const HashAlgorithm& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default hash algorithm that is used in a code signing job.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default hash algorithm that is used in a code signing job.</p>
     */
    inline void SetDefaultValue(const HashAlgorithm& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default hash algorithm that is used in a code signing job.</p>
     */
    inline void SetDefaultValue(HashAlgorithm&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default hash algorithm that is used in a code signing job.</p>
     */
    inline HashAlgorithmOptions& WithDefaultValue(const HashAlgorithm& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default hash algorithm that is used in a code signing job.</p>
     */
    inline HashAlgorithmOptions& WithDefaultValue(HashAlgorithm&& value) { SetDefaultValue(std::move(value)); return *this;}

  private:

    Aws::Vector<HashAlgorithm> m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    HashAlgorithm m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
