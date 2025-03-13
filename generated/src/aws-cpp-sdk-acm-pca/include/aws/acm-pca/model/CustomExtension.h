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
   * <p/> <p>Specifies the X.509 extension information for a certificate.</p>
   * <p>Extensions present in <code>CustomExtensions</code> follow the
   * <code>ApiPassthrough</code> <a
   * href="https://docs.aws.amazon.com/privateca/latest/userguide/UsingTemplates.html#template-order-of-operations">template
   * rules</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CustomExtension">AWS
   * API Reference</a></p>
   */
  class CustomExtension
  {
  public:
    AWS_ACMPCA_API CustomExtension() = default;
    AWS_ACMPCA_API CustomExtension(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API CustomExtension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/> <p>Specifies the object identifier (OID) of the X.509 extension. For more
     * information, see the <a href="https://oidref.com/2.5.29">Global OID reference
     * database.</a> </p>
     */
    inline const Aws::String& GetObjectIdentifier() const { return m_objectIdentifier; }
    inline bool ObjectIdentifierHasBeenSet() const { return m_objectIdentifierHasBeenSet; }
    template<typename ObjectIdentifierT = Aws::String>
    void SetObjectIdentifier(ObjectIdentifierT&& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = std::forward<ObjectIdentifierT>(value); }
    template<typename ObjectIdentifierT = Aws::String>
    CustomExtension& WithObjectIdentifier(ObjectIdentifierT&& value) { SetObjectIdentifier(std::forward<ObjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/> <p>Specifies the base64-encoded value of the X.509 extension.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    CustomExtension& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/> <p>Specifies the critical flag of the X.509 extension.</p>
     */
    inline bool GetCritical() const { return m_critical; }
    inline bool CriticalHasBeenSet() const { return m_criticalHasBeenSet; }
    inline void SetCritical(bool value) { m_criticalHasBeenSet = true; m_critical = value; }
    inline CustomExtension& WithCritical(bool value) { SetCritical(value); return *this;}
    ///@}
  private:

    Aws::String m_objectIdentifier;
    bool m_objectIdentifierHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    bool m_critical{false};
    bool m_criticalHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
