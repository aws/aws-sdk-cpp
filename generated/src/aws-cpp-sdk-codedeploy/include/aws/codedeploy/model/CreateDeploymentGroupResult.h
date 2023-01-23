/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
   * <p>Represents the output of a <code>CreateDeploymentGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentGroupOutput">AWS
   * API Reference</a></p>
   */
  class CreateDeploymentGroupResult
  {
  public:
    AWS_CODEDEPLOY_API CreateDeploymentGroupResult();
    AWS_CODEDEPLOY_API CreateDeploymentGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API CreateDeploymentGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique deployment group ID.</p>
     */
    inline const Aws::String& GetDeploymentGroupId() const{ return m_deploymentGroupId; }

    /**
     * <p>A unique deployment group ID.</p>
     */
    inline void SetDeploymentGroupId(const Aws::String& value) { m_deploymentGroupId = value; }

    /**
     * <p>A unique deployment group ID.</p>
     */
    inline void SetDeploymentGroupId(Aws::String&& value) { m_deploymentGroupId = std::move(value); }

    /**
     * <p>A unique deployment group ID.</p>
     */
    inline void SetDeploymentGroupId(const char* value) { m_deploymentGroupId.assign(value); }

    /**
     * <p>A unique deployment group ID.</p>
     */
    inline CreateDeploymentGroupResult& WithDeploymentGroupId(const Aws::String& value) { SetDeploymentGroupId(value); return *this;}

    /**
     * <p>A unique deployment group ID.</p>
     */
    inline CreateDeploymentGroupResult& WithDeploymentGroupId(Aws::String&& value) { SetDeploymentGroupId(std::move(value)); return *this;}

    /**
     * <p>A unique deployment group ID.</p>
     */
    inline CreateDeploymentGroupResult& WithDeploymentGroupId(const char* value) { SetDeploymentGroupId(value); return *this;}

  private:

    Aws::String m_deploymentGroupId;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
