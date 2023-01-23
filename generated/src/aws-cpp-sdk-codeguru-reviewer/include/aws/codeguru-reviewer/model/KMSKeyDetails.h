/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/EncryptionOption.h>
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
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p>An object that contains:</p> <ul> <li> <p>The encryption option for a
   * repository association. It is either owned by Amazon Web Services Key Management
   * Service (KMS) (<code>AWS_OWNED_CMK</code>) or customer managed
   * (<code>CUSTOMER_MANAGED_CMK</code>).</p> </li> <li> <p>The ID of the Amazon Web
   * Services KMS key that is associated with a repository association.</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/KMSKeyDetails">AWS
   * API Reference</a></p>
   */
  class KMSKeyDetails
  {
  public:
    AWS_CODEGURUREVIEWER_API KMSKeyDetails();
    AWS_CODEGURUREVIEWER_API KMSKeyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API KMSKeyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Amazon Web Services KMS key that is associated with a
     * repository association.</p>
     */
    inline const Aws::String& GetKMSKeyId() const{ return m_kMSKeyId; }

    /**
     * <p>The ID of the Amazon Web Services KMS key that is associated with a
     * repository association.</p>
     */
    inline bool KMSKeyIdHasBeenSet() const { return m_kMSKeyIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services KMS key that is associated with a
     * repository association.</p>
     */
    inline void SetKMSKeyId(const Aws::String& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = value; }

    /**
     * <p>The ID of the Amazon Web Services KMS key that is associated with a
     * repository association.</p>
     */
    inline void SetKMSKeyId(Aws::String&& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services KMS key that is associated with a
     * repository association.</p>
     */
    inline void SetKMSKeyId(const char* value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services KMS key that is associated with a
     * repository association.</p>
     */
    inline KMSKeyDetails& WithKMSKeyId(const Aws::String& value) { SetKMSKeyId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services KMS key that is associated with a
     * repository association.</p>
     */
    inline KMSKeyDetails& WithKMSKeyId(Aws::String&& value) { SetKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services KMS key that is associated with a
     * repository association.</p>
     */
    inline KMSKeyDetails& WithKMSKeyId(const char* value) { SetKMSKeyId(value); return *this;}


    /**
     * <p>The encryption option for a repository association. It is either owned by
     * Amazon Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p>
     */
    inline const EncryptionOption& GetEncryptionOption() const{ return m_encryptionOption; }

    /**
     * <p>The encryption option for a repository association. It is either owned by
     * Amazon Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p>
     */
    inline bool EncryptionOptionHasBeenSet() const { return m_encryptionOptionHasBeenSet; }

    /**
     * <p>The encryption option for a repository association. It is either owned by
     * Amazon Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p>
     */
    inline void SetEncryptionOption(const EncryptionOption& value) { m_encryptionOptionHasBeenSet = true; m_encryptionOption = value; }

    /**
     * <p>The encryption option for a repository association. It is either owned by
     * Amazon Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p>
     */
    inline void SetEncryptionOption(EncryptionOption&& value) { m_encryptionOptionHasBeenSet = true; m_encryptionOption = std::move(value); }

    /**
     * <p>The encryption option for a repository association. It is either owned by
     * Amazon Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p>
     */
    inline KMSKeyDetails& WithEncryptionOption(const EncryptionOption& value) { SetEncryptionOption(value); return *this;}

    /**
     * <p>The encryption option for a repository association. It is either owned by
     * Amazon Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p>
     */
    inline KMSKeyDetails& WithEncryptionOption(EncryptionOption&& value) { SetEncryptionOption(std::move(value)); return *this;}

  private:

    Aws::String m_kMSKeyId;
    bool m_kMSKeyIdHasBeenSet = false;

    EncryptionOption m_encryptionOption;
    bool m_encryptionOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
