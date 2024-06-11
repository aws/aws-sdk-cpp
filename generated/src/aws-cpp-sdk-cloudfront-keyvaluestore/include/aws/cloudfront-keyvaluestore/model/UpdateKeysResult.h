/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudFrontKeyValueStore
{
namespace Model
{
  /**
   * <p>Metadata information about a Key Value Store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-keyvaluestore-2022-07-26/UpdateKeysResponse">AWS
   * API Reference</a></p>
   */
  class UpdateKeysResult
  {
  public:
    AWS_CLOUDFRONTKEYVALUESTORE_API UpdateKeysResult();
    AWS_CLOUDFRONTKEYVALUESTORE_API UpdateKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDFRONTKEYVALUESTORE_API UpdateKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Number of key value pairs in the Key Value Store after the successful
     * update.</p>
     */
    inline int GetItemCount() const{ return m_itemCount; }
    inline void SetItemCount(int value) { m_itemCount = value; }
    inline UpdateKeysResult& WithItemCount(int value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total size of the Key Value Store after the successful update, in bytes.</p>
     */
    inline long long GetTotalSizeInBytes() const{ return m_totalSizeInBytes; }
    inline void SetTotalSizeInBytes(long long value) { m_totalSizeInBytes = value; }
    inline UpdateKeysResult& WithTotalSizeInBytes(long long value) { SetTotalSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version identifier of the Key Value Store after the successful
     * update.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline void SetETag(const Aws::String& value) { m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTag.assign(value); }
    inline UpdateKeysResult& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline UpdateKeysResult& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline UpdateKeysResult& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateKeysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateKeysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateKeysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_itemCount;

    long long m_totalSizeInBytes;

    Aws::String m_eTag;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFrontKeyValueStore
} // namespace Aws
