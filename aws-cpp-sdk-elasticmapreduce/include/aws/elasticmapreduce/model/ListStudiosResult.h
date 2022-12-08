/**
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


    /**
     * <p>The list of Studio summary objects.</p>
     */
    inline const Aws::Vector<StudioSummary>& GetStudios() const{ return m_studios; }

    /**
     * <p>The list of Studio summary objects.</p>
     */
    inline void SetStudios(const Aws::Vector<StudioSummary>& value) { m_studios = value; }

    /**
     * <p>The list of Studio summary objects.</p>
     */
    inline void SetStudios(Aws::Vector<StudioSummary>&& value) { m_studios = std::move(value); }

    /**
     * <p>The list of Studio summary objects.</p>
     */
    inline ListStudiosResult& WithStudios(const Aws::Vector<StudioSummary>& value) { SetStudios(value); return *this;}

    /**
     * <p>The list of Studio summary objects.</p>
     */
    inline ListStudiosResult& WithStudios(Aws::Vector<StudioSummary>&& value) { SetStudios(std::move(value)); return *this;}

    /**
     * <p>The list of Studio summary objects.</p>
     */
    inline ListStudiosResult& AddStudios(const StudioSummary& value) { m_studios.push_back(value); return *this; }

    /**
     * <p>The list of Studio summary objects.</p>
     */
    inline ListStudiosResult& AddStudios(StudioSummary&& value) { m_studios.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListStudiosResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListStudiosResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListStudiosResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<StudioSummary> m_studios;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
