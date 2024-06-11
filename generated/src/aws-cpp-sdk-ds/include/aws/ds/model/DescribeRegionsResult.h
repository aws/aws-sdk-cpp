/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/RegionDescription.h>
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
  class DescribeRegionsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeRegionsResult();
    AWS_DIRECTORYSERVICE_API DescribeRegionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeRegionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of Region information related to the directory for each replicated
     * Region.</p>
     */
    inline const Aws::Vector<RegionDescription>& GetRegionsDescription() const{ return m_regionsDescription; }
    inline void SetRegionsDescription(const Aws::Vector<RegionDescription>& value) { m_regionsDescription = value; }
    inline void SetRegionsDescription(Aws::Vector<RegionDescription>&& value) { m_regionsDescription = std::move(value); }
    inline DescribeRegionsResult& WithRegionsDescription(const Aws::Vector<RegionDescription>& value) { SetRegionsDescription(value); return *this;}
    inline DescribeRegionsResult& WithRegionsDescription(Aws::Vector<RegionDescription>&& value) { SetRegionsDescription(std::move(value)); return *this;}
    inline DescribeRegionsResult& AddRegionsDescription(const RegionDescription& value) { m_regionsDescription.push_back(value); return *this; }
    inline DescribeRegionsResult& AddRegionsDescription(RegionDescription&& value) { m_regionsDescription.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to <a>DescribeRegions</a>
     * to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeRegionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeRegionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeRegionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRegionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRegionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRegionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RegionDescription> m_regionsDescription;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
