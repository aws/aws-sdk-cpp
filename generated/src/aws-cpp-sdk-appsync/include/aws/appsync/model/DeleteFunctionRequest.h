/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class DeleteFunctionRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API DeleteFunctionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFunction"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The GraphQL API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline DeleteFunctionRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline DeleteFunctionRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline DeleteFunctionRequest& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Function</code> ID.</p>
     */
    inline const Aws::String& GetFunctionId() const{ return m_functionId; }
    inline bool FunctionIdHasBeenSet() const { return m_functionIdHasBeenSet; }
    inline void SetFunctionId(const Aws::String& value) { m_functionIdHasBeenSet = true; m_functionId = value; }
    inline void SetFunctionId(Aws::String&& value) { m_functionIdHasBeenSet = true; m_functionId = std::move(value); }
    inline void SetFunctionId(const char* value) { m_functionIdHasBeenSet = true; m_functionId.assign(value); }
    inline DeleteFunctionRequest& WithFunctionId(const Aws::String& value) { SetFunctionId(value); return *this;}
    inline DeleteFunctionRequest& WithFunctionId(Aws::String&& value) { SetFunctionId(std::move(value)); return *this;}
    inline DeleteFunctionRequest& WithFunctionId(const char* value) { SetFunctionId(value); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_functionId;
    bool m_functionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
