/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/cloudhsm/CloudHSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>DescribeHapg</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/DescribeHapgRequest">AWS
   * API Reference</a></p>
   */
  class DescribeHapgRequest : public CloudHSMRequest
  {
  public:
    AWS_CLOUDHSM_API DescribeHapgRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeHapg"; }

    AWS_CLOUDHSM_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the high-availability partition group to describe.</p>
     */
    inline const Aws::String& GetHapgArn() const{ return m_hapgArn; }

    /**
     * <p>The ARN of the high-availability partition group to describe.</p>
     */
    inline bool HapgArnHasBeenSet() const { return m_hapgArnHasBeenSet; }

    /**
     * <p>The ARN of the high-availability partition group to describe.</p>
     */
    inline void SetHapgArn(const Aws::String& value) { m_hapgArnHasBeenSet = true; m_hapgArn = value; }

    /**
     * <p>The ARN of the high-availability partition group to describe.</p>
     */
    inline void SetHapgArn(Aws::String&& value) { m_hapgArnHasBeenSet = true; m_hapgArn = std::move(value); }

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
    inline DescribeHapgRequest& WithHapgArn(Aws::String&& value) { SetHapgArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the high-availability partition group to describe.</p>
     */
    inline DescribeHapgRequest& WithHapgArn(const char* value) { SetHapgArn(value); return *this;}

  private:

    Aws::String m_hapgArn;
    bool m_hapgArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
