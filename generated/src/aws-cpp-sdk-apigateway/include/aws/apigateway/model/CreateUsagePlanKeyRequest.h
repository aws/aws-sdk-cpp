/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateUsagePlanKeyRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API CreateUsagePlanKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUsagePlanKey"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    /**
     * <p>The Id of the UsagePlan resource representing the usage plan containing the
     * to-be-created UsagePlanKey resource representing a plan customer.</p>
     */
    inline const Aws::String& GetUsagePlanId() const{ return m_usagePlanId; }

    /**
     * <p>The Id of the UsagePlan resource representing the usage plan containing the
     * to-be-created UsagePlanKey resource representing a plan customer.</p>
     */
    inline bool UsagePlanIdHasBeenSet() const { return m_usagePlanIdHasBeenSet; }

    /**
     * <p>The Id of the UsagePlan resource representing the usage plan containing the
     * to-be-created UsagePlanKey resource representing a plan customer.</p>
     */
    inline void SetUsagePlanId(const Aws::String& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = value; }

    /**
     * <p>The Id of the UsagePlan resource representing the usage plan containing the
     * to-be-created UsagePlanKey resource representing a plan customer.</p>
     */
    inline void SetUsagePlanId(Aws::String&& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = std::move(value); }

    /**
     * <p>The Id of the UsagePlan resource representing the usage plan containing the
     * to-be-created UsagePlanKey resource representing a plan customer.</p>
     */
    inline void SetUsagePlanId(const char* value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId.assign(value); }

    /**
     * <p>The Id of the UsagePlan resource representing the usage plan containing the
     * to-be-created UsagePlanKey resource representing a plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithUsagePlanId(const Aws::String& value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>The Id of the UsagePlan resource representing the usage plan containing the
     * to-be-created UsagePlanKey resource representing a plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithUsagePlanId(Aws::String&& value) { SetUsagePlanId(std::move(value)); return *this;}

    /**
     * <p>The Id of the UsagePlan resource representing the usage plan containing the
     * to-be-created UsagePlanKey resource representing a plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithUsagePlanId(const char* value) { SetUsagePlanId(value); return *this;}


    /**
     * <p>The identifier of a UsagePlanKey resource for a plan customer.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The identifier of a UsagePlanKey resource for a plan customer.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The identifier of a UsagePlanKey resource for a plan customer.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The identifier of a UsagePlanKey resource for a plan customer.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The identifier of a UsagePlanKey resource for a plan customer.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The identifier of a UsagePlanKey resource for a plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The identifier of a UsagePlanKey resource for a plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a UsagePlanKey resource for a plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The type of a UsagePlanKey resource for a plan customer.</p>
     */
    inline const Aws::String& GetKeyType() const{ return m_keyType; }

    /**
     * <p>The type of a UsagePlanKey resource for a plan customer.</p>
     */
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }

    /**
     * <p>The type of a UsagePlanKey resource for a plan customer.</p>
     */
    inline void SetKeyType(const Aws::String& value) { m_keyTypeHasBeenSet = true; m_keyType = value; }

    /**
     * <p>The type of a UsagePlanKey resource for a plan customer.</p>
     */
    inline void SetKeyType(Aws::String&& value) { m_keyTypeHasBeenSet = true; m_keyType = std::move(value); }

    /**
     * <p>The type of a UsagePlanKey resource for a plan customer.</p>
     */
    inline void SetKeyType(const char* value) { m_keyTypeHasBeenSet = true; m_keyType.assign(value); }

    /**
     * <p>The type of a UsagePlanKey resource for a plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithKeyType(const Aws::String& value) { SetKeyType(value); return *this;}

    /**
     * <p>The type of a UsagePlanKey resource for a plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithKeyType(Aws::String&& value) { SetKeyType(std::move(value)); return *this;}

    /**
     * <p>The type of a UsagePlanKey resource for a plan customer.</p>
     */
    inline CreateUsagePlanKeyRequest& WithKeyType(const char* value) { SetKeyType(value); return *this;}

  private:

    Aws::String m_usagePlanId;
    bool m_usagePlanIdHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_keyType;
    bool m_keyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
