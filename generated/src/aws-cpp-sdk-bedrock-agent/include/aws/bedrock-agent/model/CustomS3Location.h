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
    AWS_BEDROCKAGENT_API CustomS3Location();
    AWS_BEDROCKAGENT_API CustomS3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API CustomS3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account that owns the S3 bucket
     * containing the content to ingest.</p>
     */
    inline const Aws::String& GetBucketOwnerAccountId() const{ return m_bucketOwnerAccountId; }
    inline bool BucketOwnerAccountIdHasBeenSet() const { return m_bucketOwnerAccountIdHasBeenSet; }
    inline void SetBucketOwnerAccountId(const Aws::String& value) { m_bucketOwnerAccountIdHasBeenSet = true; m_bucketOwnerAccountId = value; }
    inline void SetBucketOwnerAccountId(Aws::String&& value) { m_bucketOwnerAccountIdHasBeenSet = true; m_bucketOwnerAccountId = std::move(value); }
    inline void SetBucketOwnerAccountId(const char* value) { m_bucketOwnerAccountIdHasBeenSet = true; m_bucketOwnerAccountId.assign(value); }
    inline CustomS3Location& WithBucketOwnerAccountId(const Aws::String& value) { SetBucketOwnerAccountId(value); return *this;}
    inline CustomS3Location& WithBucketOwnerAccountId(Aws::String&& value) { SetBucketOwnerAccountId(std::move(value)); return *this;}
    inline CustomS3Location& WithBucketOwnerAccountId(const char* value) { SetBucketOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI of the file containing the content to ingest.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }
    inline CustomS3Location& WithUri(const Aws::String& value) { SetUri(value); return *this;}
    inline CustomS3Location& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}
    inline CustomS3Location& WithUri(const char* value) { SetUri(value); return *this;}
    ///@}
  private:

    Aws::String m_bucketOwnerAccountId;
    bool m_bucketOwnerAccountIdHasBeenSet = false;

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
