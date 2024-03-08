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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-keyvaluestore-2022-07-26/PutKeyResponse">AWS
   * API Reference</a></p>
   */
  class PutKeyResult
  {
  public:
    AWS_CLOUDFRONTKEYVALUESTORE_API PutKeyResult();
    AWS_CLOUDFRONTKEYVALUESTORE_API PutKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDFRONTKEYVALUESTORE_API PutKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Number of key value pairs in the Key Value Store after the successful
     * put.</p>
     */
    inline int GetItemCount() const{ return m_itemCount; }

    /**
     * <p>Number of key value pairs in the Key Value Store after the successful
     * put.</p>
     */
    inline void SetItemCount(int value) { m_itemCount = value; }

    /**
     * <p>Number of key value pairs in the Key Value Store after the successful
     * put.</p>
     */
    inline PutKeyResult& WithItemCount(int value) { SetItemCount(value); return *this;}


    /**
     * <p>Total size of the Key Value Store after the successful put, in bytes.</p>
     */
    inline long long GetTotalSizeInBytes() const{ return m_totalSizeInBytes; }

    /**
     * <p>Total size of the Key Value Store after the successful put, in bytes.</p>
     */
    inline void SetTotalSizeInBytes(long long value) { m_totalSizeInBytes = value; }

    /**
     * <p>Total size of the Key Value Store after the successful put, in bytes.</p>
     */
    inline PutKeyResult& WithTotalSizeInBytes(long long value) { SetTotalSizeInBytes(value); return *this;}


    /**
     * <p>The current version identifier of the Key Value Store after the successful
     * put.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The current version identifier of the Key Value Store after the successful
     * put.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The current version identifier of the Key Value Store after the successful
     * put.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The current version identifier of the Key Value Store after the successful
     * put.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The current version identifier of the Key Value Store after the successful
     * put.</p>
     */
    inline PutKeyResult& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current version identifier of the Key Value Store after the successful
     * put.</p>
     */
    inline PutKeyResult& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current version identifier of the Key Value Store after the successful
     * put.</p>
     */
    inline PutKeyResult& WithETag(const char* value) { SetETag(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_itemCount;

    long long m_totalSizeInBytes;

    Aws::String m_eTag;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFrontKeyValueStore
} // namespace Aws
