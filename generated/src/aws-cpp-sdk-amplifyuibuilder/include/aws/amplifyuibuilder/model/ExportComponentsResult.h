﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/Component.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{
  class ExportComponentsResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ExportComponentsResult();
    AWS_AMPLIFYUIBUILDER_API ExportComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API ExportComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the configuration of the exported components.</p>
     */
    inline const Aws::Vector<Component>& GetEntities() const{ return m_entities; }
    inline void SetEntities(const Aws::Vector<Component>& value) { m_entities = value; }
    inline void SetEntities(Aws::Vector<Component>&& value) { m_entities = std::move(value); }
    inline ExportComponentsResult& WithEntities(const Aws::Vector<Component>& value) { SetEntities(value); return *this;}
    inline ExportComponentsResult& WithEntities(Aws::Vector<Component>&& value) { SetEntities(std::move(value)); return *this;}
    inline ExportComponentsResult& AddEntities(const Component& value) { m_entities.push_back(value); return *this; }
    inline ExportComponentsResult& AddEntities(Component&& value) { m_entities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ExportComponentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ExportComponentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ExportComponentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ExportComponentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ExportComponentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ExportComponentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Component> m_entities;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
