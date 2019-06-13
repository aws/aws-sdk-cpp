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
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/AwsCloudMapServiceDiscovery.h>
#include <aws/appmesh/model/DnsServiceDiscovery.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object representing the service discovery information for a virtual
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ServiceDiscovery">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API ServiceDiscovery
  {
  public:
    ServiceDiscovery();
    ServiceDiscovery(Aws::Utils::Json::JsonView jsonValue);
    ServiceDiscovery& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies any AWS Cloud Map information for the virtual node.</p>
     */
    inline const AwsCloudMapServiceDiscovery& GetAwsCloudMap() const{ return m_awsCloudMap; }

    /**
     * <p>Specifies any AWS Cloud Map information for the virtual node.</p>
     */
    inline bool AwsCloudMapHasBeenSet() const { return m_awsCloudMapHasBeenSet; }

    /**
     * <p>Specifies any AWS Cloud Map information for the virtual node.</p>
     */
    inline void SetAwsCloudMap(const AwsCloudMapServiceDiscovery& value) { m_awsCloudMapHasBeenSet = true; m_awsCloudMap = value; }

    /**
     * <p>Specifies any AWS Cloud Map information for the virtual node.</p>
     */
    inline void SetAwsCloudMap(AwsCloudMapServiceDiscovery&& value) { m_awsCloudMapHasBeenSet = true; m_awsCloudMap = std::move(value); }

    /**
     * <p>Specifies any AWS Cloud Map information for the virtual node.</p>
     */
    inline ServiceDiscovery& WithAwsCloudMap(const AwsCloudMapServiceDiscovery& value) { SetAwsCloudMap(value); return *this;}

    /**
     * <p>Specifies any AWS Cloud Map information for the virtual node.</p>
     */
    inline ServiceDiscovery& WithAwsCloudMap(AwsCloudMapServiceDiscovery&& value) { SetAwsCloudMap(std::move(value)); return *this;}


    /**
     * <p>Specifies the DNS information for the virtual node.</p>
     */
    inline const DnsServiceDiscovery& GetDns() const{ return m_dns; }

    /**
     * <p>Specifies the DNS information for the virtual node.</p>
     */
    inline bool DnsHasBeenSet() const { return m_dnsHasBeenSet; }

    /**
     * <p>Specifies the DNS information for the virtual node.</p>
     */
    inline void SetDns(const DnsServiceDiscovery& value) { m_dnsHasBeenSet = true; m_dns = value; }

    /**
     * <p>Specifies the DNS information for the virtual node.</p>
     */
    inline void SetDns(DnsServiceDiscovery&& value) { m_dnsHasBeenSet = true; m_dns = std::move(value); }

    /**
     * <p>Specifies the DNS information for the virtual node.</p>
     */
    inline ServiceDiscovery& WithDns(const DnsServiceDiscovery& value) { SetDns(value); return *this;}

    /**
     * <p>Specifies the DNS information for the virtual node.</p>
     */
    inline ServiceDiscovery& WithDns(DnsServiceDiscovery&& value) { SetDns(std::move(value)); return *this;}

  private:

    AwsCloudMapServiceDiscovery m_awsCloudMap;
    bool m_awsCloudMapHasBeenSet;

    DnsServiceDiscovery m_dns;
    bool m_dnsHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
