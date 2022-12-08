/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

  /**
   */
  class UpdateCrlRequest : public RolesAnywhereRequest
  {
  public:
    AWS_ROLESANYWHERE_API UpdateCrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCrl"; }

    AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;


    /**
     * <p>The x509 v3 specified certificate revocation list</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCrlData() const{ return m_crlData; }

    /**
     * <p>The x509 v3 specified certificate revocation list</p>
     */
    inline bool CrlDataHasBeenSet() const { return m_crlDataHasBeenSet; }

    /**
     * <p>The x509 v3 specified certificate revocation list</p>
     */
    inline void SetCrlData(const Aws::Utils::ByteBuffer& value) { m_crlDataHasBeenSet = true; m_crlData = value; }

    /**
     * <p>The x509 v3 specified certificate revocation list</p>
     */
    inline void SetCrlData(Aws::Utils::ByteBuffer&& value) { m_crlDataHasBeenSet = true; m_crlData = std::move(value); }

    /**
     * <p>The x509 v3 specified certificate revocation list</p>
     */
    inline UpdateCrlRequest& WithCrlData(const Aws::Utils::ByteBuffer& value) { SetCrlData(value); return *this;}

    /**
     * <p>The x509 v3 specified certificate revocation list</p>
     */
    inline UpdateCrlRequest& WithCrlData(Aws::Utils::ByteBuffer&& value) { SetCrlData(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline const Aws::String& GetCrlId() const{ return m_crlId; }

    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline bool CrlIdHasBeenSet() const { return m_crlIdHasBeenSet; }

    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline void SetCrlId(const Aws::String& value) { m_crlIdHasBeenSet = true; m_crlId = value; }

    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline void SetCrlId(Aws::String&& value) { m_crlIdHasBeenSet = true; m_crlId = std::move(value); }

    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline void SetCrlId(const char* value) { m_crlIdHasBeenSet = true; m_crlId.assign(value); }

    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline UpdateCrlRequest& WithCrlId(const Aws::String& value) { SetCrlId(value); return *this;}

    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline UpdateCrlRequest& WithCrlId(Aws::String&& value) { SetCrlId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline UpdateCrlRequest& WithCrlId(const char* value) { SetCrlId(value); return *this;}


    /**
     * <p>The name of the Crl.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Crl.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Crl.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Crl.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Crl.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Crl.</p>
     */
    inline UpdateCrlRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Crl.</p>
     */
    inline UpdateCrlRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Crl.</p>
     */
    inline UpdateCrlRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::Utils::ByteBuffer m_crlData;
    bool m_crlDataHasBeenSet = false;

    Aws::String m_crlId;
    bool m_crlIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
