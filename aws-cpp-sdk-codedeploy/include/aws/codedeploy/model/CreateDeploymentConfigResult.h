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
   * <p>Represents the output of a CreateDeploymentConfig operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentConfigOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API CreateDeploymentConfigResult
  {
  public:
    CreateDeploymentConfigResult();
    CreateDeploymentConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateDeploymentConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique deployment configuration ID.</p>
     */
    inline const Aws::String& GetDeploymentConfigId() const{ return m_deploymentConfigId; }

    /**
     * <p>A unique deployment configuration ID.</p>
     */
    inline void SetDeploymentConfigId(const Aws::String& value) { m_deploymentConfigId = value; }

    /**
     * <p>A unique deployment configuration ID.</p>
     */
    inline void SetDeploymentConfigId(Aws::String&& value) { m_deploymentConfigId = std::move(value); }

    /**
     * <p>A unique deployment configuration ID.</p>
     */
    inline void SetDeploymentConfigId(const char* value) { m_deploymentConfigId.assign(value); }

    /**
     * <p>A unique deployment configuration ID.</p>
     */
    inline CreateDeploymentConfigResult& WithDeploymentConfigId(const Aws::String& value) { SetDeploymentConfigId(value); return *this;}

    /**
     * <p>A unique deployment configuration ID.</p>
     */
    inline CreateDeploymentConfigResult& WithDeploymentConfigId(Aws::String&& value) { SetDeploymentConfigId(std::move(value)); return *this;}

    /**
     * <p>A unique deployment configuration ID.</p>
     */
    inline CreateDeploymentConfigResult& WithDeploymentConfigId(const char* value) { SetDeploymentConfigId(value); return *this;}

  private:

    Aws::String m_deploymentConfigId;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
