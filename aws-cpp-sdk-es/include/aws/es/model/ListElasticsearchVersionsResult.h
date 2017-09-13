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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p> Container for the parameters for response received from <code>
   * <a>ListElasticsearchVersions</a> </code> operation. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListElasticsearchVersionsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API ListElasticsearchVersionsResult
  {
  public:
    ListElasticsearchVersionsResult();
    ListElasticsearchVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListElasticsearchVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<Aws::String>& GetElasticsearchVersions() const{ return m_elasticsearchVersions; }

    
    inline void SetElasticsearchVersions(const Aws::Vector<Aws::String>& value) { m_elasticsearchVersions = value; }

    
    inline void SetElasticsearchVersions(Aws::Vector<Aws::String>&& value) { m_elasticsearchVersions = std::move(value); }

    
    inline ListElasticsearchVersionsResult& WithElasticsearchVersions(const Aws::Vector<Aws::String>& value) { SetElasticsearchVersions(value); return *this;}

    
    inline ListElasticsearchVersionsResult& WithElasticsearchVersions(Aws::Vector<Aws::String>&& value) { SetElasticsearchVersions(std::move(value)); return *this;}

    
    inline ListElasticsearchVersionsResult& AddElasticsearchVersions(const Aws::String& value) { m_elasticsearchVersions.push_back(value); return *this; }

    
    inline ListElasticsearchVersionsResult& AddElasticsearchVersions(Aws::String&& value) { m_elasticsearchVersions.push_back(std::move(value)); return *this; }

    
    inline ListElasticsearchVersionsResult& AddElasticsearchVersions(const char* value) { m_elasticsearchVersions.push_back(value); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListElasticsearchVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListElasticsearchVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListElasticsearchVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_elasticsearchVersions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
