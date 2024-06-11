﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/DeploymentGroupInfo.h>
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
   * <p>Represents the output of a <code>BatchGetDeploymentGroups</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeploymentGroupsOutput">AWS
   * API Reference</a></p>
   */
  class BatchGetDeploymentGroupsResult
  {
  public:
    AWS_CODEDEPLOY_API BatchGetDeploymentGroupsResult();
    AWS_CODEDEPLOY_API BatchGetDeploymentGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API BatchGetDeploymentGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the deployment groups.</p>
     */
    inline const Aws::Vector<DeploymentGroupInfo>& GetDeploymentGroupsInfo() const{ return m_deploymentGroupsInfo; }
    inline void SetDeploymentGroupsInfo(const Aws::Vector<DeploymentGroupInfo>& value) { m_deploymentGroupsInfo = value; }
    inline void SetDeploymentGroupsInfo(Aws::Vector<DeploymentGroupInfo>&& value) { m_deploymentGroupsInfo = std::move(value); }
    inline BatchGetDeploymentGroupsResult& WithDeploymentGroupsInfo(const Aws::Vector<DeploymentGroupInfo>& value) { SetDeploymentGroupsInfo(value); return *this;}
    inline BatchGetDeploymentGroupsResult& WithDeploymentGroupsInfo(Aws::Vector<DeploymentGroupInfo>&& value) { SetDeploymentGroupsInfo(std::move(value)); return *this;}
    inline BatchGetDeploymentGroupsResult& AddDeploymentGroupsInfo(const DeploymentGroupInfo& value) { m_deploymentGroupsInfo.push_back(value); return *this; }
    inline BatchGetDeploymentGroupsResult& AddDeploymentGroupsInfo(DeploymentGroupInfo&& value) { m_deploymentGroupsInfo.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about errors that might have occurred during the API call.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline BatchGetDeploymentGroupsResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline BatchGetDeploymentGroupsResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline BatchGetDeploymentGroupsResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetDeploymentGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetDeploymentGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetDeploymentGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DeploymentGroupInfo> m_deploymentGroupsInfo;

    Aws::String m_errorMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
