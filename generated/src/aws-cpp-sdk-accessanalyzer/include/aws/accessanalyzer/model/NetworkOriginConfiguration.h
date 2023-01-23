/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/VpcConfiguration.h>
#include <aws/accessanalyzer/model/InternetConfiguration.h>
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
   * <p>The proposed <code>InternetConfiguration</code> or
   * <code>VpcConfiguration</code> to apply to the Amazon S3 access point.
   * <code>VpcConfiguration</code> does not apply to multi-region access points. You
   * can make the access point accessible from the internet, or you can specify that
   * all requests made through that access point must originate from a specific
   * virtual private cloud (VPC). You can specify only one type of network
   * configuration. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/creating-access-points.html">Creating
   * access points</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/NetworkOriginConfiguration">AWS
   * API Reference</a></p>
   */
  class NetworkOriginConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API NetworkOriginConfiguration();
    AWS_ACCESSANALYZER_API NetworkOriginConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API NetworkOriginConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    
    inline NetworkOriginConfiguration& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    
    inline NetworkOriginConfiguration& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration for the Amazon S3 access point or multi-region access point
     * with an <code>Internet</code> origin.</p>
     */
    inline const InternetConfiguration& GetInternetConfiguration() const{ return m_internetConfiguration; }

    /**
     * <p>The configuration for the Amazon S3 access point or multi-region access point
     * with an <code>Internet</code> origin.</p>
     */
    inline bool InternetConfigurationHasBeenSet() const { return m_internetConfigurationHasBeenSet; }

    /**
     * <p>The configuration for the Amazon S3 access point or multi-region access point
     * with an <code>Internet</code> origin.</p>
     */
    inline void SetInternetConfiguration(const InternetConfiguration& value) { m_internetConfigurationHasBeenSet = true; m_internetConfiguration = value; }

    /**
     * <p>The configuration for the Amazon S3 access point or multi-region access point
     * with an <code>Internet</code> origin.</p>
     */
    inline void SetInternetConfiguration(InternetConfiguration&& value) { m_internetConfigurationHasBeenSet = true; m_internetConfiguration = std::move(value); }

    /**
     * <p>The configuration for the Amazon S3 access point or multi-region access point
     * with an <code>Internet</code> origin.</p>
     */
    inline NetworkOriginConfiguration& WithInternetConfiguration(const InternetConfiguration& value) { SetInternetConfiguration(value); return *this;}

    /**
     * <p>The configuration for the Amazon S3 access point or multi-region access point
     * with an <code>Internet</code> origin.</p>
     */
    inline NetworkOriginConfiguration& WithInternetConfiguration(InternetConfiguration&& value) { SetInternetConfiguration(std::move(value)); return *this;}

  private:

    VpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    InternetConfiguration m_internetConfiguration;
    bool m_internetConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
