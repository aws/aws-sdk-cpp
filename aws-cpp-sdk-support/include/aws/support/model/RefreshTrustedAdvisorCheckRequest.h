/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/SupportRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/RefreshTrustedAdvisorCheckRequest">AWS
   * API Reference</a></p>
   */
  class RefreshTrustedAdvisorCheckRequest : public SupportRequest
  {
  public:
    AWS_SUPPORT_API RefreshTrustedAdvisorCheckRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RefreshTrustedAdvisorCheck"; }

    AWS_SUPPORT_API Aws::String SerializePayload() const override;

    AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for the Trusted Advisor check to refresh.</p> 
     * <p>Specifying the check ID of a check that is automatically refreshed causes an
     * <code>InvalidParameterValue</code> error.</p> 
     */
    inline const Aws::String& GetCheckId() const{ return m_checkId; }

    /**
     * <p>The unique identifier for the Trusted Advisor check to refresh.</p> 
     * <p>Specifying the check ID of a check that is automatically refreshed causes an
     * <code>InvalidParameterValue</code> error.</p> 
     */
    inline bool CheckIdHasBeenSet() const { return m_checkIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Trusted Advisor check to refresh.</p> 
     * <p>Specifying the check ID of a check that is automatically refreshed causes an
     * <code>InvalidParameterValue</code> error.</p> 
     */
    inline void SetCheckId(const Aws::String& value) { m_checkIdHasBeenSet = true; m_checkId = value; }

    /**
     * <p>The unique identifier for the Trusted Advisor check to refresh.</p> 
     * <p>Specifying the check ID of a check that is automatically refreshed causes an
     * <code>InvalidParameterValue</code> error.</p> 
     */
    inline void SetCheckId(Aws::String&& value) { m_checkIdHasBeenSet = true; m_checkId = std::move(value); }

    /**
     * <p>The unique identifier for the Trusted Advisor check to refresh.</p> 
     * <p>Specifying the check ID of a check that is automatically refreshed causes an
     * <code>InvalidParameterValue</code> error.</p> 
     */
    inline void SetCheckId(const char* value) { m_checkIdHasBeenSet = true; m_checkId.assign(value); }

    /**
     * <p>The unique identifier for the Trusted Advisor check to refresh.</p> 
     * <p>Specifying the check ID of a check that is automatically refreshed causes an
     * <code>InvalidParameterValue</code> error.</p> 
     */
    inline RefreshTrustedAdvisorCheckRequest& WithCheckId(const Aws::String& value) { SetCheckId(value); return *this;}

    /**
     * <p>The unique identifier for the Trusted Advisor check to refresh.</p> 
     * <p>Specifying the check ID of a check that is automatically refreshed causes an
     * <code>InvalidParameterValue</code> error.</p> 
     */
    inline RefreshTrustedAdvisorCheckRequest& WithCheckId(Aws::String&& value) { SetCheckId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Trusted Advisor check to refresh.</p> 
     * <p>Specifying the check ID of a check that is automatically refreshed causes an
     * <code>InvalidParameterValue</code> error.</p> 
     */
    inline RefreshTrustedAdvisorCheckRequest& WithCheckId(const char* value) { SetCheckId(value); return *this;}

  private:

    Aws::String m_checkId;
    bool m_checkIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
