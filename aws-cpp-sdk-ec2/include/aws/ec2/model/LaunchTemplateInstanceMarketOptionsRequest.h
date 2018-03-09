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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/MarketType.h>
#include <aws/ec2/model/LaunchTemplateSpotMarketOptionsRequest.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>The market (purchasing) option for the instances.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateInstanceMarketOptionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API LaunchTemplateInstanceMarketOptionsRequest
  {
  public:
    LaunchTemplateInstanceMarketOptionsRequest();
    LaunchTemplateInstanceMarketOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    LaunchTemplateInstanceMarketOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The market type.</p>
     */
    inline const MarketType& GetMarketType() const{ return m_marketType; }

    /**
     * <p>The market type.</p>
     */
    inline void SetMarketType(const MarketType& value) { m_marketTypeHasBeenSet = true; m_marketType = value; }

    /**
     * <p>The market type.</p>
     */
    inline void SetMarketType(MarketType&& value) { m_marketTypeHasBeenSet = true; m_marketType = std::move(value); }

    /**
     * <p>The market type.</p>
     */
    inline LaunchTemplateInstanceMarketOptionsRequest& WithMarketType(const MarketType& value) { SetMarketType(value); return *this;}

    /**
     * <p>The market type.</p>
     */
    inline LaunchTemplateInstanceMarketOptionsRequest& WithMarketType(MarketType&& value) { SetMarketType(std::move(value)); return *this;}


    /**
     * <p>The options for Spot Instances.</p>
     */
    inline const LaunchTemplateSpotMarketOptionsRequest& GetSpotOptions() const{ return m_spotOptions; }

    /**
     * <p>The options for Spot Instances.</p>
     */
    inline void SetSpotOptions(const LaunchTemplateSpotMarketOptionsRequest& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = value; }

    /**
     * <p>The options for Spot Instances.</p>
     */
    inline void SetSpotOptions(LaunchTemplateSpotMarketOptionsRequest&& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = std::move(value); }

    /**
     * <p>The options for Spot Instances.</p>
     */
    inline LaunchTemplateInstanceMarketOptionsRequest& WithSpotOptions(const LaunchTemplateSpotMarketOptionsRequest& value) { SetSpotOptions(value); return *this;}

    /**
     * <p>The options for Spot Instances.</p>
     */
    inline LaunchTemplateInstanceMarketOptionsRequest& WithSpotOptions(LaunchTemplateSpotMarketOptionsRequest&& value) { SetSpotOptions(std::move(value)); return *this;}

  private:

    MarketType m_marketType;
    bool m_marketTypeHasBeenSet;

    LaunchTemplateSpotMarketOptionsRequest m_spotOptions;
    bool m_spotOptionsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
