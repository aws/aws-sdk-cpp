/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains information about the client certificate authentication settings for
   * the <code>RegisterCertificate</code> and <code>DescribeCertificate</code>
   * operations. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ClientCertAuthSettings">AWS
   * API Reference</a></p>
   */
  class ClientCertAuthSettings
  {
  public:
    AWS_DIRECTORYSERVICE_API ClientCertAuthSettings();
    AWS_DIRECTORYSERVICE_API ClientCertAuthSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API ClientCertAuthSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the URL of the default OCSP server used to check for revocation
     * status. A secondary value to any OCSP address found in the AIA extension of the
     * user certificate.</p>
     */
    inline const Aws::String& GetOCSPUrl() const{ return m_oCSPUrl; }

    /**
     * <p>Specifies the URL of the default OCSP server used to check for revocation
     * status. A secondary value to any OCSP address found in the AIA extension of the
     * user certificate.</p>
     */
    inline bool OCSPUrlHasBeenSet() const { return m_oCSPUrlHasBeenSet; }

    /**
     * <p>Specifies the URL of the default OCSP server used to check for revocation
     * status. A secondary value to any OCSP address found in the AIA extension of the
     * user certificate.</p>
     */
    inline void SetOCSPUrl(const Aws::String& value) { m_oCSPUrlHasBeenSet = true; m_oCSPUrl = value; }

    /**
     * <p>Specifies the URL of the default OCSP server used to check for revocation
     * status. A secondary value to any OCSP address found in the AIA extension of the
     * user certificate.</p>
     */
    inline void SetOCSPUrl(Aws::String&& value) { m_oCSPUrlHasBeenSet = true; m_oCSPUrl = std::move(value); }

    /**
     * <p>Specifies the URL of the default OCSP server used to check for revocation
     * status. A secondary value to any OCSP address found in the AIA extension of the
     * user certificate.</p>
     */
    inline void SetOCSPUrl(const char* value) { m_oCSPUrlHasBeenSet = true; m_oCSPUrl.assign(value); }

    /**
     * <p>Specifies the URL of the default OCSP server used to check for revocation
     * status. A secondary value to any OCSP address found in the AIA extension of the
     * user certificate.</p>
     */
    inline ClientCertAuthSettings& WithOCSPUrl(const Aws::String& value) { SetOCSPUrl(value); return *this;}

    /**
     * <p>Specifies the URL of the default OCSP server used to check for revocation
     * status. A secondary value to any OCSP address found in the AIA extension of the
     * user certificate.</p>
     */
    inline ClientCertAuthSettings& WithOCSPUrl(Aws::String&& value) { SetOCSPUrl(std::move(value)); return *this;}

    /**
     * <p>Specifies the URL of the default OCSP server used to check for revocation
     * status. A secondary value to any OCSP address found in the AIA extension of the
     * user certificate.</p>
     */
    inline ClientCertAuthSettings& WithOCSPUrl(const char* value) { SetOCSPUrl(value); return *this;}

  private:

    Aws::String m_oCSPUrl;
    bool m_oCSPUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
