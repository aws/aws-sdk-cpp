/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/RuntimeVersion.h>
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
namespace Synthetics
{
namespace Model
{
  class DescribeRuntimeVersionsResult
  {
  public:
    AWS_SYNTHETICS_API DescribeRuntimeVersionsResult();
    AWS_SYNTHETICS_API DescribeRuntimeVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SYNTHETICS_API DescribeRuntimeVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that display the details about each Synthetics canary
     * runtime version.</p>
     */
    inline const Aws::Vector<RuntimeVersion>& GetRuntimeVersions() const{ return m_runtimeVersions; }

    /**
     * <p>An array of objects that display the details about each Synthetics canary
     * runtime version.</p>
     */
    inline void SetRuntimeVersions(const Aws::Vector<RuntimeVersion>& value) { m_runtimeVersions = value; }

    /**
     * <p>An array of objects that display the details about each Synthetics canary
     * runtime version.</p>
     */
    inline void SetRuntimeVersions(Aws::Vector<RuntimeVersion>&& value) { m_runtimeVersions = std::move(value); }

    /**
     * <p>An array of objects that display the details about each Synthetics canary
     * runtime version.</p>
     */
    inline DescribeRuntimeVersionsResult& WithRuntimeVersions(const Aws::Vector<RuntimeVersion>& value) { SetRuntimeVersions(value); return *this;}

    /**
     * <p>An array of objects that display the details about each Synthetics canary
     * runtime version.</p>
     */
    inline DescribeRuntimeVersionsResult& WithRuntimeVersions(Aws::Vector<RuntimeVersion>&& value) { SetRuntimeVersions(std::move(value)); return *this;}

    /**
     * <p>An array of objects that display the details about each Synthetics canary
     * runtime version.</p>
     */
    inline DescribeRuntimeVersionsResult& AddRuntimeVersions(const RuntimeVersion& value) { m_runtimeVersions.push_back(value); return *this; }

    /**
     * <p>An array of objects that display the details about each Synthetics canary
     * runtime version.</p>
     */
    inline DescribeRuntimeVersionsResult& AddRuntimeVersions(RuntimeVersion&& value) { m_runtimeVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeRuntimeVersions</code> operation to retrieve
     * the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeRuntimeVersions</code> operation to retrieve
     * the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeRuntimeVersions</code> operation to retrieve
     * the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeRuntimeVersions</code> operation to retrieve
     * the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeRuntimeVersions</code> operation to retrieve
     * the next set of results.</p>
     */
    inline DescribeRuntimeVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeRuntimeVersions</code> operation to retrieve
     * the next set of results.</p>
     */
    inline DescribeRuntimeVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeRuntimeVersions</code> operation to retrieve
     * the next set of results.</p>
     */
    inline DescribeRuntimeVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RuntimeVersion> m_runtimeVersions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
