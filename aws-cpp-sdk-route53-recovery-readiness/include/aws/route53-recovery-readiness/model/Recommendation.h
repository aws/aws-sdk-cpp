/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * Guidance for improving Recovery Group resilliancy<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/Recommendation">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API Recommendation
  {
  public:
    Recommendation();
    Recommendation(Aws::Utils::Json::JsonView jsonValue);
    Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Guidance text for recommendation
     */
    inline const Aws::String& GetRecommendationText() const{ return m_recommendationText; }

    /**
     * Guidance text for recommendation
     */
    inline bool RecommendationTextHasBeenSet() const { return m_recommendationTextHasBeenSet; }

    /**
     * Guidance text for recommendation
     */
    inline void SetRecommendationText(const Aws::String& value) { m_recommendationTextHasBeenSet = true; m_recommendationText = value; }

    /**
     * Guidance text for recommendation
     */
    inline void SetRecommendationText(Aws::String&& value) { m_recommendationTextHasBeenSet = true; m_recommendationText = std::move(value); }

    /**
     * Guidance text for recommendation
     */
    inline void SetRecommendationText(const char* value) { m_recommendationTextHasBeenSet = true; m_recommendationText.assign(value); }

    /**
     * Guidance text for recommendation
     */
    inline Recommendation& WithRecommendationText(const Aws::String& value) { SetRecommendationText(value); return *this;}

    /**
     * Guidance text for recommendation
     */
    inline Recommendation& WithRecommendationText(Aws::String&& value) { SetRecommendationText(std::move(value)); return *this;}

    /**
     * Guidance text for recommendation
     */
    inline Recommendation& WithRecommendationText(const char* value) { SetRecommendationText(value); return *this;}

  private:

    Aws::String m_recommendationText;
    bool m_recommendationTextHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
