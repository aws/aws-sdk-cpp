/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class DeleteCertificateRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API DeleteCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCertificate"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the certificate object that you are deleting.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>The identifier of the certificate object that you are deleting.</p>
     */
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }

    /**
     * <p>The identifier of the certificate object that you are deleting.</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The identifier of the certificate object that you are deleting.</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::move(value); }

    /**
     * <p>The identifier of the certificate object that you are deleting.</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }

    /**
     * <p>The identifier of the certificate object that you are deleting.</p>
     */
    inline DeleteCertificateRequest& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The identifier of the certificate object that you are deleting.</p>
     */
    inline DeleteCertificateRequest& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the certificate object that you are deleting.</p>
     */
    inline DeleteCertificateRequest& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}

  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
