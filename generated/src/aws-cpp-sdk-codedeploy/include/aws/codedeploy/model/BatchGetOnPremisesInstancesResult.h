/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_CODEDEPLOY_API BatchGetOnPremisesInstancesResult() = default;
    AWS_CODEDEPLOY_API BatchGetOnPremisesInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API BatchGetOnPremisesInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the on-premises instances.</p>
     */
    inline const Aws::Vector<InstanceInfo>& GetInstanceInfos() const { return m_instanceInfos; }
    template<typename InstanceInfosT = Aws::Vector<InstanceInfo>>
    void SetInstanceInfos(InstanceInfosT&& value) { m_instanceInfosHasBeenSet = true; m_instanceInfos = std::forward<InstanceInfosT>(value); }
    template<typename InstanceInfosT = Aws::Vector<InstanceInfo>>
    BatchGetOnPremisesInstancesResult& WithInstanceInfos(InstanceInfosT&& value) { SetInstanceInfos(std::forward<InstanceInfosT>(value)); return *this;}
    template<typename InstanceInfosT = InstanceInfo>
    BatchGetOnPremisesInstancesResult& AddInstanceInfos(InstanceInfosT&& value) { m_instanceInfosHasBeenSet = true; m_instanceInfos.emplace_back(std::forward<InstanceInfosT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetOnPremisesInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceInfo> m_instanceInfos;
    bool m_instanceInfosHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
