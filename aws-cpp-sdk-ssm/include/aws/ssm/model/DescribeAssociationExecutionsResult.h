/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AssociationExecution.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API DescribeAssociationExecutionsResult
  {
  public:
    DescribeAssociationExecutionsResult();
    DescribeAssociationExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAssociationExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the executions for the specified association ID.</p>
     */
    inline const Aws::Vector<AssociationExecution>& GetAssociationExecutions() const{ return m_associationExecutions; }

    /**
     * <p>A list of the executions for the specified association ID.</p>
     */
    inline void SetAssociationExecutions(const Aws::Vector<AssociationExecution>& value) { m_associationExecutions = value; }

    /**
     * <p>A list of the executions for the specified association ID.</p>
     */
    inline void SetAssociationExecutions(Aws::Vector<AssociationExecution>&& value) { m_associationExecutions = std::move(value); }

    /**
     * <p>A list of the executions for the specified association ID.</p>
     */
    inline DescribeAssociationExecutionsResult& WithAssociationExecutions(const Aws::Vector<AssociationExecution>& value) { SetAssociationExecutions(value); return *this;}

    /**
     * <p>A list of the executions for the specified association ID.</p>
     */
    inline DescribeAssociationExecutionsResult& WithAssociationExecutions(Aws::Vector<AssociationExecution>&& value) { SetAssociationExecutions(std::move(value)); return *this;}

    /**
     * <p>A list of the executions for the specified association ID.</p>
     */
    inline DescribeAssociationExecutionsResult& AddAssociationExecutions(const AssociationExecution& value) { m_associationExecutions.push_back(value); return *this; }

    /**
     * <p>A list of the executions for the specified association ID.</p>
     */
    inline DescribeAssociationExecutionsResult& AddAssociationExecutions(AssociationExecution&& value) { m_associationExecutions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline DescribeAssociationExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline DescribeAssociationExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline DescribeAssociationExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AssociationExecution> m_associationExecutions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
