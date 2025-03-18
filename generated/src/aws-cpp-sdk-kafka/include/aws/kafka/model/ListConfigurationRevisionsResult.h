/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/model/ConfigurationRevision.h>
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
namespace Kafka
{
namespace Model
{
  class ListConfigurationRevisionsResult
  {
  public:
    AWS_KAFKA_API ListConfigurationRevisionsResult() = default;
    AWS_KAFKA_API ListConfigurationRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListConfigurationRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>Paginated results marker.</p>
         
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfigurationRevisionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>List of ConfigurationRevision objects.</p>
         
     */
    inline const Aws::Vector<ConfigurationRevision>& GetRevisions() const { return m_revisions; }
    template<typename RevisionsT = Aws::Vector<ConfigurationRevision>>
    void SetRevisions(RevisionsT&& value) { m_revisionsHasBeenSet = true; m_revisions = std::forward<RevisionsT>(value); }
    template<typename RevisionsT = Aws::Vector<ConfigurationRevision>>
    ListConfigurationRevisionsResult& WithRevisions(RevisionsT&& value) { SetRevisions(std::forward<RevisionsT>(value)); return *this;}
    template<typename RevisionsT = ConfigurationRevision>
    ListConfigurationRevisionsResult& AddRevisions(RevisionsT&& value) { m_revisionsHasBeenSet = true; m_revisions.emplace_back(std::forward<RevisionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConfigurationRevisionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ConfigurationRevision> m_revisions;
    bool m_revisionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
