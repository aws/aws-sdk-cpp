/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm-pca/model/AccessMethodType.h>
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
   * <p>Describes the type and format of extension access. Only one of
   * <code>CustomObjectIdentifier</code> or <code>AccessMethodType</code> may be
   * provided. Providing both results in
   * <code>InvalidArgsException</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/AccessMethod">AWS
   * API Reference</a></p>
   */
  class AccessMethod
  {
  public:
    AWS_ACMPCA_API AccessMethod();
    AWS_ACMPCA_API AccessMethod(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API AccessMethod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object identifier (OID) specifying the <code>AccessMethod</code>. The OID
     * must satisfy the regular expression shown below. For more information, see
     * NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline const Aws::String& GetCustomObjectIdentifier() const{ return m_customObjectIdentifier; }

    /**
     * <p>An object identifier (OID) specifying the <code>AccessMethod</code>. The OID
     * must satisfy the regular expression shown below. For more information, see
     * NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline bool CustomObjectIdentifierHasBeenSet() const { return m_customObjectIdentifierHasBeenSet; }

    /**
     * <p>An object identifier (OID) specifying the <code>AccessMethod</code>. The OID
     * must satisfy the regular expression shown below. For more information, see
     * NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline void SetCustomObjectIdentifier(const Aws::String& value) { m_customObjectIdentifierHasBeenSet = true; m_customObjectIdentifier = value; }

    /**
     * <p>An object identifier (OID) specifying the <code>AccessMethod</code>. The OID
     * must satisfy the regular expression shown below. For more information, see
     * NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline void SetCustomObjectIdentifier(Aws::String&& value) { m_customObjectIdentifierHasBeenSet = true; m_customObjectIdentifier = std::move(value); }

    /**
     * <p>An object identifier (OID) specifying the <code>AccessMethod</code>. The OID
     * must satisfy the regular expression shown below. For more information, see
     * NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline void SetCustomObjectIdentifier(const char* value) { m_customObjectIdentifierHasBeenSet = true; m_customObjectIdentifier.assign(value); }

    /**
     * <p>An object identifier (OID) specifying the <code>AccessMethod</code>. The OID
     * must satisfy the regular expression shown below. For more information, see
     * NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline AccessMethod& WithCustomObjectIdentifier(const Aws::String& value) { SetCustomObjectIdentifier(value); return *this;}

    /**
     * <p>An object identifier (OID) specifying the <code>AccessMethod</code>. The OID
     * must satisfy the regular expression shown below. For more information, see
     * NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline AccessMethod& WithCustomObjectIdentifier(Aws::String&& value) { SetCustomObjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>An object identifier (OID) specifying the <code>AccessMethod</code>. The OID
     * must satisfy the regular expression shown below. For more information, see
     * NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline AccessMethod& WithCustomObjectIdentifier(const char* value) { SetCustomObjectIdentifier(value); return *this;}


    /**
     * <p>Specifies the <code>AccessMethod</code>.</p>
     */
    inline const AccessMethodType& GetAccessMethodType() const{ return m_accessMethodType; }

    /**
     * <p>Specifies the <code>AccessMethod</code>.</p>
     */
    inline bool AccessMethodTypeHasBeenSet() const { return m_accessMethodTypeHasBeenSet; }

    /**
     * <p>Specifies the <code>AccessMethod</code>.</p>
     */
    inline void SetAccessMethodType(const AccessMethodType& value) { m_accessMethodTypeHasBeenSet = true; m_accessMethodType = value; }

    /**
     * <p>Specifies the <code>AccessMethod</code>.</p>
     */
    inline void SetAccessMethodType(AccessMethodType&& value) { m_accessMethodTypeHasBeenSet = true; m_accessMethodType = std::move(value); }

    /**
     * <p>Specifies the <code>AccessMethod</code>.</p>
     */
    inline AccessMethod& WithAccessMethodType(const AccessMethodType& value) { SetAccessMethodType(value); return *this;}

    /**
     * <p>Specifies the <code>AccessMethod</code>.</p>
     */
    inline AccessMethod& WithAccessMethodType(AccessMethodType&& value) { SetAccessMethodType(std::move(value)); return *this;}

  private:

    Aws::String m_customObjectIdentifier;
    bool m_customObjectIdentifierHasBeenSet = false;

    AccessMethodType m_accessMethodType;
    bool m_accessMethodTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
