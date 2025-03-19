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
    AWS_APIGATEWAY_API CreateUsagePlanKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUsagePlanKey"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Id of the UsagePlan resource representing the usage plan containing the
     * to-be-created UsagePlanKey resource representing a plan customer.</p>
     */
    inline const Aws::String& GetUsagePlanId() const { return m_usagePlanId; }
    inline bool UsagePlanIdHasBeenSet() const { return m_usagePlanIdHasBeenSet; }
    template<typename UsagePlanIdT = Aws::String>
    void SetUsagePlanId(UsagePlanIdT&& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = std::forward<UsagePlanIdT>(value); }
    template<typename UsagePlanIdT = Aws::String>
    CreateUsagePlanKeyRequest& WithUsagePlanId(UsagePlanIdT&& value) { SetUsagePlanId(std::forward<UsagePlanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a UsagePlanKey resource for a plan customer.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    CreateUsagePlanKeyRequest& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of a UsagePlanKey resource for a plan customer.</p>
     */
    inline const Aws::String& GetKeyType() const { return m_keyType; }
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }
    template<typename KeyTypeT = Aws::String>
    void SetKeyType(KeyTypeT&& value) { m_keyTypeHasBeenSet = true; m_keyType = std::forward<KeyTypeT>(value); }
    template<typename KeyTypeT = Aws::String>
    CreateUsagePlanKeyRequest& WithKeyType(KeyTypeT&& value) { SetKeyType(std::forward<KeyTypeT>(value)); return *this;}
    ///@}
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
