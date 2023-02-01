/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
   * <p> Represents the output of a <code>GetOnPremisesInstance</code> operation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetOnPremisesInstanceOutput">AWS
   * API Reference</a></p>
   */
  class GetOnPremisesInstanceResult
  {
  public:
    AWS_CODEDEPLOY_API GetOnPremisesInstanceResult();
    AWS_CODEDEPLOY_API GetOnPremisesInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API GetOnPremisesInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Information about the on-premises instance. </p>
     */
    inline const InstanceInfo& GetInstanceInfo() const{ return m_instanceInfo; }

    /**
     * <p> Information about the on-premises instance. </p>
     */
    inline void SetInstanceInfo(const InstanceInfo& value) { m_instanceInfo = value; }

    /**
     * <p> Information about the on-premises instance. </p>
     */
    inline void SetInstanceInfo(InstanceInfo&& value) { m_instanceInfo = std::move(value); }

    /**
     * <p> Information about the on-premises instance. </p>
     */
    inline GetOnPremisesInstanceResult& WithInstanceInfo(const InstanceInfo& value) { SetInstanceInfo(value); return *this;}

    /**
     * <p> Information about the on-premises instance. </p>
     */
    inline GetOnPremisesInstanceResult& WithInstanceInfo(InstanceInfo&& value) { SetInstanceInfo(std::move(value)); return *this;}

  private:

    InstanceInfo m_instanceInfo;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
