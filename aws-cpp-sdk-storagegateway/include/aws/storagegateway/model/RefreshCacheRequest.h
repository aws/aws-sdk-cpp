/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>RefreshCacheInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/RefreshCacheInput">AWS
   * API Reference</a></p>
   */
  class RefreshCacheRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API RefreshCacheRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RefreshCache"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the file share you want to refresh.</p>
     */
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share you want to refresh.</p>
     */
    inline bool FileShareARNHasBeenSet() const { return m_fileShareARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share you want to refresh.</p>
     */
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share you want to refresh.</p>
     */
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share you want to refresh.</p>
     */
    inline void SetFileShareARN(const char* value) { m_fileShareARNHasBeenSet = true; m_fileShareARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the file share you want to refresh.</p>
     */
    inline RefreshCacheRequest& WithFileShareARN(const Aws::String& value) { SetFileShareARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file share you want to refresh.</p>
     */
    inline RefreshCacheRequest& WithFileShareARN(Aws::String&& value) { SetFileShareARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file share you want to refresh.</p>
     */
    inline RefreshCacheRequest& WithFileShareARN(const char* value) { SetFileShareARN(value); return *this;}


    /**
     * <p>A comma-separated list of the paths of folders to refresh in the cache. The
     * default is [<code>"/"</code>]. The default refreshes objects and folders at the
     * root of the Amazon S3 bucket. If <code>Recursive</code> is set to
     * <code>true</code>, the entire S3 bucket that the file share has access to is
     * refreshed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFolderList() const{ return m_folderList; }

    /**
     * <p>A comma-separated list of the paths of folders to refresh in the cache. The
     * default is [<code>"/"</code>]. The default refreshes objects and folders at the
     * root of the Amazon S3 bucket. If <code>Recursive</code> is set to
     * <code>true</code>, the entire S3 bucket that the file share has access to is
     * refreshed.</p>
     */
    inline bool FolderListHasBeenSet() const { return m_folderListHasBeenSet; }

    /**
     * <p>A comma-separated list of the paths of folders to refresh in the cache. The
     * default is [<code>"/"</code>]. The default refreshes objects and folders at the
     * root of the Amazon S3 bucket. If <code>Recursive</code> is set to
     * <code>true</code>, the entire S3 bucket that the file share has access to is
     * refreshed.</p>
     */
    inline void SetFolderList(const Aws::Vector<Aws::String>& value) { m_folderListHasBeenSet = true; m_folderList = value; }

    /**
     * <p>A comma-separated list of the paths of folders to refresh in the cache. The
     * default is [<code>"/"</code>]. The default refreshes objects and folders at the
     * root of the Amazon S3 bucket. If <code>Recursive</code> is set to
     * <code>true</code>, the entire S3 bucket that the file share has access to is
     * refreshed.</p>
     */
    inline void SetFolderList(Aws::Vector<Aws::String>&& value) { m_folderListHasBeenSet = true; m_folderList = std::move(value); }

    /**
     * <p>A comma-separated list of the paths of folders to refresh in the cache. The
     * default is [<code>"/"</code>]. The default refreshes objects and folders at the
     * root of the Amazon S3 bucket. If <code>Recursive</code> is set to
     * <code>true</code>, the entire S3 bucket that the file share has access to is
     * refreshed.</p>
     */
    inline RefreshCacheRequest& WithFolderList(const Aws::Vector<Aws::String>& value) { SetFolderList(value); return *this;}

    /**
     * <p>A comma-separated list of the paths of folders to refresh in the cache. The
     * default is [<code>"/"</code>]. The default refreshes objects and folders at the
     * root of the Amazon S3 bucket. If <code>Recursive</code> is set to
     * <code>true</code>, the entire S3 bucket that the file share has access to is
     * refreshed.</p>
     */
    inline RefreshCacheRequest& WithFolderList(Aws::Vector<Aws::String>&& value) { SetFolderList(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of the paths of folders to refresh in the cache. The
     * default is [<code>"/"</code>]. The default refreshes objects and folders at the
     * root of the Amazon S3 bucket. If <code>Recursive</code> is set to
     * <code>true</code>, the entire S3 bucket that the file share has access to is
     * refreshed.</p>
     */
    inline RefreshCacheRequest& AddFolderList(const Aws::String& value) { m_folderListHasBeenSet = true; m_folderList.push_back(value); return *this; }

    /**
     * <p>A comma-separated list of the paths of folders to refresh in the cache. The
     * default is [<code>"/"</code>]. The default refreshes objects and folders at the
     * root of the Amazon S3 bucket. If <code>Recursive</code> is set to
     * <code>true</code>, the entire S3 bucket that the file share has access to is
     * refreshed.</p>
     */
    inline RefreshCacheRequest& AddFolderList(Aws::String&& value) { m_folderListHasBeenSet = true; m_folderList.push_back(std::move(value)); return *this; }

    /**
     * <p>A comma-separated list of the paths of folders to refresh in the cache. The
     * default is [<code>"/"</code>]. The default refreshes objects and folders at the
     * root of the Amazon S3 bucket. If <code>Recursive</code> is set to
     * <code>true</code>, the entire S3 bucket that the file share has access to is
     * refreshed.</p>
     */
    inline RefreshCacheRequest& AddFolderList(const char* value) { m_folderListHasBeenSet = true; m_folderList.push_back(value); return *this; }


    /**
     * <p>A value that specifies whether to recursively refresh folders in the cache.
     * The refresh includes folders that were in the cache the last time the gateway
     * listed the folder's contents. If this value set to <code>true</code>, each
     * folder that is listed in <code>FolderList</code> is recursively updated.
     * Otherwise, subfolders listed in <code>FolderList</code> are not refreshed. Only
     * objects that are in folders listed directly under <code>FolderList</code> are
     * found and used for the update. The default is <code>true</code>.</p> <p>Valid
     * Values: <code>true</code> | <code>false</code> </p>
     */
    inline bool GetRecursive() const{ return m_recursive; }

    /**
     * <p>A value that specifies whether to recursively refresh folders in the cache.
     * The refresh includes folders that were in the cache the last time the gateway
     * listed the folder's contents. If this value set to <code>true</code>, each
     * folder that is listed in <code>FolderList</code> is recursively updated.
     * Otherwise, subfolders listed in <code>FolderList</code> are not refreshed. Only
     * objects that are in folders listed directly under <code>FolderList</code> are
     * found and used for the update. The default is <code>true</code>.</p> <p>Valid
     * Values: <code>true</code> | <code>false</code> </p>
     */
    inline bool RecursiveHasBeenSet() const { return m_recursiveHasBeenSet; }

    /**
     * <p>A value that specifies whether to recursively refresh folders in the cache.
     * The refresh includes folders that were in the cache the last time the gateway
     * listed the folder's contents. If this value set to <code>true</code>, each
     * folder that is listed in <code>FolderList</code> is recursively updated.
     * Otherwise, subfolders listed in <code>FolderList</code> are not refreshed. Only
     * objects that are in folders listed directly under <code>FolderList</code> are
     * found and used for the update. The default is <code>true</code>.</p> <p>Valid
     * Values: <code>true</code> | <code>false</code> </p>
     */
    inline void SetRecursive(bool value) { m_recursiveHasBeenSet = true; m_recursive = value; }

    /**
     * <p>A value that specifies whether to recursively refresh folders in the cache.
     * The refresh includes folders that were in the cache the last time the gateway
     * listed the folder's contents. If this value set to <code>true</code>, each
     * folder that is listed in <code>FolderList</code> is recursively updated.
     * Otherwise, subfolders listed in <code>FolderList</code> are not refreshed. Only
     * objects that are in folders listed directly under <code>FolderList</code> are
     * found and used for the update. The default is <code>true</code>.</p> <p>Valid
     * Values: <code>true</code> | <code>false</code> </p>
     */
    inline RefreshCacheRequest& WithRecursive(bool value) { SetRecursive(value); return *this;}

  private:

    Aws::String m_fileShareARN;
    bool m_fileShareARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_folderList;
    bool m_folderListHasBeenSet = false;

    bool m_recursive;
    bool m_recursiveHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
