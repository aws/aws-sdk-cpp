/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/JobBookmarksEncryptionMode.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies how job bookmark data should be encrypted.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/JobBookmarksEncryption">AWS
   * API Reference</a></p>
   */
  class JobBookmarksEncryption
  {
  public:
    AWS_GLUE_API JobBookmarksEncryption() = default;
    AWS_GLUE_API JobBookmarksEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API JobBookmarksEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encryption mode to use for job bookmarks data.</p>
     */
    inline JobBookmarksEncryptionMode GetJobBookmarksEncryptionMode() const { return m_jobBookmarksEncryptionMode; }
    inline bool JobBookmarksEncryptionModeHasBeenSet() const { return m_jobBookmarksEncryptionModeHasBeenSet; }
    inline void SetJobBookmarksEncryptionMode(JobBookmarksEncryptionMode value) { m_jobBookmarksEncryptionModeHasBeenSet = true; m_jobBookmarksEncryptionMode = value; }
    inline JobBookmarksEncryption& WithJobBookmarksEncryptionMode(JobBookmarksEncryptionMode value) { SetJobBookmarksEncryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    JobBookmarksEncryption& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}
  private:

    JobBookmarksEncryptionMode m_jobBookmarksEncryptionMode{JobBookmarksEncryptionMode::NOT_SET};
    bool m_jobBookmarksEncryptionModeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
