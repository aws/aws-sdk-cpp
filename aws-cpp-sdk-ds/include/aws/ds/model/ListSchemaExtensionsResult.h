/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DIRECTORYSERVICE_API ListSchemaExtensionsResult
  {
  public:
    ListSchemaExtensionsResult();
    ListSchemaExtensionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSchemaExtensionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the schema extensions applied to the directory.</p>
     */
    inline const Aws::Vector<SchemaExtensionInfo>& GetSchemaExtensionsInfo() const{ return m_schemaExtensionsInfo; }

    /**
     * <p>Information about the schema extensions applied to the directory.</p>
     */
    inline void SetSchemaExtensionsInfo(const Aws::Vector<SchemaExtensionInfo>& value) { m_schemaExtensionsInfo = value; }

    /**
     * <p>Information about the schema extensions applied to the directory.</p>
     */
    inline void SetSchemaExtensionsInfo(Aws::Vector<SchemaExtensionInfo>&& value) { m_schemaExtensionsInfo = std::move(value); }

    /**
     * <p>Information about the schema extensions applied to the directory.</p>
     */
    inline ListSchemaExtensionsResult& WithSchemaExtensionsInfo(const Aws::Vector<SchemaExtensionInfo>& value) { SetSchemaExtensionsInfo(value); return *this;}

    /**
     * <p>Information about the schema extensions applied to the directory.</p>
     */
    inline ListSchemaExtensionsResult& WithSchemaExtensionsInfo(Aws::Vector<SchemaExtensionInfo>&& value) { SetSchemaExtensionsInfo(std::move(value)); return *this;}

    /**
     * <p>Information about the schema extensions applied to the directory.</p>
     */
    inline ListSchemaExtensionsResult& AddSchemaExtensionsInfo(const SchemaExtensionInfo& value) { m_schemaExtensionsInfo.push_back(value); return *this; }

    /**
     * <p>Information about the schema extensions applied to the directory.</p>
     */
    inline ListSchemaExtensionsResult& AddSchemaExtensionsInfo(SchemaExtensionInfo&& value) { m_schemaExtensionsInfo.push_back(std::move(value)); return *this; }


    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <code>ListSchemaExtensions</code> to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <code>ListSchemaExtensions</code> to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <code>ListSchemaExtensions</code> to retrieve the next set of items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <code>ListSchemaExtensions</code> to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <code>ListSchemaExtensions</code> to retrieve the next set of items.</p>
     */
    inline ListSchemaExtensionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <code>ListSchemaExtensions</code> to retrieve the next set of items.</p>
     */
    inline ListSchemaExtensionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <code>ListSchemaExtensions</code> to retrieve the next set of items.</p>
     */
    inline ListSchemaExtensionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SchemaExtensionInfo> m_schemaExtensionsInfo;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
