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
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_SNOWBALL_API CreateClusterResult
  {
  public:
    CreateClusterResult();
    CreateClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterId = value; }

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterId = std::move(value); }

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterId.assign(value); }

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline CreateClusterResult& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline CreateClusterResult& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline CreateClusterResult& WithClusterId(const char* value) { SetClusterId(value); return *this;}

  private:

    Aws::String m_clusterId;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
