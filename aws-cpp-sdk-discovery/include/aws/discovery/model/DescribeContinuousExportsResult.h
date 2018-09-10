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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/ContinuousExportDescription.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class AWS_APPLICATIONDISCOVERYSERVICE_API DescribeContinuousExportsResult
  {
  public:
    DescribeContinuousExportsResult();
    DescribeContinuousExportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeContinuousExportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of continuous export descriptions.</p>
     */
    inline const Aws::Vector<ContinuousExportDescription>& GetDescriptions() const{ return m_descriptions; }

    /**
     * <p>A list of continuous export descriptions.</p>
     */
    inline void SetDescriptions(const Aws::Vector<ContinuousExportDescription>& value) { m_descriptions = value; }

    /**
     * <p>A list of continuous export descriptions.</p>
     */
    inline void SetDescriptions(Aws::Vector<ContinuousExportDescription>&& value) { m_descriptions = std::move(value); }

    /**
     * <p>A list of continuous export descriptions.</p>
     */
    inline DescribeContinuousExportsResult& WithDescriptions(const Aws::Vector<ContinuousExportDescription>& value) { SetDescriptions(value); return *this;}

    /**
     * <p>A list of continuous export descriptions.</p>
     */
    inline DescribeContinuousExportsResult& WithDescriptions(Aws::Vector<ContinuousExportDescription>&& value) { SetDescriptions(std::move(value)); return *this;}

    /**
     * <p>A list of continuous export descriptions.</p>
     */
    inline DescribeContinuousExportsResult& AddDescriptions(const ContinuousExportDescription& value) { m_descriptions.push_back(value); return *this; }

    /**
     * <p>A list of continuous export descriptions.</p>
     */
    inline DescribeContinuousExportsResult& AddDescriptions(ContinuousExportDescription&& value) { m_descriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token from the previous call to <code>DescribeExportTasks</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token from the previous call to <code>DescribeExportTasks</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token from the previous call to <code>DescribeExportTasks</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token from the previous call to <code>DescribeExportTasks</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token from the previous call to <code>DescribeExportTasks</code>.</p>
     */
    inline DescribeContinuousExportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token from the previous call to <code>DescribeExportTasks</code>.</p>
     */
    inline DescribeContinuousExportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token from the previous call to <code>DescribeExportTasks</code>.</p>
     */
    inline DescribeContinuousExportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ContinuousExportDescription> m_descriptions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
