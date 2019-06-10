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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/DatasetSchemaSummary.h>
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
namespace Personalize
{
namespace Model
{
  class AWS_PERSONALIZE_API ListSchemasResult
  {
  public:
    ListSchemasResult();
    ListSchemasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSchemasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of schemas.</p>
     */
    inline const Aws::Vector<DatasetSchemaSummary>& GetSchemas() const{ return m_schemas; }

    /**
     * <p>A list of schemas.</p>
     */
    inline void SetSchemas(const Aws::Vector<DatasetSchemaSummary>& value) { m_schemas = value; }

    /**
     * <p>A list of schemas.</p>
     */
    inline void SetSchemas(Aws::Vector<DatasetSchemaSummary>&& value) { m_schemas = std::move(value); }

    /**
     * <p>A list of schemas.</p>
     */
    inline ListSchemasResult& WithSchemas(const Aws::Vector<DatasetSchemaSummary>& value) { SetSchemas(value); return *this;}

    /**
     * <p>A list of schemas.</p>
     */
    inline ListSchemasResult& WithSchemas(Aws::Vector<DatasetSchemaSummary>&& value) { SetSchemas(std::move(value)); return *this;}

    /**
     * <p>A list of schemas.</p>
     */
    inline ListSchemasResult& AddSchemas(const DatasetSchemaSummary& value) { m_schemas.push_back(value); return *this; }

    /**
     * <p>A list of schemas.</p>
     */
    inline ListSchemasResult& AddSchemas(DatasetSchemaSummary&& value) { m_schemas.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used to get the next set of schemas (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token used to get the next set of schemas (if they exist).</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token used to get the next set of schemas (if they exist).</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token used to get the next set of schemas (if they exist).</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token used to get the next set of schemas (if they exist).</p>
     */
    inline ListSchemasResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used to get the next set of schemas (if they exist).</p>
     */
    inline ListSchemasResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used to get the next set of schemas (if they exist).</p>
     */
    inline ListSchemasResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DatasetSchemaSummary> m_schemas;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
