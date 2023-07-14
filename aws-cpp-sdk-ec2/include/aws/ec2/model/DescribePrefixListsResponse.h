﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/PrefixList.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class AWS_EC2_API DescribePrefixListsResponse
  {
  public:
    DescribePrefixListsResponse();
    DescribePrefixListsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribePrefixListsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribePrefixListsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribePrefixListsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribePrefixListsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>All available prefix lists.</p>
     */
    inline const Aws::Vector<PrefixList>& GetPrefixLists() const{ return m_prefixLists; }

    /**
     * <p>All available prefix lists.</p>
     */
    inline void SetPrefixLists(const Aws::Vector<PrefixList>& value) { m_prefixLists = value; }

    /**
     * <p>All available prefix lists.</p>
     */
    inline void SetPrefixLists(Aws::Vector<PrefixList>&& value) { m_prefixLists = std::move(value); }

    /**
     * <p>All available prefix lists.</p>
     */
    inline DescribePrefixListsResponse& WithPrefixLists(const Aws::Vector<PrefixList>& value) { SetPrefixLists(value); return *this;}

    /**
     * <p>All available prefix lists.</p>
     */
    inline DescribePrefixListsResponse& WithPrefixLists(Aws::Vector<PrefixList>&& value) { SetPrefixLists(std::move(value)); return *this;}

    /**
     * <p>All available prefix lists.</p>
     */
    inline DescribePrefixListsResponse& AddPrefixLists(const PrefixList& value) { m_prefixLists.push_back(value); return *this; }

    /**
     * <p>All available prefix lists.</p>
     */
    inline DescribePrefixListsResponse& AddPrefixLists(PrefixList&& value) { m_prefixLists.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribePrefixListsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribePrefixListsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<PrefixList> m_prefixLists;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
