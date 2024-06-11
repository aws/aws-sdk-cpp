﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/Setting.h>
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
namespace ECS
{
namespace Model
{
  class ListAccountSettingsResult
  {
  public:
    AWS_ECS_API ListAccountSettingsResult();
    AWS_ECS_API ListAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API ListAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The account settings for the resource.</p>
     */
    inline const Aws::Vector<Setting>& GetSettings() const{ return m_settings; }
    inline void SetSettings(const Aws::Vector<Setting>& value) { m_settings = value; }
    inline void SetSettings(Aws::Vector<Setting>&& value) { m_settings = std::move(value); }
    inline ListAccountSettingsResult& WithSettings(const Aws::Vector<Setting>& value) { SetSettings(value); return *this;}
    inline ListAccountSettingsResult& WithSettings(Aws::Vector<Setting>&& value) { SetSettings(std::move(value)); return *this;}
    inline ListAccountSettingsResult& AddSettings(const Setting& value) { m_settings.push_back(value); return *this; }
    inline ListAccountSettingsResult& AddSettings(Setting&& value) { m_settings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListAccountSettings</code> request. When the results of a
     * <code>ListAccountSettings</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAccountSettingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAccountSettingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAccountSettingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAccountSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAccountSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAccountSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Setting> m_settings;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
