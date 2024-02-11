/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/SupportedInstanceType.h>
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
  class ListSupportedInstanceTypesResult
  {
  public:
    AWS_EMR_API ListSupportedInstanceTypesResult();
    AWS_EMR_API ListSupportedInstanceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ListSupportedInstanceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of instance types that the release specified in
     * <code>ListSupportedInstanceTypesInput$ReleaseLabel</code> supports, filtered by
     * Amazon Web Services Region.</p>
     */
    inline const Aws::Vector<SupportedInstanceType>& GetSupportedInstanceTypes() const{ return m_supportedInstanceTypes; }

    /**
     * <p>The list of instance types that the release specified in
     * <code>ListSupportedInstanceTypesInput$ReleaseLabel</code> supports, filtered by
     * Amazon Web Services Region.</p>
     */
    inline void SetSupportedInstanceTypes(const Aws::Vector<SupportedInstanceType>& value) { m_supportedInstanceTypes = value; }

    /**
     * <p>The list of instance types that the release specified in
     * <code>ListSupportedInstanceTypesInput$ReleaseLabel</code> supports, filtered by
     * Amazon Web Services Region.</p>
     */
    inline void SetSupportedInstanceTypes(Aws::Vector<SupportedInstanceType>&& value) { m_supportedInstanceTypes = std::move(value); }

    /**
     * <p>The list of instance types that the release specified in
     * <code>ListSupportedInstanceTypesInput$ReleaseLabel</code> supports, filtered by
     * Amazon Web Services Region.</p>
     */
    inline ListSupportedInstanceTypesResult& WithSupportedInstanceTypes(const Aws::Vector<SupportedInstanceType>& value) { SetSupportedInstanceTypes(value); return *this;}

    /**
     * <p>The list of instance types that the release specified in
     * <code>ListSupportedInstanceTypesInput$ReleaseLabel</code> supports, filtered by
     * Amazon Web Services Region.</p>
     */
    inline ListSupportedInstanceTypesResult& WithSupportedInstanceTypes(Aws::Vector<SupportedInstanceType>&& value) { SetSupportedInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>The list of instance types that the release specified in
     * <code>ListSupportedInstanceTypesInput$ReleaseLabel</code> supports, filtered by
     * Amazon Web Services Region.</p>
     */
    inline ListSupportedInstanceTypesResult& AddSupportedInstanceTypes(const SupportedInstanceType& value) { m_supportedInstanceTypes.push_back(value); return *this; }

    /**
     * <p>The list of instance types that the release specified in
     * <code>ListSupportedInstanceTypesInput$ReleaseLabel</code> supports, filtered by
     * Amazon Web Services Region.</p>
     */
    inline ListSupportedInstanceTypesResult& AddSupportedInstanceTypes(SupportedInstanceType&& value) { m_supportedInstanceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that marks the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The pagination token that marks the next set of results to retrieve.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The pagination token that marks the next set of results to retrieve.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The pagination token that marks the next set of results to retrieve.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The pagination token that marks the next set of results to retrieve.</p>
     */
    inline ListSupportedInstanceTypesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token that marks the next set of results to retrieve.</p>
     */
    inline ListSupportedInstanceTypesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token that marks the next set of results to retrieve.</p>
     */
    inline ListSupportedInstanceTypesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSupportedInstanceTypesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSupportedInstanceTypesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSupportedInstanceTypesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SupportedInstanceType> m_supportedInstanceTypes;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
