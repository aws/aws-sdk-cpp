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
   * <p>Specifies an Amazon S3 bucket for logging audio conversations</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/S3BucketLogDestination">AWS
   * API Reference</a></p>
   */
  class S3BucketLogDestination
  {
  public:
    AWS_LEXMODELSV2_API S3BucketLogDestination() = default;
    AWS_LEXMODELSV2_API S3BucketLogDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API S3BucketLogDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Key Management
     * Service (KMS) key for encrypting audio log files stored in an S3 bucket.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    S3BucketLogDestination& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon S3 bucket where audio log files
     * are stored.</p>
     */
    inline const Aws::String& GetS3BucketArn() const { return m_s3BucketArn; }
    inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }
    template<typename S3BucketArnT = Aws::String>
    void SetS3BucketArn(S3BucketArnT&& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = std::forward<S3BucketArnT>(value); }
    template<typename S3BucketArnT = Aws::String>
    S3BucketLogDestination& WithS3BucketArn(S3BucketArnT&& value) { SetS3BucketArn(std::forward<S3BucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 prefix to assign to audio log files.</p>
     */
    inline const Aws::String& GetLogPrefix() const { return m_logPrefix; }
    inline bool LogPrefixHasBeenSet() const { return m_logPrefixHasBeenSet; }
    template<typename LogPrefixT = Aws::String>
    void SetLogPrefix(LogPrefixT&& value) { m_logPrefixHasBeenSet = true; m_logPrefix = std::forward<LogPrefixT>(value); }
    template<typename LogPrefixT = Aws::String>
    S3BucketLogDestination& WithLogPrefix(LogPrefixT&& value) { SetLogPrefix(std::forward<LogPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_s3BucketArn;
    bool m_s3BucketArnHasBeenSet = false;

    Aws::String m_logPrefix;
    bool m_logPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
