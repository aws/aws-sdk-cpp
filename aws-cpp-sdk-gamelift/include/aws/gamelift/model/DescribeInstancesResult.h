﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/Instance.h>

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
namespace GameLift
{
namespace Model
{
  /**
   * <p>Represents the returned data in response to a request action.</p>
   */
  class AWS_GAMELIFT_API DescribeInstancesResult
  {
  public:
    DescribeInstancesResult();
    DescribeInstancesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeInstancesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Collection of objects containing properties for each instance returned.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const{ return m_instances; }

    /**
     * <p>Collection of objects containing properties for each instance returned.</p>
     */
    inline void SetInstances(const Aws::Vector<Instance>& value) { m_instances = value; }

    /**
     * <p>Collection of objects containing properties for each instance returned.</p>
     */
    inline void SetInstances(Aws::Vector<Instance>&& value) { m_instances = value; }

    /**
     * <p>Collection of objects containing properties for each instance returned.</p>
     */
    inline DescribeInstancesResult& WithInstances(const Aws::Vector<Instance>& value) { SetInstances(value); return *this;}

    /**
     * <p>Collection of objects containing properties for each instance returned.</p>
     */
    inline DescribeInstancesResult& WithInstances(Aws::Vector<Instance>&& value) { SetInstances(value); return *this;}

    /**
     * <p>Collection of objects containing properties for each instance returned.</p>
     */
    inline DescribeInstancesResult& AddInstances(const Instance& value) { m_instances.push_back(value); return *this; }

    /**
     * <p>Collection of objects containing properties for each instance returned.</p>
     */
    inline DescribeInstancesResult& AddInstances(Instance&& value) { m_instances.push_back(value); return *this; }

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Instance> m_instances;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
