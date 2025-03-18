/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/ControlMetadata.h>
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
namespace AuditManager
{
namespace Model
{
  class ListControlsResult
  {
  public:
    AWS_AUDITMANAGER_API ListControlsResult() = default;
    AWS_AUDITMANAGER_API ListControlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListControlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of metadata that the <code>ListControls</code> API returns for each
     * control.</p>
     */
    inline const Aws::Vector<ControlMetadata>& GetControlMetadataList() const { return m_controlMetadataList; }
    template<typename ControlMetadataListT = Aws::Vector<ControlMetadata>>
    void SetControlMetadataList(ControlMetadataListT&& value) { m_controlMetadataListHasBeenSet = true; m_controlMetadataList = std::forward<ControlMetadataListT>(value); }
    template<typename ControlMetadataListT = Aws::Vector<ControlMetadata>>
    ListControlsResult& WithControlMetadataList(ControlMetadataListT&& value) { SetControlMetadataList(std::forward<ControlMetadataListT>(value)); return *this;}
    template<typename ControlMetadataListT = ControlMetadata>
    ListControlsResult& AddControlMetadataList(ControlMetadataListT&& value) { m_controlMetadataListHasBeenSet = true; m_controlMetadataList.emplace_back(std::forward<ControlMetadataListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListControlsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListControlsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ControlMetadata> m_controlMetadataList;
    bool m_controlMetadataListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
