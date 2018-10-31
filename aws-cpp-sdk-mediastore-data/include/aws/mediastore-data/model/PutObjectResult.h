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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediastore-data/model/StorageClass.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaStoreData
{
namespace Model
{
  class AWS_MEDIASTOREDATA_API PutObjectResult
  {
  public:
    PutObjectResult();
    PutObjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutObjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The SHA256 digest of the object that is persisted.</p>
     */
    inline const Aws::String& GetContentSHA256() const{ return m_contentSHA256; }

    /**
     * <p>The SHA256 digest of the object that is persisted.</p>
     */
    inline void SetContentSHA256(const Aws::String& value) { m_contentSHA256 = value; }

    /**
     * <p>The SHA256 digest of the object that is persisted.</p>
     */
    inline void SetContentSHA256(Aws::String&& value) { m_contentSHA256 = std::move(value); }

    /**
     * <p>The SHA256 digest of the object that is persisted.</p>
     */
    inline void SetContentSHA256(const char* value) { m_contentSHA256.assign(value); }

    /**
     * <p>The SHA256 digest of the object that is persisted.</p>
     */
    inline PutObjectResult& WithContentSHA256(const Aws::String& value) { SetContentSHA256(value); return *this;}

    /**
     * <p>The SHA256 digest of the object that is persisted.</p>
     */
    inline PutObjectResult& WithContentSHA256(Aws::String&& value) { SetContentSHA256(std::move(value)); return *this;}

    /**
     * <p>The SHA256 digest of the object that is persisted.</p>
     */
    inline PutObjectResult& WithContentSHA256(const char* value) { SetContentSHA256(value); return *this;}


    /**
     * <p>Unique identifier of the object in the container.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>Unique identifier of the object in the container.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>Unique identifier of the object in the container.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>Unique identifier of the object in the container.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>Unique identifier of the object in the container.</p>
     */
    inline PutObjectResult& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>Unique identifier of the object in the container.</p>
     */
    inline PutObjectResult& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of the object in the container.</p>
     */
    inline PutObjectResult& WithETag(const char* value) { SetETag(value); return *this;}


    /**
     * <p>The storage class where the object was persisted. The class should be
     * “Temporal”.</p>
     */
    inline const StorageClass& GetStorageClass() const{ return m_storageClass; }

    /**
     * <p>The storage class where the object was persisted. The class should be
     * “Temporal”.</p>
     */
    inline void SetStorageClass(const StorageClass& value) { m_storageClass = value; }

    /**
     * <p>The storage class where the object was persisted. The class should be
     * “Temporal”.</p>
     */
    inline void SetStorageClass(StorageClass&& value) { m_storageClass = std::move(value); }

    /**
     * <p>The storage class where the object was persisted. The class should be
     * “Temporal”.</p>
     */
    inline PutObjectResult& WithStorageClass(const StorageClass& value) { SetStorageClass(value); return *this;}

    /**
     * <p>The storage class where the object was persisted. The class should be
     * “Temporal”.</p>
     */
    inline PutObjectResult& WithStorageClass(StorageClass&& value) { SetStorageClass(std::move(value)); return *this;}

  private:

    Aws::String m_contentSHA256;

    Aws::String m_eTag;

    StorageClass m_storageClass;
  };

} // namespace Model
} // namespace MediaStoreData
} // namespace Aws
