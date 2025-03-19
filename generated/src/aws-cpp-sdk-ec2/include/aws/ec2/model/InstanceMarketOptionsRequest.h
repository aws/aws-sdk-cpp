/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/MarketType.h>
#include <aws/ec2/model/SpotMarketOptions.h>
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
   * <p>Describes the market (purchasing) option for the instances.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceMarketOptionsRequest">AWS
   * API Reference</a></p>
   */
  class InstanceMarketOptionsRequest
  {
  public:
    AWS_EC2_API InstanceMarketOptionsRequest() = default;
    AWS_EC2_API InstanceMarketOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceMarketOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The market type.</p>
     */
    inline MarketType GetMarketType() const { return m_marketType; }
    inline bool MarketTypeHasBeenSet() const { return m_marketTypeHasBeenSet; }
    inline void SetMarketType(MarketType value) { m_marketTypeHasBeenSet = true; m_marketType = value; }
    inline InstanceMarketOptionsRequest& WithMarketType(MarketType value) { SetMarketType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for Spot Instances.</p>
     */
    inline const SpotMarketOptions& GetSpotOptions() const { return m_spotOptions; }
    inline bool SpotOptionsHasBeenSet() const { return m_spotOptionsHasBeenSet; }
    template<typename SpotOptionsT = SpotMarketOptions>
    void SetSpotOptions(SpotOptionsT&& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = std::forward<SpotOptionsT>(value); }
    template<typename SpotOptionsT = SpotMarketOptions>
    InstanceMarketOptionsRequest& WithSpotOptions(SpotOptionsT&& value) { SetSpotOptions(std::forward<SpotOptionsT>(value)); return *this;}
    ///@}
  private:

    MarketType m_marketType{MarketType::NOT_SET};
    bool m_marketTypeHasBeenSet = false;

    SpotMarketOptions m_spotOptions;
    bool m_spotOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
