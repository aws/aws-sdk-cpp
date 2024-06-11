﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/InstanceFleet.h>
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
  class ListInstanceFleetsResult
  {
  public:
    AWS_EMR_API ListInstanceFleetsResult();
    AWS_EMR_API ListInstanceFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ListInstanceFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of instance fleets for the cluster and given filters.</p>
     */
    inline const Aws::Vector<InstanceFleet>& GetInstanceFleets() const{ return m_instanceFleets; }
    inline void SetInstanceFleets(const Aws::Vector<InstanceFleet>& value) { m_instanceFleets = value; }
    inline void SetInstanceFleets(Aws::Vector<InstanceFleet>&& value) { m_instanceFleets = std::move(value); }
    inline ListInstanceFleetsResult& WithInstanceFleets(const Aws::Vector<InstanceFleet>& value) { SetInstanceFleets(value); return *this;}
    inline ListInstanceFleetsResult& WithInstanceFleets(Aws::Vector<InstanceFleet>&& value) { SetInstanceFleets(std::move(value)); return *this;}
    inline ListInstanceFleetsResult& AddInstanceFleets(const InstanceFleet& value) { m_instanceFleets.push_back(value); return *this; }
    inline ListInstanceFleetsResult& AddInstanceFleets(InstanceFleet&& value) { m_instanceFleets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline ListInstanceFleetsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListInstanceFleetsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListInstanceFleetsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListInstanceFleetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListInstanceFleetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListInstanceFleetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceFleet> m_instanceFleets;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
