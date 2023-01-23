/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Recommendation.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Information on how to remediate a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Remediation">AWS
   * API Reference</a></p>
   */
  class Remediation
  {
  public:
    AWS_INSPECTOR2_API Remediation();
    AWS_INSPECTOR2_API Remediation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Remediation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains information about the recommended course of action to
     * remediate the finding.</p>
     */
    inline const Recommendation& GetRecommendation() const{ return m_recommendation; }

    /**
     * <p>An object that contains information about the recommended course of action to
     * remediate the finding.</p>
     */
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }

    /**
     * <p>An object that contains information about the recommended course of action to
     * remediate the finding.</p>
     */
    inline void SetRecommendation(const Recommendation& value) { m_recommendationHasBeenSet = true; m_recommendation = value; }

    /**
     * <p>An object that contains information about the recommended course of action to
     * remediate the finding.</p>
     */
    inline void SetRecommendation(Recommendation&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::move(value); }

    /**
     * <p>An object that contains information about the recommended course of action to
     * remediate the finding.</p>
     */
    inline Remediation& WithRecommendation(const Recommendation& value) { SetRecommendation(value); return *this;}

    /**
     * <p>An object that contains information about the recommended course of action to
     * remediate the finding.</p>
     */
    inline Remediation& WithRecommendation(Recommendation&& value) { SetRecommendation(std::move(value)); return *this;}

  private:

    Recommendation m_recommendation;
    bool m_recommendationHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
