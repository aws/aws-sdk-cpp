/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Contains the configuration of the S3 location of the output
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ModelInvocationJobS3OutputDataConfig">AWS
   * API Reference</a></p>
   */
  class ModelInvocationJobS3OutputDataConfig
  {
  public:
    AWS_BEDROCK_API ModelInvocationJobS3OutputDataConfig() = default;
    AWS_BEDROCK_API ModelInvocationJobS3OutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ModelInvocationJobS3OutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 location of the output data.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    ModelInvocationJobS3OutputDataConfig& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the key that encrypts the S3 location of the output
     * data.</p>
     */
    inline const Aws::String& GetS3EncryptionKeyId() const { return m_s3EncryptionKeyId; }
    inline bool S3EncryptionKeyIdHasBeenSet() const { return m_s3EncryptionKeyIdHasBeenSet; }
    template<typename S3EncryptionKeyIdT = Aws::String>
    void SetS3EncryptionKeyId(S3EncryptionKeyIdT&& value) { m_s3EncryptionKeyIdHasBeenSet = true; m_s3EncryptionKeyId = std::forward<S3EncryptionKeyIdT>(value); }
    template<typename S3EncryptionKeyIdT = Aws::String>
    ModelInvocationJobS3OutputDataConfig& WithS3EncryptionKeyId(S3EncryptionKeyIdT&& value) { SetS3EncryptionKeyId(std::forward<S3EncryptionKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the S3 bucket containing
     * the output data.</p>
     */
    inline const Aws::String& GetS3BucketOwner() const { return m_s3BucketOwner; }
    inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }
    template<typename S3BucketOwnerT = Aws::String>
    void SetS3BucketOwner(S3BucketOwnerT&& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = std::forward<S3BucketOwnerT>(value); }
    template<typename S3BucketOwnerT = Aws::String>
    ModelInvocationJobS3OutputDataConfig& WithS3BucketOwner(S3BucketOwnerT&& value) { SetS3BucketOwner(std::forward<S3BucketOwnerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_s3EncryptionKeyId;
    bool m_s3EncryptionKeyIdHasBeenSet = false;

    Aws::String m_s3BucketOwner;
    bool m_s3BucketOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
