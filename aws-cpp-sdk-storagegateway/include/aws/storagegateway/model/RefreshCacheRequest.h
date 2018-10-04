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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class AWS_STORAGEGATEWAY_API RefreshCacheRequest : public StorageGatewayRequest
  {
  public:
    RefreshCacheRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RefreshCache"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }

    
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = value; }

    
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::move(value); }

    
    inline void SetFileShareARN(const char* value) { m_fileShareARNHasBeenSet = true; m_fileShareARN.assign(value); }

    
    inline RefreshCacheRequest& WithFileShareARN(const Aws::String& value) { SetFileShareARN(value); return *this;}

    
    inline RefreshCacheRequest& WithFileShareARN(Aws::String&& value) { SetFileShareARN(std::move(value)); return *this;}

    
    inline RefreshCacheRequest& WithFileShareARN(const char* value) { SetFileShareARN(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetFolderList() const{ return m_folderList; }

    
    inline void SetFolderList(const Aws::Vector<Aws::String>& value) { m_folderListHasBeenSet = true; m_folderList = value; }

    
    inline void SetFolderList(Aws::Vector<Aws::String>&& value) { m_folderListHasBeenSet = true; m_folderList = std::move(value); }

    
    inline RefreshCacheRequest& WithFolderList(const Aws::Vector<Aws::String>& value) { SetFolderList(value); return *this;}

    
    inline RefreshCacheRequest& WithFolderList(Aws::Vector<Aws::String>&& value) { SetFolderList(std::move(value)); return *this;}

    
    inline RefreshCacheRequest& AddFolderList(const Aws::String& value) { m_folderListHasBeenSet = true; m_folderList.push_back(value); return *this; }

    
    inline RefreshCacheRequest& AddFolderList(Aws::String&& value) { m_folderListHasBeenSet = true; m_folderList.push_back(std::move(value)); return *this; }

    
    inline RefreshCacheRequest& AddFolderList(const char* value) { m_folderListHasBeenSet = true; m_folderList.push_back(value); return *this; }


    /**
     * <p>A value that specifies whether to recursively refresh folders in the cache.
     * The refresh includes folders that were in the cache the last time the gateway
     * listed the folder's contents. If this value set to "true", each folder that is
     * listed in <code>FolderList</code> is recursively updated. Otherwise, subfolders
     * listed in <code>FolderList</code> are not refreshed. Only objects that are in
     * folders listed directly under <code>FolderList</code> are found and used for the
     * update. The default is "true".</p>
     */
    inline bool GetRecursive() const{ return m_recursive; }

    /**
     * <p>A value that specifies whether to recursively refresh folders in the cache.
     * The refresh includes folders that were in the cache the last time the gateway
     * listed the folder's contents. If this value set to "true", each folder that is
     * listed in <code>FolderList</code> is recursively updated. Otherwise, subfolders
     * listed in <code>FolderList</code> are not refreshed. Only objects that are in
     * folders listed directly under <code>FolderList</code> are found and used for the
     * update. The default is "true".</p>
     */
    inline void SetRecursive(bool value) { m_recursiveHasBeenSet = true; m_recursive = value; }

    /**
     * <p>A value that specifies whether to recursively refresh folders in the cache.
     * The refresh includes folders that were in the cache the last time the gateway
     * listed the folder's contents. If this value set to "true", each folder that is
     * listed in <code>FolderList</code> is recursively updated. Otherwise, subfolders
     * listed in <code>FolderList</code> are not refreshed. Only objects that are in
     * folders listed directly under <code>FolderList</code> are found and used for the
     * update. The default is "true".</p>
     */
    inline RefreshCacheRequest& WithRecursive(bool value) { SetRecursive(value); return *this;}

  private:

    Aws::String m_fileShareARN;
    bool m_fileShareARNHasBeenSet;

    Aws::Vector<Aws::String> m_folderList;
    bool m_folderListHasBeenSet;

    bool m_recursive;
    bool m_recursiveHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
