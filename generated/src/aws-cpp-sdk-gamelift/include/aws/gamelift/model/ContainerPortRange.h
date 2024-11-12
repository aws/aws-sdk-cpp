/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/IpProtocol.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>A set of one or more port numbers that can be opened on the container. </p>
   * <p> <b>Part of:</b> <a>ContainerPortConfiguration</a> </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerPortRange">AWS
   * API Reference</a></p>
   */
  class ContainerPortRange
  {
  public:
    AWS_GAMELIFT_API ContainerPortRange();
    AWS_GAMELIFT_API ContainerPortRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerPortRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A starting value for the range of allowed port numbers.</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }
    inline ContainerPortRange& WithFromPort(int value) { SetFromPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ending value for the range of allowed port numbers. Port numbers are
     * end-inclusive. This value must be equal to or greater than
     * <code>FromPort</code>.</p>
     */
    inline int GetToPort() const{ return m_toPort; }
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }
    inline ContainerPortRange& WithToPort(int value) { SetToPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network protocol that these ports support. </p>
     */
    inline const IpProtocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const IpProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(IpProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline ContainerPortRange& WithProtocol(const IpProtocol& value) { SetProtocol(value); return *this;}
    inline ContainerPortRange& WithProtocol(IpProtocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}
  private:

    int m_fromPort;
    bool m_fromPortHasBeenSet = false;

    int m_toPort;
    bool m_toPortHasBeenSet = false;

    IpProtocol m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
