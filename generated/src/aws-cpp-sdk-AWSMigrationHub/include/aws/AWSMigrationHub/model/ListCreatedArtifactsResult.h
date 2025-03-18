/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/AWSMigrationHub/model/CreatedArtifact.h>
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
namespace MigrationHub
{
namespace Model
{
  class ListCreatedArtifactsResult
  {
  public:
    AWS_MIGRATIONHUB_API ListCreatedArtifactsResult() = default;
    AWS_MIGRATIONHUB_API ListCreatedArtifactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API ListCreatedArtifactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more created artifacts than the max result, return the next
     * token to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCreatedArtifactsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of created artifacts up to the maximum number of results specified in
     * the request.</p>
     */
    inline const Aws::Vector<CreatedArtifact>& GetCreatedArtifactList() const { return m_createdArtifactList; }
    template<typename CreatedArtifactListT = Aws::Vector<CreatedArtifact>>
    void SetCreatedArtifactList(CreatedArtifactListT&& value) { m_createdArtifactListHasBeenSet = true; m_createdArtifactList = std::forward<CreatedArtifactListT>(value); }
    template<typename CreatedArtifactListT = Aws::Vector<CreatedArtifact>>
    ListCreatedArtifactsResult& WithCreatedArtifactList(CreatedArtifactListT&& value) { SetCreatedArtifactList(std::forward<CreatedArtifactListT>(value)); return *this;}
    template<typename CreatedArtifactListT = CreatedArtifact>
    ListCreatedArtifactsResult& AddCreatedArtifactList(CreatedArtifactListT&& value) { m_createdArtifactListHasBeenSet = true; m_createdArtifactList.emplace_back(std::forward<CreatedArtifactListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCreatedArtifactsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CreatedArtifact> m_createdArtifactList;
    bool m_createdArtifactListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
