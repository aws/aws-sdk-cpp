﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/AgentVersion.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeAgentVersions</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeAgentVersionsResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribeAgentVersionsResult
  {
  public:
    DescribeAgentVersionsResult();
    DescribeAgentVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAgentVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The agent versions for the specified stack or configuration manager. Note
     * that this value is the complete version number, not the abbreviated number used
     * by the console.</p>
     */
    inline const Aws::Vector<AgentVersion>& GetAgentVersions() const{ return m_agentVersions; }

    /**
     * <p>The agent versions for the specified stack or configuration manager. Note
     * that this value is the complete version number, not the abbreviated number used
     * by the console.</p>
     */
    inline void SetAgentVersions(const Aws::Vector<AgentVersion>& value) { m_agentVersions = value; }

    /**
     * <p>The agent versions for the specified stack or configuration manager. Note
     * that this value is the complete version number, not the abbreviated number used
     * by the console.</p>
     */
    inline void SetAgentVersions(Aws::Vector<AgentVersion>&& value) { m_agentVersions = std::move(value); }

    /**
     * <p>The agent versions for the specified stack or configuration manager. Note
     * that this value is the complete version number, not the abbreviated number used
     * by the console.</p>
     */
    inline DescribeAgentVersionsResult& WithAgentVersions(const Aws::Vector<AgentVersion>& value) { SetAgentVersions(value); return *this;}

    /**
     * <p>The agent versions for the specified stack or configuration manager. Note
     * that this value is the complete version number, not the abbreviated number used
     * by the console.</p>
     */
    inline DescribeAgentVersionsResult& WithAgentVersions(Aws::Vector<AgentVersion>&& value) { SetAgentVersions(std::move(value)); return *this;}

    /**
     * <p>The agent versions for the specified stack or configuration manager. Note
     * that this value is the complete version number, not the abbreviated number used
     * by the console.</p>
     */
    inline DescribeAgentVersionsResult& AddAgentVersions(const AgentVersion& value) { m_agentVersions.push_back(value); return *this; }

    /**
     * <p>The agent versions for the specified stack or configuration manager. Note
     * that this value is the complete version number, not the abbreviated number used
     * by the console.</p>
     */
    inline DescribeAgentVersionsResult& AddAgentVersions(AgentVersion&& value) { m_agentVersions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AgentVersion> m_agentVersions;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
