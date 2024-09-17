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
    AWS_BEDROCK_API ModelInvocationJobS3OutputDataConfig();
    AWS_BEDROCK_API ModelInvocationJobS3OutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ModelInvocationJobS3OutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 location of the output data.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }
    inline ModelInvocationJobS3OutputDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}
    inline ModelInvocationJobS3OutputDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}
    inline ModelInvocationJobS3OutputDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the key that encrypts the S3 location of the output
     * data.</p>
     */
    inline const Aws::String& GetS3EncryptionKeyId() const{ return m_s3EncryptionKeyId; }
    inline bool S3EncryptionKeyIdHasBeenSet() const { return m_s3EncryptionKeyIdHasBeenSet; }
    inline void SetS3EncryptionKeyId(const Aws::String& value) { m_s3EncryptionKeyIdHasBeenSet = true; m_s3EncryptionKeyId = value; }
    inline void SetS3EncryptionKeyId(Aws::String&& value) { m_s3EncryptionKeyIdHasBeenSet = true; m_s3EncryptionKeyId = std::move(value); }
    inline void SetS3EncryptionKeyId(const char* value) { m_s3EncryptionKeyIdHasBeenSet = true; m_s3EncryptionKeyId.assign(value); }
    inline ModelInvocationJobS3OutputDataConfig& WithS3EncryptionKeyId(const Aws::String& value) { SetS3EncryptionKeyId(value); return *this;}
    inline ModelInvocationJobS3OutputDataConfig& WithS3EncryptionKeyId(Aws::String&& value) { SetS3EncryptionKeyId(std::move(value)); return *this;}
    inline ModelInvocationJobS3OutputDataConfig& WithS3EncryptionKeyId(const char* value) { SetS3EncryptionKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the S3 bucket containing
     * the output data.</p>
     */
    inline const Aws::String& GetS3BucketOwner() const{ return m_s3BucketOwner; }
    inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }
    inline void SetS3BucketOwner(const Aws::String& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = value; }
    inline void SetS3BucketOwner(Aws::String&& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = std::move(value); }
    inline void SetS3BucketOwner(const char* value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner.assign(value); }
    inline ModelInvocationJobS3OutputDataConfig& WithS3BucketOwner(const Aws::String& value) { SetS3BucketOwner(value); return *this;}
    inline ModelInvocationJobS3OutputDataConfig& WithS3BucketOwner(Aws::String&& value) { SetS3BucketOwner(std::move(value)); return *this;}
    inline ModelInvocationJobS3OutputDataConfig& WithS3BucketOwner(const char* value) { SetS3BucketOwner(value); return *this;}
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
