/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/Recommendation.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about the remediation steps for a finding.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Remediation">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API Remediation
  {
  public:
    Remediation();
    Remediation(Aws::Utils::Json::JsonView jsonValue);
    Remediation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A recommendation on the steps to take to remediate the issue identified by a
     * finding.</p>
     */
    inline const Recommendation& GetRecommendation() const{ return m_recommendation; }

    /**
     * <p>A recommendation on the steps to take to remediate the issue identified by a
     * finding.</p>
     */
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }

    /**
     * <p>A recommendation on the steps to take to remediate the issue identified by a
     * finding.</p>
     */
    inline void SetRecommendation(const Recommendation& value) { m_recommendationHasBeenSet = true; m_recommendation = value; }

    /**
     * <p>A recommendation on the steps to take to remediate the issue identified by a
     * finding.</p>
     */
    inline void SetRecommendation(Recommendation&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::move(value); }

    /**
     * <p>A recommendation on the steps to take to remediate the issue identified by a
     * finding.</p>
     */
    inline Remediation& WithRecommendation(const Recommendation& value) { SetRecommendation(value); return *this;}

    /**
     * <p>A recommendation on the steps to take to remediate the issue identified by a
     * finding.</p>
     */
    inline Remediation& WithRecommendation(Recommendation&& value) { SetRecommendation(std::move(value)); return *this;}

  private:

    Recommendation m_recommendation;
    bool m_recommendationHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
