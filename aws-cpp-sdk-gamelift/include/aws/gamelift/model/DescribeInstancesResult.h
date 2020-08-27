/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/Instance.h>
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
namespace GameLift
{
namespace Model
{
  /**
   * <p>Represents the returned data in response to a request
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeInstancesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeInstancesResult
  {
  public:
    DescribeInstancesResult();
    DescribeInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of objects containing properties for each instance returned.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const{ return m_instances; }

    /**
     * <p>A collection of objects containing properties for each instance returned.</p>
     */
    inline void SetInstances(const Aws::Vector<Instance>& value) { m_instances = value; }

    /**
     * <p>A collection of objects containing properties for each instance returned.</p>
     */
    inline void SetInstances(Aws::Vector<Instance>&& value) { m_instances = std::move(value); }

    /**
     * <p>A collection of objects containing properties for each instance returned.</p>
     */
    inline DescribeInstancesResult& WithInstances(const Aws::Vector<Instance>& value) { SetInstances(value); return *this;}

    /**
     * <p>A collection of objects containing properties for each instance returned.</p>
     */
    inline DescribeInstancesResult& WithInstances(Aws::Vector<Instance>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>A collection of objects containing properties for each instance returned.</p>
     */
    inline DescribeInstancesResult& AddInstances(const Instance& value) { m_instances.push_back(value); return *this; }

    /**
     * <p>A collection of objects containing properties for each instance returned.</p>
     */
    inline DescribeInstancesResult& AddInstances(Instance&& value) { m_instances.push_back(std::move(value)); return *this; }


    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
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
