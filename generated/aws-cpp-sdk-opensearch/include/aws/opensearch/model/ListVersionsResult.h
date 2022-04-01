/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p> Container for the parameters for response received from the <code>
   * <a>ListVersions</a> </code> operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListVersionsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API ListVersionsResult
  {
  public:
    ListVersionsResult();
    ListVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<Aws::String>& GetVersions() const{ return m_versions; }

    
    inline void SetVersions(const Aws::Vector<Aws::String>& value) { m_versions = value; }

    
    inline void SetVersions(Aws::Vector<Aws::String>&& value) { m_versions = std::move(value); }

    
    inline ListVersionsResult& WithVersions(const Aws::Vector<Aws::String>& value) { SetVersions(value); return *this;}

    
    inline ListVersionsResult& WithVersions(Aws::Vector<Aws::String>&& value) { SetVersions(std::move(value)); return *this;}

    
    inline ListVersionsResult& AddVersions(const Aws::String& value) { m_versions.push_back(value); return *this; }

    
    inline ListVersionsResult& AddVersions(Aws::String&& value) { m_versions.push_back(std::move(value)); return *this; }

    
    inline ListVersionsResult& AddVersions(const char* value) { m_versions.push_back(value); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_versions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
