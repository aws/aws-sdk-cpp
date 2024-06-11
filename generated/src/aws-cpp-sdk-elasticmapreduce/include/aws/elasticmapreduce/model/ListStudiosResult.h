﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/StudioSummary.h>
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
  class ListStudiosResult
  {
  public:
    AWS_EMR_API ListStudiosResult();
    AWS_EMR_API ListStudiosResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ListStudiosResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of Studio summary objects.</p>
     */
    inline const Aws::Vector<StudioSummary>& GetStudios() const{ return m_studios; }
    inline void SetStudios(const Aws::Vector<StudioSummary>& value) { m_studios = value; }
    inline void SetStudios(Aws::Vector<StudioSummary>&& value) { m_studios = std::move(value); }
    inline ListStudiosResult& WithStudios(const Aws::Vector<StudioSummary>& value) { SetStudios(value); return *this;}
    inline ListStudiosResult& WithStudios(Aws::Vector<StudioSummary>&& value) { SetStudios(std::move(value)); return *this;}
    inline ListStudiosResult& AddStudios(const StudioSummary& value) { m_studios.push_back(value); return *this; }
    inline ListStudiosResult& AddStudios(StudioSummary&& value) { m_studios.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline ListStudiosResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListStudiosResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListStudiosResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListStudiosResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListStudiosResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListStudiosResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<StudioSummary> m_studios;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
