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
    AWS_CLOUDFRONTKEYVALUESTORE_API PutKeyResult() = default;
    AWS_CLOUDFRONTKEYVALUESTORE_API PutKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDFRONTKEYVALUESTORE_API PutKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Number of key value pairs in the Key Value Store after the successful
     * put.</p>
     */
    inline int GetItemCount() const { return m_itemCount; }
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline PutKeyResult& WithItemCount(int value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total size of the Key Value Store after the successful put, in bytes.</p>
     */
    inline long long GetTotalSizeInBytes() const { return m_totalSizeInBytes; }
    inline void SetTotalSizeInBytes(long long value) { m_totalSizeInBytesHasBeenSet = true; m_totalSizeInBytes = value; }
    inline PutKeyResult& WithTotalSizeInBytes(long long value) { SetTotalSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version identifier of the Key Value Store after the successful
     * put.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    PutKeyResult& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutKeyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_itemCount{0};
    bool m_itemCountHasBeenSet = false;

    long long m_totalSizeInBytes{0};
    bool m_totalSizeInBytesHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFrontKeyValueStore
} // namespace Aws
