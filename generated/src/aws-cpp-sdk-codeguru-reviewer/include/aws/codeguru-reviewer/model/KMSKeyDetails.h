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
    AWS_CODEGURUREVIEWER_API KMSKeyDetails() = default;
    AWS_CODEGURUREVIEWER_API KMSKeyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API KMSKeyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services KMS key that is associated with a
     * repository association.</p>
     */
    inline const Aws::String& GetKMSKeyId() const { return m_kMSKeyId; }
    inline bool KMSKeyIdHasBeenSet() const { return m_kMSKeyIdHasBeenSet; }
    template<typename KMSKeyIdT = Aws::String>
    void SetKMSKeyId(KMSKeyIdT&& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = std::forward<KMSKeyIdT>(value); }
    template<typename KMSKeyIdT = Aws::String>
    KMSKeyDetails& WithKMSKeyId(KMSKeyIdT&& value) { SetKMSKeyId(std::forward<KMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption option for a repository association. It is either owned by
     * Amazon Web Services Key Management Service (KMS) (<code>AWS_OWNED_CMK</code>) or
     * customer managed (<code>CUSTOMER_MANAGED_CMK</code>).</p>
     */
    inline EncryptionOption GetEncryptionOption() const { return m_encryptionOption; }
    inline bool EncryptionOptionHasBeenSet() const { return m_encryptionOptionHasBeenSet; }
    inline void SetEncryptionOption(EncryptionOption value) { m_encryptionOptionHasBeenSet = true; m_encryptionOption = value; }
    inline KMSKeyDetails& WithEncryptionOption(EncryptionOption value) { SetEncryptionOption(value); return *this;}
    ///@}
  private:

    Aws::String m_kMSKeyId;
    bool m_kMSKeyIdHasBeenSet = false;

    EncryptionOption m_encryptionOption{EncryptionOption::NOT_SET};
    bool m_encryptionOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
