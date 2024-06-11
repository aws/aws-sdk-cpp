﻿/**
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
    AWS_ACCESSANALYZER_API TrailProperties();
    AWS_ACCESSANALYZER_API TrailProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API TrailProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>.</p>
     */
    inline const Aws::String& GetCloudTrailArn() const{ return m_cloudTrailArn; }
    inline bool CloudTrailArnHasBeenSet() const { return m_cloudTrailArnHasBeenSet; }
    inline void SetCloudTrailArn(const Aws::String& value) { m_cloudTrailArnHasBeenSet = true; m_cloudTrailArn = value; }
    inline void SetCloudTrailArn(Aws::String&& value) { m_cloudTrailArnHasBeenSet = true; m_cloudTrailArn = std::move(value); }
    inline void SetCloudTrailArn(const char* value) { m_cloudTrailArnHasBeenSet = true; m_cloudTrailArn.assign(value); }
    inline TrailProperties& WithCloudTrailArn(const Aws::String& value) { SetCloudTrailArn(value); return *this;}
    inline TrailProperties& WithCloudTrailArn(Aws::String&& value) { SetCloudTrailArn(std::move(value)); return *this;}
    inline TrailProperties& WithCloudTrailArn(const char* value) { SetCloudTrailArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of regions to get CloudTrail data from and analyze to generate a
     * policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }
    inline TrailProperties& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}
    inline TrailProperties& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}
    inline TrailProperties& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }
    inline TrailProperties& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }
    inline TrailProperties& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Possible values are <code>true</code> or <code>false</code>. If set to
     * <code>true</code>, IAM Access Analyzer retrieves CloudTrail data from all
     * regions to analyze and generate a policy.</p>
     */
    inline bool GetAllRegions() const{ return m_allRegions; }
    inline bool AllRegionsHasBeenSet() const { return m_allRegionsHasBeenSet; }
    inline void SetAllRegions(bool value) { m_allRegionsHasBeenSet = true; m_allRegions = value; }
    inline TrailProperties& WithAllRegions(bool value) { SetAllRegions(value); return *this;}
    ///@}
  private:

    Aws::String m_cloudTrailArn;
    bool m_cloudTrailArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    bool m_allRegions;
    bool m_allRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
