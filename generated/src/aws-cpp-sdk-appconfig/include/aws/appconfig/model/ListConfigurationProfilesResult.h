﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfig/model/ConfigurationProfileSummary.h>
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
namespace AppConfig
{
namespace Model
{
  class ListConfigurationProfilesResult
  {
  public:
    AWS_APPCONFIG_API ListConfigurationProfilesResult();
    AWS_APPCONFIG_API ListConfigurationProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API ListConfigurationProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The elements from this collection.</p>
     */
    inline const Aws::Vector<ConfigurationProfileSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<ConfigurationProfileSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<ConfigurationProfileSummary>&& value) { m_items = std::move(value); }
    inline ListConfigurationProfilesResult& WithItems(const Aws::Vector<ConfigurationProfileSummary>& value) { SetItems(value); return *this;}
    inline ListConfigurationProfilesResult& WithItems(Aws::Vector<ConfigurationProfileSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListConfigurationProfilesResult& AddItems(const ConfigurationProfileSummary& value) { m_items.push_back(value); return *this; }
    inline ListConfigurationProfilesResult& AddItems(ConfigurationProfileSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListConfigurationProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListConfigurationProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListConfigurationProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListConfigurationProfilesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListConfigurationProfilesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListConfigurationProfilesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationProfileSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
