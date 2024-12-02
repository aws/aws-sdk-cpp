/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ModifyVerifiedAccessInstanceRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVerifiedAccessInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVerifiedAccessInstance"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Verified Access instance.</p>
     */
    inline const Aws::String& GetVerifiedAccessInstanceId() const{ return m_verifiedAccessInstanceId; }
    inline bool VerifiedAccessInstanceIdHasBeenSet() const { return m_verifiedAccessInstanceIdHasBeenSet; }
    inline void SetVerifiedAccessInstanceId(const Aws::String& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = value; }
    inline void SetVerifiedAccessInstanceId(Aws::String&& value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId = std::move(value); }
    inline void SetVerifiedAccessInstanceId(const char* value) { m_verifiedAccessInstanceIdHasBeenSet = true; m_verifiedAccessInstanceId.assign(value); }
    inline ModifyVerifiedAccessInstanceRequest& WithVerifiedAccessInstanceId(const Aws::String& value) { SetVerifiedAccessInstanceId(value); return *this;}
    inline ModifyVerifiedAccessInstanceRequest& WithVerifiedAccessInstanceId(Aws::String&& value) { SetVerifiedAccessInstanceId(std::move(value)); return *this;}
    inline ModifyVerifiedAccessInstanceRequest& WithVerifiedAccessInstanceId(const char* value) { SetVerifiedAccessInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Verified Access instance.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ModifyVerifiedAccessInstanceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ModifyVerifiedAccessInstanceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ModifyVerifiedAccessInstanceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyVerifiedAccessInstanceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline ModifyVerifiedAccessInstanceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ModifyVerifiedAccessInstanceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ModifyVerifiedAccessInstanceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom subdomain.</p>
     */
    inline const Aws::String& GetCidrEndpointsCustomSubDomain() const{ return m_cidrEndpointsCustomSubDomain; }
    inline bool CidrEndpointsCustomSubDomainHasBeenSet() const { return m_cidrEndpointsCustomSubDomainHasBeenSet; }
    inline void SetCidrEndpointsCustomSubDomain(const Aws::String& value) { m_cidrEndpointsCustomSubDomainHasBeenSet = true; m_cidrEndpointsCustomSubDomain = value; }
    inline void SetCidrEndpointsCustomSubDomain(Aws::String&& value) { m_cidrEndpointsCustomSubDomainHasBeenSet = true; m_cidrEndpointsCustomSubDomain = std::move(value); }
    inline void SetCidrEndpointsCustomSubDomain(const char* value) { m_cidrEndpointsCustomSubDomainHasBeenSet = true; m_cidrEndpointsCustomSubDomain.assign(value); }
    inline ModifyVerifiedAccessInstanceRequest& WithCidrEndpointsCustomSubDomain(const Aws::String& value) { SetCidrEndpointsCustomSubDomain(value); return *this;}
    inline ModifyVerifiedAccessInstanceRequest& WithCidrEndpointsCustomSubDomain(Aws::String&& value) { SetCidrEndpointsCustomSubDomain(std::move(value)); return *this;}
    inline ModifyVerifiedAccessInstanceRequest& WithCidrEndpointsCustomSubDomain(const char* value) { SetCidrEndpointsCustomSubDomain(value); return *this;}
    ///@}
  private:

    Aws::String m_verifiedAccessInstanceId;
    bool m_verifiedAccessInstanceIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_cidrEndpointsCustomSubDomain;
    bool m_cidrEndpointsCustomSubDomainHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
