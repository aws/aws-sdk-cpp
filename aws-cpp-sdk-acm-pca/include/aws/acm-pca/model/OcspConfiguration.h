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
   * <p>Contains information to enable and configure Online Certificate Status
   * Protocol (OCSP) for validating certificate revocation status.</p> <p>When you
   * revoke a certificate, OCSP responses may take up to 60 minutes to reflect the
   * new status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/OcspConfiguration">AWS
   * API Reference</a></p>
   */
  class OcspConfiguration
  {
  public:
    AWS_ACMPCA_API OcspConfiguration();
    AWS_ACMPCA_API OcspConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API OcspConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Flag enabling use of the Online Certificate Status Protocol (OCSP) for
     * validating certificate revocation status.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Flag enabling use of the Online Certificate Status Protocol (OCSP) for
     * validating certificate revocation status.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Flag enabling use of the Online Certificate Status Protocol (OCSP) for
     * validating certificate revocation status.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Flag enabling use of the Online Certificate Status Protocol (OCSP) for
     * validating certificate revocation status.</p>
     */
    inline OcspConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>By default, ACM Private CA injects an Amazon Web Services domain into
     * certificates being validated by the Online Certificate Status Protocol (OCSP). A
     * customer can alternatively use this object to define a CNAME specifying a
     * customized OCSP domain.</p> <p>Note: The value of the CNAME must not include a
     * protocol prefix such as "http://" or "https://".</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/ocsp-customize.html">Customizing
     * Online Certificate Status Protocol (OCSP) </a> in the <i>Private Certificate
     * Authority (PCA) User Guide</i>.</p>
     */
    inline const Aws::String& GetOcspCustomCname() const{ return m_ocspCustomCname; }

    /**
     * <p>By default, ACM Private CA injects an Amazon Web Services domain into
     * certificates being validated by the Online Certificate Status Protocol (OCSP). A
     * customer can alternatively use this object to define a CNAME specifying a
     * customized OCSP domain.</p> <p>Note: The value of the CNAME must not include a
     * protocol prefix such as "http://" or "https://".</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/ocsp-customize.html">Customizing
     * Online Certificate Status Protocol (OCSP) </a> in the <i>Private Certificate
     * Authority (PCA) User Guide</i>.</p>
     */
    inline bool OcspCustomCnameHasBeenSet() const { return m_ocspCustomCnameHasBeenSet; }

    /**
     * <p>By default, ACM Private CA injects an Amazon Web Services domain into
     * certificates being validated by the Online Certificate Status Protocol (OCSP). A
     * customer can alternatively use this object to define a CNAME specifying a
     * customized OCSP domain.</p> <p>Note: The value of the CNAME must not include a
     * protocol prefix such as "http://" or "https://".</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/ocsp-customize.html">Customizing
     * Online Certificate Status Protocol (OCSP) </a> in the <i>Private Certificate
     * Authority (PCA) User Guide</i>.</p>
     */
    inline void SetOcspCustomCname(const Aws::String& value) { m_ocspCustomCnameHasBeenSet = true; m_ocspCustomCname = value; }

    /**
     * <p>By default, ACM Private CA injects an Amazon Web Services domain into
     * certificates being validated by the Online Certificate Status Protocol (OCSP). A
     * customer can alternatively use this object to define a CNAME specifying a
     * customized OCSP domain.</p> <p>Note: The value of the CNAME must not include a
     * protocol prefix such as "http://" or "https://".</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/ocsp-customize.html">Customizing
     * Online Certificate Status Protocol (OCSP) </a> in the <i>Private Certificate
     * Authority (PCA) User Guide</i>.</p>
     */
    inline void SetOcspCustomCname(Aws::String&& value) { m_ocspCustomCnameHasBeenSet = true; m_ocspCustomCname = std::move(value); }

    /**
     * <p>By default, ACM Private CA injects an Amazon Web Services domain into
     * certificates being validated by the Online Certificate Status Protocol (OCSP). A
     * customer can alternatively use this object to define a CNAME specifying a
     * customized OCSP domain.</p> <p>Note: The value of the CNAME must not include a
     * protocol prefix such as "http://" or "https://".</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/ocsp-customize.html">Customizing
     * Online Certificate Status Protocol (OCSP) </a> in the <i>Private Certificate
     * Authority (PCA) User Guide</i>.</p>
     */
    inline void SetOcspCustomCname(const char* value) { m_ocspCustomCnameHasBeenSet = true; m_ocspCustomCname.assign(value); }

    /**
     * <p>By default, ACM Private CA injects an Amazon Web Services domain into
     * certificates being validated by the Online Certificate Status Protocol (OCSP). A
     * customer can alternatively use this object to define a CNAME specifying a
     * customized OCSP domain.</p> <p>Note: The value of the CNAME must not include a
     * protocol prefix such as "http://" or "https://".</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/ocsp-customize.html">Customizing
     * Online Certificate Status Protocol (OCSP) </a> in the <i>Private Certificate
     * Authority (PCA) User Guide</i>.</p>
     */
    inline OcspConfiguration& WithOcspCustomCname(const Aws::String& value) { SetOcspCustomCname(value); return *this;}

    /**
     * <p>By default, ACM Private CA injects an Amazon Web Services domain into
     * certificates being validated by the Online Certificate Status Protocol (OCSP). A
     * customer can alternatively use this object to define a CNAME specifying a
     * customized OCSP domain.</p> <p>Note: The value of the CNAME must not include a
     * protocol prefix such as "http://" or "https://".</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/ocsp-customize.html">Customizing
     * Online Certificate Status Protocol (OCSP) </a> in the <i>Private Certificate
     * Authority (PCA) User Guide</i>.</p>
     */
    inline OcspConfiguration& WithOcspCustomCname(Aws::String&& value) { SetOcspCustomCname(std::move(value)); return *this;}

    /**
     * <p>By default, ACM Private CA injects an Amazon Web Services domain into
     * certificates being validated by the Online Certificate Status Protocol (OCSP). A
     * customer can alternatively use this object to define a CNAME specifying a
     * customized OCSP domain.</p> <p>Note: The value of the CNAME must not include a
     * protocol prefix such as "http://" or "https://".</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/ocsp-customize.html">Customizing
     * Online Certificate Status Protocol (OCSP) </a> in the <i>Private Certificate
     * Authority (PCA) User Guide</i>.</p>
     */
    inline OcspConfiguration& WithOcspCustomCname(const char* value) { SetOcspCustomCname(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_ocspCustomCname;
    bool m_ocspCustomCnameHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
