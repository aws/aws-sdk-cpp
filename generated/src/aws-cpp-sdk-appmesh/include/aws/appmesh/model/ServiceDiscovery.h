/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>An object that represents the service discovery information for a virtual
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ServiceDiscovery">AWS
   * API Reference</a></p>
   */
  class ServiceDiscovery
  {
  public:
    AWS_APPMESH_API ServiceDiscovery();
    AWS_APPMESH_API ServiceDiscovery(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API ServiceDiscovery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies any Cloud Map information for the virtual node.</p>
     */
    inline const AwsCloudMapServiceDiscovery& GetAwsCloudMap() const{ return m_awsCloudMap; }
    inline bool AwsCloudMapHasBeenSet() const { return m_awsCloudMapHasBeenSet; }
    inline void SetAwsCloudMap(const AwsCloudMapServiceDiscovery& value) { m_awsCloudMapHasBeenSet = true; m_awsCloudMap = value; }
    inline void SetAwsCloudMap(AwsCloudMapServiceDiscovery&& value) { m_awsCloudMapHasBeenSet = true; m_awsCloudMap = std::move(value); }
    inline ServiceDiscovery& WithAwsCloudMap(const AwsCloudMapServiceDiscovery& value) { SetAwsCloudMap(value); return *this;}
    inline ServiceDiscovery& WithAwsCloudMap(AwsCloudMapServiceDiscovery&& value) { SetAwsCloudMap(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the DNS information for the virtual node.</p>
     */
    inline const DnsServiceDiscovery& GetDns() const{ return m_dns; }
    inline bool DnsHasBeenSet() const { return m_dnsHasBeenSet; }
    inline void SetDns(const DnsServiceDiscovery& value) { m_dnsHasBeenSet = true; m_dns = value; }
    inline void SetDns(DnsServiceDiscovery&& value) { m_dnsHasBeenSet = true; m_dns = std::move(value); }
    inline ServiceDiscovery& WithDns(const DnsServiceDiscovery& value) { SetDns(value); return *this;}
    inline ServiceDiscovery& WithDns(DnsServiceDiscovery&& value) { SetDns(std::move(value)); return *this;}
    ///@}
  private:

    AwsCloudMapServiceDiscovery m_awsCloudMap;
    bool m_awsCloudMapHasBeenSet = false;

    DnsServiceDiscovery m_dns;
    bool m_dnsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
