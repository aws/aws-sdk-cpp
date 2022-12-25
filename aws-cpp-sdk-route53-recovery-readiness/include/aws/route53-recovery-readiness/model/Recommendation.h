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
   * <p>Recommendations that are provided to make an application more recovery
   * resilient.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/Recommendation">AWS
   * API Reference</a></p>
   */
  class Recommendation
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API Recommendation();
    AWS_ROUTE53RECOVERYREADINESS_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Text of the recommendations that are provided to make an application more
     * recovery resilient.</p>
     */
    inline const Aws::String& GetRecommendationText() const{ return m_recommendationText; }

    /**
     * <p>Text of the recommendations that are provided to make an application more
     * recovery resilient.</p>
     */
    inline bool RecommendationTextHasBeenSet() const { return m_recommendationTextHasBeenSet; }

    /**
     * <p>Text of the recommendations that are provided to make an application more
     * recovery resilient.</p>
     */
    inline void SetRecommendationText(const Aws::String& value) { m_recommendationTextHasBeenSet = true; m_recommendationText = value; }

    /**
     * <p>Text of the recommendations that are provided to make an application more
     * recovery resilient.</p>
     */
    inline void SetRecommendationText(Aws::String&& value) { m_recommendationTextHasBeenSet = true; m_recommendationText = std::move(value); }

    /**
     * <p>Text of the recommendations that are provided to make an application more
     * recovery resilient.</p>
     */
    inline void SetRecommendationText(const char* value) { m_recommendationTextHasBeenSet = true; m_recommendationText.assign(value); }

    /**
     * <p>Text of the recommendations that are provided to make an application more
     * recovery resilient.</p>
     */
    inline Recommendation& WithRecommendationText(const Aws::String& value) { SetRecommendationText(value); return *this;}

    /**
     * <p>Text of the recommendations that are provided to make an application more
     * recovery resilient.</p>
     */
    inline Recommendation& WithRecommendationText(Aws::String&& value) { SetRecommendationText(std::move(value)); return *this;}

    /**
     * <p>Text of the recommendations that are provided to make an application more
     * recovery resilient.</p>
     */
    inline Recommendation& WithRecommendationText(const char* value) { SetRecommendationText(value); return *this;}

  private:

    Aws::String m_recommendationText;
    bool m_recommendationTextHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
