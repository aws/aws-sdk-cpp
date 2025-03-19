/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/RevealStatus.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies the status of the Amazon Macie configuration for retrieving
   * occurrences of sensitive data reported by findings, and the Key Management
   * Service (KMS) key to use to encrypt sensitive data that's retrieved. When you
   * enable the configuration for the first time, your request must specify an KMS
   * key. Otherwise, an error occurs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/RevealConfiguration">AWS
   * API Reference</a></p>
   */
  class RevealConfiguration
  {
  public:
    AWS_MACIE2_API RevealConfiguration() = default;
    AWS_MACIE2_API RevealConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API RevealConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN), ID, or alias of the KMS key to use to encrypt
     * sensitive data that's retrieved. The key must be an existing, customer managed,
     * symmetric encryption key that's enabled in the same Amazon Web Services Region
     * as the Amazon Macie account.</p> <p>If this value specifies an alias, it must
     * include the following prefix: alias/. If this value specifies a key that's owned
     * by another Amazon Web Services account, it must specify the ARN of the key or
     * the ARN of the key's alias.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    RevealConfiguration& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the configuration for the Amazon Macie account. In a response,
     * possible values are: ENABLED, the configuration is currently enabled for the
     * account; and, DISABLED, the configuration is currently disabled for the account.
     * In a request, valid values are: ENABLED, enable the configuration for the
     * account; and, DISABLED, disable the configuration for the account.</p>
     * <p>If you disable the configuration, you also permanently delete
     * current settings that specify how to access affected S3 objects. If your current
     * access method is ASSUME_ROLE, Macie also deletes the external ID and role name
     * currently specified for the configuration. These settings can't be recovered
     * after they're deleted.</p>
     */
    inline RevealStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RevealStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RevealConfiguration& WithStatus(RevealStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    RevealStatus m_status{RevealStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
