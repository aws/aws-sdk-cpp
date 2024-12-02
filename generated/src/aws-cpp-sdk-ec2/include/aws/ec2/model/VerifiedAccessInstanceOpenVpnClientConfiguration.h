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
    AWS_EC2_API VerifiedAccessInstanceOpenVpnClientConfiguration();
    AWS_EC2_API VerifiedAccessInstanceOpenVpnClientConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessInstanceOpenVpnClientConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The base64-encoded Open VPN client configuration.</p>
     */
    inline const Aws::String& GetConfig() const{ return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    inline void SetConfig(const Aws::String& value) { m_configHasBeenSet = true; m_config = value; }
    inline void SetConfig(Aws::String&& value) { m_configHasBeenSet = true; m_config = std::move(value); }
    inline void SetConfig(const char* value) { m_configHasBeenSet = true; m_config.assign(value); }
    inline VerifiedAccessInstanceOpenVpnClientConfiguration& WithConfig(const Aws::String& value) { SetConfig(value); return *this;}
    inline VerifiedAccessInstanceOpenVpnClientConfiguration& WithConfig(Aws::String&& value) { SetConfig(std::move(value)); return *this;}
    inline VerifiedAccessInstanceOpenVpnClientConfiguration& WithConfig(const char* value) { SetConfig(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routes.</p>
     */
    inline const Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfigurationRoute>& GetRoutes() const{ return m_routes; }
    inline bool RoutesHasBeenSet() const { return m_routesHasBeenSet; }
    inline void SetRoutes(const Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfigurationRoute>& value) { m_routesHasBeenSet = true; m_routes = value; }
    inline void SetRoutes(Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfigurationRoute>&& value) { m_routesHasBeenSet = true; m_routes = std::move(value); }
    inline VerifiedAccessInstanceOpenVpnClientConfiguration& WithRoutes(const Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfigurationRoute>& value) { SetRoutes(value); return *this;}
    inline VerifiedAccessInstanceOpenVpnClientConfiguration& WithRoutes(Aws::Vector<VerifiedAccessInstanceOpenVpnClientConfigurationRoute>&& value) { SetRoutes(std::move(value)); return *this;}
    inline VerifiedAccessInstanceOpenVpnClientConfiguration& AddRoutes(const VerifiedAccessInstanceOpenVpnClientConfigurationRoute& value) { m_routesHasBeenSet = true; m_routes.push_back(value); return *this; }
    inline VerifiedAccessInstanceOpenVpnClientConfiguration& AddRoutes(VerifiedAccessInstanceOpenVpnClientConfigurationRoute&& value) { m_routesHasBeenSet = true; m_routes.push_back(std::move(value)); return *this; }
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
