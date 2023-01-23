/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Specifies an organization member account ID as a CloudTrail delegated
   * administrator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/RegisterOrganizationDelegatedAdminRequest">AWS
   * API Reference</a></p>
   */
  class RegisterOrganizationDelegatedAdminRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API RegisterOrganizationDelegatedAdminRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterOrganizationDelegatedAdmin"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An organization member account ID that you want to designate as a delegated
     * administrator.</p>
     */
    inline const Aws::String& GetMemberAccountId() const{ return m_memberAccountId; }

    /**
     * <p>An organization member account ID that you want to designate as a delegated
     * administrator.</p>
     */
    inline bool MemberAccountIdHasBeenSet() const { return m_memberAccountIdHasBeenSet; }

    /**
     * <p>An organization member account ID that you want to designate as a delegated
     * administrator.</p>
     */
    inline void SetMemberAccountId(const Aws::String& value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId = value; }

    /**
     * <p>An organization member account ID that you want to designate as a delegated
     * administrator.</p>
     */
    inline void SetMemberAccountId(Aws::String&& value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId = std::move(value); }

    /**
     * <p>An organization member account ID that you want to designate as a delegated
     * administrator.</p>
     */
    inline void SetMemberAccountId(const char* value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId.assign(value); }

    /**
     * <p>An organization member account ID that you want to designate as a delegated
     * administrator.</p>
     */
    inline RegisterOrganizationDelegatedAdminRequest& WithMemberAccountId(const Aws::String& value) { SetMemberAccountId(value); return *this;}

    /**
     * <p>An organization member account ID that you want to designate as a delegated
     * administrator.</p>
     */
    inline RegisterOrganizationDelegatedAdminRequest& WithMemberAccountId(Aws::String&& value) { SetMemberAccountId(std::move(value)); return *this;}

    /**
     * <p>An organization member account ID that you want to designate as a delegated
     * administrator.</p>
     */
    inline RegisterOrganizationDelegatedAdminRequest& WithMemberAccountId(const char* value) { SetMemberAccountId(value); return *this;}

  private:

    Aws::String m_memberAccountId;
    bool m_memberAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
