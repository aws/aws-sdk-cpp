/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains other options for the certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCertificateManagerCertificateOptions">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsCertificateManagerCertificateOptions
  {
  public:
    AwsCertificateManagerCertificateOptions();
    AwsCertificateManagerCertificateOptions(Aws::Utils::Json::JsonView jsonValue);
    AwsCertificateManagerCertificateOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to add the certificate to a transparency log.</p> <p>Valid values:
     * <code>DISABLED</code> | <code>ENABLED</code> </p>
     */
    inline const Aws::String& GetCertificateTransparencyLoggingPreference() const{ return m_certificateTransparencyLoggingPreference; }

    /**
     * <p>Whether to add the certificate to a transparency log.</p> <p>Valid values:
     * <code>DISABLED</code> | <code>ENABLED</code> </p>
     */
    inline bool CertificateTransparencyLoggingPreferenceHasBeenSet() const { return m_certificateTransparencyLoggingPreferenceHasBeenSet; }

    /**
     * <p>Whether to add the certificate to a transparency log.</p> <p>Valid values:
     * <code>DISABLED</code> | <code>ENABLED</code> </p>
     */
    inline void SetCertificateTransparencyLoggingPreference(const Aws::String& value) { m_certificateTransparencyLoggingPreferenceHasBeenSet = true; m_certificateTransparencyLoggingPreference = value; }

    /**
     * <p>Whether to add the certificate to a transparency log.</p> <p>Valid values:
     * <code>DISABLED</code> | <code>ENABLED</code> </p>
     */
    inline void SetCertificateTransparencyLoggingPreference(Aws::String&& value) { m_certificateTransparencyLoggingPreferenceHasBeenSet = true; m_certificateTransparencyLoggingPreference = std::move(value); }

    /**
     * <p>Whether to add the certificate to a transparency log.</p> <p>Valid values:
     * <code>DISABLED</code> | <code>ENABLED</code> </p>
     */
    inline void SetCertificateTransparencyLoggingPreference(const char* value) { m_certificateTransparencyLoggingPreferenceHasBeenSet = true; m_certificateTransparencyLoggingPreference.assign(value); }

    /**
     * <p>Whether to add the certificate to a transparency log.</p> <p>Valid values:
     * <code>DISABLED</code> | <code>ENABLED</code> </p>
     */
    inline AwsCertificateManagerCertificateOptions& WithCertificateTransparencyLoggingPreference(const Aws::String& value) { SetCertificateTransparencyLoggingPreference(value); return *this;}

    /**
     * <p>Whether to add the certificate to a transparency log.</p> <p>Valid values:
     * <code>DISABLED</code> | <code>ENABLED</code> </p>
     */
    inline AwsCertificateManagerCertificateOptions& WithCertificateTransparencyLoggingPreference(Aws::String&& value) { SetCertificateTransparencyLoggingPreference(std::move(value)); return *this;}

    /**
     * <p>Whether to add the certificate to a transparency log.</p> <p>Valid values:
     * <code>DISABLED</code> | <code>ENABLED</code> </p>
     */
    inline AwsCertificateManagerCertificateOptions& WithCertificateTransparencyLoggingPreference(const char* value) { SetCertificateTransparencyLoggingPreference(value); return *this;}

  private:

    Aws::String m_certificateTransparencyLoggingPreference;
    bool m_certificateTransparencyLoggingPreferenceHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
