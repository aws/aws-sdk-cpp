﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/Session.h>
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
namespace ECS
{
namespace Model
{
  class ExecuteCommandResult
  {
  public:
    AWS_ECS_API ExecuteCommandResult();
    AWS_ECS_API ExecuteCommandResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API ExecuteCommandResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArn.assign(value); }
    inline ExecuteCommandResult& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline ExecuteCommandResult& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline ExecuteCommandResult& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the container.</p>
     */
    inline const Aws::String& GetContainerArn() const{ return m_containerArn; }
    inline void SetContainerArn(const Aws::String& value) { m_containerArn = value; }
    inline void SetContainerArn(Aws::String&& value) { m_containerArn = std::move(value); }
    inline void SetContainerArn(const char* value) { m_containerArn.assign(value); }
    inline ExecuteCommandResult& WithContainerArn(const Aws::String& value) { SetContainerArn(value); return *this;}
    inline ExecuteCommandResult& WithContainerArn(Aws::String&& value) { SetContainerArn(std::move(value)); return *this;}
    inline ExecuteCommandResult& WithContainerArn(const char* value) { SetContainerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the container.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }
    inline void SetContainerName(const Aws::String& value) { m_containerName = value; }
    inline void SetContainerName(Aws::String&& value) { m_containerName = std::move(value); }
    inline void SetContainerName(const char* value) { m_containerName.assign(value); }
    inline ExecuteCommandResult& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}
    inline ExecuteCommandResult& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}
    inline ExecuteCommandResult& WithContainerName(const char* value) { SetContainerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the execute command session is running in interactive
     * mode. Amazon ECS only supports initiating interactive sessions, so you must
     * specify <code>true</code> for this value.</p>
     */
    inline bool GetInteractive() const{ return m_interactive; }
    inline void SetInteractive(bool value) { m_interactive = value; }
    inline ExecuteCommandResult& WithInteractive(bool value) { SetInteractive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the SSM session that was created for this instance of
     * execute-command.</p>
     */
    inline const Session& GetSession() const{ return m_session; }
    inline void SetSession(const Session& value) { m_session = value; }
    inline void SetSession(Session&& value) { m_session = std::move(value); }
    inline ExecuteCommandResult& WithSession(const Session& value) { SetSession(value); return *this;}
    inline ExecuteCommandResult& WithSession(Session&& value) { SetSession(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the task.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArn.assign(value); }
    inline ExecuteCommandResult& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline ExecuteCommandResult& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline ExecuteCommandResult& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ExecuteCommandResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ExecuteCommandResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ExecuteCommandResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;

    Aws::String m_containerArn;

    Aws::String m_containerName;

    bool m_interactive;

    Session m_session;

    Aws::String m_taskArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
