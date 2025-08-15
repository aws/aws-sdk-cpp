/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains information about the Amazon S3 location of the file containing the
   * content to ingest into a knowledge base connected to a custom data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CustomS3Location">AWS
   * API Reference</a></p>
   */
  class CustomS3Location
  {
  public:
    AWS_BEDROCKAGENT_API CustomS3Location() = default;
    AWS_BEDROCKAGENT_API CustomS3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API CustomS3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 URI of the file containing the content to ingest.</p>
     */
    inline const Aws::String& GetUri() const { return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    template<typename UriT = Aws::String>
    void SetUri(UriT&& value) { m_uriHasBeenSet = true; m_uri = std::forward<UriT>(value); }
    template<typename UriT = Aws::String>
    CustomS3Location& WithUri(UriT&& value) { SetUri(std::forward<UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account that owns the S3 bucket
     * containing the content to ingest.</p>
     */
    inline const Aws::String& GetBucketOwnerAccountId() const { return m_bucketOwnerAccountId; }
    inline bool BucketOwnerAccountIdHasBeenSet() const { return m_bucketOwnerAccountIdHasBeenSet; }
    template<typename BucketOwnerAccountIdT = Aws::String>
    void SetBucketOwnerAccountId(BucketOwnerAccountIdT&& value) { m_bucketOwnerAccountIdHasBeenSet = true; m_bucketOwnerAccountId = std::forward<BucketOwnerAccountIdT>(value); }
    template<typename BucketOwnerAccountIdT = Aws::String>
    CustomS3Location& WithBucketOwnerAccountId(BucketOwnerAccountIdT&& value) { SetBucketOwnerAccountId(std::forward<BucketOwnerAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    Aws::String m_bucketOwnerAccountId;
    bool m_bucketOwnerAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
