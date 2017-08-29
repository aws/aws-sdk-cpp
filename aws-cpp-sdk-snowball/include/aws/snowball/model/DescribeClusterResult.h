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
#include <aws/snowball/model/ClusterMetadata.h>
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
  class AWS_SNOWBALL_API DescribeClusterResult
  {
  public:
    DescribeClusterResult();
    DescribeClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a specific cluster, including shipping information, cluster
     * status, and other important metadata.</p>
     */
    inline const ClusterMetadata& GetClusterMetadata() const{ return m_clusterMetadata; }

    /**
     * <p>Information about a specific cluster, including shipping information, cluster
     * status, and other important metadata.</p>
     */
    inline void SetClusterMetadata(const ClusterMetadata& value) { m_clusterMetadata = value; }

    /**
     * <p>Information about a specific cluster, including shipping information, cluster
     * status, and other important metadata.</p>
     */
    inline void SetClusterMetadata(ClusterMetadata&& value) { m_clusterMetadata = std::move(value); }

    /**
     * <p>Information about a specific cluster, including shipping information, cluster
     * status, and other important metadata.</p>
     */
    inline DescribeClusterResult& WithClusterMetadata(const ClusterMetadata& value) { SetClusterMetadata(value); return *this;}

    /**
     * <p>Information about a specific cluster, including shipping information, cluster
     * status, and other important metadata.</p>
     */
    inline DescribeClusterResult& WithClusterMetadata(ClusterMetadata&& value) { SetClusterMetadata(std::move(value)); return *this;}

  private:

    ClusterMetadata m_clusterMetadata;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
