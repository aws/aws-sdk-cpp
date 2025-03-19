/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/MetadataTransferJobSummary.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class ListMetadataTransferJobsResult
  {
  public:
    AWS_IOTTWINMAKER_API ListMetadataTransferJobsResult() = default;
    AWS_IOTTWINMAKER_API ListMetadataTransferJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ListMetadataTransferJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The metadata transfer job summaries.</p>
     */
    inline const Aws::Vector<MetadataTransferJobSummary>& GetMetadataTransferJobSummaries() const { return m_metadataTransferJobSummaries; }
    template<typename MetadataTransferJobSummariesT = Aws::Vector<MetadataTransferJobSummary>>
    void SetMetadataTransferJobSummaries(MetadataTransferJobSummariesT&& value) { m_metadataTransferJobSummariesHasBeenSet = true; m_metadataTransferJobSummaries = std::forward<MetadataTransferJobSummariesT>(value); }
    template<typename MetadataTransferJobSummariesT = Aws::Vector<MetadataTransferJobSummary>>
    ListMetadataTransferJobsResult& WithMetadataTransferJobSummaries(MetadataTransferJobSummariesT&& value) { SetMetadataTransferJobSummaries(std::forward<MetadataTransferJobSummariesT>(value)); return *this;}
    template<typename MetadataTransferJobSummariesT = MetadataTransferJobSummary>
    ListMetadataTransferJobsResult& AddMetadataTransferJobSummaries(MetadataTransferJobSummariesT&& value) { m_metadataTransferJobSummariesHasBeenSet = true; m_metadataTransferJobSummaries.emplace_back(std::forward<MetadataTransferJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMetadataTransferJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMetadataTransferJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MetadataTransferJobSummary> m_metadataTransferJobSummaries;
    bool m_metadataTransferJobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
