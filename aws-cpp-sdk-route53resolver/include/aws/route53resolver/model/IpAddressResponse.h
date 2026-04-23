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
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/IpAddressStatus.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>In the response to a <a>GetResolverEndpoint</a> request, information about
   * the IP addresses that the resolver endpoint uses for DNS queries.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/IpAddressResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RESOLVER_API IpAddressResponse
  {
  public:
    IpAddressResponse();
    IpAddressResponse(Aws::Utils::Json::JsonView jsonValue);
    IpAddressResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of one IP address.</p>
     */
    inline const Aws::String& GetIpId() const{ return m_ipId; }

    /**
     * <p>The ID of one IP address.</p>
     */
    inline bool IpIdHasBeenSet() const { return m_ipIdHasBeenSet; }

    /**
     * <p>The ID of one IP address.</p>
     */
    inline void SetIpId(const Aws::String& value) { m_ipIdHasBeenSet = true; m_ipId = value; }

    /**
     * <p>The ID of one IP address.</p>
     */
    inline void SetIpId(Aws::String&& value) { m_ipIdHasBeenSet = true; m_ipId = std::move(value); }

    /**
     * <p>The ID of one IP address.</p>
     */
    inline void SetIpId(const char* value) { m_ipIdHasBeenSet = true; m_ipId.assign(value); }

    /**
     * <p>The ID of one IP address.</p>
     */
    inline IpAddressResponse& WithIpId(const Aws::String& value) { SetIpId(value); return *this;}

    /**
     * <p>The ID of one IP address.</p>
     */
    inline IpAddressResponse& WithIpId(Aws::String&& value) { SetIpId(std::move(value)); return *this;}

    /**
     * <p>The ID of one IP address.</p>
     */
    inline IpAddressResponse& WithIpId(const char* value) { SetIpId(value); return *this;}


    /**
     * <p>The ID of one subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of one subnet.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of one subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of one subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of one subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of one subnet.</p>
     */
    inline IpAddressResponse& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of one subnet.</p>
     */
    inline IpAddressResponse& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of one subnet.</p>
     */
    inline IpAddressResponse& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>One IP address that the resolver endpoint uses for DNS queries.</p>
     */
    inline const Aws::String& GetIp() const{ return m_ip; }

    /**
     * <p>One IP address that the resolver endpoint uses for DNS queries.</p>
     */
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }

    /**
     * <p>One IP address that the resolver endpoint uses for DNS queries.</p>
     */
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }

    /**
     * <p>One IP address that the resolver endpoint uses for DNS queries.</p>
     */
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }

    /**
     * <p>One IP address that the resolver endpoint uses for DNS queries.</p>
     */
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }

    /**
     * <p>One IP address that the resolver endpoint uses for DNS queries.</p>
     */
    inline IpAddressResponse& WithIp(const Aws::String& value) { SetIp(value); return *this;}

    /**
     * <p>One IP address that the resolver endpoint uses for DNS queries.</p>
     */
    inline IpAddressResponse& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}

    /**
     * <p>One IP address that the resolver endpoint uses for DNS queries.</p>
     */
    inline IpAddressResponse& WithIp(const char* value) { SetIp(value); return *this;}


    /**
     * <p>A status code that gives the current status of the request.</p>
     */
    inline const IpAddressStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A status code that gives the current status of the request.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A status code that gives the current status of the request.</p>
     */
    inline void SetStatus(const IpAddressStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A status code that gives the current status of the request.</p>
     */
    inline void SetStatus(IpAddressStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A status code that gives the current status of the request.</p>
     */
    inline IpAddressResponse& WithStatus(const IpAddressStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A status code that gives the current status of the request.</p>
     */
    inline IpAddressResponse& WithStatus(IpAddressStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A message that provides additional information about the status of the
     * request.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A message that provides additional information about the status of the
     * request.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A message that provides additional information about the status of the
     * request.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A message that provides additional information about the status of the
     * request.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A message that provides additional information about the status of the
     * request.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A message that provides additional information about the status of the
     * request.</p>
     */
    inline IpAddressResponse& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A message that provides additional information about the status of the
     * request.</p>
     */
    inline IpAddressResponse& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A message that provides additional information about the status of the
     * request.</p>
     */
    inline IpAddressResponse& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The date and time that the IP address was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the IP address was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that the IP address was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that the IP address was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the IP address was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }

    /**
     * <p>The date and time that the IP address was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline IpAddressResponse& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the IP address was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline IpAddressResponse& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that the IP address was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline IpAddressResponse& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>The date and time that the IP address was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetModificationTime() const{ return m_modificationTime; }

    /**
     * <p>The date and time that the IP address was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline bool ModificationTimeHasBeenSet() const { return m_modificationTimeHasBeenSet; }

    /**
     * <p>The date and time that the IP address was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline void SetModificationTime(const Aws::String& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = value; }

    /**
     * <p>The date and time that the IP address was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline void SetModificationTime(Aws::String&& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = std::move(value); }

    /**
     * <p>The date and time that the IP address was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline void SetModificationTime(const char* value) { m_modificationTimeHasBeenSet = true; m_modificationTime.assign(value); }

    /**
     * <p>The date and time that the IP address was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline IpAddressResponse& WithModificationTime(const Aws::String& value) { SetModificationTime(value); return *this;}

    /**
     * <p>The date and time that the IP address was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline IpAddressResponse& WithModificationTime(Aws::String&& value) { SetModificationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that the IP address was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline IpAddressResponse& WithModificationTime(const char* value) { SetModificationTime(value); return *this;}

  private:

    Aws::String m_ipId;
    bool m_ipIdHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::String m_ip;
    bool m_ipHasBeenSet;

    IpAddressStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::String m_modificationTime;
    bool m_modificationTimeHasBeenSet;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
