/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Macie2
{
namespace Model
{

  /**
   */
  class DisableOrganizationAdminAccountRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API DisableOrganizationAdminAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableOrganizationAdminAccount"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;

    AWS_MACIE2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The Amazon Web Services account ID of the delegated Amazon Macie
     * administrator account.</p>
     */
    inline const Aws::String& GetAdminAccountId() const{ return m_adminAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the delegated Amazon Macie
     * administrator account.</p>
     */
    inline bool AdminAccountIdHasBeenSet() const { return m_adminAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the delegated Amazon Macie
     * administrator account.</p>
     */
    inline void SetAdminAccountId(const Aws::String& value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the delegated Amazon Macie
     * administrator account.</p>
     */
    inline void SetAdminAccountId(Aws::String&& value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the delegated Amazon Macie
     * administrator account.</p>
     */
    inline void SetAdminAccountId(const char* value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the delegated Amazon Macie
     * administrator account.</p>
     */
    inline DisableOrganizationAdminAccountRequest& WithAdminAccountId(const Aws::String& value) { SetAdminAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the delegated Amazon Macie
     * administrator account.</p>
     */
    inline DisableOrganizationAdminAccountRequest& WithAdminAccountId(Aws::String&& value) { SetAdminAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the delegated Amazon Macie
     * administrator account.</p>
     */
    inline DisableOrganizationAdminAccountRequest& WithAdminAccountId(const char* value) { SetAdminAccountId(value); return *this;}

  private:

    Aws::String m_adminAccountId;
    bool m_adminAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
