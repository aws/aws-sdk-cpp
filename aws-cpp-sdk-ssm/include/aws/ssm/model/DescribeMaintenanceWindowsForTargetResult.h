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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowIdentityForTarget.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API DescribeMaintenanceWindowsForTargetResult
  {
  public:
    DescribeMaintenanceWindowsForTargetResult();
    DescribeMaintenanceWindowsForTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeMaintenanceWindowsForTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the maintenance window targets and tasks an instance is
     * associated with.</p>
     */
    inline const Aws::Vector<MaintenanceWindowIdentityForTarget>& GetWindowIdentities() const{ return m_windowIdentities; }

    /**
     * <p>Information about the maintenance window targets and tasks an instance is
     * associated with.</p>
     */
    inline void SetWindowIdentities(const Aws::Vector<MaintenanceWindowIdentityForTarget>& value) { m_windowIdentities = value; }

    /**
     * <p>Information about the maintenance window targets and tasks an instance is
     * associated with.</p>
     */
    inline void SetWindowIdentities(Aws::Vector<MaintenanceWindowIdentityForTarget>&& value) { m_windowIdentities = std::move(value); }

    /**
     * <p>Information about the maintenance window targets and tasks an instance is
     * associated with.</p>
     */
    inline DescribeMaintenanceWindowsForTargetResult& WithWindowIdentities(const Aws::Vector<MaintenanceWindowIdentityForTarget>& value) { SetWindowIdentities(value); return *this;}

    /**
     * <p>Information about the maintenance window targets and tasks an instance is
     * associated with.</p>
     */
    inline DescribeMaintenanceWindowsForTargetResult& WithWindowIdentities(Aws::Vector<MaintenanceWindowIdentityForTarget>&& value) { SetWindowIdentities(std::move(value)); return *this;}

    /**
     * <p>Information about the maintenance window targets and tasks an instance is
     * associated with.</p>
     */
    inline DescribeMaintenanceWindowsForTargetResult& AddWindowIdentities(const MaintenanceWindowIdentityForTarget& value) { m_windowIdentities.push_back(value); return *this; }

    /**
     * <p>Information about the maintenance window targets and tasks an instance is
     * associated with.</p>
     */
    inline DescribeMaintenanceWindowsForTargetResult& AddWindowIdentities(MaintenanceWindowIdentityForTarget&& value) { m_windowIdentities.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline DescribeMaintenanceWindowsForTargetResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline DescribeMaintenanceWindowsForTargetResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline DescribeMaintenanceWindowsForTargetResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MaintenanceWindowIdentityForTarget> m_windowIdentities;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
