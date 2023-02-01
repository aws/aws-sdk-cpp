/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class GetPolicyRequest : public FMSRequest
  {
  public:
    AWS_FMS_API GetPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPolicy"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Firewall Manager policy that you want the details for.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for.</p>
     */
    inline GetPolicyRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for.</p>
     */
    inline GetPolicyRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Firewall Manager policy that you want the details for.</p>
     */
    inline GetPolicyRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}

  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
