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
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/mediastore-data/MediaStoreDataRequest.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediastore-data/model/StorageClass.h>
#include <aws/mediastore-data/model/UploadAvailability.h>
#include <utility>

namespace Aws
{
namespace MediaStoreData
{
namespace Model
{

  /**
   */
  class AWS_MEDIASTOREDATA_API PutObjectRequest : public StreamingMediaStoreDataRequest
  {
  public:
    PutObjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutObject"; }

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    bool SignBody() const override { return false; }

    bool IsChunked() const override { return true; }


    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     * <p>For example, to upload the file <code>mlaw.avi</code> to the folder path
     * <code>premium\canada</code> in the container <code>movies</code>, enter the path
     * <code>premium/canada/mlaw.avi</code>.</p> <p>Do not include the container name
     * in this path.</p> <p>If the path includes any folders that don't exist yet, the
     * service creates them. For example, suppose you have an existing
     * <code>premium/usa</code> subfolder. If you specify <code>premium/canada</code>,
     * the service creates a <code>canada</code> subfolder in the <code>premium</code>
     * folder. You then have two subfolders, <code>usa</code> and <code>canada</code>,
     * in the <code>premium</code> folder. </p> <p>There is no correlation between the
     * path to the source and the path (folders) in the container in AWS Elemental
     * MediaStore.</p> <p>For more information about folders and how they exist in a
     * container, see the <a
     * href="http://docs.aws.amazon.com/mediastore/latest/ug/">AWS Elemental MediaStore
     * User Guide</a>.</p> <p>The file name is the name that is assigned to the file
     * that you upload. The file can have the same name inside and outside of AWS
     * Elemental MediaStore, or it can have the same name. The file name can include or
     * omit an extension. </p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     * <p>For example, to upload the file <code>mlaw.avi</code> to the folder path
     * <code>premium\canada</code> in the container <code>movies</code>, enter the path
     * <code>premium/canada/mlaw.avi</code>.</p> <p>Do not include the container name
     * in this path.</p> <p>If the path includes any folders that don't exist yet, the
     * service creates them. For example, suppose you have an existing
     * <code>premium/usa</code> subfolder. If you specify <code>premium/canada</code>,
     * the service creates a <code>canada</code> subfolder in the <code>premium</code>
     * folder. You then have two subfolders, <code>usa</code> and <code>canada</code>,
     * in the <code>premium</code> folder. </p> <p>There is no correlation between the
     * path to the source and the path (folders) in the container in AWS Elemental
     * MediaStore.</p> <p>For more information about folders and how they exist in a
     * container, see the <a
     * href="http://docs.aws.amazon.com/mediastore/latest/ug/">AWS Elemental MediaStore
     * User Guide</a>.</p> <p>The file name is the name that is assigned to the file
     * that you upload. The file can have the same name inside and outside of AWS
     * Elemental MediaStore, or it can have the same name. The file name can include or
     * omit an extension. </p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     * <p>For example, to upload the file <code>mlaw.avi</code> to the folder path
     * <code>premium\canada</code> in the container <code>movies</code>, enter the path
     * <code>premium/canada/mlaw.avi</code>.</p> <p>Do not include the container name
     * in this path.</p> <p>If the path includes any folders that don't exist yet, the
     * service creates them. For example, suppose you have an existing
     * <code>premium/usa</code> subfolder. If you specify <code>premium/canada</code>,
     * the service creates a <code>canada</code> subfolder in the <code>premium</code>
     * folder. You then have two subfolders, <code>usa</code> and <code>canada</code>,
     * in the <code>premium</code> folder. </p> <p>There is no correlation between the
     * path to the source and the path (folders) in the container in AWS Elemental
     * MediaStore.</p> <p>For more information about folders and how they exist in a
     * container, see the <a
     * href="http://docs.aws.amazon.com/mediastore/latest/ug/">AWS Elemental MediaStore
     * User Guide</a>.</p> <p>The file name is the name that is assigned to the file
     * that you upload. The file can have the same name inside and outside of AWS
     * Elemental MediaStore, or it can have the same name. The file name can include or
     * omit an extension. </p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     * <p>For example, to upload the file <code>mlaw.avi</code> to the folder path
     * <code>premium\canada</code> in the container <code>movies</code>, enter the path
     * <code>premium/canada/mlaw.avi</code>.</p> <p>Do not include the container name
     * in this path.</p> <p>If the path includes any folders that don't exist yet, the
     * service creates them. For example, suppose you have an existing
     * <code>premium/usa</code> subfolder. If you specify <code>premium/canada</code>,
     * the service creates a <code>canada</code> subfolder in the <code>premium</code>
     * folder. You then have two subfolders, <code>usa</code> and <code>canada</code>,
     * in the <code>premium</code> folder. </p> <p>There is no correlation between the
     * path to the source and the path (folders) in the container in AWS Elemental
     * MediaStore.</p> <p>For more information about folders and how they exist in a
     * container, see the <a
     * href="http://docs.aws.amazon.com/mediastore/latest/ug/">AWS Elemental MediaStore
     * User Guide</a>.</p> <p>The file name is the name that is assigned to the file
     * that you upload. The file can have the same name inside and outside of AWS
     * Elemental MediaStore, or it can have the same name. The file name can include or
     * omit an extension. </p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     * <p>For example, to upload the file <code>mlaw.avi</code> to the folder path
     * <code>premium\canada</code> in the container <code>movies</code>, enter the path
     * <code>premium/canada/mlaw.avi</code>.</p> <p>Do not include the container name
     * in this path.</p> <p>If the path includes any folders that don't exist yet, the
     * service creates them. For example, suppose you have an existing
     * <code>premium/usa</code> subfolder. If you specify <code>premium/canada</code>,
     * the service creates a <code>canada</code> subfolder in the <code>premium</code>
     * folder. You then have two subfolders, <code>usa</code> and <code>canada</code>,
     * in the <code>premium</code> folder. </p> <p>There is no correlation between the
     * path to the source and the path (folders) in the container in AWS Elemental
     * MediaStore.</p> <p>For more information about folders and how they exist in a
     * container, see the <a
     * href="http://docs.aws.amazon.com/mediastore/latest/ug/">AWS Elemental MediaStore
     * User Guide</a>.</p> <p>The file name is the name that is assigned to the file
     * that you upload. The file can have the same name inside and outside of AWS
     * Elemental MediaStore, or it can have the same name. The file name can include or
     * omit an extension. </p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     * <p>For example, to upload the file <code>mlaw.avi</code> to the folder path
     * <code>premium\canada</code> in the container <code>movies</code>, enter the path
     * <code>premium/canada/mlaw.avi</code>.</p> <p>Do not include the container name
     * in this path.</p> <p>If the path includes any folders that don't exist yet, the
     * service creates them. For example, suppose you have an existing
     * <code>premium/usa</code> subfolder. If you specify <code>premium/canada</code>,
     * the service creates a <code>canada</code> subfolder in the <code>premium</code>
     * folder. You then have two subfolders, <code>usa</code> and <code>canada</code>,
     * in the <code>premium</code> folder. </p> <p>There is no correlation between the
     * path to the source and the path (folders) in the container in AWS Elemental
     * MediaStore.</p> <p>For more information about folders and how they exist in a
     * container, see the <a
     * href="http://docs.aws.amazon.com/mediastore/latest/ug/">AWS Elemental MediaStore
     * User Guide</a>.</p> <p>The file name is the name that is assigned to the file
     * that you upload. The file can have the same name inside and outside of AWS
     * Elemental MediaStore, or it can have the same name. The file name can include or
     * omit an extension. </p>
     */
    inline PutObjectRequest& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     * <p>For example, to upload the file <code>mlaw.avi</code> to the folder path
     * <code>premium\canada</code> in the container <code>movies</code>, enter the path
     * <code>premium/canada/mlaw.avi</code>.</p> <p>Do not include the container name
     * in this path.</p> <p>If the path includes any folders that don't exist yet, the
     * service creates them. For example, suppose you have an existing
     * <code>premium/usa</code> subfolder. If you specify <code>premium/canada</code>,
     * the service creates a <code>canada</code> subfolder in the <code>premium</code>
     * folder. You then have two subfolders, <code>usa</code> and <code>canada</code>,
     * in the <code>premium</code> folder. </p> <p>There is no correlation between the
     * path to the source and the path (folders) in the container in AWS Elemental
     * MediaStore.</p> <p>For more information about folders and how they exist in a
     * container, see the <a
     * href="http://docs.aws.amazon.com/mediastore/latest/ug/">AWS Elemental MediaStore
     * User Guide</a>.</p> <p>The file name is the name that is assigned to the file
     * that you upload. The file can have the same name inside and outside of AWS
     * Elemental MediaStore, or it can have the same name. The file name can include or
     * omit an extension. </p>
     */
    inline PutObjectRequest& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path (including the file name) where the object is stored in the
     * container. Format: &lt;folder name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     * <p>For example, to upload the file <code>mlaw.avi</code> to the folder path
     * <code>premium\canada</code> in the container <code>movies</code>, enter the path
     * <code>premium/canada/mlaw.avi</code>.</p> <p>Do not include the container name
     * in this path.</p> <p>If the path includes any folders that don't exist yet, the
     * service creates them. For example, suppose you have an existing
     * <code>premium/usa</code> subfolder. If you specify <code>premium/canada</code>,
     * the service creates a <code>canada</code> subfolder in the <code>premium</code>
     * folder. You then have two subfolders, <code>usa</code> and <code>canada</code>,
     * in the <code>premium</code> folder. </p> <p>There is no correlation between the
     * path to the source and the path (folders) in the container in AWS Elemental
     * MediaStore.</p> <p>For more information about folders and how they exist in a
     * container, see the <a
     * href="http://docs.aws.amazon.com/mediastore/latest/ug/">AWS Elemental MediaStore
     * User Guide</a>.</p> <p>The file name is the name that is assigned to the file
     * that you upload. The file can have the same name inside and outside of AWS
     * Elemental MediaStore, or it can have the same name. The file name can include or
     * omit an extension. </p>
     */
    inline PutObjectRequest& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>An optional <code>CacheControl</code> header that allows the caller to
     * control the object's cache behavior. Headers can be passed in as specified in
     * the HTTP at <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     * <p>Headers with a custom user-defined value are also accepted.</p>
     */
    inline const Aws::String& GetCacheControl() const{ return m_cacheControl; }

