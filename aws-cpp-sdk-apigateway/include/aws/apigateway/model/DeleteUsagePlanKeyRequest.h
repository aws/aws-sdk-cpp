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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>The DELETE request to delete a usage plan key and remove the underlying API
   * key from the associated usage plan.</p>
   */
  class AWS_APIGATEWAY_API DeleteUsagePlanKeyRequest : public APIGatewayRequest
  {
  public:
    DeleteUsagePlanKeyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-deleted <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline const Aws::String& GetUsagePlanId() const{ return m_usagePlanId; }

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-deleted <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline void SetUsagePlanId(const Aws::String& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = value; }

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-deleted <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline void SetUsagePlanId(Aws::String&& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = value; }

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-deleted <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline void SetUsagePlanId(const char* value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId.assign(value); }

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-deleted <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline DeleteUsagePlanKeyRequest& WithUsagePlanId(const Aws::String& value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-deleted <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline DeleteUsagePlanKeyRequest& WithUsagePlanId(Aws::String&& value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-deleted <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline DeleteUsagePlanKeyRequest& WithUsagePlanId(const char* value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>The Id of the <a>UsagePlanKey</a> resource to be deleted.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The Id of the <a>UsagePlanKey</a> resource to be deleted.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The Id of the <a>UsagePlanKey</a> resource to be deleted.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The Id of the <a>UsagePlanKey</a> resource to be deleted.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The Id of the <a>UsagePlanKey</a> resource to be deleted.</p>
     */
    inline DeleteUsagePlanKeyRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The Id of the <a>UsagePlanKey</a> resource to be deleted.</p>
     */
    inline DeleteUsagePlanKeyRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>The Id of the <a>UsagePlanKey</a> resource to be deleted.</p>
     */
    inline DeleteUsagePlanKeyRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

  private:
    Aws::String m_usagePlanId;
    bool m_usagePlanIdHasBeenSet;
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
