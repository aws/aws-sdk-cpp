/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>A structure that contains information about one pattern token related to an
   * anomaly.</p> <p>For more information about patterns and tokens, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CreateLogAnomalyDetector.html">CreateLogAnomalyDetector</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PatternToken">AWS
   * API Reference</a></p>
   */
  class PatternToken
  {
  public:
    AWS_CLOUDWATCHLOGS_API PatternToken() = default;
    AWS_CLOUDWATCHLOGS_API PatternToken(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API PatternToken& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For a dynamic token, this indicates where in the pattern that this token
     * appears, related to other dynamic tokens. The dynamic token that appears first
     * has a value of <code>1</code>, the one that appears second is <code>2</code>,
     * and so on.</p>
     */
    inline int GetDynamicTokenPosition() const { return m_dynamicTokenPosition; }
    inline bool DynamicTokenPositionHasBeenSet() const { return m_dynamicTokenPositionHasBeenSet; }
    inline void SetDynamicTokenPosition(int value) { m_dynamicTokenPositionHasBeenSet = true; m_dynamicTokenPosition = value; }
    inline PatternToken& WithDynamicTokenPosition(int value) { SetDynamicTokenPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this is a dynamic token.</p>
     */
    inline bool GetIsDynamic() const { return m_isDynamic; }
    inline bool IsDynamicHasBeenSet() const { return m_isDynamicHasBeenSet; }
    inline void SetIsDynamic(bool value) { m_isDynamicHasBeenSet = true; m_isDynamic = value; }
    inline PatternToken& WithIsDynamic(bool value) { SetIsDynamic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string represented by this token. If this is a dynamic token, the value
     * will be <code>&lt;*&gt;</code> </p>
     */
    inline const Aws::String& GetTokenString() const { return m_tokenString; }
    inline bool TokenStringHasBeenSet() const { return m_tokenStringHasBeenSet; }
    template<typename TokenStringT = Aws::String>
    void SetTokenString(TokenStringT&& value) { m_tokenStringHasBeenSet = true; m_tokenString = std::forward<TokenStringT>(value); }
    template<typename TokenStringT = Aws::String>
    PatternToken& WithTokenString(TokenStringT&& value) { SetTokenString(std::forward<TokenStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the values found for a dynamic token, and the number of times each
     * value was found.</p>
     */
    inline const Aws::Map<Aws::String, long long>& GetEnumerations() const { return m_enumerations; }
    inline bool EnumerationsHasBeenSet() const { return m_enumerationsHasBeenSet; }
    template<typename EnumerationsT = Aws::Map<Aws::String, long long>>
    void SetEnumerations(EnumerationsT&& value) { m_enumerationsHasBeenSet = true; m_enumerations = std::forward<EnumerationsT>(value); }
    template<typename EnumerationsT = Aws::Map<Aws::String, long long>>
    PatternToken& WithEnumerations(EnumerationsT&& value) { SetEnumerations(std::forward<EnumerationsT>(value)); return *this;}
    inline PatternToken& AddEnumerations(Aws::String key, long long value) {
      m_enumerationsHasBeenSet = true; m_enumerations.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A name that CloudWatch Logs assigned to this dynamic token to make the
     * pattern more readable. The string part of the <code>inferredTokenName</code>
     * gives you a clearer idea of the content of this token. The number part of the
     * <code>inferredTokenName</code> shows where in the pattern this token appears,
     * compared to other dynamic tokens. CloudWatch Logs assigns the string part of the
     * name based on analyzing the content of the log events that contain it.</p>
     * <p>For example, an inferred token name of <code>IPAddress-3</code> means that
     * the token represents an IP address, and this token is the third dynamic token in
     * the pattern.</p>
     */
    inline const Aws::String& GetInferredTokenName() const { return m_inferredTokenName; }
    inline bool InferredTokenNameHasBeenSet() const { return m_inferredTokenNameHasBeenSet; }
    template<typename InferredTokenNameT = Aws::String>
    void SetInferredTokenName(InferredTokenNameT&& value) { m_inferredTokenNameHasBeenSet = true; m_inferredTokenName = std::forward<InferredTokenNameT>(value); }
    template<typename InferredTokenNameT = Aws::String>
    PatternToken& WithInferredTokenName(InferredTokenNameT&& value) { SetInferredTokenName(std::forward<InferredTokenNameT>(value)); return *this;}
    ///@}
  private:

    int m_dynamicTokenPosition{0};
    bool m_dynamicTokenPositionHasBeenSet = false;

    bool m_isDynamic{false};
    bool m_isDynamicHasBeenSet = false;

    Aws::String m_tokenString;
    bool m_tokenStringHasBeenSet = false;

    Aws::Map<Aws::String, long long> m_enumerations;
    bool m_enumerationsHasBeenSet = false;

    Aws::String m_inferredTokenName;
    bool m_inferredTokenNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
