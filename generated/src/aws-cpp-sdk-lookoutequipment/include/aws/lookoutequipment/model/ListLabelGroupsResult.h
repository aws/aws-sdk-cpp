﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/LabelGroupSummary.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class ListLabelGroupsResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListLabelGroupsResult();
    AWS_LOOKOUTEQUIPMENT_API ListLabelGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListLabelGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An opaque pagination token indicating where to continue the listing of label
     * groups. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLabelGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLabelGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLabelGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A summary of the label groups. </p>
     */
    inline const Aws::Vector<LabelGroupSummary>& GetLabelGroupSummaries() const{ return m_labelGroupSummaries; }
    inline void SetLabelGroupSummaries(const Aws::Vector<LabelGroupSummary>& value) { m_labelGroupSummaries = value; }
    inline void SetLabelGroupSummaries(Aws::Vector<LabelGroupSummary>&& value) { m_labelGroupSummaries = std::move(value); }
    inline ListLabelGroupsResult& WithLabelGroupSummaries(const Aws::Vector<LabelGroupSummary>& value) { SetLabelGroupSummaries(value); return *this;}
    inline ListLabelGroupsResult& WithLabelGroupSummaries(Aws::Vector<LabelGroupSummary>&& value) { SetLabelGroupSummaries(std::move(value)); return *this;}
    inline ListLabelGroupsResult& AddLabelGroupSummaries(const LabelGroupSummary& value) { m_labelGroupSummaries.push_back(value); return *this; }
    inline ListLabelGroupsResult& AddLabelGroupSummaries(LabelGroupSummary&& value) { m_labelGroupSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLabelGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLabelGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLabelGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<LabelGroupSummary> m_labelGroupSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
