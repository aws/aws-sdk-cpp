/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class OrganizationAggregationSource
  {
  public:
    AWS_CONFIGSERVICE_API OrganizationAggregationSource() = default;
    AWS_CONFIGSERVICE_API OrganizationAggregationSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API OrganizationAggregationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the IAM role used to retrieve Amazon Web Services Organization details
     * associated with the aggregator account.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    OrganizationAggregationSource& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source regions being aggregated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAwsRegions() const { return m_awsRegions; }
    inline bool AwsRegionsHasBeenSet() const { return m_awsRegionsHasBeenSet; }
    template<typename AwsRegionsT = Aws::Vector<Aws::String>>
    void SetAwsRegions(AwsRegionsT&& value) { m_awsRegionsHasBeenSet = true; m_awsRegions = std::forward<AwsRegionsT>(value); }
    template<typename AwsRegionsT = Aws::Vector<Aws::String>>
    OrganizationAggregationSource& WithAwsRegions(AwsRegionsT&& value) { SetAwsRegions(std::forward<AwsRegionsT>(value)); return *this;}
    template<typename AwsRegionsT = Aws::String>
    OrganizationAggregationSource& AddAwsRegions(AwsRegionsT&& value) { m_awsRegionsHasBeenSet = true; m_awsRegions.emplace_back(std::forward<AwsRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If true, aggregate existing Config regions and future regions.</p>
     */
    inline bool GetAllAwsRegions() const { return m_allAwsRegions; }
    inline bool AllAwsRegionsHasBeenSet() const { return m_allAwsRegionsHasBeenSet; }
    inline void SetAllAwsRegions(bool value) { m_allAwsRegionsHasBeenSet = true; m_allAwsRegions = value; }
    inline OrganizationAggregationSource& WithAllAwsRegions(bool value) { SetAllAwsRegions(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_awsRegions;
    bool m_awsRegionsHasBeenSet = false;

    bool m_allAwsRegions{false};
    bool m_allAwsRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
