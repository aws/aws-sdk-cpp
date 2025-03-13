/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
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
   * <p>Defines a custom ASN.1 X.400 <code>GeneralName</code> using an object
   * identifier (OID) and value. The OID must satisfy the regular expression shown
   * below. For more information, see NIST's definition of <a
   * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
   * (OID)</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/OtherName">AWS
   * API Reference</a></p>
   */
  class OtherName
  {
  public:
    AWS_ACMPCA_API OtherName() = default;
    AWS_ACMPCA_API OtherName(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API OtherName& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies an OID. </p>
     */
    inline const Aws::String& GetTypeId() const { return m_typeId; }
    inline bool TypeIdHasBeenSet() const { return m_typeIdHasBeenSet; }
    template<typename TypeIdT = Aws::String>
    void SetTypeId(TypeIdT&& value) { m_typeIdHasBeenSet = true; m_typeId = std::forward<TypeIdT>(value); }
    template<typename TypeIdT = Aws::String>
    OtherName& WithTypeId(TypeIdT&& value) { SetTypeId(std::forward<TypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an OID value.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    OtherName& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_typeId;
    bool m_typeIdHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
