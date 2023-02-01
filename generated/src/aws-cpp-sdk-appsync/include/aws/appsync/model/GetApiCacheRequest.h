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
   * <p>Represents the input of a <code>GetApiCache</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/GetApiCacheRequest">AWS
   * API Reference</a></p>
   */
  class GetApiCacheRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API GetApiCacheRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetApiCache"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API ID.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API ID.</p>
     */
    inline GetApiCacheRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline GetApiCacheRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline GetApiCacheRequest& WithApiId(const char* value) { SetApiId(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
