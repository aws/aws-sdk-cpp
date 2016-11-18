/*
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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/InstanceSummary.h>

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
   * <p>Represents the output of a batch get deployment instance operation.</p>
   */
  class AWS_CODEDEPLOY_API BatchGetDeploymentInstancesResult
  {
  public:
    BatchGetDeploymentInstancesResult();
    BatchGetDeploymentInstancesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetDeploymentInstancesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Information about the instance.</p>
     */
    inline const Aws::Vector<InstanceSummary>& GetInstancesSummary() const{ return m_instancesSummary; }

    /**
     * <p>Information about the instance.</p>
     */
    inline void SetInstancesSummary(const Aws::Vector<InstanceSummary>& value) { m_instancesSummary = value; }

    /**
     * <p>Information about the instance.</p>
     */
    inline void SetInstancesSummary(Aws::Vector<InstanceSummary>&& value) { m_instancesSummary = value; }

    /**
     * <p>Information about the instance.</p>
     */
    inline BatchGetDeploymentInstancesResult& WithInstancesSummary(const Aws::Vector<InstanceSummary>& value) { SetInstancesSummary(value); return *this;}

    /**
     * <p>Information about the instance.</p>
     */
    inline BatchGetDeploymentInstancesResult& WithInstancesSummary(Aws::Vector<InstanceSummary>&& value) { SetInstancesSummary(value); return *this;}

    /**
     * <p>Information about the instance.</p>
     */
    inline BatchGetDeploymentInstancesResult& AddInstancesSummary(const InstanceSummary& value) { m_instancesSummary.push_back(value); return *this; }

    /**
     * <p>Information about the instance.</p>
     */
    inline BatchGetDeploymentInstancesResult& AddInstancesSummary(InstanceSummary&& value) { m_instancesSummary.push_back(value); return *this; }

    /**
     * <p>Information about errors that may have occurred during the API call.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Information about errors that may have occurred during the API call.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>Information about errors that may have occurred during the API call.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = value; }

    /**
     * <p>Information about errors that may have occurred during the API call.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>Information about errors that may have occurred during the API call.</p>
     */
    inline BatchGetDeploymentInstancesResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Information about errors that may have occurred during the API call.</p>
     */
    inline BatchGetDeploymentInstancesResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Information about errors that may have occurred during the API call.</p>
     */
    inline BatchGetDeploymentInstancesResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:
    Aws::Vector<InstanceSummary> m_instancesSummary;
    Aws::String m_errorMessage;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
