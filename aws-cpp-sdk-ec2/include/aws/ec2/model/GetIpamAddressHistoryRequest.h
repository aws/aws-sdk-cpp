/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class GetIpamAddressHistoryRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetIpamAddressHistoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIpamAddressHistory"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline GetIpamAddressHistoryRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The CIDR you want the history of. The CIDR can be an IPv4 or IPv6 IP address
     * range. If you enter a /16 IPv4 CIDR, you will get records that match it exactly.
     * You will not get records for any subnets within the /16 CIDR.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The CIDR you want the history of. The CIDR can be an IPv4 or IPv6 IP address
     * range. If you enter a /16 IPv4 CIDR, you will get records that match it exactly.
     * You will not get records for any subnets within the /16 CIDR.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The CIDR you want the history of. The CIDR can be an IPv4 or IPv6 IP address
     * range. If you enter a /16 IPv4 CIDR, you will get records that match it exactly.
     * You will not get records for any subnets within the /16 CIDR.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The CIDR you want the history of. The CIDR can be an IPv4 or IPv6 IP address
     * range. If you enter a /16 IPv4 CIDR, you will get records that match it exactly.
     * You will not get records for any subnets within the /16 CIDR.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The CIDR you want the history of. The CIDR can be an IPv4 or IPv6 IP address
     * range. If you enter a /16 IPv4 CIDR, you will get records that match it exactly.
     * You will not get records for any subnets within the /16 CIDR.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The CIDR you want the history of. The CIDR can be an IPv4 or IPv6 IP address
     * range. If you enter a /16 IPv4 CIDR, you will get records that match it exactly.
     * You will not get records for any subnets within the /16 CIDR.</p>
     */
    inline GetIpamAddressHistoryRequest& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The CIDR you want the history of. The CIDR can be an IPv4 or IPv6 IP address
     * range. If you enter a /16 IPv4 CIDR, you will get records that match it exactly.
     * You will not get records for any subnets within the /16 CIDR.</p>
     */
    inline GetIpamAddressHistoryRequest& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The CIDR you want the history of. The CIDR can be an IPv4 or IPv6 IP address
     * range. If you enter a /16 IPv4 CIDR, you will get records that match it exactly.
     * You will not get records for any subnets within the /16 CIDR.</p>
     */
    inline GetIpamAddressHistoryRequest& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>The ID of the IPAM scope that the CIDR is in.</p>
     */
    inline const Aws::String& GetIpamScopeId() const{ return m_ipamScopeId; }

    /**
     * <p>The ID of the IPAM scope that the CIDR is in.</p>
     */
    inline bool IpamScopeIdHasBeenSet() const { return m_ipamScopeIdHasBeenSet; }

    /**
     * <p>The ID of the IPAM scope that the CIDR is in.</p>
     */
    inline void SetIpamScopeId(const Aws::String& value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId = value; }

    /**
     * <p>The ID of the IPAM scope that the CIDR is in.</p>
     */
    inline void SetIpamScopeId(Aws::String&& value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId = std::move(value); }

    /**
     * <p>The ID of the IPAM scope that the CIDR is in.</p>
     */
    inline void SetIpamScopeId(const char* value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId.assign(value); }

    /**
     * <p>The ID of the IPAM scope that the CIDR is in.</p>
     */
    inline GetIpamAddressHistoryRequest& WithIpamScopeId(const Aws::String& value) { SetIpamScopeId(value); return *this;}

    /**
     * <p>The ID of the IPAM scope that the CIDR is in.</p>
     */
    inline GetIpamAddressHistoryRequest& WithIpamScopeId(Aws::String&& value) { SetIpamScopeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the IPAM scope that the CIDR is in.</p>
     */
    inline GetIpamAddressHistoryRequest& WithIpamScopeId(const char* value) { SetIpamScopeId(value); return *this;}


    /**
     * <p>The ID of the VPC you want your history records filtered by.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC you want your history records filtered by.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC you want your history records filtered by.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC you want your history records filtered by.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC you want your history records filtered by.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC you want your history records filtered by.</p>
     */
    inline GetIpamAddressHistoryRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC you want your history records filtered by.</p>
     */
    inline GetIpamAddressHistoryRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC you want your history records filtered by.</p>
     */
    inline GetIpamAddressHistoryRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The start of the time period for which you are looking for history. If you
     * omit this option, it will default to the value of EndTime.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start of the time period for which you are looking for history. If you
     * omit this option, it will default to the value of EndTime.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start of the time period for which you are looking for history. If you
     * omit this option, it will default to the value of EndTime.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time period for which you are looking for history. If you
     * omit this option, it will default to the value of EndTime.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start of the time period for which you are looking for history. If you
     * omit this option, it will default to the value of EndTime.</p>
     */
    inline GetIpamAddressHistoryRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start of the time period for which you are looking for history. If you
     * omit this option, it will default to the value of EndTime.</p>
     */
    inline GetIpamAddressHistoryRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time period for which you are looking for history. If you omit
     * this option, it will default to the current time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time period for which you are looking for history. If you omit
     * this option, it will default to the current time.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time period for which you are looking for history. If you omit
     * this option, it will default to the current time.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time period for which you are looking for history. If you omit
     * this option, it will default to the current time.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time period for which you are looking for history. If you omit
     * this option, it will default to the current time.</p>
     */
    inline GetIpamAddressHistoryRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time period for which you are looking for history. If you omit
     * this option, it will default to the current time.</p>
     */
    inline GetIpamAddressHistoryRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The maximum number of historical results you would like returned per page.
     * Defaults to 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of historical results you would like returned per page.
     * Defaults to 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of historical results you would like returned per page.
     * Defaults to 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of historical results you would like returned per page.
     * Defaults to 100.</p>
     */
    inline GetIpamAddressHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetIpamAddressHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetIpamAddressHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetIpamAddressHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_ipamScopeId;
    bool m_ipamScopeIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
