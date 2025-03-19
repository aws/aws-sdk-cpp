/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Describes the Amazon S3 bucket name and location for the grammar that is the
   * source for the slot type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/GrammarSlotTypeSource">AWS
   * API Reference</a></p>
   */
  class GrammarSlotTypeSource
  {
  public:
    AWS_LEXMODELSV2_API GrammarSlotTypeSource() = default;
    AWS_LEXMODELSV2_API GrammarSlotTypeSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API GrammarSlotTypeSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon S3 bucket that contains the grammar source.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    GrammarSlotTypeSource& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the grammar in the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3ObjectKey() const { return m_s3ObjectKey; }
    inline bool S3ObjectKeyHasBeenSet() const { return m_s3ObjectKeyHasBeenSet; }
    template<typename S3ObjectKeyT = Aws::String>
    void SetS3ObjectKey(S3ObjectKeyT&& value) { m_s3ObjectKeyHasBeenSet = true; m_s3ObjectKey = std::forward<S3ObjectKeyT>(value); }
    template<typename S3ObjectKeyT = Aws::String>
    GrammarSlotTypeSource& WithS3ObjectKey(S3ObjectKeyT&& value) { SetS3ObjectKey(std::forward<S3ObjectKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key required to decrypt the contents of the grammar, if any.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    GrammarSlotTypeSource& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3ObjectKey;
    bool m_s3ObjectKeyHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
