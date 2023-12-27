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
   * <p>A key value pair.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-keyvaluestore-2022-07-26/GetKeyResponse">AWS
   * API Reference</a></p>
   */
  class GetKeyResult
  {
  public:
    AWS_CLOUDFRONTKEYVALUESTORE_API GetKeyResult();
    AWS_CLOUDFRONTKEYVALUESTORE_API GetKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDFRONTKEYVALUESTORE_API GetKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The key of the key value pair.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key of the key value pair.</p>
     */
    inline void SetKey(const Aws::String& value) { m_key = value; }

    /**
     * <p>The key of the key value pair.</p>
     */
    inline void SetKey(Aws::String&& value) { m_key = std::move(value); }

    /**
     * <p>The key of the key value pair.</p>
     */
    inline void SetKey(const char* value) { m_key.assign(value); }

    /**
     * <p>The key of the key value pair.</p>
     */
    inline GetKeyResult& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key of the key value pair.</p>
     */
    inline GetKeyResult& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key of the key value pair.</p>
     */
    inline GetKeyResult& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value of the key value pair.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the key value pair.</p>
     */
    inline void SetValue(const Aws::String& value) { m_value = value; }

    /**
     * <p>The value of the key value pair.</p>
     */
    inline void SetValue(Aws::String&& value) { m_value = std::move(value); }

    /**
     * <p>The value of the key value pair.</p>
     */
    inline void SetValue(const char* value) { m_value.assign(value); }

    /**
     * <p>The value of the key value pair.</p>
     */
    inline GetKeyResult& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the key value pair.</p>
     */
    inline GetKeyResult& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the key value pair.</p>
     */
    inline GetKeyResult& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>Number of key value pairs in the Key Value Store.</p>
     */
    inline int GetItemCount() const{ return m_itemCount; }

    /**
     * <p>Number of key value pairs in the Key Value Store.</p>
     */
    inline void SetItemCount(int value) { m_itemCount = value; }

    /**
     * <p>Number of key value pairs in the Key Value Store.</p>
     */
    inline GetKeyResult& WithItemCount(int value) { SetItemCount(value); return *this;}


    /**
     * <p>Total size of the Key Value Store in bytes.</p>
     */
    inline long long GetTotalSizeInBytes() const{ return m_totalSizeInBytes; }

    /**
     * <p>Total size of the Key Value Store in bytes.</p>
     */
    inline void SetTotalSizeInBytes(long long value) { m_totalSizeInBytes = value; }

    /**
     * <p>Total size of the Key Value Store in bytes.</p>
     */
    inline GetKeyResult& WithTotalSizeInBytes(long long value) { SetTotalSizeInBytes(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_key;

    Aws::String m_value;

    int m_itemCount;

    long long m_totalSizeInBytes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFrontKeyValueStore
} // namespace Aws
