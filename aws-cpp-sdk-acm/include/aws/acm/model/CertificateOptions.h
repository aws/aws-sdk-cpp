/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ACM_API CertificateOptions
  {
  public:
    CertificateOptions();
    CertificateOptions(Aws::Utils::Json::JsonView jsonValue);
    CertificateOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_certificateTransparencyLoggingPreferenceHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
