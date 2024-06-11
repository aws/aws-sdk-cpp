﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/InstanceGroup.h>
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
  /**
   * <p>This input determines which instance groups to retrieve.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstanceGroupsOutput">AWS
   * API Reference</a></p>
   */
  class ListInstanceGroupsResult
  {
  public:
    AWS_EMR_API ListInstanceGroupsResult();
    AWS_EMR_API ListInstanceGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ListInstanceGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of instance groups for the cluster and given filters.</p>
     */
    inline const Aws::Vector<InstanceGroup>& GetInstanceGroups() const{ return m_instanceGroups; }
    inline void SetInstanceGroups(const Aws::Vector<InstanceGroup>& value) { m_instanceGroups = value; }
    inline void SetInstanceGroups(Aws::Vector<InstanceGroup>&& value) { m_instanceGroups = std::move(value); }
    inline ListInstanceGroupsResult& WithInstanceGroups(const Aws::Vector<InstanceGroup>& value) { SetInstanceGroups(value); return *this;}
    inline ListInstanceGroupsResult& WithInstanceGroups(Aws::Vector<InstanceGroup>&& value) { SetInstanceGroups(std::move(value)); return *this;}
    inline ListInstanceGroupsResult& AddInstanceGroups(const InstanceGroup& value) { m_instanceGroups.push_back(value); return *this; }
    inline ListInstanceGroupsResult& AddInstanceGroups(InstanceGroup&& value) { m_instanceGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline ListInstanceGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListInstanceGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListInstanceGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListInstanceGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListInstanceGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListInstanceGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceGroup> m_instanceGroups;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
