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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/NetworkProtocol.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/PortAccessType.h>
#include <aws/lightsail/model/AccessDirection.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes information about the instance ports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstancePortInfo">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API InstancePortInfo
  {
  public:
    InstancePortInfo();
    InstancePortInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    InstancePortInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The first port in the range.</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }

    /**
     * <p>The first port in the range.</p>
     */
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }

    /**
     * <p>The first port in the range.</p>
     */
    inline InstancePortInfo& WithFromPort(int value) { SetFromPort(value); return *this;}

    /**
     * <p>The last port in the range.</p>
     */
    inline int GetToPort() const{ return m_toPort; }

    /**
     * <p>The last port in the range.</p>
     */
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }

    /**
     * <p>The last port in the range.</p>
     */
    inline InstancePortInfo& WithToPort(int value) { SetToPort(value); return *this;}

    /**
     * <p>The protocol. </p>
     */
    inline const NetworkProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol. </p>
     */
    inline void SetProtocol(const NetworkProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol. </p>
     */
    inline void SetProtocol(NetworkProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol. </p>
     */
    inline InstancePortInfo& WithProtocol(const NetworkProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol. </p>
     */
    inline InstancePortInfo& WithProtocol(NetworkProtocol&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The location from which access is allowed (e.g., <code>Anywhere
     * (0.0.0.0/0)</code>).</p>
     */
    inline const Aws::String& GetAccessFrom() const{ return m_accessFrom; }

    /**
     * <p>The location from which access is allowed (e.g., <code>Anywhere
     * (0.0.0.0/0)</code>).</p>
     */
    inline void SetAccessFrom(const Aws::String& value) { m_accessFromHasBeenSet = true; m_accessFrom = value; }

    /**
     * <p>The location from which access is allowed (e.g., <code>Anywhere
     * (0.0.0.0/0)</code>).</p>
     */
    inline void SetAccessFrom(Aws::String&& value) { m_accessFromHasBeenSet = true; m_accessFrom = std::move(value); }

    /**
     * <p>The location from which access is allowed (e.g., <code>Anywhere
     * (0.0.0.0/0)</code>).</p>
     */
    inline void SetAccessFrom(const char* value) { m_accessFromHasBeenSet = true; m_accessFrom.assign(value); }

    /**
     * <p>The location from which access is allowed (e.g., <code>Anywhere
     * (0.0.0.0/0)</code>).</p>
     */
    inline InstancePortInfo& WithAccessFrom(const Aws::String& value) { SetAccessFrom(value); return *this;}

    /**
     * <p>The location from which access is allowed (e.g., <code>Anywhere
     * (0.0.0.0/0)</code>).</p>
     */
    inline InstancePortInfo& WithAccessFrom(Aws::String&& value) { SetAccessFrom(std::move(value)); return *this;}

    /**
     * <p>The location from which access is allowed (e.g., <code>Anywhere
     * (0.0.0.0/0)</code>).</p>
     */
    inline InstancePortInfo& WithAccessFrom(const char* value) { SetAccessFrom(value); return *this;}

    /**
     * <p>The type of access (<code>Public</code> or <code>Private</code>).</p>
     */
    inline const PortAccessType& GetAccessType() const{ return m_accessType; }

    /**
     * <p>The type of access (<code>Public</code> or <code>Private</code>).</p>
     */
    inline void SetAccessType(const PortAccessType& value) { m_accessTypeHasBeenSet = true; m_accessType = value; }

    /**
     * <p>The type of access (<code>Public</code> or <code>Private</code>).</p>
     */
    inline void SetAccessType(PortAccessType&& value) { m_accessTypeHasBeenSet = true; m_accessType = std::move(value); }

    /**
     * <p>The type of access (<code>Public</code> or <code>Private</code>).</p>
     */
    inline InstancePortInfo& WithAccessType(const PortAccessType& value) { SetAccessType(value); return *this;}

    /**
     * <p>The type of access (<code>Public</code> or <code>Private</code>).</p>
     */
    inline InstancePortInfo& WithAccessType(PortAccessType&& value) { SetAccessType(std::move(value)); return *this;}

    /**
     * <p>The common name.</p>
     */
    inline const Aws::String& GetCommonName() const{ return m_commonName; }

    /**
     * <p>The common name.</p>
     */
    inline void SetCommonName(const Aws::String& value) { m_commonNameHasBeenSet = true; m_commonName = value; }

    /**
     * <p>The common name.</p>
     */
    inline void SetCommonName(Aws::String&& value) { m_commonNameHasBeenSet = true; m_commonName = std::move(value); }

    /**
     * <p>The common name.</p>
     */
    inline void SetCommonName(const char* value) { m_commonNameHasBeenSet = true; m_commonName.assign(value); }

    /**
     * <p>The common name.</p>
     */
    inline InstancePortInfo& WithCommonName(const Aws::String& value) { SetCommonName(value); return *this;}

    /**
     * <p>The common name.</p>
     */
    inline InstancePortInfo& WithCommonName(Aws::String&& value) { SetCommonName(std::move(value)); return *this;}

    /**
     * <p>The common name.</p>
     */
    inline InstancePortInfo& WithCommonName(const char* value) { SetCommonName(value); return *this;}

    /**
     * <p>The access direction (<code>inbound</code> or <code>outbound</code>).</p>
     */
    inline const AccessDirection& GetAccessDirection() const{ return m_accessDirection; }

    /**
     * <p>The access direction (<code>inbound</code> or <code>outbound</code>).</p>
     */
    inline void SetAccessDirection(const AccessDirection& value) { m_accessDirectionHasBeenSet = true; m_accessDirection = value; }

    /**
     * <p>The access direction (<code>inbound</code> or <code>outbound</code>).</p>
     */
    inline void SetAccessDirection(AccessDirection&& value) { m_accessDirectionHasBeenSet = true; m_accessDirection = std::move(value); }

    /**
     * <p>The access direction (<code>inbound</code> or <code>outbound</code>).</p>
     */
    inline InstancePortInfo& WithAccessDirection(const AccessDirection& value) { SetAccessDirection(value); return *this;}

    /**
     * <p>The access direction (<code>inbound</code> or <code>outbound</code>).</p>
     */
    inline InstancePortInfo& WithAccessDirection(AccessDirection&& value) { SetAccessDirection(std::move(value)); return *this;}

  private:
    int m_fromPort;
    bool m_fromPortHasBeenSet;
    int m_toPort;
    bool m_toPortHasBeenSet;
    NetworkProtocol m_protocol;
    bool m_protocolHasBeenSet;
    Aws::String m_accessFrom;
    bool m_accessFromHasBeenSet;
    PortAccessType m_accessType;
    bool m_accessTypeHasBeenSet;
    Aws::String m_commonName;
    bool m_commonNameHasBeenSet;
    AccessDirection m_accessDirection;
    bool m_accessDirectionHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
