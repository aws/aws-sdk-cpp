/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{

  /**
   * <p>Provides details of the <code>CancelWorkflowExecution</code> decision.</p>
   * <p><b>Access Control</b></p> <p>You can use IAM policies to control this
   * decision's access to Amazon SWF resources as follows:</p> <ul> <li>Use a
   * <code>Resource</code> element with the domain name to limit the action to only
   * specified domains.</li> <li>Use an <code>Action</code> element to allow or deny
   * permission to call this action.</li> <li>You cannot use an IAM policy to
   * constrain this action's parameters.</li> </ul> <p>If the caller does not have
   * sufficient permissions to invoke the action, or the parameter values fall
   * outside the specified constraints, the action fails. The associated event
   * attribute's <b>cause</b> parameter will be set to OPERATION_NOT_PERMITTED. For
   * details and example IAM policies, see <a
   * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
   * IAM to Manage Access to Amazon SWF Workflows</a>.</p>
   */
  class AWS_SWF_API CancelWorkflowExecutionDecisionAttributes
  {
  public:
    CancelWorkflowExecutionDecisionAttributes();
    CancelWorkflowExecutionDecisionAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    CancelWorkflowExecutionDecisionAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p><i>Optional.</i> details of the cancellation.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }

    /**
     * <p><i>Optional.</i> details of the cancellation.</p>
     */
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p><i>Optional.</i> details of the cancellation.</p>
     */
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p><i>Optional.</i> details of the cancellation.</p>
     */
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }

    /**
     * <p><i>Optional.</i> details of the cancellation.</p>
     */
    inline CancelWorkflowExecutionDecisionAttributes& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p><i>Optional.</i> details of the cancellation.</p>
     */
    inline CancelWorkflowExecutionDecisionAttributes& WithDetails(Aws::String&& value) { SetDetails(value); return *this;}

    /**
     * <p><i>Optional.</i> details of the cancellation.</p>
     */
    inline CancelWorkflowExecutionDecisionAttributes& WithDetails(const char* value) { SetDetails(value); return *this;}

  private:
    Aws::String m_details;
    bool m_detailsHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
