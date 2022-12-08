/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsEc2VpcPeeringConnectionVpcInfoDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEc2VpcPeeringConnectionStatusDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about a VPC peering connection between two VPCs: a
   * requester VPC that you own and an accepter VPC with which to create the
   * connection. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpcPeeringConnectionDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpcPeeringConnectionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpcPeeringConnectionDetails();
    AWS_SECURITYHUB_API AwsEc2VpcPeeringConnectionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpcPeeringConnectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the accepter VPC. </p>
     */
    inline const AwsEc2VpcPeeringConnectionVpcInfoDetails& GetAccepterVpcInfo() const{ return m_accepterVpcInfo; }

    /**
     * <p>Information about the accepter VPC. </p>
     */
    inline bool AccepterVpcInfoHasBeenSet() const { return m_accepterVpcInfoHasBeenSet; }

    /**
     * <p>Information about the accepter VPC. </p>
     */
    inline void SetAccepterVpcInfo(const AwsEc2VpcPeeringConnectionVpcInfoDetails& value) { m_accepterVpcInfoHasBeenSet = true; m_accepterVpcInfo = value; }

    /**
     * <p>Information about the accepter VPC. </p>
     */
    inline void SetAccepterVpcInfo(AwsEc2VpcPeeringConnectionVpcInfoDetails&& value) { m_accepterVpcInfoHasBeenSet = true; m_accepterVpcInfo = std::move(value); }

    /**
     * <p>Information about the accepter VPC. </p>
     */
    inline AwsEc2VpcPeeringConnectionDetails& WithAccepterVpcInfo(const AwsEc2VpcPeeringConnectionVpcInfoDetails& value) { SetAccepterVpcInfo(value); return *this;}

    /**
     * <p>Information about the accepter VPC. </p>
     */
    inline AwsEc2VpcPeeringConnectionDetails& WithAccepterVpcInfo(AwsEc2VpcPeeringConnectionVpcInfoDetails&& value) { SetAccepterVpcInfo(std::move(value)); return *this;}


    /**
     * <p>The time at which an unaccepted VPC peering connection will expire. </p>
     */
    inline const Aws::String& GetExpirationTime() const{ return m_expirationTime; }

    /**
     * <p>The time at which an unaccepted VPC peering connection will expire. </p>
     */
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }

    /**
     * <p>The time at which an unaccepted VPC peering connection will expire. </p>
     */
    inline void SetExpirationTime(const Aws::String& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }

    /**
     * <p>The time at which an unaccepted VPC peering connection will expire. </p>
     */
    inline void SetExpirationTime(Aws::String&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }

    /**
     * <p>The time at which an unaccepted VPC peering connection will expire. </p>
     */
    inline void SetExpirationTime(const char* value) { m_expirationTimeHasBeenSet = true; m_expirationTime.assign(value); }

    /**
     * <p>The time at which an unaccepted VPC peering connection will expire. </p>
     */
    inline AwsEc2VpcPeeringConnectionDetails& WithExpirationTime(const Aws::String& value) { SetExpirationTime(value); return *this;}

    /**
     * <p>The time at which an unaccepted VPC peering connection will expire. </p>
     */
    inline AwsEc2VpcPeeringConnectionDetails& WithExpirationTime(Aws::String&& value) { SetExpirationTime(std::move(value)); return *this;}

    /**
     * <p>The time at which an unaccepted VPC peering connection will expire. </p>
     */
    inline AwsEc2VpcPeeringConnectionDetails& WithExpirationTime(const char* value) { SetExpirationTime(value); return *this;}


    /**
     * <p>Information about the requester VPC. </p>
     */
    inline const AwsEc2VpcPeeringConnectionVpcInfoDetails& GetRequesterVpcInfo() const{ return m_requesterVpcInfo; }

    /**
     * <p>Information about the requester VPC. </p>
     */
    inline bool RequesterVpcInfoHasBeenSet() const { return m_requesterVpcInfoHasBeenSet; }

    /**
     * <p>Information about the requester VPC. </p>
     */
    inline void SetRequesterVpcInfo(const AwsEc2VpcPeeringConnectionVpcInfoDetails& value) { m_requesterVpcInfoHasBeenSet = true; m_requesterVpcInfo = value; }

    /**
     * <p>Information about the requester VPC. </p>
     */
    inline void SetRequesterVpcInfo(AwsEc2VpcPeeringConnectionVpcInfoDetails&& value) { m_requesterVpcInfoHasBeenSet = true; m_requesterVpcInfo = std::move(value); }

    /**
     * <p>Information about the requester VPC. </p>
     */
    inline AwsEc2VpcPeeringConnectionDetails& WithRequesterVpcInfo(const AwsEc2VpcPeeringConnectionVpcInfoDetails& value) { SetRequesterVpcInfo(value); return *this;}

    /**
     * <p>Information about the requester VPC. </p>
     */
    inline AwsEc2VpcPeeringConnectionDetails& WithRequesterVpcInfo(AwsEc2VpcPeeringConnectionVpcInfoDetails&& value) { SetRequesterVpcInfo(std::move(value)); return *this;}


    /**
     * <p>The status of the VPC peering connection. </p>
     */
    inline const AwsEc2VpcPeeringConnectionStatusDetails& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the VPC peering connection. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the VPC peering connection. </p>
     */
    inline void SetStatus(const AwsEc2VpcPeeringConnectionStatusDetails& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the VPC peering connection. </p>
     */
    inline void SetStatus(AwsEc2VpcPeeringConnectionStatusDetails&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the VPC peering connection. </p>
     */
    inline AwsEc2VpcPeeringConnectionDetails& WithStatus(const AwsEc2VpcPeeringConnectionStatusDetails& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the VPC peering connection. </p>
     */
    inline AwsEc2VpcPeeringConnectionDetails& WithStatus(AwsEc2VpcPeeringConnectionStatusDetails&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC peering connection. </p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const{ return m_vpcPeeringConnectionId; }

    /**
     * <p>The ID of the VPC peering connection. </p>
     */
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }

    /**
     * <p>The ID of the VPC peering connection. </p>
     */
    inline void SetVpcPeeringConnectionId(const Aws::String& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }

    /**
     * <p>The ID of the VPC peering connection. </p>
     */
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::move(value); }

    /**
     * <p>The ID of the VPC peering connection. </p>
     */
    inline void SetVpcPeeringConnectionId(const char* value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId.assign(value); }

    /**
     * <p>The ID of the VPC peering connection. </p>
     */
    inline AwsEc2VpcPeeringConnectionDetails& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>The ID of the VPC peering connection. </p>
     */
    inline AwsEc2VpcPeeringConnectionDetails& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC peering connection. </p>
     */
    inline AwsEc2VpcPeeringConnectionDetails& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}

  private:

    AwsEc2VpcPeeringConnectionVpcInfoDetails m_accepterVpcInfo;
    bool m_accepterVpcInfoHasBeenSet = false;

    Aws::String m_expirationTime;
    bool m_expirationTimeHasBeenSet = false;

    AwsEc2VpcPeeringConnectionVpcInfoDetails m_requesterVpcInfo;
    bool m_requesterVpcInfoHasBeenSet = false;

    AwsEc2VpcPeeringConnectionStatusDetails m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
