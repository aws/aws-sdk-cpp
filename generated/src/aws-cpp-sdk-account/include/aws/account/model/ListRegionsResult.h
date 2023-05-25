/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/account/model/Region.h>
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
namespace Account
{
namespace Model
{
  class ListRegionsResult
  {
  public:
    AWS_ACCOUNT_API ListRegionsResult();
    AWS_ACCOUNT_API ListRegionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCOUNT_API ListRegionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there is more data to be returned, this will be populated. It should be
     * passed into the <code>next-token</code> request parameter of
     * <code>list-regions</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there is more data to be returned, this will be populated. It should be
     * passed into the <code>next-token</code> request parameter of
     * <code>list-regions</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there is more data to be returned, this will be populated. It should be
     * passed into the <code>next-token</code> request parameter of
     * <code>list-regions</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there is more data to be returned, this will be populated. It should be
     * passed into the <code>next-token</code> request parameter of
     * <code>list-regions</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there is more data to be returned, this will be populated. It should be
     * passed into the <code>next-token</code> request parameter of
     * <code>list-regions</code>.</p>
     */
    inline ListRegionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there is more data to be returned, this will be populated. It should be
     * passed into the <code>next-token</code> request parameter of
     * <code>list-regions</code>.</p>
     */
    inline ListRegionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there is more data to be returned, this will be populated. It should be
     * passed into the <code>next-token</code> request parameter of
     * <code>list-regions</code>.</p>
     */
    inline ListRegionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>This is a list of Regions for a given account, or if the filtered parameter
     * was used, a list of Regions that match the filter criteria set in the
     * <code>filter</code> parameter.</p>
     */
    inline const Aws::Vector<Region>& GetRegions() const{ return m_regions; }

    /**
     * <p>This is a list of Regions for a given account, or if the filtered parameter
     * was used, a list of Regions that match the filter criteria set in the
     * <code>filter</code> parameter.</p>
     */
    inline void SetRegions(const Aws::Vector<Region>& value) { m_regions = value; }

    /**
     * <p>This is a list of Regions for a given account, or if the filtered parameter
     * was used, a list of Regions that match the filter criteria set in the
     * <code>filter</code> parameter.</p>
     */
    inline void SetRegions(Aws::Vector<Region>&& value) { m_regions = std::move(value); }

    /**
     * <p>This is a list of Regions for a given account, or if the filtered parameter
     * was used, a list of Regions that match the filter criteria set in the
     * <code>filter</code> parameter.</p>
     */
    inline ListRegionsResult& WithRegions(const Aws::Vector<Region>& value) { SetRegions(value); return *this;}

    /**
     * <p>This is a list of Regions for a given account, or if the filtered parameter
     * was used, a list of Regions that match the filter criteria set in the
     * <code>filter</code> parameter.</p>
     */
    inline ListRegionsResult& WithRegions(Aws::Vector<Region>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>This is a list of Regions for a given account, or if the filtered parameter
     * was used, a list of Regions that match the filter criteria set in the
     * <code>filter</code> parameter.</p>
     */
    inline ListRegionsResult& AddRegions(const Region& value) { m_regions.push_back(value); return *this; }

    /**
     * <p>This is a list of Regions for a given account, or if the filtered parameter
     * was used, a list of Regions that match the filter criteria set in the
     * <code>filter</code> parameter.</p>
     */
    inline ListRegionsResult& AddRegions(Region&& value) { m_regions.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRegionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRegionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRegionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<Region> m_regions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
