﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Represents the output of a <code>ListDeploymentConfigs</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentConfigsOutput">AWS
   * API Reference</a></p>
   */
  class ListDeploymentConfigsResult
  {
  public:
    AWS_CODEDEPLOY_API ListDeploymentConfigsResult();
    AWS_CODEDEPLOY_API ListDeploymentConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API ListDeploymentConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of deployment configurations, including built-in configurations such
     * as <code>CodeDeployDefault.OneAtATime</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeploymentConfigsList() const{ return m_deploymentConfigsList; }
    inline void SetDeploymentConfigsList(const Aws::Vector<Aws::String>& value) { m_deploymentConfigsList = value; }
    inline void SetDeploymentConfigsList(Aws::Vector<Aws::String>&& value) { m_deploymentConfigsList = std::move(value); }
    inline ListDeploymentConfigsResult& WithDeploymentConfigsList(const Aws::Vector<Aws::String>& value) { SetDeploymentConfigsList(value); return *this;}
    inline ListDeploymentConfigsResult& WithDeploymentConfigsList(Aws::Vector<Aws::String>&& value) { SetDeploymentConfigsList(std::move(value)); return *this;}
    inline ListDeploymentConfigsResult& AddDeploymentConfigsList(const Aws::String& value) { m_deploymentConfigsList.push_back(value); return *this; }
    inline ListDeploymentConfigsResult& AddDeploymentConfigsList(Aws::String&& value) { m_deploymentConfigsList.push_back(std::move(value)); return *this; }
    inline ListDeploymentConfigsResult& AddDeploymentConfigsList(const char* value) { m_deploymentConfigsList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list deployment configurations call to return the
     * next set of deployment configurations in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDeploymentConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDeploymentConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDeploymentConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDeploymentConfigsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDeploymentConfigsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDeploymentConfigsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_deploymentConfigsList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
