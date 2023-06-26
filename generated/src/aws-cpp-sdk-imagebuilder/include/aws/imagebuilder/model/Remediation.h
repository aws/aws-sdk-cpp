/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/RemediationRecommendation.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Information about how to remediate a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/Remediation">AWS
   * API Reference</a></p>
   */
  class Remediation
  {
  public:
    AWS_IMAGEBUILDER_API Remediation();
    AWS_IMAGEBUILDER_API Remediation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Remediation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains information about the recommended course of action to
     * remediate the finding.</p>
     */
    inline const RemediationRecommendation& GetRecommendation() const{ return m_recommendation; }

    /**
     * <p>An object that contains information about the recommended course of action to
     * remediate the finding.</p>
     */
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }

    /**
     * <p>An object that contains information about the recommended course of action to
     * remediate the finding.</p>
     */
    inline void SetRecommendation(const RemediationRecommendation& value) { m_recommendationHasBeenSet = true; m_recommendation = value; }

    /**
     * <p>An object that contains information about the recommended course of action to
     * remediate the finding.</p>
     */
    inline void SetRecommendation(RemediationRecommendation&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::move(value); }

    /**
     * <p>An object that contains information about the recommended course of action to
     * remediate the finding.</p>
     */
    inline Remediation& WithRecommendation(const RemediationRecommendation& value) { SetRecommendation(value); return *this;}

    /**
     * <p>An object that contains information about the recommended course of action to
     * remediate the finding.</p>
     */
    inline Remediation& WithRecommendation(RemediationRecommendation&& value) { SetRecommendation(std::move(value)); return *this;}

  private:

    RemediationRecommendation m_recommendation;
    bool m_recommendationHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
