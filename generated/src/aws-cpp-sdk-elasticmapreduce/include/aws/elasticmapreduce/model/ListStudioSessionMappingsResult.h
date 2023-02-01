/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/SessionMappingSummary.h>
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
  class ListStudioSessionMappingsResult
  {
  public:
    AWS_EMR_API ListStudioSessionMappingsResult();
    AWS_EMR_API ListStudioSessionMappingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ListStudioSessionMappingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of session mapping summary objects. Each object includes session
     * mapping details such as creation time, identity type (user or group), and Amazon
     * EMR Studio ID.</p>
     */
    inline const Aws::Vector<SessionMappingSummary>& GetSessionMappings() const{ return m_sessionMappings; }

    /**
     * <p>A list of session mapping summary objects. Each object includes session
     * mapping details such as creation time, identity type (user or group), and Amazon
     * EMR Studio ID.</p>
     */
    inline void SetSessionMappings(const Aws::Vector<SessionMappingSummary>& value) { m_sessionMappings = value; }

    /**
     * <p>A list of session mapping summary objects. Each object includes session
     * mapping details such as creation time, identity type (user or group), and Amazon
     * EMR Studio ID.</p>
     */
    inline void SetSessionMappings(Aws::Vector<SessionMappingSummary>&& value) { m_sessionMappings = std::move(value); }

    /**
     * <p>A list of session mapping summary objects. Each object includes session
     * mapping details such as creation time, identity type (user or group), and Amazon
     * EMR Studio ID.</p>
     */
    inline ListStudioSessionMappingsResult& WithSessionMappings(const Aws::Vector<SessionMappingSummary>& value) { SetSessionMappings(value); return *this;}

    /**
     * <p>A list of session mapping summary objects. Each object includes session
     * mapping details such as creation time, identity type (user or group), and Amazon
     * EMR Studio ID.</p>
     */
    inline ListStudioSessionMappingsResult& WithSessionMappings(Aws::Vector<SessionMappingSummary>&& value) { SetSessionMappings(std::move(value)); return *this;}

    /**
     * <p>A list of session mapping summary objects. Each object includes session
     * mapping details such as creation time, identity type (user or group), and Amazon
     * EMR Studio ID.</p>
     */
    inline ListStudioSessionMappingsResult& AddSessionMappings(const SessionMappingSummary& value) { m_sessionMappings.push_back(value); return *this; }

    /**
     * <p>A list of session mapping summary objects. Each object includes session
     * mapping details such as creation time, identity type (user or group), and Amazon
     * EMR Studio ID.</p>
     */
    inline ListStudioSessionMappingsResult& AddSessionMappings(SessionMappingSummary&& value) { m_sessionMappings.push_back(std::move(value)); return *this; }


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
    inline ListStudioSessionMappingsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListStudioSessionMappingsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListStudioSessionMappingsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<SessionMappingSummary> m_sessionMappings;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
