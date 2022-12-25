/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to remove an email address from the suppression list for your
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteSuppressedDestinationRequest">AWS
   * API Reference</a></p>
   */
  class DeleteSuppressedDestinationRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API DeleteSuppressedDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSuppressedDestination"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The suppressed email destination to remove from the account suppression
     * list.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The suppressed email destination to remove from the account suppression
     * list.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The suppressed email destination to remove from the account suppression
     * list.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The suppressed email destination to remove from the account suppression
     * list.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The suppressed email destination to remove from the account suppression
     * list.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The suppressed email destination to remove from the account suppression
     * list.</p>
     */
    inline DeleteSuppressedDestinationRequest& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The suppressed email destination to remove from the account suppression
     * list.</p>
     */
    inline DeleteSuppressedDestinationRequest& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The suppressed email destination to remove from the account suppression
     * list.</p>
     */
    inline DeleteSuppressedDestinationRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}

  private:

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
