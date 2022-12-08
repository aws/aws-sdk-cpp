/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class GetTrustStoreCertificateRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API GetTrustStoreCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTrustStoreCertificate"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;

    AWS_WORKSPACESWEB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The thumbprint of the trust store certificate.</p>
     */
    inline const Aws::String& GetThumbprint() const{ return m_thumbprint; }

    /**
     * <p>The thumbprint of the trust store certificate.</p>
     */
    inline bool ThumbprintHasBeenSet() const { return m_thumbprintHasBeenSet; }

    /**
     * <p>The thumbprint of the trust store certificate.</p>
     */
    inline void SetThumbprint(const Aws::String& value) { m_thumbprintHasBeenSet = true; m_thumbprint = value; }

    /**
     * <p>The thumbprint of the trust store certificate.</p>
     */
    inline void SetThumbprint(Aws::String&& value) { m_thumbprintHasBeenSet = true; m_thumbprint = std::move(value); }

    /**
     * <p>The thumbprint of the trust store certificate.</p>
     */
    inline void SetThumbprint(const char* value) { m_thumbprintHasBeenSet = true; m_thumbprint.assign(value); }

    /**
     * <p>The thumbprint of the trust store certificate.</p>
     */
    inline GetTrustStoreCertificateRequest& WithThumbprint(const Aws::String& value) { SetThumbprint(value); return *this;}

    /**
     * <p>The thumbprint of the trust store certificate.</p>
     */
    inline GetTrustStoreCertificateRequest& WithThumbprint(Aws::String&& value) { SetThumbprint(std::move(value)); return *this;}

    /**
     * <p>The thumbprint of the trust store certificate.</p>
     */
    inline GetTrustStoreCertificateRequest& WithThumbprint(const char* value) { SetThumbprint(value); return *this;}


    /**
     * <p>The ARN of the trust store certificate.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }

    /**
     * <p>The ARN of the trust store certificate.</p>
     */
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }

    /**
     * <p>The ARN of the trust store certificate.</p>
     */
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = value; }

    /**
     * <p>The ARN of the trust store certificate.</p>
     */
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::move(value); }

    /**
     * <p>The ARN of the trust store certificate.</p>
     */
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn.assign(value); }

    /**
     * <p>The ARN of the trust store certificate.</p>
     */
    inline GetTrustStoreCertificateRequest& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}

    /**
     * <p>The ARN of the trust store certificate.</p>
     */
    inline GetTrustStoreCertificateRequest& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the trust store certificate.</p>
     */
    inline GetTrustStoreCertificateRequest& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}

  private:

    Aws::String m_thumbprint;
    bool m_thumbprintHasBeenSet = false;

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
