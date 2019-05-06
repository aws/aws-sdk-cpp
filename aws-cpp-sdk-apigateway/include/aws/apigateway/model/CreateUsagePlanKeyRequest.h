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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>The POST request to create a usage plan key for adding an existing API key to
   * a usage plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateUsagePlanKeyRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API CreateUsagePlanKeyRequest : public APIGatewayRequest
  {
  public:
    CreateUsagePlanKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUsagePlanKey"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The Id of the <a>UsagePlan</a> resource representing the usage
     * plan containing the to-be-created <a>UsagePlanKey</a> resource representing a
     * plan customer.</p>
     */
    inline const Aws::String& GetUsagePlanId() const{ return m_usagePlanId; }

    /**
     * <p>[Required] The Id of the <a>UsagePlan</a> resource representing the usage
     * plan containing the to-be-created <a>UsagePlanKey</a> resource representing a
     * plan customer.</p>
     */
    inline bool UsagePlanIdHasBeenSet() const { return m_usagePlanIdHasBeenSet; }

    /**
     * <p>[Required] The Id of the <a>UsagePlan</a> resource representing the usage
     * plan containing the to-be-created <a>UsagePlanKey</a> resource representing a
     * plan customer.</p>
     */
    inline void SetUsagePlanId(const Aws::String& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = value; }

    /**
     * <p>[Required] The Id of the <a>UsagePlan</a> resource representing the usage
     * plan containing the to-be-created <a>UsagePlanKey</a> resource representing a
     * plan customer.</p>
     */
    inline void SetUsagePlanId(Aws::String&& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = std::move(value); }

    /**
     * <p>[Required] The Id of the <a>UsagePlan</a> resource representing the usage
     * plan containing the to-be-created <a>UsagePlanKey</a> resource representing a
     * plan customer.</p>
     */
    inline void SetUsagePlanId(const char* value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId.assign(value); }

    /**
     * <p>[Required] The Id of the <a>UsagePlan</a> resource representing the usage
     * plan containing the to-be-created <a>UsagePlanKey</a> resource representing a
     * plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithUsagePlanId(const Aws::String& value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>[Required] The Id of the <a>UsagePlan</a> resource representing the usage
     * plan containing the to-be-created <a>UsagePlanKey</a> resource representing a
     * plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithUsagePlanId(Aws::String&& value) { SetUsagePlanId(std::move(value)); return *this;}

    /**
     * <p>[Required] The Id of the <a>UsagePlan</a> resource representing the usage
     * plan containing the to-be-created <a>UsagePlanKey</a> resource representing a
     * plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithUsagePlanId(const char* value) { SetUsagePlanId(value); return *this;}


    /**
     * <p>[Required] The identifier of a <a>UsagePlanKey</a> resource for a plan
     * customer.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>[Required] The identifier of a <a>UsagePlanKey</a> resource for a plan
     * customer.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>[Required] The identifier of a <a>UsagePlanKey</a> resource for a plan
     * customer.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>[Required] The identifier of a <a>UsagePlanKey</a> resource for a plan
     * customer.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>[Required] The identifier of a <a>UsagePlanKey</a> resource for a plan
     * customer.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>[Required] The identifier of a <a>UsagePlanKey</a> resource for a plan
     * customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>[Required] The identifier of a <a>UsagePlanKey</a> resource for a plan
     * customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>[Required] The identifier of a <a>UsagePlanKey</a> resource for a plan
     * customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>[Required] The type of a <a>UsagePlanKey</a> resource for a plan
     * customer.</p>
     */
    inline const Aws::String& GetKeyType() const{ return m_keyType; }

    /**
     * <p>[Required] The type of a <a>UsagePlanKey</a> resource for a plan
     * customer.</p>
     */
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }

    /**
     * <p>[Required] The type of a <a>UsagePlanKey</a> resource for a plan
     * customer.</p>
     */
    inline void SetKeyType(const Aws::String& value) { m_keyTypeHasBeenSet = true; m_keyType = value; }

    /**
     * <p>[Required] The type of a <a>UsagePlanKey</a> resource for a plan
     * customer.</p>
     */
    inline void SetKeyType(Aws::String&& value) { m_keyTypeHasBeenSet = true; m_keyType = std::move(value); }

    /**
     * <p>[Required] The type of a <a>UsagePlanKey</a> resource for a plan
     * customer.</p>
     */
    inline void SetKeyType(const char* value) { m_keyTypeHasBeenSet = true; m_keyType.assign(value); }

    /**
     * <p>[Required] The type of a <a>UsagePlanKey</a> resource for a plan
     * customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithKeyType(const Aws::String& value) { SetKeyType(value); return *this;}

    /**
     * <p>[Required] The type of a <a>UsagePlanKey</a> resource for a plan
     * customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithKeyType(Aws::String&& value) { SetKeyType(std::move(value)); return *this;}

    /**
     * <p>[Required] The type of a <a>UsagePlanKey</a> resource for a plan
     * customer.</p>
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
