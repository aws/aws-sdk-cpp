﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/GroupInformation.h>
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
namespace Greengrass
{
namespace Model
{
  class ListGroupsResult
  {
  public:
    AWS_GREENGRASS_API ListGroupsResult();
    AWS_GREENGRASS_API ListGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API ListGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Information about a group.
     */
    inline const Aws::Vector<GroupInformation>& GetGroups() const{ return m_groups; }
    inline void SetGroups(const Aws::Vector<GroupInformation>& value) { m_groups = value; }
    inline void SetGroups(Aws::Vector<GroupInformation>&& value) { m_groups = std::move(value); }
    inline ListGroupsResult& WithGroups(const Aws::Vector<GroupInformation>& value) { SetGroups(value); return *this;}
    inline ListGroupsResult& WithGroups(Aws::Vector<GroupInformation>&& value) { SetGroups(std::move(value)); return *this;}
    inline ListGroupsResult& AddGroups(const GroupInformation& value) { m_groups.push_back(value); return *this; }
    inline ListGroupsResult& AddGroups(GroupInformation&& value) { m_groups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GroupInformation> m_groups;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
