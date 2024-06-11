/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/Recommendation.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>Information on how to remediate a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/Remediation">AWS API
   * Reference</a></p>
   */
  class Remediation
  {
  public:
    AWS_ECR_API Remediation();
    AWS_ECR_API Remediation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Remediation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains information about the recommended course of action to
     * remediate the finding.</p>
     */
    inline const Recommendation& GetRecommendation() const{ return m_recommendation; }
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }
    inline void SetRecommendation(const Recommendation& value) { m_recommendationHasBeenSet = true; m_recommendation = value; }
    inline void SetRecommendation(Recommendation&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::move(value); }
    inline Remediation& WithRecommendation(const Recommendation& value) { SetRecommendation(value); return *this;}
    inline Remediation& WithRecommendation(Recommendation&& value) { SetRecommendation(std::move(value)); return *this;}
    ///@}
  private:

    Recommendation m_recommendation;
    bool m_recommendationHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
