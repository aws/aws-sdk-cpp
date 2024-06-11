﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/DefinitionInformation.h>
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
  class ListSubscriptionDefinitionsResult
  {
  public:
    AWS_GREENGRASS_API ListSubscriptionDefinitionsResult();
    AWS_GREENGRASS_API ListSubscriptionDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API ListSubscriptionDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Information about a definition.
     */
    inline const Aws::Vector<DefinitionInformation>& GetDefinitions() const{ return m_definitions; }
    inline void SetDefinitions(const Aws::Vector<DefinitionInformation>& value) { m_definitions = value; }
    inline void SetDefinitions(Aws::Vector<DefinitionInformation>&& value) { m_definitions = std::move(value); }
    inline ListSubscriptionDefinitionsResult& WithDefinitions(const Aws::Vector<DefinitionInformation>& value) { SetDefinitions(value); return *this;}
    inline ListSubscriptionDefinitionsResult& WithDefinitions(Aws::Vector<DefinitionInformation>&& value) { SetDefinitions(std::move(value)); return *this;}
    inline ListSubscriptionDefinitionsResult& AddDefinitions(const DefinitionInformation& value) { m_definitions.push_back(value); return *this; }
    inline ListSubscriptionDefinitionsResult& AddDefinitions(DefinitionInformation&& value) { m_definitions.push_back(std::move(value)); return *this; }
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
    inline ListSubscriptionDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSubscriptionDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSubscriptionDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSubscriptionDefinitionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSubscriptionDefinitionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSubscriptionDefinitionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DefinitionInformation> m_definitions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
