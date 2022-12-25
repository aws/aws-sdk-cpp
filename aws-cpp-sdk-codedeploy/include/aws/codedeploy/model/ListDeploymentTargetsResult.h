/**
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
  class ListDeploymentTargetsResult
  {
  public:
    AWS_CODEDEPLOY_API ListDeploymentTargetsResult();
    AWS_CODEDEPLOY_API ListDeploymentTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API ListDeploymentTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The unique IDs of deployment targets. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetIds() const{ return m_targetIds; }

    /**
     * <p> The unique IDs of deployment targets. </p>
     */
    inline void SetTargetIds(const Aws::Vector<Aws::String>& value) { m_targetIds = value; }

    /**
     * <p> The unique IDs of deployment targets. </p>
     */
    inline void SetTargetIds(Aws::Vector<Aws::String>&& value) { m_targetIds = std::move(value); }

    /**
     * <p> The unique IDs of deployment targets. </p>
     */
    inline ListDeploymentTargetsResult& WithTargetIds(const Aws::Vector<Aws::String>& value) { SetTargetIds(value); return *this;}

    /**
     * <p> The unique IDs of deployment targets. </p>
     */
    inline ListDeploymentTargetsResult& WithTargetIds(Aws::Vector<Aws::String>&& value) { SetTargetIds(std::move(value)); return *this;}

    /**
     * <p> The unique IDs of deployment targets. </p>
     */
    inline ListDeploymentTargetsResult& AddTargetIds(const Aws::String& value) { m_targetIds.push_back(value); return *this; }

    /**
     * <p> The unique IDs of deployment targets. </p>
     */
    inline ListDeploymentTargetsResult& AddTargetIds(Aws::String&& value) { m_targetIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The unique IDs of deployment targets. </p>
     */
    inline ListDeploymentTargetsResult& AddTargetIds(const char* value) { m_targetIds.push_back(value); return *this; }


    /**
     * <p> If a large amount of information is returned, a token identifier is also
     * returned. It can be used in a subsequent <code>ListDeploymentTargets</code> call
     * to return the next set of deployment targets in the list. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> If a large amount of information is returned, a token identifier is also
     * returned. It can be used in a subsequent <code>ListDeploymentTargets</code> call
     * to return the next set of deployment targets in the list. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> If a large amount of information is returned, a token identifier is also
     * returned. It can be used in a subsequent <code>ListDeploymentTargets</code> call
     * to return the next set of deployment targets in the list. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> If a large amount of information is returned, a token identifier is also
     * returned. It can be used in a subsequent <code>ListDeploymentTargets</code> call
     * to return the next set of deployment targets in the list. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> If a large amount of information is returned, a token identifier is also
     * returned. It can be used in a subsequent <code>ListDeploymentTargets</code> call
     * to return the next set of deployment targets in the list. </p>
     */
    inline ListDeploymentTargetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If a large amount of information is returned, a token identifier is also
     * returned. It can be used in a subsequent <code>ListDeploymentTargets</code> call
     * to return the next set of deployment targets in the list. </p>
     */
    inline ListDeploymentTargetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If a large amount of information is returned, a token identifier is also
     * returned. It can be used in a subsequent <code>ListDeploymentTargets</code> call
     * to return the next set of deployment targets in the list. </p>
     */
    inline ListDeploymentTargetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_targetIds;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
