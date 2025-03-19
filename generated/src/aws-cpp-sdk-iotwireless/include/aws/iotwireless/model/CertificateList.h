/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SigningAlg.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>List of sidewalk certificates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CertificateList">AWS
   * API Reference</a></p>
   */
  class CertificateList
  {
  public:
    AWS_IOTWIRELESS_API CertificateList() = default;
    AWS_IOTWIRELESS_API CertificateList(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API CertificateList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The certificate chain algorithm provided by sidewalk.</p>
     */
    inline SigningAlg GetSigningAlg() const { return m_signingAlg; }
    inline bool SigningAlgHasBeenSet() const { return m_signingAlgHasBeenSet; }
    inline void SetSigningAlg(SigningAlg value) { m_signingAlgHasBeenSet = true; m_signingAlg = value; }
    inline CertificateList& WithSigningAlg(SigningAlg value) { SetSigningAlg(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the chosen sidewalk certificate.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    CertificateList& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    SigningAlg m_signingAlg{SigningAlg::NOT_SET};
    bool m_signingAlgHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
