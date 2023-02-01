/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/macie/MacieRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Macie
{
namespace Model
{

  /**
   */
  class AssociateMemberAccountRequest : public MacieRequest
  {
  public:
    AWS_MACIE_API AssociateMemberAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateMemberAccount"; }

    AWS_MACIE_API Aws::String SerializePayload() const override;

    AWS_MACIE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>(Discontinued) The ID of the Amazon Web Services account that you want to
     * associate with Amazon Macie Classic as a member account.</p>
     */
    inline const Aws::String& GetMemberAccountId() const{ return m_memberAccountId; }

    /**
     * <p>(Discontinued) The ID of the Amazon Web Services account that you want to
     * associate with Amazon Macie Classic as a member account.</p>
     */
    inline bool MemberAccountIdHasBeenSet() const { return m_memberAccountIdHasBeenSet; }

    /**
     * <p>(Discontinued) The ID of the Amazon Web Services account that you want to
     * associate with Amazon Macie Classic as a member account.</p>
     */
    inline void SetMemberAccountId(const Aws::String& value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId = value; }

    /**
     * <p>(Discontinued) The ID of the Amazon Web Services account that you want to
     * associate with Amazon Macie Classic as a member account.</p>
     */
    inline void SetMemberAccountId(Aws::String&& value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId = std::move(value); }

    /**
     * <p>(Discontinued) The ID of the Amazon Web Services account that you want to
     * associate with Amazon Macie Classic as a member account.</p>
     */
    inline void SetMemberAccountId(const char* value) { m_memberAccountIdHasBeenSet = true; m_memberAccountId.assign(value); }

    /**
     * <p>(Discontinued) The ID of the Amazon Web Services account that you want to
     * associate with Amazon Macie Classic as a member account.</p>
     */
    inline AssociateMemberAccountRequest& WithMemberAccountId(const Aws::String& value) { SetMemberAccountId(value); return *this;}

    /**
     * <p>(Discontinued) The ID of the Amazon Web Services account that you want to
     * associate with Amazon Macie Classic as a member account.</p>
     */
    inline AssociateMemberAccountRequest& WithMemberAccountId(Aws::String&& value) { SetMemberAccountId(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) The ID of the Amazon Web Services account that you want to
     * associate with Amazon Macie Classic as a member account.</p>
     */
    inline AssociateMemberAccountRequest& WithMemberAccountId(const char* value) { SetMemberAccountId(value); return *this;}

  private:

    Aws::String m_memberAccountId;
    bool m_memberAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
