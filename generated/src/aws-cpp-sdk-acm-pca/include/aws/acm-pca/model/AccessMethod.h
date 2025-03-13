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
    AWS_ACMPCA_API AccessMethod() = default;
    AWS_ACMPCA_API AccessMethod(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API AccessMethod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object identifier (OID) specifying the <code>AccessMethod</code>. The OID
     * must satisfy the regular expression shown below. For more information, see
     * NIST's definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>
     */
    inline const Aws::String& GetCustomObjectIdentifier() const { return m_customObjectIdentifier; }
    inline bool CustomObjectIdentifierHasBeenSet() const { return m_customObjectIdentifierHasBeenSet; }
    template<typename CustomObjectIdentifierT = Aws::String>
    void SetCustomObjectIdentifier(CustomObjectIdentifierT&& value) { m_customObjectIdentifierHasBeenSet = true; m_customObjectIdentifier = std::forward<CustomObjectIdentifierT>(value); }
    template<typename CustomObjectIdentifierT = Aws::String>
    AccessMethod& WithCustomObjectIdentifier(CustomObjectIdentifierT&& value) { SetCustomObjectIdentifier(std::forward<CustomObjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>AccessMethod</code>.</p>
     */
    inline AccessMethodType GetAccessMethodType() const { return m_accessMethodType; }
    inline bool AccessMethodTypeHasBeenSet() const { return m_accessMethodTypeHasBeenSet; }
    inline void SetAccessMethodType(AccessMethodType value) { m_accessMethodTypeHasBeenSet = true; m_accessMethodType = value; }
    inline AccessMethod& WithAccessMethodType(AccessMethodType value) { SetAccessMethodType(value); return *this;}
    ///@}
  private:

    Aws::String m_customObjectIdentifier;
    bool m_customObjectIdentifierHasBeenSet = false;

    AccessMethodType m_accessMethodType{AccessMethodType::NOT_SET};
    bool m_accessMethodTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
