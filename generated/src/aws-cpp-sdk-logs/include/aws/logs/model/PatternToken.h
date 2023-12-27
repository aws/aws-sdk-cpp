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
   * <p>A tructures that contains information about one pattern token related to an
   * anomaly.</p> <p>For more information about patterns and tokens, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CreateLogAnomalyDetector.html">CreateLogAnomalyDetector</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PatternToken">AWS
   * API Reference</a></p>
   */
  class PatternToken
  {
  public:
    AWS_CLOUDWATCHLOGS_API PatternToken();
    AWS_CLOUDWATCHLOGS_API PatternToken(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API PatternToken& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>For a dynamic token, this indicates where in the pattern that this token
     * appears, related to other dynamic tokens. The dynamic token that appears first
     * has a value of <code>1</code>, the one that appears second is <code>2</code>,
     * and so on.</p>
     */
    inline int GetDynamicTokenPosition() const{ return m_dynamicTokenPosition; }

    /**
     * <p>For a dynamic token, this indicates where in the pattern that this token
     * appears, related to other dynamic tokens. The dynamic token that appears first
     * has a value of <code>1</code>, the one that appears second is <code>2</code>,
     * and so on.</p>
     */
    inline bool DynamicTokenPositionHasBeenSet() const { return m_dynamicTokenPositionHasBeenSet; }

    /**
     * <p>For a dynamic token, this indicates where in the pattern that this token
     * appears, related to other dynamic tokens. The dynamic token that appears first
     * has a value of <code>1</code>, the one that appears second is <code>2</code>,
     * and so on.</p>
     */
    inline void SetDynamicTokenPosition(int value) { m_dynamicTokenPositionHasBeenSet = true; m_dynamicTokenPosition = value; }

    /**
     * <p>For a dynamic token, this indicates where in the pattern that this token
     * appears, related to other dynamic tokens. The dynamic token that appears first
     * has a value of <code>1</code>, the one that appears second is <code>2</code>,
     * and so on.</p>
     */
    inline PatternToken& WithDynamicTokenPosition(int value) { SetDynamicTokenPosition(value); return *this;}


    /**
     * <p>Specifies whether this is a dynamic token.</p>
     */
    inline bool GetIsDynamic() const{ return m_isDynamic; }

    /**
     * <p>Specifies whether this is a dynamic token.</p>
     */
    inline bool IsDynamicHasBeenSet() const { return m_isDynamicHasBeenSet; }

    /**
     * <p>Specifies whether this is a dynamic token.</p>
     */
    inline void SetIsDynamic(bool value) { m_isDynamicHasBeenSet = true; m_isDynamic = value; }

    /**
     * <p>Specifies whether this is a dynamic token.</p>
     */
    inline PatternToken& WithIsDynamic(bool value) { SetIsDynamic(value); return *this;}


    /**
     * <p>The string represented by this token. If this is a dynamic token, the value
     * will be <code>&lt;*&gt;</code> </p>
     */
    inline const Aws::String& GetTokenString() const{ return m_tokenString; }

    /**
     * <p>The string represented by this token. If this is a dynamic token, the value
     * will be <code>&lt;*&gt;</code> </p>
     */
    inline bool TokenStringHasBeenSet() const { return m_tokenStringHasBeenSet; }

    /**
     * <p>The string represented by this token. If this is a dynamic token, the value
     * will be <code>&lt;*&gt;</code> </p>
     */
    inline void SetTokenString(const Aws::String& value) { m_tokenStringHasBeenSet = true; m_tokenString = value; }

    /**
     * <p>The string represented by this token. If this is a dynamic token, the value
     * will be <code>&lt;*&gt;</code> </p>
     */
    inline void SetTokenString(Aws::String&& value) { m_tokenStringHasBeenSet = true; m_tokenString = std::move(value); }

    /**
     * <p>The string represented by this token. If this is a dynamic token, the value
     * will be <code>&lt;*&gt;</code> </p>
     */
    inline void SetTokenString(const char* value) { m_tokenStringHasBeenSet = true; m_tokenString.assign(value); }

    /**
     * <p>The string represented by this token. If this is a dynamic token, the value
     * will be <code>&lt;*&gt;</code> </p>
     */
    inline PatternToken& WithTokenString(const Aws::String& value) { SetTokenString(value); return *this;}

    /**
     * <p>The string represented by this token. If this is a dynamic token, the value
     * will be <code>&lt;*&gt;</code> </p>
     */
    inline PatternToken& WithTokenString(Aws::String&& value) { SetTokenString(std::move(value)); return *this;}

    /**
     * <p>The string represented by this token. If this is a dynamic token, the value
     * will be <code>&lt;*&gt;</code> </p>
     */
    inline PatternToken& WithTokenString(const char* value) { SetTokenString(value); return *this;}


    /**
     * <p>Contains the values found for a dynamic token, and the number of times each
     * value was found.</p>
     */
    inline const Aws::Map<Aws::String, long long>& GetEnumerations() const{ return m_enumerations; }

    /**
     * <p>Contains the values found for a dynamic token, and the number of times each
     * value was found.</p>
     */
    inline bool EnumerationsHasBeenSet() const { return m_enumerationsHasBeenSet; }

    /**
     * <p>Contains the values found for a dynamic token, and the number of times each
     * value was found.</p>
     */
    inline void SetEnumerations(const Aws::Map<Aws::String, long long>& value) { m_enumerationsHasBeenSet = true; m_enumerations = value; }

    /**
     * <p>Contains the values found for a dynamic token, and the number of times each
     * value was found.</p>
     */
    inline void SetEnumerations(Aws::Map<Aws::String, long long>&& value) { m_enumerationsHasBeenSet = true; m_enumerations = std::move(value); }

    /**
     * <p>Contains the values found for a dynamic token, and the number of times each
     * value was found.</p>
     */
    inline PatternToken& WithEnumerations(const Aws::Map<Aws::String, long long>& value) { SetEnumerations(value); return *this;}

    /**
     * <p>Contains the values found for a dynamic token, and the number of times each
     * value was found.</p>
     */
    inline PatternToken& WithEnumerations(Aws::Map<Aws::String, long long>&& value) { SetEnumerations(std::move(value)); return *this;}

    /**
     * <p>Contains the values found for a dynamic token, and the number of times each
     * value was found.</p>
     */
    inline PatternToken& AddEnumerations(const Aws::String& key, long long value) { m_enumerationsHasBeenSet = true; m_enumerations.emplace(key, value); return *this; }

    /**
     * <p>Contains the values found for a dynamic token, and the number of times each
     * value was found.</p>
     */
    inline PatternToken& AddEnumerations(Aws::String&& key, long long value) { m_enumerationsHasBeenSet = true; m_enumerations.emplace(std::move(key), value); return *this; }

    /**
     * <p>Contains the values found for a dynamic token, and the number of times each
     * value was found.</p>
     */
    inline PatternToken& AddEnumerations(const char* key, long long value) { m_enumerationsHasBeenSet = true; m_enumerations.emplace(key, value); return *this; }

  private:

    int m_dynamicTokenPosition;
    bool m_dynamicTokenPositionHasBeenSet = false;

    bool m_isDynamic;
    bool m_isDynamicHasBeenSet = false;

    Aws::String m_tokenString;
    bool m_tokenStringHasBeenSet = false;

    Aws::Map<Aws::String, long long> m_enumerations;
    bool m_enumerationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
