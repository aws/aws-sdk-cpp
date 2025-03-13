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
   * <p>Removes CloudTrail delegated administrator permissions from a specified
   * member account in an organization that is currently designated as a delegated
   * administrator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DeregisterOrganizationDelegatedAdminRequest">AWS
   * API Reference</a></p>
   */
  class DeregisterOrganizationDelegatedAdminRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API DeregisterOrganizationDelegatedAdminRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterOrganizationDelegatedAdmin"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A delegated administrator account ID. This is a member account in an
     * organization that is currently designated as a delegated administrator.</p>
     */
    inline const Aws::String& GetDelegatedAdminAccountId() const { return m_delegatedAdminAccountId; }
    inline bool DelegatedAdminAccountIdHasBeenSet() const { return m_delegatedAdminAccountIdHasBeenSet; }
    template<typename DelegatedAdminAccountIdT = Aws::String>
    void SetDelegatedAdminAccountId(DelegatedAdminAccountIdT&& value) { m_delegatedAdminAccountIdHasBeenSet = true; m_delegatedAdminAccountId = std::forward<DelegatedAdminAccountIdT>(value); }
    template<typename DelegatedAdminAccountIdT = Aws::String>
    DeregisterOrganizationDelegatedAdminRequest& WithDelegatedAdminAccountId(DelegatedAdminAccountIdT&& value) { SetDelegatedAdminAccountId(std::forward<DelegatedAdminAccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_delegatedAdminAccountId;
    bool m_delegatedAdminAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
