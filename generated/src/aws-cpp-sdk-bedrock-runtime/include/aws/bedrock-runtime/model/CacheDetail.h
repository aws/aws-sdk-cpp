/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/CacheTTL.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockRuntime {
namespace Model {

/**
 * <p>Cache creation metrics for a specific TTL duration</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/CacheDetail">AWS
 * API Reference</a></p>
 */
class CacheDetail {
 public:
  AWS_BEDROCKRUNTIME_API CacheDetail() = default;
  AWS_BEDROCKRUNTIME_API CacheDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API CacheDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>TTL duration for these cached tokens</p>
   */
  inline CacheTTL GetTtl() const { return m_ttl; }
  inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }
  inline void SetTtl(CacheTTL value) {
    m_ttlHasBeenSet = true;
    m_ttl = value;
  }
  inline CacheDetail& WithTtl(CacheTTL value) {
    SetTtl(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of tokens written to cache with this TTL (cache creation tokens)</p>
   */
  inline int GetInputTokens() const { return m_inputTokens; }
  inline bool InputTokensHasBeenSet() const { return m_inputTokensHasBeenSet; }
  inline void SetInputTokens(int value) {
    m_inputTokensHasBeenSet = true;
    m_inputTokens = value;
  }
  inline CacheDetail& WithInputTokens(int value) {
    SetInputTokens(value);
    return *this;
  }
  ///@}
 private:
  CacheTTL m_ttl{CacheTTL::NOT_SET};

  int m_inputTokens{0};
  bool m_ttlHasBeenSet = false;
  bool m_inputTokensHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
