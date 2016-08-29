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
   * <p>The POST request to create a usage plan key for adding an existing API key to
   * a usage plan.</p>
   */
  class AWS_APIGATEWAY_API CreateUsagePlanKeyRequest : public APIGatewayRequest
  {
  public:
    CreateUsagePlanKeyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-created <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline const Aws::String& GetUsagePlanId() const{ return m_usagePlanId; }

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-created <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline void SetUsagePlanId(const Aws::String& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = value; }

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-created <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline void SetUsagePlanId(Aws::String&& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = value; }

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-created <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline void SetUsagePlanId(const char* value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId.assign(value); }

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-created <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithUsagePlanId(const Aws::String& value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-created <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithUsagePlanId(Aws::String&& value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>The Id of the <a>UsagePlan</a> resource representing the usage plan
     * containing the to-be-created <a>UsagePlanKey</a> resource representing a plan
     * customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithUsagePlanId(const char* value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>The identifier of a <a>UsagePlanKey</a> resource for a plan customer.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The identifier of a <a>UsagePlanKey</a> resource for a plan customer.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The identifier of a <a>UsagePlanKey</a> resource for a plan customer.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The identifier of a <a>UsagePlanKey</a> resource for a plan customer.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The identifier of a <a>UsagePlanKey</a> resource for a plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The identifier of a <a>UsagePlanKey</a> resource for a plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>The identifier of a <a>UsagePlanKey</a> resource for a plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /**
     * <p>The type of a <a>UsagePlanKey</a> resource for a plan customer.</p>
     */
    inline const Aws::String& GetKeyType() const{ return m_keyType; }

    /**
     * <p>The type of a <a>UsagePlanKey</a> resource for a plan customer.</p>
     */
    inline void SetKeyType(const Aws::String& value) { m_keyTypeHasBeenSet = true; m_keyType = value; }

    /**
     * <p>The type of a <a>UsagePlanKey</a> resource for a plan customer.</p>
     */
    inline void SetKeyType(Aws::String&& value) { m_keyTypeHasBeenSet = true; m_keyType = value; }

    /**
     * <p>The type of a <a>UsagePlanKey</a> resource for a plan customer.</p>
     */
    inline void SetKeyType(const char* value) { m_keyTypeHasBeenSet = true; m_keyType.assign(value); }

    /**
     * <p>The type of a <a>UsagePlanKey</a> resource for a plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithKeyType(const Aws::String& value) { SetKeyType(value); return *this;}

    /**
     * <p>The type of a <a>UsagePlanKey</a> resource for a plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithKeyType(Aws::String&& value) { SetKeyType(value); return *this;}

    /**
     * <p>The type of a <a>UsagePlanKey</a> resource for a plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithKeyType(const char* value) { SetKeyType(value); return *this;}

  private:
    Aws::String m_usagePlanId;
    bool m_usagePlanIdHasBeenSet;
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
    Aws::String m_keyType;
    bool m_keyTypeHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
