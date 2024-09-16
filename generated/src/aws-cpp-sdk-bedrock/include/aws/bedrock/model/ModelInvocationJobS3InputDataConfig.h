/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/S3InputFormat.h>
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
   * <p>Contains the configuration of the S3 location of the input
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ModelInvocationJobS3InputDataConfig">AWS
   * API Reference</a></p>
   */
  class ModelInvocationJobS3InputDataConfig
  {
  public:
    AWS_BEDROCK_API ModelInvocationJobS3InputDataConfig();
    AWS_BEDROCK_API ModelInvocationJobS3InputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ModelInvocationJobS3InputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format of the input data.</p>
     */
    inline const S3InputFormat& GetS3InputFormat() const{ return m_s3InputFormat; }
    inline bool S3InputFormatHasBeenSet() const { return m_s3InputFormatHasBeenSet; }
    inline void SetS3InputFormat(const S3InputFormat& value) { m_s3InputFormatHasBeenSet = true; m_s3InputFormat = value; }
    inline void SetS3InputFormat(S3InputFormat&& value) { m_s3InputFormatHasBeenSet = true; m_s3InputFormat = std::move(value); }
    inline ModelInvocationJobS3InputDataConfig& WithS3InputFormat(const S3InputFormat& value) { SetS3InputFormat(value); return *this;}
    inline ModelInvocationJobS3InputDataConfig& WithS3InputFormat(S3InputFormat&& value) { SetS3InputFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location of the input data.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }
    inline ModelInvocationJobS3InputDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}
    inline ModelInvocationJobS3InputDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}
    inline ModelInvocationJobS3InputDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the S3 bucket containing
     * the input data.</p>
     */
    inline const Aws::String& GetS3BucketOwner() const{ return m_s3BucketOwner; }
    inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }
    inline void SetS3BucketOwner(const Aws::String& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = value; }
    inline void SetS3BucketOwner(Aws::String&& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = std::move(value); }
    inline void SetS3BucketOwner(const char* value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner.assign(value); }
    inline ModelInvocationJobS3InputDataConfig& WithS3BucketOwner(const Aws::String& value) { SetS3BucketOwner(value); return *this;}
    inline ModelInvocationJobS3InputDataConfig& WithS3BucketOwner(Aws::String&& value) { SetS3BucketOwner(std::move(value)); return *this;}
    inline ModelInvocationJobS3InputDataConfig& WithS3BucketOwner(const char* value) { SetS3BucketOwner(value); return *this;}
    ///@}
  private:

    S3InputFormat m_s3InputFormat;
    bool m_s3InputFormatHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_s3BucketOwner;
    bool m_s3BucketOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
