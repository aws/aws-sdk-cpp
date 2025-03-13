/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VerifiedAccessInstanceOpenVpnClientConfigurationRoute.h>
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
   * <p>Describes a set of routes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessInstanceOpenVpnClientConfiguration">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessInstanceOpenVpnClientConfiguration
  {
  public:
    AWS_EC2_API VerifiedAccessInstanceOpenVpnClientConfiguration() = default;
    AWS_EC2_API VerifiedAccessInstanceOpenVpnClientConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessInstanceOpenVpnClientConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The base64-encoded Open VPN client configuration.</p>
     */
    inline const Aws::String& GetConfig() const { return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    template<typename ConfigT = Aws::String>
    void SetConfig(ConfigT&& value) { m_configHasBeenSet = true; m_config = std::forward<ConfigT>(value); }
    template<typename ConfigT = Aws::String>
    VerifiedAccessInstanceOpenVpnClientConfiguration& WithConfig(ConfigT&& value) { SetConfig(std::forward<ConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routes.</p>
     */
    inline const Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfigurationRoute>& GetRoutes() const { return m_routes; }
    inline bool RoutesHasBeenSet() const { return m_routesHasBeenSet; }
    template<typename RoutesT = Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfigurationRoute>>
    void SetRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes = std::forward<RoutesT>(value); }
    template<typename RoutesT = Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfigurationRoute>>
    VerifiedAccessInstanceOpenVpnClientConfiguration& WithRoutes(RoutesT&& value) { SetRoutes(std::forward<RoutesT>(value)); return *this;}
    template<typename RoutesT = VerifiedAccessInstanceOpenVpnClientConfigurationRoute>
    VerifiedAccessInstanceOpenVpnClientConfiguration& AddRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes.emplace_back(std::forward<RoutesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_config;
    bool m_configHasBeenSet = false;

    Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfigurationRoute> m_routes;
    bool m_routesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
