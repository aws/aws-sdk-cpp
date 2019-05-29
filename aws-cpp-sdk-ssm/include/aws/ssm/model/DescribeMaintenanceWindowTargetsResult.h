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
#include <aws/ssm/model/MaintenanceWindowTarget.h>
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
  class AWS_SSM_API DescribeMaintenanceWindowTargetsResult
  {
  public:
    DescribeMaintenanceWindowTargetsResult();
    DescribeMaintenanceWindowTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeMaintenanceWindowTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the targets in the maintenance window.</p>
     */
    inline const Aws::Vector<MaintenanceWindowTarget>& GetTargets() const{ return m_targets; }

    /**
     * <p>Information about the targets in the maintenance window.</p>
     */
    inline void SetTargets(const Aws::Vector<MaintenanceWindowTarget>& value) { m_targets = value; }

    /**
     * <p>Information about the targets in the maintenance window.</p>
     */
    inline void SetTargets(Aws::Vector<MaintenanceWindowTarget>&& value) { m_targets = std::move(value); }

    /**
     * <p>Information about the targets in the maintenance window.</p>
     */
    inline DescribeMaintenanceWindowTargetsResult& WithTargets(const Aws::Vector<MaintenanceWindowTarget>& value) { SetTargets(value); return *this;}

    /**
     * <p>Information about the targets in the maintenance window.</p>
     */
    inline DescribeMaintenanceWindowTargetsResult& WithTargets(Aws::Vector<MaintenanceWindowTarget>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>Information about the targets in the maintenance window.</p>
     */
    inline DescribeMaintenanceWindowTargetsResult& AddTargets(const MaintenanceWindowTarget& value) { m_targets.push_back(value); return *this; }

    /**
     * <p>Information about the targets in the maintenance window.</p>
     */
    inline DescribeMaintenanceWindowTargetsResult& AddTargets(MaintenanceWindowTarget&& value) { m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeMaintenanceWindowTargetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeMaintenanceWindowTargetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeMaintenanceWindowTargetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MaintenanceWindowTarget> m_targets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
