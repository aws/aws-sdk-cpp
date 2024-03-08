/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/EnabledBaselineSummary.h>
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
  class ListEnabledBaselinesResult
  {
  public:
    AWS_CONTROLTOWER_API ListEnabledBaselinesResult();
    AWS_CONTROLTOWER_API ListEnabledBaselinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API ListEnabledBaselinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Retuens a list of summaries of <code>EnabledBaseline</code> resources.</p>
     */
    inline const Aws::Vector<EnabledBaselineSummary>& GetEnabledBaselines() const{ return m_enabledBaselines; }

    /**
     * <p>Retuens a list of summaries of <code>EnabledBaseline</code> resources.</p>
     */
    inline void SetEnabledBaselines(const Aws::Vector<EnabledBaselineSummary>& value) { m_enabledBaselines = value; }

    /**
     * <p>Retuens a list of summaries of <code>EnabledBaseline</code> resources.</p>
     */
    inline void SetEnabledBaselines(Aws::Vector<EnabledBaselineSummary>&& value) { m_enabledBaselines = std::move(value); }

    /**
     * <p>Retuens a list of summaries of <code>EnabledBaseline</code> resources.</p>
     */
    inline ListEnabledBaselinesResult& WithEnabledBaselines(const Aws::Vector<EnabledBaselineSummary>& value) { SetEnabledBaselines(value); return *this;}

    /**
     * <p>Retuens a list of summaries of <code>EnabledBaseline</code> resources.</p>
     */
    inline ListEnabledBaselinesResult& WithEnabledBaselines(Aws::Vector<EnabledBaselineSummary>&& value) { SetEnabledBaselines(std::move(value)); return *this;}

    /**
     * <p>Retuens a list of summaries of <code>EnabledBaseline</code> resources.</p>
     */
    inline ListEnabledBaselinesResult& AddEnabledBaselines(const EnabledBaselineSummary& value) { m_enabledBaselines.push_back(value); return *this; }

    /**
     * <p>Retuens a list of summaries of <code>EnabledBaseline</code> resources.</p>
     */
    inline ListEnabledBaselinesResult& AddEnabledBaselines(EnabledBaselineSummary&& value) { m_enabledBaselines.push_back(std::move(value)); return *this; }


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
    inline ListEnabledBaselinesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token.</p>
     */
    inline ListEnabledBaselinesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token.</p>
     */
    inline ListEnabledBaselinesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListEnabledBaselinesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListEnabledBaselinesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListEnabledBaselinesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<EnabledBaselineSummary> m_enabledBaselines;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
