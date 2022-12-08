/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signer/model/EncryptionAlgorithm.h>
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
   * <p>The encryption algorithm options that are available to a code signing
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/EncryptionAlgorithmOptions">AWS
   * API Reference</a></p>
   */
  class EncryptionAlgorithmOptions
  {
  public:
    AWS_SIGNER_API EncryptionAlgorithmOptions();
    AWS_SIGNER_API EncryptionAlgorithmOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API EncryptionAlgorithmOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The set of accepted encryption algorithms that are allowed in a code signing
     * job.</p>
     */
    inline const Aws::Vector<EncryptionAlgorithm>& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * <p>The set of accepted encryption algorithms that are allowed in a code signing
     * job.</p>
     */
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }

    /**
     * <p>The set of accepted encryption algorithms that are allowed in a code signing
     * job.</p>
     */
    inline void SetAllowedValues(const Aws::Vector<EncryptionAlgorithm>& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p>The set of accepted encryption algorithms that are allowed in a code signing
     * job.</p>
     */
    inline void SetAllowedValues(Aws::Vector<EncryptionAlgorithm>&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }

    /**
     * <p>The set of accepted encryption algorithms that are allowed in a code signing
     * job.</p>
     */
    inline EncryptionAlgorithmOptions& WithAllowedValues(const Aws::Vector<EncryptionAlgorithm>& value) { SetAllowedValues(value); return *this;}

    /**
     * <p>The set of accepted encryption algorithms that are allowed in a code signing
     * job.</p>
     */
    inline EncryptionAlgorithmOptions& WithAllowedValues(Aws::Vector<EncryptionAlgorithm>&& value) { SetAllowedValues(std::move(value)); return *this;}

    /**
     * <p>The set of accepted encryption algorithms that are allowed in a code signing
     * job.</p>
     */
    inline EncryptionAlgorithmOptions& AddAllowedValues(const EncryptionAlgorithm& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }

    /**
     * <p>The set of accepted encryption algorithms that are allowed in a code signing
     * job.</p>
     */
    inline EncryptionAlgorithmOptions& AddAllowedValues(EncryptionAlgorithm&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(std::move(value)); return *this; }


    /**
     * <p>The default encryption algorithm that is used by a code signing job.</p>
     */
    inline const EncryptionAlgorithm& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default encryption algorithm that is used by a code signing job.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default encryption algorithm that is used by a code signing job.</p>
     */
    inline void SetDefaultValue(const EncryptionAlgorithm& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default encryption algorithm that is used by a code signing job.</p>
     */
    inline void SetDefaultValue(EncryptionAlgorithm&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default encryption algorithm that is used by a code signing job.</p>
     */
    inline EncryptionAlgorithmOptions& WithDefaultValue(const EncryptionAlgorithm& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default encryption algorithm that is used by a code signing job.</p>
     */
    inline EncryptionAlgorithmOptions& WithDefaultValue(EncryptionAlgorithm&& value) { SetDefaultValue(std::move(value)); return *this;}

  private:

    Aws::Vector<EncryptionAlgorithm> m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    EncryptionAlgorithm m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
