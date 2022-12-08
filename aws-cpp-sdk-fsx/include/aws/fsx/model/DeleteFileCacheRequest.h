/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class DeleteFileCacheRequest : public FSxRequest
  {
  public:
    AWS_FSX_API DeleteFileCacheRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFileCache"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the cache that's being deleted.</p>
     */
    inline const Aws::String& GetFileCacheId() const{ return m_fileCacheId; }

    /**
     * <p>The ID of the cache that's being deleted.</p>
     */
    inline bool FileCacheIdHasBeenSet() const { return m_fileCacheIdHasBeenSet; }

    /**
     * <p>The ID of the cache that's being deleted.</p>
     */
    inline void SetFileCacheId(const Aws::String& value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId = value; }

    /**
     * <p>The ID of the cache that's being deleted.</p>
     */
    inline void SetFileCacheId(Aws::String&& value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId = std::move(value); }

    /**
     * <p>The ID of the cache that's being deleted.</p>
     */
    inline void SetFileCacheId(const char* value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId.assign(value); }

    /**
     * <p>The ID of the cache that's being deleted.</p>
     */
    inline DeleteFileCacheRequest& WithFileCacheId(const Aws::String& value) { SetFileCacheId(value); return *this;}

    /**
     * <p>The ID of the cache that's being deleted.</p>
     */
    inline DeleteFileCacheRequest& WithFileCacheId(Aws::String&& value) { SetFileCacheId(std::move(value)); return *this;}

    /**
     * <p>The ID of the cache that's being deleted.</p>
     */
    inline DeleteFileCacheRequest& WithFileCacheId(const char* value) { SetFileCacheId(value); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline DeleteFileCacheRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline DeleteFileCacheRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline DeleteFileCacheRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_fileCacheId;
    bool m_fileCacheIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
