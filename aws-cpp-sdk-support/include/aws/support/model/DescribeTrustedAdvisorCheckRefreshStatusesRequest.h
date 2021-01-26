/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/SupportRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   */
  class AWS_SUPPORT_API DescribeTrustedAdvisorCheckRefreshStatusesRequest : public SupportRequest
  {
  public:
    DescribeTrustedAdvisorCheckRefreshStatusesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTrustedAdvisorCheckRefreshStatuses"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The IDs of the Trusted Advisor checks to get the status of. </p>  <p>If
     * you specify the check ID of a check that is automatically refreshed, you might
     * see an <code>InvalidParameterValue</code> error.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetCheckIds() const{ return m_checkIds; }

    /**
     * <p>The IDs of the Trusted Advisor checks to get the status of. </p>  <p>If
     * you specify the check ID of a check that is automatically refreshed, you might
     * see an <code>InvalidParameterValue</code> error.</p> 
     */
    inline bool CheckIdsHasBeenSet() const { return m_checkIdsHasBeenSet; }

    /**
     * <p>The IDs of the Trusted Advisor checks to get the status of. </p>  <p>If
     * you specify the check ID of a check that is automatically refreshed, you might
     * see an <code>InvalidParameterValue</code> error.</p> 
     */
    inline void SetCheckIds(const Aws::Vector<Aws::String>& value) { m_checkIdsHasBeenSet = true; m_checkIds = value; }

    /**
     * <p>The IDs of the Trusted Advisor checks to get the status of. </p>  <p>If
     * you specify the check ID of a check that is automatically refreshed, you might
     * see an <code>InvalidParameterValue</code> error.</p> 
     */
    inline void SetCheckIds(Aws::Vector<Aws::String>&& value) { m_checkIdsHasBeenSet = true; m_checkIds = std::move(value); }

    /**
     * <p>The IDs of the Trusted Advisor checks to get the status of. </p>  <p>If
     * you specify the check ID of a check that is automatically refreshed, you might
     * see an <code>InvalidParameterValue</code> error.</p> 
     */
    inline DescribeTrustedAdvisorCheckRefreshStatusesRequest& WithCheckIds(const Aws::Vector<Aws::String>& value) { SetCheckIds(value); return *this;}

    /**
     * <p>The IDs of the Trusted Advisor checks to get the status of. </p>  <p>If
     * you specify the check ID of a check that is automatically refreshed, you might
     * see an <code>InvalidParameterValue</code> error.</p> 
     */
    inline DescribeTrustedAdvisorCheckRefreshStatusesRequest& WithCheckIds(Aws::Vector<Aws::String>&& value) { SetCheckIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Trusted Advisor checks to get the status of. </p>  <p>If
     * you specify the check ID of a check that is automatically refreshed, you might
     * see an <code>InvalidParameterValue</code> error.</p> 
     */
    inline DescribeTrustedAdvisorCheckRefreshStatusesRequest& AddCheckIds(const Aws::String& value) { m_checkIdsHasBeenSet = true; m_checkIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Trusted Advisor checks to get the status of. </p>  <p>If
     * you specify the check ID of a check that is automatically refreshed, you might
     * see an <code>InvalidParameterValue</code> error.</p> 
     */
    inline DescribeTrustedAdvisorCheckRefreshStatusesRequest& AddCheckIds(Aws::String&& value) { m_checkIdsHasBeenSet = true; m_checkIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Trusted Advisor checks to get the status of. </p>  <p>If
     * you specify the check ID of a check that is automatically refreshed, you might
     * see an <code>InvalidParameterValue</code> error.</p> 
     */
    inline DescribeTrustedAdvisorCheckRefreshStatusesRequest& AddCheckIds(const char* value) { m_checkIdsHasBeenSet = true; m_checkIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_checkIds;
    bool m_checkIdsHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
