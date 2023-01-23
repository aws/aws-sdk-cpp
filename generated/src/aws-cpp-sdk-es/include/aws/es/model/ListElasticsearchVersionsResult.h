/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListElasticsearchVersionsResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ListElasticsearchVersionsResult();
    AWS_ELASTICSEARCHSERVICE_API ListElasticsearchVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API ListElasticsearchVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
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
