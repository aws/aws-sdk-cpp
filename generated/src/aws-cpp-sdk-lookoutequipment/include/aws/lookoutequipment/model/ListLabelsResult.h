/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/LabelSummary.h>
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
  class ListLabelsResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListLabelsResult();
    AWS_LOOKOUTEQUIPMENT_API ListLabelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListLabelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline ListLabelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline ListLabelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline ListLabelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> A summary of the items in the label group. </p>  <p>If you don't
     * supply the <code>LabelGroupName</code> request parameter, or if you supply the
     * name of a label group that doesn't exist, <code>ListLabels</code> returns an
     * empty array in <code>LabelSummaries</code>.</p> 
     */
    inline const Aws::Vector<LabelSummary>& GetLabelSummaries() const{ return m_labelSummaries; }

    /**
     * <p> A summary of the items in the label group. </p>  <p>If you don't
     * supply the <code>LabelGroupName</code> request parameter, or if you supply the
     * name of a label group that doesn't exist, <code>ListLabels</code> returns an
     * empty array in <code>LabelSummaries</code>.</p> 
     */
    inline void SetLabelSummaries(const Aws::Vector<LabelSummary>& value) { m_labelSummaries = value; }

    /**
     * <p> A summary of the items in the label group. </p>  <p>If you don't
     * supply the <code>LabelGroupName</code> request parameter, or if you supply the
     * name of a label group that doesn't exist, <code>ListLabels</code> returns an
     * empty array in <code>LabelSummaries</code>.</p> 
     */
    inline void SetLabelSummaries(Aws::Vector<LabelSummary>&& value) { m_labelSummaries = std::move(value); }

    /**
     * <p> A summary of the items in the label group. </p>  <p>If you don't
     * supply the <code>LabelGroupName</code> request parameter, or if you supply the
     * name of a label group that doesn't exist, <code>ListLabels</code> returns an
     * empty array in <code>LabelSummaries</code>.</p> 
     */
    inline ListLabelsResult& WithLabelSummaries(const Aws::Vector<LabelSummary>& value) { SetLabelSummaries(value); return *this;}

    /**
     * <p> A summary of the items in the label group. </p>  <p>If you don't
     * supply the <code>LabelGroupName</code> request parameter, or if you supply the
     * name of a label group that doesn't exist, <code>ListLabels</code> returns an
     * empty array in <code>LabelSummaries</code>.</p> 
     */
    inline ListLabelsResult& WithLabelSummaries(Aws::Vector<LabelSummary>&& value) { SetLabelSummaries(std::move(value)); return *this;}

    /**
     * <p> A summary of the items in the label group. </p>  <p>If you don't
     * supply the <code>LabelGroupName</code> request parameter, or if you supply the
     * name of a label group that doesn't exist, <code>ListLabels</code> returns an
     * empty array in <code>LabelSummaries</code>.</p> 
     */
    inline ListLabelsResult& AddLabelSummaries(const LabelSummary& value) { m_labelSummaries.push_back(value); return *this; }

    /**
     * <p> A summary of the items in the label group. </p>  <p>If you don't
     * supply the <code>LabelGroupName</code> request parameter, or if you supply the
     * name of a label group that doesn't exist, <code>ListLabels</code> returns an
     * empty array in <code>LabelSummaries</code>.</p> 
     */
    inline ListLabelsResult& AddLabelSummaries(LabelSummary&& value) { m_labelSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListLabelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListLabelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListLabelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<LabelSummary> m_labelSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
