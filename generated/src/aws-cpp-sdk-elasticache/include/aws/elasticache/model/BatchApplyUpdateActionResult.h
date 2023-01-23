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
  class BatchApplyUpdateActionResult
  {
  public:
    AWS_ELASTICACHE_API BatchApplyUpdateActionResult();
    AWS_ELASTICACHE_API BatchApplyUpdateActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API BatchApplyUpdateActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Update actions that have been processed successfully</p>
     */
    inline const Aws::Vector<ProcessedUpdateAction>& GetProcessedUpdateActions() const{ return m_processedUpdateActions; }

    /**
     * <p>Update actions that have been processed successfully</p>
     */
    inline void SetProcessedUpdateActions(const Aws::Vector<ProcessedUpdateAction>& value) { m_processedUpdateActions = value; }

    /**
     * <p>Update actions that have been processed successfully</p>
     */
    inline void SetProcessedUpdateActions(Aws::Vector<ProcessedUpdateAction>&& value) { m_processedUpdateActions = std::move(value); }

    /**
     * <p>Update actions that have been processed successfully</p>
     */
    inline BatchApplyUpdateActionResult& WithProcessedUpdateActions(const Aws::Vector<ProcessedUpdateAction>& value) { SetProcessedUpdateActions(value); return *this;}

    /**
     * <p>Update actions that have been processed successfully</p>
     */
    inline BatchApplyUpdateActionResult& WithProcessedUpdateActions(Aws::Vector<ProcessedUpdateAction>&& value) { SetProcessedUpdateActions(std::move(value)); return *this;}

    /**
     * <p>Update actions that have been processed successfully</p>
     */
    inline BatchApplyUpdateActionResult& AddProcessedUpdateActions(const ProcessedUpdateAction& value) { m_processedUpdateActions.push_back(value); return *this; }

    /**
     * <p>Update actions that have been processed successfully</p>
     */
    inline BatchApplyUpdateActionResult& AddProcessedUpdateActions(ProcessedUpdateAction&& value) { m_processedUpdateActions.push_back(std::move(value)); return *this; }


    /**
     * <p>Update actions that haven't been processed successfully</p>
     */
    inline const Aws::Vector<UnprocessedUpdateAction>& GetUnprocessedUpdateActions() const{ return m_unprocessedUpdateActions; }

    /**
     * <p>Update actions that haven't been processed successfully</p>
     */
    inline void SetUnprocessedUpdateActions(const Aws::Vector<UnprocessedUpdateAction>& value) { m_unprocessedUpdateActions = value; }

    /**
     * <p>Update actions that haven't been processed successfully</p>
     */
    inline void SetUnprocessedUpdateActions(Aws::Vector<UnprocessedUpdateAction>&& value) { m_unprocessedUpdateActions = std::move(value); }

    /**
     * <p>Update actions that haven't been processed successfully</p>
     */
    inline BatchApplyUpdateActionResult& WithUnprocessedUpdateActions(const Aws::Vector<UnprocessedUpdateAction>& value) { SetUnprocessedUpdateActions(value); return *this;}

    /**
     * <p>Update actions that haven't been processed successfully</p>
     */
    inline BatchApplyUpdateActionResult& WithUnprocessedUpdateActions(Aws::Vector<UnprocessedUpdateAction>&& value) { SetUnprocessedUpdateActions(std::move(value)); return *this;}

    /**
     * <p>Update actions that haven't been processed successfully</p>
     */
    inline BatchApplyUpdateActionResult& AddUnprocessedUpdateActions(const UnprocessedUpdateAction& value) { m_unprocessedUpdateActions.push_back(value); return *this; }

    /**
     * <p>Update actions that haven't been processed successfully</p>
     */
    inline BatchApplyUpdateActionResult& AddUnprocessedUpdateActions(UnprocessedUpdateAction&& value) { m_unprocessedUpdateActions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline BatchApplyUpdateActionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline BatchApplyUpdateActionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ProcessedUpdateAction> m_processedUpdateActions;

    Aws::Vector<UnprocessedUpdateAction> m_unprocessedUpdateActions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
