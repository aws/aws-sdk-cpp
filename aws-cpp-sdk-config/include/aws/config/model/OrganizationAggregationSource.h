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
#include <aws/config/ConfigService_EXPORTS.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>This object contains regions to set up the aggregator and an IAM role to
   * retrieve organization details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/OrganizationAggregationSource">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API OrganizationAggregationSource
  {
  public:
    OrganizationAggregationSource();
    OrganizationAggregationSource(Aws::Utils::Json::JsonView jsonValue);
    OrganizationAggregationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ARN of the IAM role used to retrieve AWS Organization details associated with
     * the aggregator account.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>ARN of the IAM role used to retrieve AWS Organization details associated with
     * the aggregator account.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>ARN of the IAM role used to retrieve AWS Organization details associated with
     * the aggregator account.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>ARN of the IAM role used to retrieve AWS Organization details associated with
     * the aggregator account.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>ARN of the IAM role used to retrieve AWS Organization details associated with
     * the aggregator account.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>ARN of the IAM role used to retrieve AWS Organization details associated with
     * the aggregator account.</p>
     */
    inline OrganizationAggregationSource& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>ARN of the IAM role used to retrieve AWS Organization details associated with
     * the aggregator account.</p>
     */
    inline OrganizationAggregationSource& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the IAM role used to retrieve AWS Organization details associated with
     * the aggregator account.</p>
     */
    inline OrganizationAggregationSource& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The source regions being aggregated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAwsRegions() const{ return m_awsRegions; }

    /**
     * <p>The source regions being aggregated.</p>
     */
    inline bool AwsRegionsHasBeenSet() const { return m_awsRegionsHasBeenSet; }

    /**
     * <p>The source regions being aggregated.</p>
     */
    inline void SetAwsRegions(const Aws::Vector<Aws::String>& value) { m_awsRegionsHasBeenSet = true; m_awsRegions = value; }

    /**
     * <p>The source regions being aggregated.</p>
     */
    inline void SetAwsRegions(Aws::Vector<Aws::String>&& value) { m_awsRegionsHasBeenSet = true; m_awsRegions = std::move(value); }

    /**
     * <p>The source regions being aggregated.</p>
     */
    inline OrganizationAggregationSource& WithAwsRegions(const Aws::Vector<Aws::String>& value) { SetAwsRegions(value); return *this;}

    /**
     * <p>The source regions being aggregated.</p>
     */
    inline OrganizationAggregationSource& WithAwsRegions(Aws::Vector<Aws::String>&& value) { SetAwsRegions(std::move(value)); return *this;}

    /**
     * <p>The source regions being aggregated.</p>
     */
    inline OrganizationAggregationSource& AddAwsRegions(const Aws::String& value) { m_awsRegionsHasBeenSet = true; m_awsRegions.push_back(value); return *this; }

    /**
     * <p>The source regions being aggregated.</p>
     */
    inline OrganizationAggregationSource& AddAwsRegions(Aws::String&& value) { m_awsRegionsHasBeenSet = true; m_awsRegions.push_back(std::move(value)); return *this; }

    /**
     * <p>The source regions being aggregated.</p>
     */
    inline OrganizationAggregationSource& AddAwsRegions(const char* value) { m_awsRegionsHasBeenSet = true; m_awsRegions.push_back(value); return *this; }


    /**
     * <p>If true, aggregate existing AWS Config regions and future regions.</p>
     */
    inline bool GetAllAwsRegions() const{ return m_allAwsRegions; }

    /**
     * <p>If true, aggregate existing AWS Config regions and future regions.</p>
     */
    inline bool AllAwsRegionsHasBeenSet() const { return m_allAwsRegionsHasBeenSet; }

    /**
     * <p>If true, aggregate existing AWS Config regions and future regions.</p>
     */
    inline void SetAllAwsRegions(bool value) { m_allAwsRegionsHasBeenSet = true; m_allAwsRegions = value; }

    /**
     * <p>If true, aggregate existing AWS Config regions and future regions.</p>
     */
    inline OrganizationAggregationSource& WithAllAwsRegions(bool value) { SetAllAwsRegions(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Vector<Aws::String> m_awsRegions;
    bool m_awsRegionsHasBeenSet;

    bool m_allAwsRegions;
    bool m_allAwsRegionsHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
