﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/SchemaExtensionInfo.h>
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
namespace DirectoryService
{
namespace Model
{
  class ListSchemaExtensionsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API ListSchemaExtensionsResult();
    AWS_DIRECTORYSERVICE_API ListSchemaExtensionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API ListSchemaExtensionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the schema extensions applied to the directory.</p>
     */
    inline const Aws::Vector<SchemaExtensionInfo>& GetSchemaExtensionsInfo() const{ return m_schemaExtensionsInfo; }
    inline void SetSchemaExtensionsInfo(const Aws::Vector<SchemaExtensionInfo>& value) { m_schemaExtensionsInfo = value; }
    inline void SetSchemaExtensionsInfo(Aws::Vector<SchemaExtensionInfo>&& value) { m_schemaExtensionsInfo = std::move(value); }
    inline ListSchemaExtensionsResult& WithSchemaExtensionsInfo(const Aws::Vector<SchemaExtensionInfo>& value) { SetSchemaExtensionsInfo(value); return *this;}
    inline ListSchemaExtensionsResult& WithSchemaExtensionsInfo(Aws::Vector<SchemaExtensionInfo>&& value) { SetSchemaExtensionsInfo(std::move(value)); return *this;}
    inline ListSchemaExtensionsResult& AddSchemaExtensionsInfo(const SchemaExtensionInfo& value) { m_schemaExtensionsInfo.push_back(value); return *this; }
    inline ListSchemaExtensionsResult& AddSchemaExtensionsInfo(SchemaExtensionInfo&& value) { m_schemaExtensionsInfo.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <code>ListSchemaExtensions</code> to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSchemaExtensionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSchemaExtensionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSchemaExtensionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSchemaExtensionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSchemaExtensionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSchemaExtensionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SchemaExtensionInfo> m_schemaExtensionsInfo;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
