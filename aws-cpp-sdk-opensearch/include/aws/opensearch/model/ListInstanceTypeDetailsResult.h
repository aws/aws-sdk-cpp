/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/InstanceTypeDetails.h>
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
  class AWS_OPENSEARCHSERVICE_API ListInstanceTypeDetailsResult
  {
  public:
    ListInstanceTypeDetailsResult();
    ListInstanceTypeDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListInstanceTypeDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<InstanceTypeDetails>& GetInstanceTypeDetails() const{ return m_instanceTypeDetails; }

    
    inline void SetInstanceTypeDetails(const Aws::Vector<InstanceTypeDetails>& value) { m_instanceTypeDetails = value; }

    
    inline void SetInstanceTypeDetails(Aws::Vector<InstanceTypeDetails>&& value) { m_instanceTypeDetails = std::move(value); }

    
    inline ListInstanceTypeDetailsResult& WithInstanceTypeDetails(const Aws::Vector<InstanceTypeDetails>& value) { SetInstanceTypeDetails(value); return *this;}

    
    inline ListInstanceTypeDetailsResult& WithInstanceTypeDetails(Aws::Vector<InstanceTypeDetails>&& value) { SetInstanceTypeDetails(std::move(value)); return *this;}

    
    inline ListInstanceTypeDetailsResult& AddInstanceTypeDetails(const InstanceTypeDetails& value) { m_instanceTypeDetails.push_back(value); return *this; }

    
    inline ListInstanceTypeDetailsResult& AddInstanceTypeDetails(InstanceTypeDetails&& value) { m_instanceTypeDetails.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListInstanceTypeDetailsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListInstanceTypeDetailsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListInstanceTypeDetailsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InstanceTypeDetails> m_instanceTypeDetails;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
