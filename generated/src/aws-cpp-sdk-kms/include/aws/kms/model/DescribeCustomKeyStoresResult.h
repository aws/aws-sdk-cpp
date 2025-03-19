/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/CustomKeyStoresListEntry.h>
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
namespace KMS
{
namespace Model
{
  class DescribeCustomKeyStoresResult
  {
  public:
    AWS_KMS_API DescribeCustomKeyStoresResult() = default;
    AWS_KMS_API DescribeCustomKeyStoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API DescribeCustomKeyStoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains metadata about each custom key store.</p>
     */
    inline const Aws::Vector<CustomKeyStoresListEntry>& GetCustomKeyStores() const { return m_customKeyStores; }
    template<typename CustomKeyStoresT = Aws::Vector<CustomKeyStoresListEntry>>
    void SetCustomKeyStores(CustomKeyStoresT&& value) { m_customKeyStoresHasBeenSet = true; m_customKeyStores = std::forward<CustomKeyStoresT>(value); }
    template<typename CustomKeyStoresT = Aws::Vector<CustomKeyStoresListEntry>>
    DescribeCustomKeyStoresResult& WithCustomKeyStores(CustomKeyStoresT&& value) { SetCustomKeyStores(std::forward<CustomKeyStoresT>(value)); return *this;}
    template<typename CustomKeyStoresT = CustomKeyStoresListEntry>
    DescribeCustomKeyStoresResult& AddCustomKeyStores(CustomKeyStoresT&& value) { m_customKeyStoresHasBeenSet = true; m_customKeyStores.emplace_back(std::forward<CustomKeyStoresT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    DescribeCustomKeyStoresResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether there are more items in the list. When this
     * value is true, the list in this response is truncated. To get more items, pass
     * the value of the <code>NextMarker</code> element in this response to the
     * <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline bool GetTruncated() const { return m_truncated; }
    inline void SetTruncated(bool value) { m_truncatedHasBeenSet = true; m_truncated = value; }
    inline DescribeCustomKeyStoresResult& WithTruncated(bool value) { SetTruncated(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCustomKeyStoresResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomKeyStoresListEntry> m_customKeyStores;
    bool m_customKeyStoresHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    bool m_truncated{false};
    bool m_truncatedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
