/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/StackResourceDrift.h>
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
  class DescribeStackResourceDriftsResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStackResourceDriftsResult();
    AWS_CLOUDFORMATION_API DescribeStackResourceDriftsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeStackResourceDriftsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Drift information for the resources that have been checked for drift in the
     * specified stack. This includes actual and expected configuration values for
     * resources where CloudFormation detects drift.</p> <p>For a given stack, there
     * will be one <code>StackResourceDrift</code> for each stack resource that has
     * been checked for drift. Resources that haven't yet been checked for drift aren't
     * included. Resources that do not currently support drift detection aren't
     * checked, and so not included. For a list of resources that support drift
     * detection, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
     * that Support Drift Detection</a>.</p>
     */
    inline const Aws::Vector<StackResourceDrift>& GetStackResourceDrifts() const{ return m_stackResourceDrifts; }

    /**
     * <p>Drift information for the resources that have been checked for drift in the
     * specified stack. This includes actual and expected configuration values for
     * resources where CloudFormation detects drift.</p> <p>For a given stack, there
     * will be one <code>StackResourceDrift</code> for each stack resource that has
     * been checked for drift. Resources that haven't yet been checked for drift aren't
     * included. Resources that do not currently support drift detection aren't
     * checked, and so not included. For a list of resources that support drift
     * detection, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
     * that Support Drift Detection</a>.</p>
     */
    inline void SetStackResourceDrifts(const Aws::Vector<StackResourceDrift>& value) { m_stackResourceDrifts = value; }

    /**
     * <p>Drift information for the resources that have been checked for drift in the
     * specified stack. This includes actual and expected configuration values for
     * resources where CloudFormation detects drift.</p> <p>For a given stack, there
     * will be one <code>StackResourceDrift</code> for each stack resource that has
     * been checked for drift. Resources that haven't yet been checked for drift aren't
     * included. Resources that do not currently support drift detection aren't
     * checked, and so not included. For a list of resources that support drift
     * detection, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
     * that Support Drift Detection</a>.</p>
     */
    inline void SetStackResourceDrifts(Aws::Vector<StackResourceDrift>&& value) { m_stackResourceDrifts = std::move(value); }

    /**
     * <p>Drift information for the resources that have been checked for drift in the
     * specified stack. This includes actual and expected configuration values for
     * resources where CloudFormation detects drift.</p> <p>For a given stack, there
     * will be one <code>StackResourceDrift</code> for each stack resource that has
     * been checked for drift. Resources that haven't yet been checked for drift aren't
     * included. Resources that do not currently support drift detection aren't
     * checked, and so not included. For a list of resources that support drift
     * detection, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
     * that Support Drift Detection</a>.</p>
     */
    inline DescribeStackResourceDriftsResult& WithStackResourceDrifts(const Aws::Vector<StackResourceDrift>& value) { SetStackResourceDrifts(value); return *this;}

    /**
     * <p>Drift information for the resources that have been checked for drift in the
     * specified stack. This includes actual and expected configuration values for
     * resources where CloudFormation detects drift.</p> <p>For a given stack, there
     * will be one <code>StackResourceDrift</code> for each stack resource that has
     * been checked for drift. Resources that haven't yet been checked for drift aren't
     * included. Resources that do not currently support drift detection aren't
     * checked, and so not included. For a list of resources that support drift
     * detection, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
     * that Support Drift Detection</a>.</p>
     */
    inline DescribeStackResourceDriftsResult& WithStackResourceDrifts(Aws::Vector<StackResourceDrift>&& value) { SetStackResourceDrifts(std::move(value)); return *this;}

    /**
     * <p>Drift information for the resources that have been checked for drift in the
     * specified stack. This includes actual and expected configuration values for
     * resources where CloudFormation detects drift.</p> <p>For a given stack, there
     * will be one <code>StackResourceDrift</code> for each stack resource that has
     * been checked for drift. Resources that haven't yet been checked for drift aren't
     * included. Resources that do not currently support drift detection aren't
     * checked, and so not included. For a list of resources that support drift
     * detection, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
     * that Support Drift Detection</a>.</p>
     */
    inline DescribeStackResourceDriftsResult& AddStackResourceDrifts(const StackResourceDrift& value) { m_stackResourceDrifts.push_back(value); return *this; }

    /**
     * <p>Drift information for the resources that have been checked for drift in the
     * specified stack. This includes actual and expected configuration values for
     * resources where CloudFormation detects drift.</p> <p>For a given stack, there
     * will be one <code>StackResourceDrift</code> for each stack resource that has
     * been checked for drift. Resources that haven't yet been checked for drift aren't
     * included. Resources that do not currently support drift detection aren't
     * checked, and so not included. For a list of resources that support drift
     * detection, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
     * that Support Drift Detection</a>.</p>
     */
    inline DescribeStackResourceDriftsResult& AddStackResourceDrifts(StackResourceDrift&& value) { m_stackResourceDrifts.push_back(std::move(value)); return *this; }


    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>DescribeStackResourceDrifts</code> again and assign that token to the
     * request object's <code>NextToken</code> parameter. If the request returns all
     * results, <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>DescribeStackResourceDrifts</code> again and assign that token to the
     * request object's <code>NextToken</code> parameter. If the request returns all
     * results, <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>DescribeStackResourceDrifts</code> again and assign that token to the
     * request object's <code>NextToken</code> parameter. If the request returns all
     * results, <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>DescribeStackResourceDrifts</code> again and assign that token to the
     * request object's <code>NextToken</code> parameter. If the request returns all
     * results, <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>DescribeStackResourceDrifts</code> again and assign that token to the
     * request object's <code>NextToken</code> parameter. If the request returns all
     * results, <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline DescribeStackResourceDriftsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>DescribeStackResourceDrifts</code> again and assign that token to the
     * request object's <code>NextToken</code> parameter. If the request returns all
     * results, <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline DescribeStackResourceDriftsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call <code>DescribeStackResourceDrifts</code> again and assign that token to the
     * request object's <code>NextToken</code> parameter. If the request returns all
     * results, <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline DescribeStackResourceDriftsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeStackResourceDriftsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeStackResourceDriftsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<StackResourceDrift> m_stackResourceDrifts;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
