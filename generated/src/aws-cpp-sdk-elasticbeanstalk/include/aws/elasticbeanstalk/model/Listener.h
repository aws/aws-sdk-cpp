/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Describes the properties of a Listener for the LoadBalancer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/Listener">AWS
   * API Reference</a></p>
   */
  class Listener
  {
  public:
    AWS_ELASTICBEANSTALK_API Listener();
    AWS_ELASTICBEANSTALK_API Listener(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API Listener& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The protocol that is used by the Listener.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol that is used by the Listener.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol that is used by the Listener.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol that is used by the Listener.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol that is used by the Listener.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The protocol that is used by the Listener.</p>
     */
    inline Listener& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol that is used by the Listener.</p>
     */
    inline Listener& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol that is used by the Listener.</p>
     */
    inline Listener& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>The port that is used by the Listener.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port that is used by the Listener.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port that is used by the Listener.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port that is used by the Listener.</p>
     */
    inline Listener& WithPort(int value) { SetPort(value); return *this;}

  private:

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
