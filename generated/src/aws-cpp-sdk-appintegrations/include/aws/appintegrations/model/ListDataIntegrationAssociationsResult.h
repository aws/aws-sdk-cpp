/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/DataIntegrationAssociationSummary.h>
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
namespace AppIntegrationsService
{
namespace Model
{
  class ListDataIntegrationAssociationsResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ListDataIntegrationAssociationsResult() = default;
    AWS_APPINTEGRATIONSSERVICE_API ListDataIntegrationAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API ListDataIntegrationAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) and unique ID of the DataIntegration
     * association.</p>
     */
    inline const Aws::Vector<DataIntegrationAssociationSummary>& GetDataIntegrationAssociations() const { return m_dataIntegrationAssociations; }
    template<typename DataIntegrationAssociationsT = Aws::Vector<DataIntegrationAssociationSummary>>
    void SetDataIntegrationAssociations(DataIntegrationAssociationsT&& value) { m_dataIntegrationAssociationsHasBeenSet = true; m_dataIntegrationAssociations = std::forward<DataIntegrationAssociationsT>(value); }
    template<typename DataIntegrationAssociationsT = Aws::Vector<DataIntegrationAssociationSummary>>
    ListDataIntegrationAssociationsResult& WithDataIntegrationAssociations(DataIntegrationAssociationsT&& value) { SetDataIntegrationAssociations(std::forward<DataIntegrationAssociationsT>(value)); return *this;}
    template<typename DataIntegrationAssociationsT = DataIntegrationAssociationSummary>
    ListDataIntegrationAssociationsResult& AddDataIntegrationAssociations(DataIntegrationAssociationsT&& value) { m_dataIntegrationAssociationsHasBeenSet = true; m_dataIntegrationAssociations.emplace_back(std::forward<DataIntegrationAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataIntegrationAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataIntegrationAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataIntegrationAssociationSummary> m_dataIntegrationAssociations;
    bool m_dataIntegrationAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
