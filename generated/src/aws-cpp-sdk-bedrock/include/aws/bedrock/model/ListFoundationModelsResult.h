/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/FoundationModelSummary.h>
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
namespace Bedrock
{
namespace Model
{
  class ListFoundationModelsResult
  {
  public:
    AWS_BEDROCK_API ListFoundationModelsResult();
    AWS_BEDROCK_API ListFoundationModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListFoundationModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of Amazon Bedrock foundation models.</p>
     */
    inline const Aws::Vector<FoundationModelSummary>& GetModelSummaries() const{ return m_modelSummaries; }

    /**
     * <p>A list of Amazon Bedrock foundation models.</p>
     */
    inline void SetModelSummaries(const Aws::Vector<FoundationModelSummary>& value) { m_modelSummaries = value; }

    /**
     * <p>A list of Amazon Bedrock foundation models.</p>
     */
    inline void SetModelSummaries(Aws::Vector<FoundationModelSummary>&& value) { m_modelSummaries = std::move(value); }

    /**
     * <p>A list of Amazon Bedrock foundation models.</p>
     */
    inline ListFoundationModelsResult& WithModelSummaries(const Aws::Vector<FoundationModelSummary>& value) { SetModelSummaries(value); return *this;}

    /**
     * <p>A list of Amazon Bedrock foundation models.</p>
     */
    inline ListFoundationModelsResult& WithModelSummaries(Aws::Vector<FoundationModelSummary>&& value) { SetModelSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Bedrock foundation models.</p>
     */
    inline ListFoundationModelsResult& AddModelSummaries(const FoundationModelSummary& value) { m_modelSummaries.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Bedrock foundation models.</p>
     */
    inline ListFoundationModelsResult& AddModelSummaries(FoundationModelSummary&& value) { m_modelSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListFoundationModelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListFoundationModelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListFoundationModelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FoundationModelSummary> m_modelSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
