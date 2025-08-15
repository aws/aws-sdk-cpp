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
   * <p>The configuration information to connect to Amazon S3 as your data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/S3DataSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class S3DataSourceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API S3DataSourceConfiguration() = default;
    AWS_BEDROCKAGENT_API S3DataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API S3DataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket that contains your data.</p>
     */
    inline const Aws::String& GetBucketArn() const { return m_bucketArn; }
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }
    template<typename BucketArnT = Aws::String>
    void SetBucketArn(BucketArnT&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::forward<BucketArnT>(value); }
    template<typename BucketArnT = Aws::String>
    S3DataSourceConfiguration& WithBucketArn(BucketArnT&& value) { SetBucketArn(std::forward<BucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of S3 prefixes to include certain files or content. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPrefixes() const { return m_inclusionPrefixes; }
    inline bool InclusionPrefixesHasBeenSet() const { return m_inclusionPrefixesHasBeenSet; }
    template<typename InclusionPrefixesT = Aws::Vector<Aws::String>>
    void SetInclusionPrefixes(InclusionPrefixesT&& value) { m_inclusionPrefixesHasBeenSet = true; m_inclusionPrefixes = std::forward<InclusionPrefixesT>(value); }
    template<typename InclusionPrefixesT = Aws::Vector<Aws::String>>
    S3DataSourceConfiguration& WithInclusionPrefixes(InclusionPrefixesT&& value) { SetInclusionPrefixes(std::forward<InclusionPrefixesT>(value)); return *this;}
    template<typename InclusionPrefixesT = Aws::String>
    S3DataSourceConfiguration& AddInclusionPrefixes(InclusionPrefixesT&& value) { m_inclusionPrefixesHasBeenSet = true; m_inclusionPrefixes.emplace_back(std::forward<InclusionPrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The account ID for the owner of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketOwnerAccountId() const { return m_bucketOwnerAccountId; }
    inline bool BucketOwnerAccountIdHasBeenSet() const { return m_bucketOwnerAccountIdHasBeenSet; }
    template<typename BucketOwnerAccountIdT = Aws::String>
    void SetBucketOwnerAccountId(BucketOwnerAccountIdT&& value) { m_bucketOwnerAccountIdHasBeenSet = true; m_bucketOwnerAccountId = std::forward<BucketOwnerAccountIdT>(value); }
    template<typename BucketOwnerAccountIdT = Aws::String>
    S3DataSourceConfiguration& WithBucketOwnerAccountId(BucketOwnerAccountIdT&& value) { SetBucketOwnerAccountId(std::forward<BucketOwnerAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionPrefixes;
    bool m_inclusionPrefixesHasBeenSet = false;

    Aws::String m_bucketOwnerAccountId;
    bool m_bucketOwnerAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
