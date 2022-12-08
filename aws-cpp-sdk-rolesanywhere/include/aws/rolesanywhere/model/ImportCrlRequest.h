/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rolesanywhere/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

  /**
   */
  class ImportCrlRequest : public RolesAnywhereRequest
  {
  public:
    AWS_ROLESANYWHERE_API ImportCrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportCrl"; }

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
    inline ImportCrlRequest& WithCrlData(const Aws::Utils::ByteBuffer& value) { SetCrlData(value); return *this;}

    /**
     * <p>The x509 v3 specified certificate revocation list</p>
     */
    inline ImportCrlRequest& WithCrlData(Aws::Utils::ByteBuffer&& value) { SetCrlData(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the certificate revocation list (CRL) is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether the certificate revocation list (CRL) is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether the certificate revocation list (CRL) is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether the certificate revocation list (CRL) is enabled.</p>
     */
    inline ImportCrlRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The name of the certificate revocation list (CRL).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the certificate revocation list (CRL).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the certificate revocation list (CRL).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the certificate revocation list (CRL).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the certificate revocation list (CRL).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the certificate revocation list (CRL).</p>
     */
    inline ImportCrlRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the certificate revocation list (CRL).</p>
     */
    inline ImportCrlRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the certificate revocation list (CRL).</p>
     */
    inline ImportCrlRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of tags to attach to the certificate revocation list (CRL).</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to attach to the certificate revocation list (CRL).</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to attach to the certificate revocation list (CRL).</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to attach to the certificate revocation list (CRL).</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to attach to the certificate revocation list (CRL).</p>
     */
    inline ImportCrlRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to attach to the certificate revocation list (CRL).</p>
     */
    inline ImportCrlRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to attach to the certificate revocation list (CRL).</p>
     */
    inline ImportCrlRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to attach to the certificate revocation list (CRL).</p>
     */
    inline ImportCrlRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for.</p>
     */
    inline const Aws::String& GetTrustAnchorArn() const{ return m_trustAnchorArn; }

    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for.</p>
     */
    inline bool TrustAnchorArnHasBeenSet() const { return m_trustAnchorArnHasBeenSet; }

    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for.</p>
     */
    inline void SetTrustAnchorArn(const Aws::String& value) { m_trustAnchorArnHasBeenSet = true; m_trustAnchorArn = value; }

    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for.</p>
     */
    inline void SetTrustAnchorArn(Aws::String&& value) { m_trustAnchorArnHasBeenSet = true; m_trustAnchorArn = std::move(value); }

    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for.</p>
     */
    inline void SetTrustAnchorArn(const char* value) { m_trustAnchorArnHasBeenSet = true; m_trustAnchorArn.assign(value); }

    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for.</p>
     */
    inline ImportCrlRequest& WithTrustAnchorArn(const Aws::String& value) { SetTrustAnchorArn(value); return *this;}

    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for.</p>
     */
    inline ImportCrlRequest& WithTrustAnchorArn(Aws::String&& value) { SetTrustAnchorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for.</p>
     */
    inline ImportCrlRequest& WithTrustAnchorArn(const char* value) { SetTrustAnchorArn(value); return *this;}

  private:

    Aws::Utils::ByteBuffer m_crlData;
    bool m_crlDataHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_trustAnchorArn;
    bool m_trustAnchorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
