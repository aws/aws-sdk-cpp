/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>The Amazon S3 configuration for a gateway. This structure defines how the
   * gateway accesses files in Amazon S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/S3Configuration">AWS
   * API Reference</a></p>
   */
  class S3Configuration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API S3Configuration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API S3Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API S3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URI of the Amazon S3 object. This URI specifies the location of the
     * object in Amazon S3.</p>
     */
    inline const Aws::String& GetUri() const { return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    template<typename UriT = Aws::String>
    void SetUri(UriT&& value) { m_uriHasBeenSet = true; m_uri = std::forward<UriT>(value); }
    template<typename UriT = Aws::String>
    S3Configuration& WithUri(UriT&& value) { SetUri(std::forward<UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the Amazon S3 bucket owner. This ID is used for
     * cross-account access to the bucket.</p>
     */
    inline const Aws::String& GetBucketOwnerAccountId() const { return m_bucketOwnerAccountId; }
    inline bool BucketOwnerAccountIdHasBeenSet() const { return m_bucketOwnerAccountIdHasBeenSet; }
    template<typename BucketOwnerAccountIdT = Aws::String>
    void SetBucketOwnerAccountId(BucketOwnerAccountIdT&& value) { m_bucketOwnerAccountIdHasBeenSet = true; m_bucketOwnerAccountId = std::forward<BucketOwnerAccountIdT>(value); }
    template<typename BucketOwnerAccountIdT = Aws::String>
    S3Configuration& WithBucketOwnerAccountId(BucketOwnerAccountIdT&& value) { SetBucketOwnerAccountId(std::forward<BucketOwnerAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    Aws::String m_bucketOwnerAccountId;
    bool m_bucketOwnerAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
