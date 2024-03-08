/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/BaselineSummary.h>
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
namespace ControlTower
{
namespace Model
{
  class ListBaselinesResult
  {
  public:
    AWS_CONTROLTOWER_API ListBaselinesResult();
    AWS_CONTROLTOWER_API ListBaselinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API ListBaselinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>Baseline</code> object details.</p>
     */
    inline const Aws::Vector<BaselineSummary>& GetBaselines() const{ return m_baselines; }

    /**
     * <p>A list of <code>Baseline</code> object details.</p>
     */
    inline void SetBaselines(const Aws::Vector<BaselineSummary>& value) { m_baselines = value; }

    /**
     * <p>A list of <code>Baseline</code> object details.</p>
     */
    inline void SetBaselines(Aws::Vector<BaselineSummary>&& value) { m_baselines = std::move(value); }

    /**
     * <p>A list of <code>Baseline</code> object details.</p>
     */
    inline ListBaselinesResult& WithBaselines(const Aws::Vector<BaselineSummary>& value) { SetBaselines(value); return *this;}

    /**
     * <p>A list of <code>Baseline</code> object details.</p>
     */
    inline ListBaselinesResult& WithBaselines(Aws::Vector<BaselineSummary>&& value) { SetBaselines(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Baseline</code> object details.</p>
     */
    inline ListBaselinesResult& AddBaselines(const BaselineSummary& value) { m_baselines.push_back(value); return *this; }

    /**
     * <p>A list of <code>Baseline</code> object details.</p>
     */
    inline ListBaselinesResult& AddBaselines(BaselineSummary&& value) { m_baselines.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token.</p>
     */
    inline ListBaselinesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token.</p>
     */
    inline ListBaselinesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token.</p>
     */
    inline ListBaselinesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListBaselinesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListBaselinesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListBaselinesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BaselineSummary> m_baselines;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
