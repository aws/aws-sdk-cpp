﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateIpamExternalResourceVerificationTokenRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateIpamExternalResourceVerificationTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIpamExternalResourceVerificationToken"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateIpamExternalResourceVerificationTokenRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IPAM that will create the token.</p>
     */
    inline const Aws::String& GetIpamId() const{ return m_ipamId; }
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }
    inline void SetIpamId(const Aws::String& value) { m_ipamIdHasBeenSet = true; m_ipamId = value; }
    inline void SetIpamId(Aws::String&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::move(value); }
    inline void SetIpamId(const char* value) { m_ipamIdHasBeenSet = true; m_ipamId.assign(value); }
    inline CreateIpamExternalResourceVerificationTokenRequest& WithIpamId(const Aws::String& value) { SetIpamId(value); return *this;}
    inline CreateIpamExternalResourceVerificationTokenRequest& WithIpamId(Aws::String&& value) { SetIpamId(std::move(value)); return *this;}
    inline CreateIpamExternalResourceVerificationTokenRequest& WithIpamId(const char* value) { SetIpamId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token tags.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline CreateIpamExternalResourceVerificationTokenRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CreateIpamExternalResourceVerificationTokenRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CreateIpamExternalResourceVerificationTokenRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CreateIpamExternalResourceVerificationTokenRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateIpamExternalResourceVerificationTokenRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateIpamExternalResourceVerificationTokenRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateIpamExternalResourceVerificationTokenRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamId;
    bool m_ipamIdHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
