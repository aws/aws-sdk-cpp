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
  class AWS_ACCESSANALYZER_API TrailProperties
  {
  public:
    TrailProperties();
    TrailProperties(Aws::Utils::Json::JsonView jsonValue);
    TrailProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Possible values are <code>true</code> or <code>false</code>. If set to
     * <code>true</code>, IAM Access Analyzer retrieves CloudTrail data from all
     * regions to analyze and generate a policy.</p>
     */
    inline bool GetAllRegions() const{ return m_allRegions; }

    /**
     * <p>Possible values are <code>true</code> or <code>false</code>. If set to
     * <code>true</code>, IAM Access Analyzer retrieves CloudTrail data from all
     * regions to analyze and generate a policy.</p>
     */
    inline bool AllRegionsHasBeenSet() const { return m_allRegionsHasBeenSet; }

    /**
     * <p>Possible values are <code>true</code> or <code>false</code>. If set to
     * <code>true</code>, IAM Access Analyzer retrieves CloudTrail data from all
     * regions to analyze and generate a policy.</p>
     */
    inline void SetAllRegions(bool value) { m_allRegionsHasBeenSet = true; m_allRegions = value; }

    /**
     * <p>Possible values are <code>true</code> or <code>false</code>. If set to
     * <code>true</code>, IAM Access Analyzer retrieves CloudTrail data from all
     * regions to analyze and generate a policy.</p>
     */
    inline TrailProperties& WithAllRegions(bool value) { SetAllRegions(value); return *this;}


    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>.</p>
     */
    inline const Aws::String& GetCloudTrailArn() const{ return m_cloudTrailArn; }

    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>.</p>
     */
    inline bool CloudTrailArnHasBeenSet() const { return m_cloudTrailArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>.</p>
     */
    inline void SetCloudTrailArn(const Aws::String& value) { m_cloudTrailArnHasBeenSet = true; m_cloudTrailArn = value; }

    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>.</p>
     */
    inline void SetCloudTrailArn(Aws::String&& value) { m_cloudTrailArnHasBeenSet = true; m_cloudTrailArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>.</p>
     */
    inline void SetCloudTrailArn(const char* value) { m_cloudTrailArnHasBeenSet = true; m_cloudTrailArn.assign(value); }

    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>.</p>
     */
    inline TrailProperties& WithCloudTrailArn(const Aws::String& value) { SetCloudTrailArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>.</p>
     */
    inline TrailProperties& WithCloudTrailArn(Aws::String&& value) { SetCloudTrailArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the trail. The format of a trail ARN is
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code>.</p>
     */
    inline TrailProperties& WithCloudTrailArn(const char* value) { SetCloudTrailArn(value); return *this;}


    /**
     * <p>A list of regions to get CloudTrail data from and analyze to generate a
     * policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }

    /**
     * <p>A list of regions to get CloudTrail data from and analyze to generate a
     * policy.</p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>A list of regions to get CloudTrail data from and analyze to generate a
     * policy.</p>
     */
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>A list of regions to get CloudTrail data from and analyze to generate a
     * policy.</p>
     */
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>A list of regions to get CloudTrail data from and analyze to generate a
     * policy.</p>
     */
    inline TrailProperties& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}

    /**
     * <p>A list of regions to get CloudTrail data from and analyze to generate a
     * policy.</p>
     */
    inline TrailProperties& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>A list of regions to get CloudTrail data from and analyze to generate a
     * policy.</p>
     */
    inline TrailProperties& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>A list of regions to get CloudTrail data from and analyze to generate a
     * policy.</p>
     */
    inline TrailProperties& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regions to get CloudTrail data from and analyze to generate a
     * policy.</p>
     */
    inline TrailProperties& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

  private:

    bool m_allRegions;
    bool m_allRegionsHasBeenSet;

    Aws::String m_cloudTrailArn;
    bool m_cloudTrailArnHasBeenSet;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
