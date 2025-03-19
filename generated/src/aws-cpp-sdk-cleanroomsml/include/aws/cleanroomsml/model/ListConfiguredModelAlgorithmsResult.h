/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/ConfiguredModelAlgorithmSummary.h>
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
  class ListConfiguredModelAlgorithmsResult
  {
  public:
    AWS_CLEANROOMSML_API ListConfiguredModelAlgorithmsResult() = default;
    AWS_CLEANROOMSML_API ListConfiguredModelAlgorithmsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API ListConfiguredModelAlgorithmsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token value used to access the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfiguredModelAlgorithmsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of configured model algorithms.</p>
     */
    inline const Aws::Vector<ConfiguredModelAlgorithmSummary>& GetConfiguredModelAlgorithms() const { return m_configuredModelAlgorithms; }
    template<typename ConfiguredModelAlgorithmsT = Aws::Vector<ConfiguredModelAlgorithmSummary>>
    void SetConfiguredModelAlgorithms(ConfiguredModelAlgorithmsT&& value) { m_configuredModelAlgorithmsHasBeenSet = true; m_configuredModelAlgorithms = std::forward<ConfiguredModelAlgorithmsT>(value); }
    template<typename ConfiguredModelAlgorithmsT = Aws::Vector<ConfiguredModelAlgorithmSummary>>
    ListConfiguredModelAlgorithmsResult& WithConfiguredModelAlgorithms(ConfiguredModelAlgorithmsT&& value) { SetConfiguredModelAlgorithms(std::forward<ConfiguredModelAlgorithmsT>(value)); return *this;}
    template<typename ConfiguredModelAlgorithmsT = ConfiguredModelAlgorithmSummary>
    ListConfiguredModelAlgorithmsResult& AddConfiguredModelAlgorithms(ConfiguredModelAlgorithmsT&& value) { m_configuredModelAlgorithmsHasBeenSet = true; m_configuredModelAlgorithms.emplace_back(std::forward<ConfiguredModelAlgorithmsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConfiguredModelAlgorithmsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ConfiguredModelAlgorithmSummary> m_configuredModelAlgorithms;
    bool m_configuredModelAlgorithmsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