    /**
     * <p>An optional <code>CacheControl</code> header that allows the caller to
     * control the object's cache behavior. Headers can be passed in as specified in
     * the HTTP at <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     * <p>Headers with a custom user-defined value are also accepted.</p>
     */
    inline bool CacheControlHasBeenSet() const { return m_cacheControlHasBeenSet; }

    /**
     * <p>An optional <code>CacheControl</code> header that allows the caller to
     * control the object's cache behavior. Headers can be passed in as specified in
     * the HTTP at <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     * <p>Headers with a custom user-defined value are also accepted.</p>
     */
    inline void SetCacheControl(const Aws::String& value) { m_cacheControlHasBeenSet = true; m_cacheControl = value; }

    /**
     * <p>An optional <code>CacheControl</code> header that allows the caller to
     * control the object's cache behavior. Headers can be passed in as specified in
     * the HTTP at <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     * <p>Headers with a custom user-defined value are also accepted.</p>
     */
    inline void SetCacheControl(Aws::String&& value) { m_cacheControlHasBeenSet = true; m_cacheControl = std::move(value); }

    /**
     * <p>An optional <code>CacheControl</code> header that allows the caller to
     * control the object's cache behavior. Headers can be passed in as specified in
     * the HTTP at <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     * <p>Headers with a custom user-defined value are also accepted.</p>
     */
    inline void SetCacheControl(const char* value) { m_cacheControlHasBeenSet = true; m_cacheControl.assign(value); }

