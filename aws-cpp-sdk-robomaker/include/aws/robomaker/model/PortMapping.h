/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>

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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>An object representing a port mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/PortMapping">AWS
   * API Reference</a></p>
   */
  class PortMapping
  {
  public:
    AWS_ROBOMAKER_API PortMapping();
    AWS_ROBOMAKER_API PortMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API PortMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The port number on the simulation job instance to use as a remote connection
     * point. </p>
     */
    inline int GetJobPort() const{ return m_jobPort; }

    /**
     * <p>The port number on the simulation job instance to use as a remote connection
     * point. </p>
     */
    inline bool JobPortHasBeenSet() const { return m_jobPortHasBeenSet; }

    /**
     * <p>The port number on the simulation job instance to use as a remote connection
     * point. </p>
     */
    inline void SetJobPort(int value) { m_jobPortHasBeenSet = true; m_jobPort = value; }

    /**
     * <p>The port number on the simulation job instance to use as a remote connection
     * point. </p>
     */
    inline PortMapping& WithJobPort(int value) { SetJobPort(value); return *this;}


    /**
     * <p>The port number on the application.</p>
     */
    inline int GetApplicationPort() const{ return m_applicationPort; }

    /**
     * <p>The port number on the application.</p>
     */
    inline bool ApplicationPortHasBeenSet() const { return m_applicationPortHasBeenSet; }

    /**
     * <p>The port number on the application.</p>
     */
    inline void SetApplicationPort(int value) { m_applicationPortHasBeenSet = true; m_applicationPort = value; }

    /**
     * <p>The port number on the application.</p>
     */
    inline PortMapping& WithApplicationPort(int value) { SetApplicationPort(value); return *this;}


    /**
     * <p>A Boolean indicating whether to enable this port mapping on public IP.</p>
     */
    inline bool GetEnableOnPublicIp() const{ return m_enableOnPublicIp; }

    /**
     * <p>A Boolean indicating whether to enable this port mapping on public IP.</p>
     */
    inline bool EnableOnPublicIpHasBeenSet() const { return m_enableOnPublicIpHasBeenSet; }

    /**
     * <p>A Boolean indicating whether to enable this port mapping on public IP.</p>
     */
    inline void SetEnableOnPublicIp(bool value) { m_enableOnPublicIpHasBeenSet = true; m_enableOnPublicIp = value; }

    /**
     * <p>A Boolean indicating whether to enable this port mapping on public IP.</p>
     */
    inline PortMapping& WithEnableOnPublicIp(bool value) { SetEnableOnPublicIp(value); return *this;}

  private:

    int m_jobPort;
    bool m_jobPortHasBeenSet = false;

    int m_applicationPort;
    bool m_applicationPortHasBeenSet = false;

    bool m_enableOnPublicIp;
    bool m_enableOnPublicIpHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
