/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/GrantListEntry.h>
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
  class ListGrantsResult
  {
  public:
    AWS_KMS_API ListGrantsResult() = default;
    AWS_KMS_API ListGrantsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API ListGrantsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of grants.</p>
     */
    inline const Aws::Vector<GrantListEntry>& GetGrants() const { return m_grants; }
    template<typename GrantsT = Aws::Vector<GrantListEntry>>
    void SetGrants(GrantsT&& value) { m_grantsHasBeenSet = true; m_grants = std::forward<GrantsT>(value); }
    template<typename GrantsT = Aws::Vector<GrantListEntry>>
    ListGrantsResult& WithGrants(GrantsT&& value) { SetGrants(std::forward<GrantsT>(value)); return *this;}
    template<typename GrantsT = GrantListEntry>
    ListGrantsResult& AddGrants(GrantsT&& value) { m_grantsHasBeenSet = true; m_grants.emplace_back(std::forward<GrantsT>(value)); return *this; }
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
    ListGrantsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
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
    inline ListGrantsResult& WithTruncated(bool value) { SetTruncated(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGrantsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GrantListEntry> m_grants;
    bool m_grantsHasBeenSet = false;

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
