/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>

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
   * <p>The set of port numbers to open on each instance in a container fleet.
   * Connection ports are used by inbound traffic to connect with processes that are
   * running in containers on the fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ConnectionPortRange">AWS
   * API Reference</a></p>
   */
  class ConnectionPortRange
  {
  public:
    AWS_GAMELIFT_API ConnectionPortRange();
    AWS_GAMELIFT_API ConnectionPortRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ConnectionPortRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Starting value for the port range.</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }
    inline ConnectionPortRange& WithFromPort(int value) { SetFromPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ending value for the port. Port numbers are end-inclusive. This value must be
     * equal to or greater than <code>FromPort</code>.</p>
     */
    inline int GetToPort() const{ return m_toPort; }
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }
    inline ConnectionPortRange& WithToPort(int value) { SetToPort(value); return *this;}
    ///@}
  private:

    int m_fromPort;
    bool m_fromPortHasBeenSet = false;

    int m_toPort;
    bool m_toPortHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
