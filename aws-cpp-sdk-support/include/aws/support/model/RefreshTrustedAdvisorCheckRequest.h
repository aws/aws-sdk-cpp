/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_SUPPORT_API RefreshTrustedAdvisorCheckRequest : public SupportRequest
  {
  public:
    RefreshTrustedAdvisorCheckRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RefreshTrustedAdvisorCheck"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for the Trusted Advisor check to refresh. <b>Note:</b>
     * Specifying the check ID of a check that is automatically refreshed causes an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline const Aws::String& GetCheckId() const{ return m_checkId; }

    /**
     * <p>The unique identifier for the Trusted Advisor check to refresh. <b>Note:</b>
     * Specifying the check ID of a check that is automatically refreshed causes an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline bool CheckIdHasBeenSet() const { return m_checkIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Trusted Advisor check to refresh. <b>Note:</b>
     * Specifying the check ID of a check that is automatically refreshed causes an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline void SetCheckId(const Aws::String& value) { m_checkIdHasBeenSet = true; m_checkId = value; }

    /**
     * <p>The unique identifier for the Trusted Advisor check to refresh. <b>Note:</b>
     * Specifying the check ID of a check that is automatically refreshed causes an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline void SetCheckId(Aws::String&& value) { m_checkIdHasBeenSet = true; m_checkId = std::move(value); }

    /**
     * <p>The unique identifier for the Trusted Advisor check to refresh. <b>Note:</b>
     * Specifying the check ID of a check that is automatically refreshed causes an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline void SetCheckId(const char* value) { m_checkIdHasBeenSet = true; m_checkId.assign(value); }

    /**
     * <p>The unique identifier for the Trusted Advisor check to refresh. <b>Note:</b>
     * Specifying the check ID of a check that is automatically refreshed causes an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline RefreshTrustedAdvisorCheckRequest& WithCheckId(const Aws::String& value) { SetCheckId(value); return *this;}

    /**
     * <p>The unique identifier for the Trusted Advisor check to refresh. <b>Note:</b>
     * Specifying the check ID of a check that is automatically refreshed causes an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline RefreshTrustedAdvisorCheckRequest& WithCheckId(Aws::String&& value) { SetCheckId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Trusted Advisor check to refresh. <b>Note:</b>
     * Specifying the check ID of a check that is automatically refreshed causes an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline RefreshTrustedAdvisorCheckRequest& WithCheckId(const char* value) { SetCheckId(value); return *this;}

  private:

    Aws::String m_checkId;
    bool m_checkIdHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
