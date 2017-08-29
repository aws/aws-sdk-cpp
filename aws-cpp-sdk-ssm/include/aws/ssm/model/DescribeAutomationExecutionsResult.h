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
#include <aws/ssm/model/AutomationExecutionMetadata.h>
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
  class AWS_SSM_API DescribeAutomationExecutionsResult
  {
  public:
    DescribeAutomationExecutionsResult();
    DescribeAutomationExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAutomationExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of details about each automation execution which has occurred which
     * matches the filter specification, if any.</p>
     */
    inline const Aws::Vector<AutomationExecutionMetadata>& GetAutomationExecutionMetadataList() const{ return m_automationExecutionMetadataList; }

    /**
     * <p>The list of details about each automation execution which has occurred which
     * matches the filter specification, if any.</p>
     */
    inline void SetAutomationExecutionMetadataList(const Aws::Vector<AutomationExecutionMetadata>& value) { m_automationExecutionMetadataList = value; }

    /**
     * <p>The list of details about each automation execution which has occurred which
     * matches the filter specification, if any.</p>
     */
    inline void SetAutomationExecutionMetadataList(Aws::Vector<AutomationExecutionMetadata>&& value) { m_automationExecutionMetadataList = std::move(value); }

    /**
     * <p>The list of details about each automation execution which has occurred which
     * matches the filter specification, if any.</p>
     */
    inline DescribeAutomationExecutionsResult& WithAutomationExecutionMetadataList(const Aws::Vector<AutomationExecutionMetadata>& value) { SetAutomationExecutionMetadataList(value); return *this;}

    /**
     * <p>The list of details about each automation execution which has occurred which
     * matches the filter specification, if any.</p>
     */
    inline DescribeAutomationExecutionsResult& WithAutomationExecutionMetadataList(Aws::Vector<AutomationExecutionMetadata>&& value) { SetAutomationExecutionMetadataList(std::move(value)); return *this;}

    /**
     * <p>The list of details about each automation execution which has occurred which
     * matches the filter specification, if any.</p>
     */
    inline DescribeAutomationExecutionsResult& AddAutomationExecutionMetadataList(const AutomationExecutionMetadata& value) { m_automationExecutionMetadataList.push_back(value); return *this; }

    /**
     * <p>The list of details about each automation execution which has occurred which
     * matches the filter specification, if any.</p>
     */
    inline DescribeAutomationExecutionsResult& AddAutomationExecutionMetadataList(AutomationExecutionMetadata&& value) { m_automationExecutionMetadataList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeAutomationExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeAutomationExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeAutomationExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AutomationExecutionMetadata> m_automationExecutionMetadataList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
