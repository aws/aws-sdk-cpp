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
    AWS_IOT_API DeleteAuthorizerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAuthorizer"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the authorizer to delete.</p>
     */
    inline const Aws::String& GetAuthorizerName() const{ return m_authorizerName; }

    /**
     * <p>The name of the authorizer to delete.</p>
     */
    inline bool AuthorizerNameHasBeenSet() const { return m_authorizerNameHasBeenSet; }

    /**
     * <p>The name of the authorizer to delete.</p>
     */
    inline void SetAuthorizerName(const Aws::String& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = value; }

    /**
     * <p>The name of the authorizer to delete.</p>
     */
    inline void SetAuthorizerName(Aws::String&& value) { m_authorizerNameHasBeenSet = true; m_authorizerName = std::move(value); }

    /**
     * <p>The name of the authorizer to delete.</p>
     */
    inline void SetAuthorizerName(const char* value) { m_authorizerNameHasBeenSet = true; m_authorizerName.assign(value); }

    /**
     * <p>The name of the authorizer to delete.</p>
     */
    inline DeleteAuthorizerRequest& WithAuthorizerName(const Aws::String& value) { SetAuthorizerName(value); return *this;}

    /**
     * <p>The name of the authorizer to delete.</p>
     */
    inline DeleteAuthorizerRequest& WithAuthorizerName(Aws::String&& value) { SetAuthorizerName(std::move(value)); return *this;}

    /**
     * <p>The name of the authorizer to delete.</p>
     */
    inline DeleteAuthorizerRequest& WithAuthorizerName(const char* value) { SetAuthorizerName(value); return *this;}

  private:

    Aws::String m_authorizerName;
    bool m_authorizerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
