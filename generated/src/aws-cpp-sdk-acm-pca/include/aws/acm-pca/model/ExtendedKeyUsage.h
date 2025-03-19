/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/model/ExtendedKeyUsageType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ACMPCA
{
namespace Model
{

  /**
   * <p>Specifies additional purposes for which the certified public key may be used
   * other than basic purposes indicated in the <code>KeyUsage</code>
   * extension.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ExtendedKeyUsage">AWS
   * API Reference</a></p>
   */
  class ExtendedKeyUsage
  {
  public:
    AWS_ACMPCA_API ExtendedKeyUsage() = default;
    AWS_ACMPCA_API ExtendedKeyUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API ExtendedKeyUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies a standard <code>ExtendedKeyUsage</code> as defined as in <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.2.1.12">RFC
     * 5280</a>.</p>
     */
    inline ExtendedKeyUsageType GetExtendedKeyUsageType() const { return m_extendedKeyUsageType; }
    inline bool ExtendedKeyUsageTypeHasBeenSet() const { return m_extendedKeyUsageTypeHasBeenSet; }
    inline void SetExtendedKeyUsageType(ExtendedKeyUsageType value) { m_extendedKeyUsageTypeHasBeenSet = true; m_extendedKeyUsageType = value; }
    inline ExtendedKeyUsage& WithExtendedKeyUsageType(ExtendedKeyUsageType value) { SetExtendedKeyUsageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a custom <code>ExtendedKeyUsage</code> with an object identifier
     * (OID).</p>
     */
    inline const Aws::String& GetExtendedKeyUsageObjectIdentifier() const { return m_extendedKeyUsageObjectIdentifier; }
    inline bool ExtendedKeyUsageObjectIdentifierHasBeenSet() const { return m_extendedKeyUsageObjectIdentifierHasBeenSet; }
    template<typename ExtendedKeyUsageObjectIdentifierT = Aws::String>
    void SetExtendedKeyUsageObjectIdentifier(ExtendedKeyUsageObjectIdentifierT&& value) { m_extendedKeyUsageObjectIdentifierHasBeenSet = true; m_extendedKeyUsageObjectIdentifier = std::forward<ExtendedKeyUsageObjectIdentifierT>(value); }
    template<typename ExtendedKeyUsageObjectIdentifierT = Aws::String>
    ExtendedKeyUsage& WithExtendedKeyUsageObjectIdentifier(ExtendedKeyUsageObjectIdentifierT&& value) { SetExtendedKeyUsageObjectIdentifier(std::forward<ExtendedKeyUsageObjectIdentifierT>(value)); return *this;}
    ///@}
  private:

    ExtendedKeyUsageType m_extendedKeyUsageType{ExtendedKeyUsageType::NOT_SET};
    bool m_extendedKeyUsageTypeHasBeenSet = false;

    Aws::String m_extendedKeyUsageObjectIdentifier;
    bool m_extendedKeyUsageObjectIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
