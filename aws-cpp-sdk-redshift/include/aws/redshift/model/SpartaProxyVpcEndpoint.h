/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>The connection endpoint for connecting an Amazon Redshift cluster through the
   * proxy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/SpartaProxyVpcEndpoint">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API SpartaProxyVpcEndpoint
  {
  public:
    SpartaProxyVpcEndpoint();
    SpartaProxyVpcEndpoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    SpartaProxyVpcEndpoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The connection endpoint ID for connecting an Amazon Redshift cluster through
     * the proxy.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The connection endpoint ID for connecting an Amazon Redshift cluster through
     * the proxy.</p>
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>The connection endpoint ID for connecting an Amazon Redshift cluster through
     * the proxy.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The connection endpoint ID for connecting an Amazon Redshift cluster through
     * the proxy.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The connection endpoint ID for connecting an Amazon Redshift cluster through
     * the proxy.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The connection endpoint ID for connecting an Amazon Redshift cluster through
     * the proxy.</p>
     */
    inline SpartaProxyVpcEndpoint& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The connection endpoint ID for connecting an Amazon Redshift cluster through
     * the proxy.</p>
     */
    inline SpartaProxyVpcEndpoint& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The connection endpoint ID for connecting an Amazon Redshift cluster through
     * the proxy.</p>
     */
    inline SpartaProxyVpcEndpoint& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}

  private:

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
