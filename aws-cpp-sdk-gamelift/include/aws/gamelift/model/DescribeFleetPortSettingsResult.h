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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/IpPermission.h>
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
namespace GameLift
{
namespace Model
{
  /**
   * <p>Represents the returned data in response to a request action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetPortSettingsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeFleetPortSettingsResult
  {
  public:
    DescribeFleetPortSettingsResult();
    DescribeFleetPortSettingsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeFleetPortSettingsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Object that contains port settings for the requested fleet ID.</p>
     */
    inline const Aws::Vector<IpPermission>& GetInboundPermissions() const{ return m_inboundPermissions; }

    /**
     * <p>Object that contains port settings for the requested fleet ID.</p>
     */
    inline void SetInboundPermissions(const Aws::Vector<IpPermission>& value) { m_inboundPermissions = value; }

    /**
     * <p>Object that contains port settings for the requested fleet ID.</p>
     */
    inline void SetInboundPermissions(Aws::Vector<IpPermission>&& value) { m_inboundPermissions = std::move(value); }

    /**
     * <p>Object that contains port settings for the requested fleet ID.</p>
     */
    inline DescribeFleetPortSettingsResult& WithInboundPermissions(const Aws::Vector<IpPermission>& value) { SetInboundPermissions(value); return *this;}

    /**
     * <p>Object that contains port settings for the requested fleet ID.</p>
     */
    inline DescribeFleetPortSettingsResult& WithInboundPermissions(Aws::Vector<IpPermission>&& value) { SetInboundPermissions(std::move(value)); return *this;}

    /**
     * <p>Object that contains port settings for the requested fleet ID.</p>
     */
    inline DescribeFleetPortSettingsResult& AddInboundPermissions(const IpPermission& value) { m_inboundPermissions.push_back(value); return *this; }

    /**
     * <p>Object that contains port settings for the requested fleet ID.</p>
     */
    inline DescribeFleetPortSettingsResult& AddInboundPermissions(IpPermission&& value) { m_inboundPermissions.push_back(std::move(value)); return *this; }

  private:
    Aws::Vector<IpPermission> m_inboundPermissions;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