    /**
     * <p>An optional <code>CacheControl</code> header that allows the caller to
     * control the object's cache behavior. Headers can be passed in as specified in
     * the HTTP at <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     * <p>Headers with a custom user-defined value are also accepted.</p>
     */
    inline PutObjectRequest& WithCacheControl(const Aws::String& value) { SetCacheControl(value); return *this;}

    /**
     * <p>An optional <code>CacheControl</code> header that allows the caller to
     * control the object's cache behavior. Headers can be passed in as specified in
     * the HTTP at <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     * <p>Headers with a custom user-defined value are also accepted.</p>
     */
    inline PutObjectRequest& WithCacheControl(Aws::String&& value) { SetCacheControl(std::move(value)); return *this;}

    /**
     * <p>An optional <code>CacheControl</code> header that allows the caller to
     * control the object's cache behavior. Headers can be passed in as specified in
     * the HTTP at <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     * <p>Headers with a custom user-defined value are also accepted.</p>
     */
    inline PutObjectRequest& WithCacheControl(const char* value) { SetCacheControl(value); return *this;}


    /**
     * <p>Indicates the storage class of a <code>Put</code> request. Defaults to
     * high-performance temporal storage class, and objects are persisted into durable
     * storage shortly after being received.</p>
     */
    inline const StorageClass& GetStorageClass() const{ return m_storageClass; }

    /**
     * <p>Indicates the storage class of a <code>Put</code> request. Defaults to
     * high-performance temporal storage class, and objects are persisted into durable
     * storage shortly after being received.</p>
     */
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }

    /**
     * <p>Indicates the storage class of a <code>Put</code> request. Defaults to
     * high-performance temporal storage class, and objects are persisted into durable
     * storage shortly after being received.</p>
     */
    inline void SetStorageClass(const StorageClass& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }

    /**
     * <p>Indicates the storage class of a <code>Put</code> request. Defaults to
     * high-performance temporal storage class, and objects are persisted into durable
     * storage shortly after being received.</p>
     */
    inline void SetStorageClass(StorageClass&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::move(value); }

