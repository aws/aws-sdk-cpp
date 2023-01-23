/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the GetPolicyVersion operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPolicyVersionRequest">AWS
   * API Reference</a></p>
   */
  class GetPolicyVersionRequest : public IoTRequest
  {
  public:
    AWS_IOT_API GetPolicyVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPolicyVersion"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline GetPolicyVersionRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline GetPolicyVersionRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline GetPolicyVersionRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The policy version ID.</p>
     */
    inline const Aws::String& GetPolicyVersionId() const{ return m_policyVersionId; }

    /**
     * <p>The policy version ID.</p>
     */
    inline bool PolicyVersionIdHasBeenSet() const { return m_policyVersionIdHasBeenSet; }

    /**
     * <p>The policy version ID.</p>
     */
    inline void SetPolicyVersionId(const Aws::String& value) { m_policyVersionIdHasBeenSet = true; m_policyVersionId = value; }

    /**
     * <p>The policy version ID.</p>
     */
    inline void SetPolicyVersionId(Aws::String&& value) { m_policyVersionIdHasBeenSet = true; m_policyVersionId = std::move(value); }

    /**
     * <p>The policy version ID.</p>
     */
    inline void SetPolicyVersionId(const char* value) { m_policyVersionIdHasBeenSet = true; m_policyVersionId.assign(value); }

    /**
     * <p>The policy version ID.</p>
     */
    inline GetPolicyVersionRequest& WithPolicyVersionId(const Aws::String& value) { SetPolicyVersionId(value); return *this;}

    /**
     * <p>The policy version ID.</p>
     */
    inline GetPolicyVersionRequest& WithPolicyVersionId(Aws::String&& value) { SetPolicyVersionId(std::move(value)); return *this;}

    /**
     * <p>The policy version ID.</p>
     */
    inline GetPolicyVersionRequest& WithPolicyVersionId(const char* value) { SetPolicyVersionId(value); return *this;}

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyVersionId;
    bool m_policyVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
