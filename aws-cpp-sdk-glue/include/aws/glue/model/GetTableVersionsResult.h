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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TableVersion.h>
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
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API GetTableVersionsResult
  {
  public:
    GetTableVersionsResult();
    GetTableVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTableVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of strings identifying available versions of the specified table.</p>
     */
    inline const Aws::Vector<TableVersion>& GetTableVersions() const{ return m_tableVersions; }

    /**
     * <p>A list of strings identifying available versions of the specified table.</p>
     */
    inline void SetTableVersions(const Aws::Vector<TableVersion>& value) { m_tableVersions = value; }

    /**
     * <p>A list of strings identifying available versions of the specified table.</p>
     */
    inline void SetTableVersions(Aws::Vector<TableVersion>&& value) { m_tableVersions = std::move(value); }

    /**
     * <p>A list of strings identifying available versions of the specified table.</p>
     */
    inline GetTableVersionsResult& WithTableVersions(const Aws::Vector<TableVersion>& value) { SetTableVersions(value); return *this;}

    /**
     * <p>A list of strings identifying available versions of the specified table.</p>
     */
    inline GetTableVersionsResult& WithTableVersions(Aws::Vector<TableVersion>&& value) { SetTableVersions(std::move(value)); return *this;}

    /**
     * <p>A list of strings identifying available versions of the specified table.</p>
     */
    inline GetTableVersionsResult& AddTableVersions(const TableVersion& value) { m_tableVersions.push_back(value); return *this; }

    /**
     * <p>A list of strings identifying available versions of the specified table.</p>
     */
    inline GetTableVersionsResult& AddTableVersions(TableVersion&& value) { m_tableVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if the list of available versions does not include the
     * last one.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if the list of available versions does not include the
     * last one.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if the list of available versions does not include the
     * last one.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if the list of available versions does not include the
     * last one.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if the list of available versions does not include the
     * last one.</p>
     */
    inline GetTableVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if the list of available versions does not include the
     * last one.</p>
     */
    inline GetTableVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if the list of available versions does not include the
     * last one.</p>
     */
    inline GetTableVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TableVersion> m_tableVersions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
