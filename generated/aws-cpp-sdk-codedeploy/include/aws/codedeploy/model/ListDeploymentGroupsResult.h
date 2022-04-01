﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Represents the output of a <code>ListDeploymentGroups</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentGroupsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API ListDeploymentGroupsResult
  {
  public:
    ListDeploymentGroupsResult();
    ListDeploymentGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDeploymentGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The application name.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationName = value; }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationName = std::move(value); }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationName.assign(value); }

    /**
     * <p>The application name.</p>
     */
    inline ListDeploymentGroupsResult& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The application name.</p>
     */
    inline ListDeploymentGroupsResult& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The application name.</p>
     */
    inline ListDeploymentGroupsResult& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>A list of deployment group names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeploymentGroups() const{ return m_deploymentGroups; }

    /**
     * <p>A list of deployment group names.</p>
     */
    inline void SetDeploymentGroups(const Aws::Vector<Aws::String>& value) { m_deploymentGroups = value; }

    /**
     * <p>A list of deployment group names.</p>
     */
    inline void SetDeploymentGroups(Aws::Vector<Aws::String>&& value) { m_deploymentGroups = std::move(value); }

    /**
     * <p>A list of deployment group names.</p>
     */
    inline ListDeploymentGroupsResult& WithDeploymentGroups(const Aws::Vector<Aws::String>& value) { SetDeploymentGroups(value); return *this;}

    /**
     * <p>A list of deployment group names.</p>
     */
    inline ListDeploymentGroupsResult& WithDeploymentGroups(Aws::Vector<Aws::String>&& value) { SetDeploymentGroups(std::move(value)); return *this;}

    /**
     * <p>A list of deployment group names.</p>
     */
    inline ListDeploymentGroupsResult& AddDeploymentGroups(const Aws::String& value) { m_deploymentGroups.push_back(value); return *this; }

    /**
     * <p>A list of deployment group names.</p>
     */
    inline ListDeploymentGroupsResult& AddDeploymentGroups(Aws::String&& value) { m_deploymentGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of deployment group names.</p>
     */
    inline ListDeploymentGroupsResult& AddDeploymentGroups(const char* value) { m_deploymentGroups.push_back(value); return *this; }


    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list deployment groups call to return the next
     * set of deployment groups in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list deployment groups call to return the next
     * set of deployment groups in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list deployment groups call to return the next
     * set of deployment groups in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list deployment groups call to return the next
     * set of deployment groups in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list deployment groups call to return the next
     * set of deployment groups in the list.</p>
     */
    inline ListDeploymentGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list deployment groups call to return the next
     * set of deployment groups in the list.</p>
     */
    inline ListDeploymentGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list deployment groups call to return the next
     * set of deployment groups in the list.</p>
     */
    inline ListDeploymentGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_applicationName;

    Aws::Vector<Aws::String> m_deploymentGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
