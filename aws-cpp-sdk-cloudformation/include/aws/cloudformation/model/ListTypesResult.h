/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/TypeSummary.h>
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
namespace CloudFormation
{
namespace Model
{
  class ListTypesResult
  {
  public:
    AWS_CLOUDFORMATION_API ListTypesResult();
    AWS_CLOUDFORMATION_API ListTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of <code>TypeSummary</code> structures that contain information about
     * the specified extensions.</p>
     */
    inline const Aws::Vector<TypeSummary>& GetTypeSummaries() const{ return m_typeSummaries; }

    /**
     * <p>A list of <code>TypeSummary</code> structures that contain information about
     * the specified extensions.</p>
     */
    inline void SetTypeSummaries(const Aws::Vector<TypeSummary>& value) { m_typeSummaries = value; }

    /**
     * <p>A list of <code>TypeSummary</code> structures that contain information about
     * the specified extensions.</p>
     */
    inline void SetTypeSummaries(Aws::Vector<TypeSummary>&& value) { m_typeSummaries = std::move(value); }

    /**
     * <p>A list of <code>TypeSummary</code> structures that contain information about
     * the specified extensions.</p>
     */
    inline ListTypesResult& WithTypeSummaries(const Aws::Vector<TypeSummary>& value) { SetTypeSummaries(value); return *this;}

    /**
     * <p>A list of <code>TypeSummary</code> structures that contain information about
     * the specified extensions.</p>
     */
    inline ListTypesResult& WithTypeSummaries(Aws::Vector<TypeSummary>&& value) { SetTypeSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of <code>TypeSummary</code> structures that contain information about
     * the specified extensions.</p>
     */
    inline ListTypesResult& AddTypeSummaries(const TypeSummary& value) { m_typeSummaries.push_back(value); return *this; }

    /**
     * <p>A list of <code>TypeSummary</code> structures that contain information about
     * the specified extensions.</p>
     */
    inline ListTypesResult& AddTypeSummaries(TypeSummary&& value) { m_typeSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call this action again and assign that token to the request object's
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call this action again and assign that token to the request object's
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call this action again and assign that token to the request object's
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call this action again and assign that token to the request object's
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call this action again and assign that token to the request object's
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline ListTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call this action again and assign that token to the request object's
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline ListTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call this action again and assign that token to the request object's
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline ListTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListTypesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListTypesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TypeSummary> m_typeSummaries;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
