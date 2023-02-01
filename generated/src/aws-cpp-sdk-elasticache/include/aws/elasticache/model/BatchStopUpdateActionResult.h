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
    AWS_ELASTICACHE_API BatchStopUpdateActionResult();
    AWS_ELASTICACHE_API BatchStopUpdateActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API BatchStopUpdateActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline BatchStopUpdateActionResult& WithProcessedUpdateActions(const Aws::Vector<ProcessedUpdateAction>& value) { SetProcessedUpdateActions(value); return *this;}

    /**
     * <p>Update actions that have been processed successfully</p>
     */
    inline BatchStopUpdateActionResult& WithProcessedUpdateActions(Aws::Vector<ProcessedUpdateAction>&& value) { SetProcessedUpdateActions(std::move(value)); return *this;}

    /**
     * <p>Update actions that have been processed successfully</p>
     */
    inline BatchStopUpdateActionResult& AddProcessedUpdateActions(const ProcessedUpdateAction& value) { m_processedUpdateActions.push_back(value); return *this; }

    /**
     * <p>Update actions that have been processed successfully</p>
     */
    inline BatchStopUpdateActionResult& AddProcessedUpdateActions(ProcessedUpdateAction&& value) { m_processedUpdateActions.push_back(std::move(value)); return *this; }


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
    inline BatchStopUpdateActionResult& WithUnprocessedUpdateActions(const Aws::Vector<UnprocessedUpdateAction>& value) { SetUnprocessedUpdateActions(value); return *this;}

    /**
     * <p>Update actions that haven't been processed successfully</p>
     */
    inline BatchStopUpdateActionResult& WithUnprocessedUpdateActions(Aws::Vector<UnprocessedUpdateAction>&& value) { SetUnprocessedUpdateActions(std::move(value)); return *this;}

    /**
     * <p>Update actions that haven't been processed successfully</p>
     */
    inline BatchStopUpdateActionResult& AddUnprocessedUpdateActions(const UnprocessedUpdateAction& value) { m_unprocessedUpdateActions.push_back(value); return *this; }

    /**
     * <p>Update actions that haven't been processed successfully</p>
     */
    inline BatchStopUpdateActionResult& AddUnprocessedUpdateActions(UnprocessedUpdateAction&& value) { m_unprocessedUpdateActions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline BatchStopUpdateActionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline BatchStopUpdateActionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ProcessedUpdateAction> m_processedUpdateActions;

    Aws::Vector<UnprocessedUpdateAction> m_unprocessedUpdateActions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
