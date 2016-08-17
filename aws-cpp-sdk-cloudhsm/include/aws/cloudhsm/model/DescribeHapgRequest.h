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
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/cloudhsm/CloudHSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>DescribeHapg</a> action.</p>
   */
  class AWS_CLOUDHSM_API DescribeHapgRequest : public CloudHSMRequest
  {
  public:
    DescribeHapgRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ARN of the high-availability partition group to describe.</p>
     */
    inline const Aws::String& GetHapgArn() const{ return m_hapgArn; }

    /**
     * <p>The ARN of the high-availability partition group to describe.</p>
     */
    inline void SetHapgArn(const Aws::String& value) { m_hapgArnHasBeenSet = true; m_hapgArn = value; }

    /**
     * <p>The ARN of the high-availability partition group to describe.</p>
     */
    inline void SetHapgArn(Aws::String&& value) { m_hapgArnHasBeenSet = true; m_hapgArn = value; }

    /**
     * <p>The ARN of the high-availability partition group to describe.</p>
     */
    inline void SetHapgArn(const char* value) { m_hapgArnHasBeenSet = true; m_hapgArn.assign(value); }

    /**
     * <p>The ARN of the high-availability partition group to describe.</p>
     */
    inline DescribeHapgRequest& WithHapgArn(const Aws::String& value) { SetHapgArn(value); return *this;}

    /**
     * <p>The ARN of the high-availability partition group to describe.</p>
     */
    inline DescribeHapgRequest& WithHapgArn(Aws::String&& value) { SetHapgArn(value); return *this;}

    /**
     * <p>The ARN of the high-availability partition group to describe.</p>
     */
    inline DescribeHapgRequest& WithHapgArn(const char* value) { SetHapgArn(value); return *this;}

  private:
    Aws::String m_hapgArn;
    bool m_hapgArnHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
