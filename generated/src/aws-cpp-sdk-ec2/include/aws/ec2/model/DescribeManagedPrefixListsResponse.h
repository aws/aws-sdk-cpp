/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ManagedPrefixList.h>
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
  class DescribeManagedPrefixListsResponse
  {
  public:
    AWS_EC2_API DescribeManagedPrefixListsResponse();
    AWS_EC2_API DescribeManagedPrefixListsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeManagedPrefixListsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline DescribeManagedPrefixListsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeManagedPrefixListsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeManagedPrefixListsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the prefix lists.</p>
     */
    inline const Aws::Vector<ManagedPrefixList>& GetPrefixLists() const{ return m_prefixLists; }

    /**
     * <p>Information about the prefix lists.</p>
     */
    inline void SetPrefixLists(const Aws::Vector<ManagedPrefixList>& value) { m_prefixLists = value; }

    /**
     * <p>Information about the prefix lists.</p>
     */
    inline void SetPrefixLists(Aws::Vector<ManagedPrefixList>&& value) { m_prefixLists = std::move(value); }

    /**
     * <p>Information about the prefix lists.</p>
     */
    inline DescribeManagedPrefixListsResponse& WithPrefixLists(const Aws::Vector<ManagedPrefixList>& value) { SetPrefixLists(value); return *this;}

    /**
     * <p>Information about the prefix lists.</p>
     */
    inline DescribeManagedPrefixListsResponse& WithPrefixLists(Aws::Vector<ManagedPrefixList>&& value) { SetPrefixLists(std::move(value)); return *this;}

    /**
     * <p>Information about the prefix lists.</p>
     */
    inline DescribeManagedPrefixListsResponse& AddPrefixLists(const ManagedPrefixList& value) { m_prefixLists.push_back(value); return *this; }

    /**
     * <p>Information about the prefix lists.</p>
     */
    inline DescribeManagedPrefixListsResponse& AddPrefixLists(ManagedPrefixList&& value) { m_prefixLists.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeManagedPrefixListsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeManagedPrefixListsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ManagedPrefixList> m_prefixLists;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
