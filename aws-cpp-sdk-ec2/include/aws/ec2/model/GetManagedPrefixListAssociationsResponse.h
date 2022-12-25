/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/PrefixListAssociation.h>
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
  class GetManagedPrefixListAssociationsResponse
  {
  public:
    AWS_EC2_API GetManagedPrefixListAssociationsResponse();
    AWS_EC2_API GetManagedPrefixListAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetManagedPrefixListAssociationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the associations.</p>
     */
    inline const Aws::Vector<PrefixListAssociation>& GetPrefixListAssociations() const{ return m_prefixListAssociations; }

    /**
     * <p>Information about the associations.</p>
     */
    inline void SetPrefixListAssociations(const Aws::Vector<PrefixListAssociation>& value) { m_prefixListAssociations = value; }

    /**
     * <p>Information about the associations.</p>
     */
    inline void SetPrefixListAssociations(Aws::Vector<PrefixListAssociation>&& value) { m_prefixListAssociations = std::move(value); }

    /**
     * <p>Information about the associations.</p>
     */
    inline GetManagedPrefixListAssociationsResponse& WithPrefixListAssociations(const Aws::Vector<PrefixListAssociation>& value) { SetPrefixListAssociations(value); return *this;}

    /**
     * <p>Information about the associations.</p>
     */
    inline GetManagedPrefixListAssociationsResponse& WithPrefixListAssociations(Aws::Vector<PrefixListAssociation>&& value) { SetPrefixListAssociations(std::move(value)); return *this;}

    /**
     * <p>Information about the associations.</p>
     */
    inline GetManagedPrefixListAssociationsResponse& AddPrefixListAssociations(const PrefixListAssociation& value) { m_prefixListAssociations.push_back(value); return *this; }

    /**
     * <p>Information about the associations.</p>
     */
    inline GetManagedPrefixListAssociationsResponse& AddPrefixListAssociations(PrefixListAssociation&& value) { m_prefixListAssociations.push_back(std::move(value)); return *this; }


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
    inline GetManagedPrefixListAssociationsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetManagedPrefixListAssociationsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetManagedPrefixListAssociationsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetManagedPrefixListAssociationsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetManagedPrefixListAssociationsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<PrefixListAssociation> m_prefixListAssociations;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
