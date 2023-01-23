/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/InstanceInfo.h>
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
namespace CodeDeploy
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>BatchGetOnPremisesInstances</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetOnPremisesInstancesOutput">AWS
   * API Reference</a></p>
   */
  class BatchGetOnPremisesInstancesResult
  {
  public:
    AWS_CODEDEPLOY_API BatchGetOnPremisesInstancesResult();
    AWS_CODEDEPLOY_API BatchGetOnPremisesInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API BatchGetOnPremisesInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the on-premises instances.</p>
     */
    inline const Aws::Vector<InstanceInfo>& GetInstanceInfos() const{ return m_instanceInfos; }

    /**
     * <p>Information about the on-premises instances.</p>
     */
    inline void SetInstanceInfos(const Aws::Vector<InstanceInfo>& value) { m_instanceInfos = value; }

    /**
     * <p>Information about the on-premises instances.</p>
     */
    inline void SetInstanceInfos(Aws::Vector<InstanceInfo>&& value) { m_instanceInfos = std::move(value); }

    /**
     * <p>Information about the on-premises instances.</p>
     */
    inline BatchGetOnPremisesInstancesResult& WithInstanceInfos(const Aws::Vector<InstanceInfo>& value) { SetInstanceInfos(value); return *this;}

    /**
     * <p>Information about the on-premises instances.</p>
     */
    inline BatchGetOnPremisesInstancesResult& WithInstanceInfos(Aws::Vector<InstanceInfo>&& value) { SetInstanceInfos(std::move(value)); return *this;}

    /**
     * <p>Information about the on-premises instances.</p>
     */
    inline BatchGetOnPremisesInstancesResult& AddInstanceInfos(const InstanceInfo& value) { m_instanceInfos.push_back(value); return *this; }

    /**
     * <p>Information about the on-premises instances.</p>
     */
    inline BatchGetOnPremisesInstancesResult& AddInstanceInfos(InstanceInfo&& value) { m_instanceInfos.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<InstanceInfo> m_instanceInfos;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
