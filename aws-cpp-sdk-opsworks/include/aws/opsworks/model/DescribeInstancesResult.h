/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/Instance.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeInstances</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeInstancesResult">AWS
   * API Reference</a></p>
   */
  class DescribeInstancesResult
  {
  public:
    AWS_OPSWORKS_API DescribeInstancesResult();
    AWS_OPSWORKS_API DescribeInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>Instance</code> objects that describe the instances.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const{ return m_instances; }

    /**
     * <p>An array of <code>Instance</code> objects that describe the instances.</p>
     */
    inline void SetInstances(const Aws::Vector<Instance>& value) { m_instances = value; }

    /**
     * <p>An array of <code>Instance</code> objects that describe the instances.</p>
     */
    inline void SetInstances(Aws::Vector<Instance>&& value) { m_instances = std::move(value); }

    /**
     * <p>An array of <code>Instance</code> objects that describe the instances.</p>
     */
    inline DescribeInstancesResult& WithInstances(const Aws::Vector<Instance>& value) { SetInstances(value); return *this;}

    /**
     * <p>An array of <code>Instance</code> objects that describe the instances.</p>
     */
    inline DescribeInstancesResult& WithInstances(Aws::Vector<Instance>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Instance</code> objects that describe the instances.</p>
     */
    inline DescribeInstancesResult& AddInstances(const Instance& value) { m_instances.push_back(value); return *this; }

    /**
     * <p>An array of <code>Instance</code> objects that describe the instances.</p>
     */
    inline DescribeInstancesResult& AddInstances(Instance&& value) { m_instances.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Instance> m_instances;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
