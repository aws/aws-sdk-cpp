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
   * <p>The DELETE request to delete a usage plan key and remove the underlying API
   * key from the associated usage plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteUsagePlanKeyRequest">AWS
   * API Reference</a></p>
   */
  class DeleteUsagePlanKeyRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API DeleteUsagePlanKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteUsagePlanKey"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Id of the UsagePlan resource representing the usage plan containing the
     * to-be-deleted UsagePlanKey resource representing a plan customer.</p>
     */
    inline const Aws::String& GetUsagePlanId() const{ return m_usagePlanId; }
    inline bool UsagePlanIdHasBeenSet() const { return m_usagePlanIdHasBeenSet; }
    inline void SetUsagePlanId(const Aws::String& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = value; }
    inline void SetUsagePlanId(Aws::String&& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = std::move(value); }
    inline void SetUsagePlanId(const char* value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId.assign(value); }
    inline DeleteUsagePlanKeyRequest& WithUsagePlanId(const Aws::String& value) { SetUsagePlanId(value); return *this;}
    inline DeleteUsagePlanKeyRequest& WithUsagePlanId(Aws::String&& value) { SetUsagePlanId(std::move(value)); return *this;}
    inline DeleteUsagePlanKeyRequest& WithUsagePlanId(const char* value) { SetUsagePlanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Id of the UsagePlanKey resource to be deleted.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }
    inline DeleteUsagePlanKeyRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline DeleteUsagePlanKeyRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline DeleteUsagePlanKeyRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}
  private:

    Aws::String m_usagePlanId;
    bool m_usagePlanIdHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
