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
    AWS_ACMPCA_API ExtendedKeyUsage();
    AWS_ACMPCA_API ExtendedKeyUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API ExtendedKeyUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies a standard <code>ExtendedKeyUsage</code> as defined as in <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.2.1.12">RFC
     * 5280</a>.</p>
     */
    inline const ExtendedKeyUsageType& GetExtendedKeyUsageType() const{ return m_extendedKeyUsageType; }

    /**
     * <p>Specifies a standard <code>ExtendedKeyUsage</code> as defined as in <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.2.1.12">RFC
     * 5280</a>.</p>
     */
    inline bool ExtendedKeyUsageTypeHasBeenSet() const { return m_extendedKeyUsageTypeHasBeenSet; }

    /**
     * <p>Specifies a standard <code>ExtendedKeyUsage</code> as defined as in <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.2.1.12">RFC
     * 5280</a>.</p>
     */
    inline void SetExtendedKeyUsageType(const ExtendedKeyUsageType& value) { m_extendedKeyUsageTypeHasBeenSet = true; m_extendedKeyUsageType = value; }

    /**
     * <p>Specifies a standard <code>ExtendedKeyUsage</code> as defined as in <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.2.1.12">RFC
     * 5280</a>.</p>
     */
    inline void SetExtendedKeyUsageType(ExtendedKeyUsageType&& value) { m_extendedKeyUsageTypeHasBeenSet = true; m_extendedKeyUsageType = std::move(value); }

    /**
     * <p>Specifies a standard <code>ExtendedKeyUsage</code> as defined as in <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.2.1.12">RFC
     * 5280</a>.</p>
     */
    inline ExtendedKeyUsage& WithExtendedKeyUsageType(const ExtendedKeyUsageType& value) { SetExtendedKeyUsageType(value); return *this;}

    /**
     * <p>Specifies a standard <code>ExtendedKeyUsage</code> as defined as in <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280#section-4.2.1.12">RFC
     * 5280</a>.</p>
     */
    inline ExtendedKeyUsage& WithExtendedKeyUsageType(ExtendedKeyUsageType&& value) { SetExtendedKeyUsageType(std::move(value)); return *this;}


    /**
     * <p>Specifies a custom <code>ExtendedKeyUsage</code> with an object identifier
     * (OID).</p>
     */
    inline const Aws::String& GetExtendedKeyUsageObjectIdentifier() const{ return m_extendedKeyUsageObjectIdentifier; }

    /**
     * <p>Specifies a custom <code>ExtendedKeyUsage</code> with an object identifier
     * (OID).</p>
     */
    inline bool ExtendedKeyUsageObjectIdentifierHasBeenSet() const { return m_extendedKeyUsageObjectIdentifierHasBeenSet; }

    /**
     * <p>Specifies a custom <code>ExtendedKeyUsage</code> with an object identifier
     * (OID).</p>
     */
    inline void SetExtendedKeyUsageObjectIdentifier(const Aws::String& value) { m_extendedKeyUsageObjectIdentifierHasBeenSet = true; m_extendedKeyUsageObjectIdentifier = value; }

    /**
     * <p>Specifies a custom <code>ExtendedKeyUsage</code> with an object identifier
     * (OID).</p>
     */
    inline void SetExtendedKeyUsageObjectIdentifier(Aws::String&& value) { m_extendedKeyUsageObjectIdentifierHasBeenSet = true; m_extendedKeyUsageObjectIdentifier = std::move(value); }

    /**
     * <p>Specifies a custom <code>ExtendedKeyUsage</code> with an object identifier
     * (OID).</p>
     */
    inline void SetExtendedKeyUsageObjectIdentifier(const char* value) { m_extendedKeyUsageObjectIdentifierHasBeenSet = true; m_extendedKeyUsageObjectIdentifier.assign(value); }

    /**
     * <p>Specifies a custom <code>ExtendedKeyUsage</code> with an object identifier
     * (OID).</p>
     */
    inline ExtendedKeyUsage& WithExtendedKeyUsageObjectIdentifier(const Aws::String& value) { SetExtendedKeyUsageObjectIdentifier(value); return *this;}

    /**
     * <p>Specifies a custom <code>ExtendedKeyUsage</code> with an object identifier
     * (OID).</p>
     */
    inline ExtendedKeyUsage& WithExtendedKeyUsageObjectIdentifier(Aws::String&& value) { SetExtendedKeyUsageObjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies a custom <code>ExtendedKeyUsage</code> with an object identifier
     * (OID).</p>
     */
    inline ExtendedKeyUsage& WithExtendedKeyUsageObjectIdentifier(const char* value) { SetExtendedKeyUsageObjectIdentifier(value); return *this;}

  private:

    ExtendedKeyUsageType m_extendedKeyUsageType;
    bool m_extendedKeyUsageTypeHasBeenSet = false;

    Aws::String m_extendedKeyUsageObjectIdentifier;
    bool m_extendedKeyUsageObjectIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
