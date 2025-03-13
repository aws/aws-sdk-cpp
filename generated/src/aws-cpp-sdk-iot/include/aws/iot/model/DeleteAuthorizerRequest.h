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
   */
  class DeleteAuthorizerRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DeleteAuthorizerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAuthorizer"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the authorizer to delete.</p>
     */
    inline const Aws::String& GetAuthorizerName() const { return m_authorizerName; }
    inline bool AuthorizerNameHasBeenSet() const { return m_authorizerNameHasBeenSet; }
    template<typename AuthorizerNameT = Aws::String>
    void SetAuthorizerName(AuthorizerNameT&& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = std::forward<AuthorizerNameT>(value); }
    template<typename AuthorizerNameT = Aws::String>
    DeleteAuthorizerRequest& WithAuthorizerName(AuthorizerNameT&& value) { SetAuthorizerName(std::forward<AuthorizerNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authorizerName;
    bool m_authorizerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
