/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains details about the CloudTrail trail being analyzed to generate a
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/TrailProperties">AWS
   * API Reference</a></p>
   */
  class TrailProperties
  {
  public:
    AWS_ACCESSANALYZER_API TrailProperties() = default;
    AWS_ACCESSANALYZER_API TrailProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API TrailProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>.</p>
     */
    inline const Aws::String& GetCloudTrailArn() const { return m_cloudTrailArn; }
    inline bool CloudTrailArnHasBeenSet() const { return m_cloudTrailArnHasBeenSet; }
    template<typename CloudTrailArnT = Aws::String>
    void SetCloudTrailArn(CloudTrailArnT&& value) { m_cloudTrailArnHasBeenSet = true; m_cloudTrailArn = std::forward<CloudTrailArnT>(value); }
    template<typename CloudTrailArnT = Aws::String>
    TrailProperties& WithCloudTrailArn(CloudTrailArnT&& value) { SetCloudTrailArn(std::forward<CloudTrailArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of regions to get CloudTrail data from and analyze to generate a
     * policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    TrailProperties& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    TrailProperties& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Possible values are <code>true</code> or <code>false</code>. If set to
     * <code>true</code>, IAM Access Analyzer retrieves CloudTrail data from all
     * regions to analyze and generate a policy.</p>
     */
    inline bool GetAllRegions() const { return m_allRegions; }
    inline bool AllRegionsHasBeenSet() const { return m_allRegionsHasBeenSet; }
    inline void SetAllRegions(bool value) { m_allRegionsHasBeenSet = true; m_allRegions = value; }
    inline TrailProperties& WithAllRegions(bool value) { SetAllRegions(value); return *this;}
    ///@}
  private:

    Aws::String m_cloudTrailArn;
    bool m_cloudTrailArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    bool m_allRegions{false};
    bool m_allRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
