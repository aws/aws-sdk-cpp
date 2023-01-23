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
    AWS_IOTWIRELESS_API CertificateList();
    AWS_IOTWIRELESS_API CertificateList(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API CertificateList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The certificate chain algorithm provided by sidewalk.</p>
     */
    inline const SigningAlg& GetSigningAlg() const{ return m_signingAlg; }

    /**
     * <p>The certificate chain algorithm provided by sidewalk.</p>
     */
    inline bool SigningAlgHasBeenSet() const { return m_signingAlgHasBeenSet; }

    /**
     * <p>The certificate chain algorithm provided by sidewalk.</p>
     */
    inline void SetSigningAlg(const SigningAlg& value) { m_signingAlgHasBeenSet = true; m_signingAlg = value; }

    /**
     * <p>The certificate chain algorithm provided by sidewalk.</p>
     */
    inline void SetSigningAlg(SigningAlg&& value) { m_signingAlgHasBeenSet = true; m_signingAlg = std::move(value); }

    /**
     * <p>The certificate chain algorithm provided by sidewalk.</p>
     */
    inline CertificateList& WithSigningAlg(const SigningAlg& value) { SetSigningAlg(value); return *this;}

    /**
     * <p>The certificate chain algorithm provided by sidewalk.</p>
     */
    inline CertificateList& WithSigningAlg(SigningAlg&& value) { SetSigningAlg(std::move(value)); return *this;}


    /**
     * <p>The value of the chosen sidewalk certificate.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the chosen sidewalk certificate.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the chosen sidewalk certificate.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the chosen sidewalk certificate.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the chosen sidewalk certificate.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the chosen sidewalk certificate.</p>
     */
    inline CertificateList& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the chosen sidewalk certificate.</p>
     */
    inline CertificateList& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the chosen sidewalk certificate.</p>
     */
    inline CertificateList& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    SigningAlg m_signingAlg;
    bool m_signingAlgHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
