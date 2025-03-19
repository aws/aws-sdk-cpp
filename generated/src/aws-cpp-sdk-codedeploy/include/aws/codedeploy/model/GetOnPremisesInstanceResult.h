/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/InstanceInfo.h>
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
namespace CodeDeploy
{
namespace Model
{
  /**
   * <p> Represents the output of a <code>GetOnPremisesInstance</code> operation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetOnPremisesInstanceOutput">AWS
   * API Reference</a></p>
   */
  class GetOnPremisesInstanceResult
  {
  public:
    AWS_CODEDEPLOY_API GetOnPremisesInstanceResult() = default;
    AWS_CODEDEPLOY_API GetOnPremisesInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API GetOnPremisesInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Information about the on-premises instance. </p>
     */
    inline const InstanceInfo& GetInstanceInfo() const { return m_instanceInfo; }
    template<typename InstanceInfoT = InstanceInfo>
    void SetInstanceInfo(InstanceInfoT&& value) { m_instanceInfoHasBeenSet = true; m_instanceInfo = std::forward<InstanceInfoT>(value); }
    template<typename InstanceInfoT = InstanceInfo>
    GetOnPremisesInstanceResult& WithInstanceInfo(InstanceInfoT&& value) { SetInstanceInfo(std::forward<InstanceInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOnPremisesInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InstanceInfo m_instanceInfo;
    bool m_instanceInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
