/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/Command.h>
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
namespace EMR
{
namespace Model
{
  /**
   * <p>This output contains the bootstrap actions detail.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListBootstrapActionsOutput">AWS
   * API Reference</a></p>
   */
  class ListBootstrapActionsResult
  {
  public:
    AWS_EMR_API ListBootstrapActionsResult() = default;
    AWS_EMR_API ListBootstrapActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ListBootstrapActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The bootstrap actions associated with the cluster.</p>
     */
    inline const Aws::Vector<Command>& GetBootstrapActions() const { return m_bootstrapActions; }
    template<typename BootstrapActionsT = Aws::Vector<Command>>
    void SetBootstrapActions(BootstrapActionsT&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions = std::forward<BootstrapActionsT>(value); }
    template<typename BootstrapActionsT = Aws::Vector<Command>>
    ListBootstrapActionsResult& WithBootstrapActions(BootstrapActionsT&& value) { SetBootstrapActions(std::forward<BootstrapActionsT>(value)); return *this;}
    template<typename BootstrapActionsT = Command>
    ListBootstrapActionsResult& AddBootstrapActions(BootstrapActionsT&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions.emplace_back(std::forward<BootstrapActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListBootstrapActionsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBootstrapActionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Command> m_bootstrapActions;
    bool m_bootstrapActionsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
