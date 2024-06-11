﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/LaunchAction.h>
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
namespace drs
{
namespace Model
{
  class ListLaunchActionsResult
  {
  public:
    AWS_DRS_API ListLaunchActionsResult();
    AWS_DRS_API ListLaunchActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API ListLaunchActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of resource launch actions.</p>
     */
    inline const Aws::Vector<LaunchAction>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<LaunchAction>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<LaunchAction>&& value) { m_items = std::move(value); }
    inline ListLaunchActionsResult& WithItems(const Aws::Vector<LaunchAction>& value) { SetItems(value); return *this;}
    inline ListLaunchActionsResult& WithItems(Aws::Vector<LaunchAction>&& value) { SetItems(std::move(value)); return *this;}
    inline ListLaunchActionsResult& AddItems(const LaunchAction& value) { m_items.push_back(value); return *this; }
    inline ListLaunchActionsResult& AddItems(LaunchAction&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Next token returned when listing resource launch actions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLaunchActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLaunchActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLaunchActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLaunchActionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLaunchActionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLaunchActionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LaunchAction> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
