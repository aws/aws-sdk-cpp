/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-keyvaluestore-2022-07-26/DescribeKeyValueStoreResponse">AWS
   * API Reference</a></p>
   */
  class DescribeKeyValueStoreResult
  {
  public:
    AWS_CLOUDFRONTKEYVALUESTORE_API DescribeKeyValueStoreResult();
    AWS_CLOUDFRONTKEYVALUESTORE_API DescribeKeyValueStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDFRONTKEYVALUESTORE_API DescribeKeyValueStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeKeyValueStoreResult& WithItemCount(int value) { SetItemCount(value); return *this;}


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
    inline DescribeKeyValueStoreResult& WithTotalSizeInBytes(long long value) { SetTotalSizeInBytes(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline const Aws::String& GetKvsARN() const{ return m_kvsARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline void SetKvsARN(const Aws::String& value) { m_kvsARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline void SetKvsARN(Aws::String&& value) { m_kvsARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline void SetKvsARN(const char* value) { m_kvsARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline DescribeKeyValueStoreResult& WithKvsARN(const Aws::String& value) { SetKvsARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline DescribeKeyValueStoreResult& WithKvsARN(Aws::String&& value) { SetKvsARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline DescribeKeyValueStoreResult& WithKvsARN(const char* value) { SetKvsARN(value); return *this;}


    /**
     * <p>Date and time when the Key Value Store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>Date and time when the Key Value Store was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_created = value; }

    /**
     * <p>Date and time when the Key Value Store was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_created = std::move(value); }

    /**
     * <p>Date and time when the Key Value Store was created.</p>
     */
    inline DescribeKeyValueStoreResult& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>Date and time when the Key Value Store was created.</p>
     */
    inline DescribeKeyValueStoreResult& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The version identifier for the current version of the Key Value Store.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The version identifier for the current version of the Key Value Store.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The version identifier for the current version of the Key Value Store.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The version identifier for the current version of the Key Value Store.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The version identifier for the current version of the Key Value Store.</p>
     */
    inline DescribeKeyValueStoreResult& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The version identifier for the current version of the Key Value Store.</p>
     */
    inline DescribeKeyValueStoreResult& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The version identifier for the current version of the Key Value Store.</p>
     */
    inline DescribeKeyValueStoreResult& WithETag(const char* value) { SetETag(value); return *this;}


    /**
     * <p>Date and time when the key value pairs in the Key Value Store was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>Date and time when the key value pairs in the Key Value Store was last
     * modified.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModified = value; }

    /**
     * <p>Date and time when the key value pairs in the Key Value Store was last
     * modified.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModified = std::move(value); }

    /**
     * <p>Date and time when the key value pairs in the Key Value Store was last
     * modified.</p>
     */
    inline DescribeKeyValueStoreResult& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>Date and time when the key value pairs in the Key Value Store was last
     * modified.</p>
     */
    inline DescribeKeyValueStoreResult& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>The current status of the Key Value Store.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the Key Value Store.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The current status of the Key Value Store.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the Key Value Store.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The current status of the Key Value Store.</p>
     */
    inline DescribeKeyValueStoreResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the Key Value Store.</p>
     */
    inline DescribeKeyValueStoreResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the Key Value Store.</p>
     */
    inline DescribeKeyValueStoreResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The reason for Key Value Store creation failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason for Key Value Store creation failure.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>The reason for Key Value Store creation failure.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>The reason for Key Value Store creation failure.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>The reason for Key Value Store creation failure.</p>
     */
    inline DescribeKeyValueStoreResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason for Key Value Store creation failure.</p>
     */
    inline DescribeKeyValueStoreResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason for Key Value Store creation failure.</p>
     */
    inline DescribeKeyValueStoreResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeKeyValueStoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeKeyValueStoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeKeyValueStoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_itemCount;

    long long m_totalSizeInBytes;

    Aws::String m_kvsARN;

    Aws::Utils::DateTime m_created;

    Aws::String m_eTag;

    Aws::Utils::DateTime m_lastModified;

    Aws::String m_status;

    Aws::String m_failureReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFrontKeyValueStore
} // namespace Aws
