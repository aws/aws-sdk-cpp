/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <aws/elasticache/model/ProcessedUpdateAction.h>
#include <aws/elasticache/model/UnprocessedUpdateAction.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{
  class BatchStopUpdateActionResult
  {
  public:
    AWS_ELASTICACHE_API BatchStopUpdateActionResult() = default;
    AWS_ELASTICACHE_API BatchStopUpdateActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API BatchStopUpdateActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Update actions that have been processed successfully</p>
     */
    inline const Aws::Vector<ProcessedUpdateAction>& GetProcessedUpdateActions() const { return m_processedUpdateActions; }
    template<typename ProcessedUpdateActionsT = Aws::Vector<ProcessedUpdateAction>>
    void SetProcessedUpdateActions(ProcessedUpdateActionsT&& value) { m_processedUpdateActionsHasBeenSet = true; m_processedUpdateActions = std::forward<ProcessedUpdateActionsT>(value); }
    template<typename ProcessedUpdateActionsT = Aws::Vector<ProcessedUpdateAction>>
    BatchStopUpdateActionResult& WithProcessedUpdateActions(ProcessedUpdateActionsT&& value) { SetProcessedUpdateActions(std::forward<ProcessedUpdateActionsT>(value)); return *this;}
    template<typename ProcessedUpdateActionsT = ProcessedUpdateAction>
    BatchStopUpdateActionResult& AddProcessedUpdateActions(ProcessedUpdateActionsT&& value) { m_processedUpdateActionsHasBeenSet = true; m_processedUpdateActions.emplace_back(std::forward<ProcessedUpdateActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Update actions that haven't been processed successfully</p>
     */
    inline const Aws::Vector<UnprocessedUpdateAction>& GetUnprocessedUpdateActions() const { return m_unprocessedUpdateActions; }
    template<typename UnprocessedUpdateActionsT = Aws::Vector<UnprocessedUpdateAction>>
    void SetUnprocessedUpdateActions(UnprocessedUpdateActionsT&& value) { m_unprocessedUpdateActionsHasBeenSet = true; m_unprocessedUpdateActions = std::forward<UnprocessedUpdateActionsT>(value); }
    template<typename UnprocessedUpdateActionsT = Aws::Vector<UnprocessedUpdateAction>>
    BatchStopUpdateActionResult& WithUnprocessedUpdateActions(UnprocessedUpdateActionsT&& value) { SetUnprocessedUpdateActions(std::forward<UnprocessedUpdateActionsT>(value)); return *this;}
    template<typename UnprocessedUpdateActionsT = UnprocessedUpdateAction>
    BatchStopUpdateActionResult& AddUnprocessedUpdateActions(UnprocessedUpdateActionsT&& value) { m_unprocessedUpdateActionsHasBeenSet = true; m_unprocessedUpdateActions.emplace_back(std::forward<UnprocessedUpdateActionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    BatchStopUpdateActionResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProcessedUpdateAction> m_processedUpdateActions;
    bool m_processedUpdateActionsHasBeenSet = false;

    Aws::Vector<UnprocessedUpdateAction> m_unprocessedUpdateActions;
    bool m_unprocessedUpdateActionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
