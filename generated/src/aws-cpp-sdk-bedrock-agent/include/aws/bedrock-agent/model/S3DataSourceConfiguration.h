/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains information about the S3 configuration of the data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/S3DataSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class S3DataSourceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API S3DataSourceConfiguration();
    AWS_BEDROCKAGENT_API S3DataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API S3DataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the bucket that contains the data
     * source.</p>
     */
    inline const Aws::String& GetBucketArn() const{ return m_bucketArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket that contains the data
     * source.</p>
     */
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket that contains the data
     * source.</p>
     */
    inline void SetBucketArn(const Aws::String& value) { m_bucketArnHasBeenSet = true; m_bucketArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket that contains the data
     * source.</p>
     */
    inline void SetBucketArn(Aws::String&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket that contains the data
     * source.</p>
     */
    inline void SetBucketArn(const char* value) { m_bucketArnHasBeenSet = true; m_bucketArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket that contains the data
     * source.</p>
     */
    inline S3DataSourceConfiguration& WithBucketArn(const Aws::String& value) { SetBucketArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket that contains the data
     * source.</p>
     */
    inline S3DataSourceConfiguration& WithBucketArn(Aws::String&& value) { SetBucketArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket that contains the data
     * source.</p>
     */
    inline S3DataSourceConfiguration& WithBucketArn(const char* value) { SetBucketArn(value); return *this;}


    /**
     * <p>The bucket account owner ID for the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketOwnerAccountId() const{ return m_bucketOwnerAccountId; }

    /**
     * <p>The bucket account owner ID for the S3 bucket.</p>
     */
    inline bool BucketOwnerAccountIdHasBeenSet() const { return m_bucketOwnerAccountIdHasBeenSet; }

    /**
     * <p>The bucket account owner ID for the S3 bucket.</p>
     */
    inline void SetBucketOwnerAccountId(const Aws::String& value) { m_bucketOwnerAccountIdHasBeenSet = true; m_bucketOwnerAccountId = value; }

    /**
     * <p>The bucket account owner ID for the S3 bucket.</p>
     */
    inline void SetBucketOwnerAccountId(Aws::String&& value) { m_bucketOwnerAccountIdHasBeenSet = true; m_bucketOwnerAccountId = std::move(value); }

    /**
     * <p>The bucket account owner ID for the S3 bucket.</p>
     */
    inline void SetBucketOwnerAccountId(const char* value) { m_bucketOwnerAccountIdHasBeenSet = true; m_bucketOwnerAccountId.assign(value); }

    /**
     * <p>The bucket account owner ID for the S3 bucket.</p>
     */
    inline S3DataSourceConfiguration& WithBucketOwnerAccountId(const Aws::String& value) { SetBucketOwnerAccountId(value); return *this;}

    /**
     * <p>The bucket account owner ID for the S3 bucket.</p>
     */
    inline S3DataSourceConfiguration& WithBucketOwnerAccountId(Aws::String&& value) { SetBucketOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The bucket account owner ID for the S3 bucket.</p>
     */
    inline S3DataSourceConfiguration& WithBucketOwnerAccountId(const char* value) { SetBucketOwnerAccountId(value); return *this;}


    /**
     * <p>A list of S3 prefixes that define the object containing the data sources. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPrefixes() const{ return m_inclusionPrefixes; }

    /**
     * <p>A list of S3 prefixes that define the object containing the data sources. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a>.</p>
     */
    inline bool InclusionPrefixesHasBeenSet() const { return m_inclusionPrefixesHasBeenSet; }

    /**
     * <p>A list of S3 prefixes that define the object containing the data sources. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a>.</p>
     */
    inline void SetInclusionPrefixes(const Aws::Vector<Aws::String>& value) { m_inclusionPrefixesHasBeenSet = true; m_inclusionPrefixes = value; }

    /**
     * <p>A list of S3 prefixes that define the object containing the data sources. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a>.</p>
     */
    inline void SetInclusionPrefixes(Aws::Vector<Aws::String>&& value) { m_inclusionPrefixesHasBeenSet = true; m_inclusionPrefixes = std::move(value); }

    /**
     * <p>A list of S3 prefixes that define the object containing the data sources. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a>.</p>
     */
    inline S3DataSourceConfiguration& WithInclusionPrefixes(const Aws::Vector<Aws::String>& value) { SetInclusionPrefixes(value); return *this;}

    /**
     * <p>A list of S3 prefixes that define the object containing the data sources. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a>.</p>
     */
    inline S3DataSourceConfiguration& WithInclusionPrefixes(Aws::Vector<Aws::String>&& value) { SetInclusionPrefixes(std::move(value)); return *this;}

    /**
     * <p>A list of S3 prefixes that define the object containing the data sources. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a>.</p>
     */
    inline S3DataSourceConfiguration& AddInclusionPrefixes(const Aws::String& value) { m_inclusionPrefixesHasBeenSet = true; m_inclusionPrefixes.push_back(value); return *this; }

    /**
     * <p>A list of S3 prefixes that define the object containing the data sources. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a>.</p>
     */
    inline S3DataSourceConfiguration& AddInclusionPrefixes(Aws::String&& value) { m_inclusionPrefixesHasBeenSet = true; m_inclusionPrefixes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of S3 prefixes that define the object containing the data sources. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a>.</p>
     */
    inline S3DataSourceConfiguration& AddInclusionPrefixes(const char* value) { m_inclusionPrefixesHasBeenSet = true; m_inclusionPrefixes.push_back(value); return *this; }

  private:

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet = false;

    Aws::String m_bucketOwnerAccountId;
    bool m_bucketOwnerAccountIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionPrefixes;
    bool m_inclusionPrefixesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
