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
  class GetFunctionRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API GetFunctionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFunction"; }

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
    inline GetFunctionRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline GetFunctionRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline GetFunctionRequest& WithApiId(const char* value) { SetApiId(value); return *this;}
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
    inline GetFunctionRequest& WithFunctionId(const Aws::String& value) { SetFunctionId(value); return *this;}
    inline GetFunctionRequest& WithFunctionId(Aws::String&& value) { SetFunctionId(std::move(value)); return *this;}
    inline GetFunctionRequest& WithFunctionId(const char* value) { SetFunctionId(value); return *this;}
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
