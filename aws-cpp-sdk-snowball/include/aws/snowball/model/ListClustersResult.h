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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/ClusterListEntry.h>
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
namespace Snowball
{
namespace Model
{
  class AWS_SNOWBALL_API ListClustersResult
  {
  public:
    ListClustersResult();
    ListClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Each <code>ClusterListEntry</code> object contains a cluster's state, a
     * cluster's ID, and other important status information.</p>
     */
    inline const Aws::Vector<ClusterListEntry>& GetClusterListEntries() const{ return m_clusterListEntries; }

    /**
     * <p>Each <code>ClusterListEntry</code> object contains a cluster's state, a
     * cluster's ID, and other important status information.</p>
     */
    inline void SetClusterListEntries(const Aws::Vector<ClusterListEntry>& value) { m_clusterListEntries = value; }

    /**
     * <p>Each <code>ClusterListEntry</code> object contains a cluster's state, a
     * cluster's ID, and other important status information.</p>
     */
    inline void SetClusterListEntries(Aws::Vector<ClusterListEntry>&& value) { m_clusterListEntries = std::move(value); }

    /**
     * <p>Each <code>ClusterListEntry</code> object contains a cluster's state, a
     * cluster's ID, and other important status information.</p>
     */
    inline ListClustersResult& WithClusterListEntries(const Aws::Vector<ClusterListEntry>& value) { SetClusterListEntries(value); return *this;}

    /**
     * <p>Each <code>ClusterListEntry</code> object contains a cluster's state, a
     * cluster's ID, and other important status information.</p>
     */
    inline ListClustersResult& WithClusterListEntries(Aws::Vector<ClusterListEntry>&& value) { SetClusterListEntries(std::move(value)); return *this;}

    /**
     * <p>Each <code>ClusterListEntry</code> object contains a cluster's state, a
     * cluster's ID, and other important status information.</p>
     */
    inline ListClustersResult& AddClusterListEntries(const ClusterListEntry& value) { m_clusterListEntries.push_back(value); return *this; }

    /**
     * <p>Each <code>ClusterListEntry</code> object contains a cluster's state, a
     * cluster's ID, and other important status information.</p>
     */
    inline ListClustersResult& AddClusterListEntries(ClusterListEntry&& value) { m_clusterListEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>HTTP requests are stateless. If you use the automatically generated
     * <code>NextToken</code> value in your next <code>ClusterListEntry</code> call,
     * your list of returned clusters will start from this point in the array.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>HTTP requests are stateless. If you use the automatically generated
     * <code>NextToken</code> value in your next <code>ClusterListEntry</code> call,
     * your list of returned clusters will start from this point in the array.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>HTTP requests are stateless. If you use the automatically generated
     * <code>NextToken</code> value in your next <code>ClusterListEntry</code> call,
     * your list of returned clusters will start from this point in the array.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>HTTP requests are stateless. If you use the automatically generated
     * <code>NextToken</code> value in your next <code>ClusterListEntry</code> call,
     * your list of returned clusters will start from this point in the array.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>HTTP requests are stateless. If you use the automatically generated
     * <code>NextToken</code> value in your next <code>ClusterListEntry</code> call,
     * your list of returned clusters will start from this point in the array.</p>
     */
    inline ListClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>HTTP requests are stateless. If you use the automatically generated
     * <code>NextToken</code> value in your next <code>ClusterListEntry</code> call,
     * your list of returned clusters will start from this point in the array.</p>
     */
    inline ListClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>HTTP requests are stateless. If you use the automatically generated
     * <code>NextToken</code> value in your next <code>ClusterListEntry</code> call,
     * your list of returned clusters will start from this point in the array.</p>
     */
    inline ListClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ClusterListEntry> m_clusterListEntries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
