/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Information about the socket address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/SocketAddress">AWS
   * API Reference</a></p>
   */
  class SocketAddress
  {
  public:
    AWS_GROUNDSTATION_API SocketAddress();
    AWS_GROUNDSTATION_API SocketAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API SocketAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of a socket address.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of a socket address.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of a socket address.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of a socket address.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of a socket address.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of a socket address.</p>
     */
    inline SocketAddress& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of a socket address.</p>
     */
    inline SocketAddress& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of a socket address.</p>
     */
    inline SocketAddress& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Port of a socket address.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Port of a socket address.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>Port of a socket address.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Port of a socket address.</p>
     */
    inline SocketAddress& WithPort(int value) { SetPort(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
