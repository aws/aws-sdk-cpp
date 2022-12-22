/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails.h>
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
   * <p> Provides details about the market (purchasing) option for an Amazon EC2
   * instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The market type. </p>
     */
    inline const Aws::String& GetMarketType() const{ return m_marketType; }

    /**
     * <p> The market type. </p>
     */
    inline bool MarketTypeHasBeenSet() const { return m_marketTypeHasBeenSet; }

    /**
     * <p> The market type. </p>
     */
    inline void SetMarketType(const Aws::String& value) { m_marketTypeHasBeenSet = true; m_marketType = value; }

    /**
     * <p> The market type. </p>
     */
    inline void SetMarketType(Aws::String&& value) { m_marketTypeHasBeenSet = true; m_marketType = std::move(value); }

    /**
     * <p> The market type. </p>
     */
    inline void SetMarketType(const char* value) { m_marketTypeHasBeenSet = true; m_marketType.assign(value); }

    /**
     * <p> The market type. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails& WithMarketType(const Aws::String& value) { SetMarketType(value); return *this;}

    /**
     * <p> The market type. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails& WithMarketType(Aws::String&& value) { SetMarketType(std::move(value)); return *this;}

    /**
     * <p> The market type. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails& WithMarketType(const char* value) { SetMarketType(value); return *this;}


    /**
     * <p> The options for Spot Instances. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& GetSpotOptions() const{ return m_spotOptions; }

    /**
     * <p> The options for Spot Instances. </p>
     */
    inline bool SpotOptionsHasBeenSet() const { return m_spotOptionsHasBeenSet; }

    /**
     * <p> The options for Spot Instances. </p>
     */
    inline void SetSpotOptions(const AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = value; }

    /**
     * <p> The options for Spot Instances. </p>
     */
    inline void SetSpotOptions(AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails&& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = std::move(value); }

    /**
     * <p> The options for Spot Instances. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails& WithSpotOptions(const AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& value) { SetSpotOptions(value); return *this;}

    /**
     * <p> The options for Spot Instances. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails& WithSpotOptions(AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails&& value) { SetSpotOptions(std::move(value)); return *this;}

  private:

    Aws::String m_marketType;
    bool m_marketTypeHasBeenSet = false;

    AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails m_spotOptions;
    bool m_spotOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
