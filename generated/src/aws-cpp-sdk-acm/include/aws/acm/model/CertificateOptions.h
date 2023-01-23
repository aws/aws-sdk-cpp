/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/CertificateTransparencyLoggingPreference.h>
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
namespace ACM
{
namespace Model
{

  /**
   * <p>Structure that contains options for your certificate. Currently, you can use
   * this only to specify whether to opt in to or out of certificate transparency
   * logging. Some browsers require that public certificates issued for your domain
   * be recorded in a log. Certificates that are not logged typically generate a
   * browser error. Transparency makes it possible for you to detect SSL/TLS
   * certificates that have been mistakenly or maliciously issued for your domain.
   * For general information, see <a
   * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-concepts.html#concept-transparency">Certificate
   * Transparency Logging</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/CertificateOptions">AWS
   * API Reference</a></p>
   */
  class CertificateOptions
  {
  public:
    AWS_ACM_API CertificateOptions();
    AWS_ACM_API CertificateOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API CertificateOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>You can opt out of certificate transparency logging by specifying the
     * <code>DISABLED</code> option. Opt in by specifying <code>ENABLED</code>. </p>
     */
    inline const CertificateTransparencyLoggingPreference& GetCertificateTransparencyLoggingPreference() const{ return m_certificateTransparencyLoggingPreference; }

    /**
     * <p>You can opt out of certificate transparency logging by specifying the
     * <code>DISABLED</code> option. Opt in by specifying <code>ENABLED</code>. </p>
     */
    inline bool CertificateTransparencyLoggingPreferenceHasBeenSet() const { return m_certificateTransparencyLoggingPreferenceHasBeenSet; }

    /**
     * <p>You can opt out of certificate transparency logging by specifying the
     * <code>DISABLED</code> option. Opt in by specifying <code>ENABLED</code>. </p>
     */
    inline void SetCertificateTransparencyLoggingPreference(const CertificateTransparencyLoggingPreference& value) { m_certificateTransparencyLoggingPreferenceHasBeenSet = true; m_certificateTransparencyLoggingPreference = value; }

    /**
     * <p>You can opt out of certificate transparency logging by specifying the
     * <code>DISABLED</code> option. Opt in by specifying <code>ENABLED</code>. </p>
     */
    inline void SetCertificateTransparencyLoggingPreference(CertificateTransparencyLoggingPreference&& value) { m_certificateTransparencyLoggingPreferenceHasBeenSet = true; m_certificateTransparencyLoggingPreference = std::move(value); }

    /**
     * <p>You can opt out of certificate transparency logging by specifying the
     * <code>DISABLED</code> option. Opt in by specifying <code>ENABLED</code>. </p>
     */
    inline CertificateOptions& WithCertificateTransparencyLoggingPreference(const CertificateTransparencyLoggingPreference& value) { SetCertificateTransparencyLoggingPreference(value); return *this;}

    /**
     * <p>You can opt out of certificate transparency logging by specifying the
     * <code>DISABLED</code> option. Opt in by specifying <code>ENABLED</code>. </p>
     */
    inline CertificateOptions& WithCertificateTransparencyLoggingPreference(CertificateTransparencyLoggingPreference&& value) { SetCertificateTransparencyLoggingPreference(std::move(value)); return *this;}

  private:

    CertificateTransparencyLoggingPreference m_certificateTransparencyLoggingPreference;
    bool m_certificateTransparencyLoggingPreferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
