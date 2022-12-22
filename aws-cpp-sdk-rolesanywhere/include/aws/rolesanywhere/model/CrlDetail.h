/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace RolesAnywhere
{
namespace Model
{

  /**
   * <p>The state of the certificate revocation list (CRL) after a read or write
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/CrlDetail">AWS
   * API Reference</a></p>
   */
  class CrlDetail
  {
  public:
    AWS_ROLESANYWHERE_API CrlDetail();
    AWS_ROLESANYWHERE_API CrlDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API CrlDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ISO-8601 timestamp when the certificate revocation list (CRL) was
     * created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The ISO-8601 timestamp when the certificate revocation list (CRL) was
     * created. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The ISO-8601 timestamp when the certificate revocation list (CRL) was
     * created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The ISO-8601 timestamp when the certificate revocation list (CRL) was
     * created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The ISO-8601 timestamp when the certificate revocation list (CRL) was
     * created. </p>
     */
    inline CrlDetail& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The ISO-8601 timestamp when the certificate revocation list (CRL) was
     * created. </p>
     */
    inline CrlDetail& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The ARN of the certificate revocation list (CRL).</p>
     */
    inline const Aws::String& GetCrlArn() const{ return m_crlArn; }

    /**
     * <p>The ARN of the certificate revocation list (CRL).</p>
     */
    inline bool CrlArnHasBeenSet() const { return m_crlArnHasBeenSet; }

    /**
     * <p>The ARN of the certificate revocation list (CRL).</p>
     */
    inline void SetCrlArn(const Aws::String& value) { m_crlArnHasBeenSet = true; m_crlArn = value; }

    /**
     * <p>The ARN of the certificate revocation list (CRL).</p>
     */
    inline void SetCrlArn(Aws::String&& value) { m_crlArnHasBeenSet = true; m_crlArn = std::move(value); }

    /**
     * <p>The ARN of the certificate revocation list (CRL).</p>
     */
    inline void SetCrlArn(const char* value) { m_crlArnHasBeenSet = true; m_crlArn.assign(value); }

    /**
     * <p>The ARN of the certificate revocation list (CRL).</p>
     */
    inline CrlDetail& WithCrlArn(const Aws::String& value) { SetCrlArn(value); return *this;}

    /**
     * <p>The ARN of the certificate revocation list (CRL).</p>
     */
    inline CrlDetail& WithCrlArn(Aws::String&& value) { SetCrlArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the certificate revocation list (CRL).</p>
     */
    inline CrlDetail& WithCrlArn(const char* value) { SetCrlArn(value); return *this;}


    /**
     * <p>The state of the certificate revocation list (CRL) after a read or write
     * operation.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetCrlData() const{ return m_crlData; }

    /**
     * <p>The state of the certificate revocation list (CRL) after a read or write
     * operation.</p>
     */
    inline bool CrlDataHasBeenSet() const { return m_crlDataHasBeenSet; }

    /**
     * <p>The state of the certificate revocation list (CRL) after a read or write
     * operation.</p>
     */
    inline void SetCrlData(const Aws::Utils::ByteBuffer& value) { m_crlDataHasBeenSet = true; m_crlData = value; }

    /**
     * <p>The state of the certificate revocation list (CRL) after a read or write
     * operation.</p>
     */
    inline void SetCrlData(Aws::Utils::ByteBuffer&& value) { m_crlDataHasBeenSet = true; m_crlData = std::move(value); }

    /**
     * <p>The state of the certificate revocation list (CRL) after a read or write
     * operation.</p>
     */
    inline CrlDetail& WithCrlData(const Aws::Utils::ByteBuffer& value) { SetCrlData(value); return *this;}

    /**
     * <p>The state of the certificate revocation list (CRL) after a read or write
     * operation.</p>
     */
    inline CrlDetail& WithCrlData(Aws::Utils::ByteBuffer&& value) { SetCrlData(std::move(value)); return *this;}


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
    inline CrlDetail& WithCrlId(const Aws::String& value) { SetCrlId(value); return *this;}

    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline CrlDetail& WithCrlId(Aws::String&& value) { SetCrlId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the certificate revocation list (CRL).</p>
     */
    inline CrlDetail& WithCrlId(const char* value) { SetCrlId(value); return *this;}


    /**
     * <p>Indicates whether the certificate revocation list (CRL) is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether the certificate revocation list (CRL) is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether the certificate revocation list (CRL) is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether the certificate revocation list (CRL) is enabled.</p>
     */
    inline CrlDetail& WithEnabled(bool value) { SetEnabled(value); return *this;}


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
    inline CrlDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the certificate revocation list (CRL).</p>
     */
    inline CrlDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the certificate revocation list (CRL).</p>
     */
    inline CrlDetail& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for. </p>
     */
    inline const Aws::String& GetTrustAnchorArn() const{ return m_trustAnchorArn; }

    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for. </p>
     */
    inline bool TrustAnchorArnHasBeenSet() const { return m_trustAnchorArnHasBeenSet; }

    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for. </p>
     */
    inline void SetTrustAnchorArn(const Aws::String& value) { m_trustAnchorArnHasBeenSet = true; m_trustAnchorArn = value; }

    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for. </p>
     */
    inline void SetTrustAnchorArn(Aws::String&& value) { m_trustAnchorArnHasBeenSet = true; m_trustAnchorArn = std::move(value); }

    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for. </p>
     */
    inline void SetTrustAnchorArn(const char* value) { m_trustAnchorArnHasBeenSet = true; m_trustAnchorArn.assign(value); }

    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for. </p>
     */
    inline CrlDetail& WithTrustAnchorArn(const Aws::String& value) { SetTrustAnchorArn(value); return *this;}

    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for. </p>
     */
    inline CrlDetail& WithTrustAnchorArn(Aws::String&& value) { SetTrustAnchorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the TrustAnchor the certificate revocation list (CRL) will provide
     * revocation for. </p>
     */
    inline CrlDetail& WithTrustAnchorArn(const char* value) { SetTrustAnchorArn(value); return *this;}


    /**
     * <p>The ISO-8601 timestamp when the certificate revocation list (CRL) was last
     * updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The ISO-8601 timestamp when the certificate revocation list (CRL) was last
     * updated. </p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The ISO-8601 timestamp when the certificate revocation list (CRL) was last
     * updated. </p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The ISO-8601 timestamp when the certificate revocation list (CRL) was last
     * updated. </p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The ISO-8601 timestamp when the certificate revocation list (CRL) was last
     * updated. </p>
     */
    inline CrlDetail& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The ISO-8601 timestamp when the certificate revocation list (CRL) was last
     * updated. </p>
     */
    inline CrlDetail& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_crlArn;
    bool m_crlArnHasBeenSet = false;

    Aws::Utils::ByteBuffer m_crlData;
    bool m_crlDataHasBeenSet = false;

    Aws::String m_crlId;
    bool m_crlIdHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_trustAnchorArn;
    bool m_trustAnchorArnHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