    /**
     * <p>Indicates the storage class of a <code>Put</code> request. Defaults to
     * high-performance temporal storage class, and objects are persisted into durable
     * storage shortly after being received.</p>
     */
    inline PutObjectRequest& WithStorageClass(const StorageClass& value) { SetStorageClass(value); return *this;}

    /**
     * <p>Indicates the storage class of a <code>Put</code> request. Defaults to
     * high-performance temporal storage class, and objects are persisted into durable
     * storage shortly after being received.</p>
     */
    inline PutObjectRequest& WithStorageClass(StorageClass&& value) { SetStorageClass(std::move(value)); return *this;}


    /**
     * <p>Indicates the availability of an object while it is still uploading. If the
     * value is set to <code>streaming</code>, the object is available for downloading
     * after some initial buffering but before the object is uploaded completely. If
     * the value is set to <code>standard</code>, the object is available for
     * downloading only when it is uploaded completely. The default value for this
     * header is <code>standard</code>.</p> <p>To use this header, you must also set
     * the HTTP <code>Transfer-Encoding</code> header to <code>chunked</code>.</p>
     */
    inline const UploadAvailability& GetUploadAvailability() const{ return m_uploadAvailability; }

    /**
     * <p>Indicates the availability of an object while it is still uploading. If the
     * value is set to <code>streaming</code>, the object is available for downloading
     * after some initial buffering but before the object is uploaded completely. If
     * the value is set to <code>standard</code>, the object is available for
     * downloading only when it is uploaded completely. The default value for this
     * header is <code>standard</code>.</p> <p>To use this header, you must also set
     * the HTTP <code>Transfer-Encoding</code> header to <code>chunked</code>.</p>
     */
    inline bool UploadAvailabilityHasBeenSet() const { return m_uploadAvailabilityHasBeenSet; }

    /**
     * <p>Indicates the availability of an object while it is still uploading. If the
     * value is set to <code>streaming</code>, the object is available for downloading
     * after some initial buffering but before the object is uploaded completely. If
     * the value is set to <code>standard</code>, the object is available for
     * downloading only when it is uploaded completely. The default value for this
     * header is <code>standard</code>.</p> <p>To use this header, you must also set
     * the HTTP <code>Transfer-Encoding</code> header to <code>chunked</code>.</p>
     */
    inline void SetUploadAvailability(const UploadAvailability& value) { m_uploadAvailabilityHasBeenSet = true; m_uploadAvailability = value; }

    /**
     * <p>Indicates the availability of an object while it is still uploading. If the
     * value is set to <code>streaming</code>, the object is available for downloading
     * after some initial buffering but before the object is uploaded completely. If
     * the value is set to <code>standard</code>, the object is available for
     * downloading only when it is uploaded completely. The default value for this
     * header is <code>standard</code>.</p> <p>To use this header, you must also set
     * the HTTP <code>Transfer-Encoding</code> header to <code>chunked</code>.</p>
     */
    inline void SetUploadAvailability(UploadAvailability&& value) { m_uploadAvailabilityHasBeenSet = true; m_uploadAvailability = std::move(value); }

    /**
     * <p>Indicates the availability of an object while it is still uploading. If the
     * value is set to <code>streaming</code>, the object is available for downloading
     * after some initial buffering but before the object is uploaded completely. If
     * the value is set to <code>standard</code>, the object is available for
     * downloading only when it is uploaded completely. The default value for this
     * header is <code>standard</code>.</p> <p>To use this header, you must also set
     * the HTTP <code>Transfer-Encoding</code> header to <code>chunked</code>.</p>
     */
    inline PutObjectRequest& WithUploadAvailability(const UploadAvailability& value) { SetUploadAvailability(value); return *this;}

    /**
     * <p>Indicates the availability of an object while it is still uploading. If the
     * value is set to <code>streaming</code>, the object is available for downloading
     * after some initial buffering but before the object is uploaded completely. If
     * the value is set to <code>standard</code>, the object is available for
     * downloading only when it is uploaded completely. The default value for this
     * header is <code>standard</code>.</p> <p>To use this header, you must also set
     * the HTTP <code>Transfer-Encoding</code> header to <code>chunked</code>.</p>
     */
    inline PutObjectRequest& WithUploadAvailability(UploadAvailability&& value) { SetUploadAvailability(std::move(value)); return *this;}

  private:


    Aws::String m_path;
    bool m_pathHasBeenSet;

    Aws::String m_cacheControl;
    bool m_cacheControlHasBeenSet;

    StorageClass m_storageClass;
    bool m_storageClassHasBeenSet;

    UploadAvailability m_uploadAvailability;
    bool m_uploadAvailabilityHasBeenSet;
  };

} // namespace Model
} // namespace MediaStoreData
} // namespace Aws
