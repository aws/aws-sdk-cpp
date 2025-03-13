/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/ConfiguredModelAlgorithmAssociationSummary.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class ListConfiguredModelAlgorithmAssociationsResult
  {
  public:
    AWS_CLEANROOMSML_API ListConfiguredModelAlgorithmAssociationsResult() = default;
    AWS_CLEANROOMSML_API ListConfiguredModelAlgorithmAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListConfiguredModelAlgorithmAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfiguredModelAlgorithmAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of configured model algorithm associations.</p>
     */
    inline const Aws::Vector<ConfiguredModelAlgorithmAssociationSummary>& GetConfiguredModelAlgorithmAssociations() const { return m_configuredModelAlgorithmAssociations; }
    template<typename ConfiguredModelAlgorithmAssociationsT = Aws::Vector<ConfiguredModelAlgorithmAssociationSummary>>
    void SetConfiguredModelAlgorithmAssociations(ConfiguredModelAlgorithmAssociationsT&& value) { m_configuredModelAlgorithmAssociationsHasBeenSet = true; m_configuredModelAlgorithmAssociations = std::forward<ConfiguredModelAlgorithmAssociationsT>(value); }
    template<typename ConfiguredModelAlgorithmAssociationsT = Aws::Vector<ConfiguredModelAlgorithmAssociationSummary>>
    ListConfiguredModelAlgorithmAssociationsResult& WithConfiguredModelAlgorithmAssociations(ConfiguredModelAlgorithmAssociationsT&& value) { SetConfiguredModelAlgorithmAssociations(std::forward<ConfiguredModelAlgorithmAssociationsT>(value)); return *this;}
    template<typename ConfiguredModelAlgorithmAssociationsT = ConfiguredModelAlgorithmAssociationSummary>
    ListConfiguredModelAlgorithmAssociationsResult& AddConfiguredModelAlgorithmAssociations(ConfiguredModelAlgorithmAssociationsT&& value) { m_configuredModelAlgorithmAssociationsHasBeenSet = true; m_configuredModelAlgorithmAssociations.emplace_back(std::forward<ConfiguredModelAlgorithmAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConfiguredModelAlgorithmAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ConfiguredModelAlgorithmAssociationSummary> m_configuredModelAlgorithmAssociations;
    bool m_configuredModelAlgorithmAssociationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
