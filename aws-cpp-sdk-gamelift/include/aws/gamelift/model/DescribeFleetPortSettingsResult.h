/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Represents the returned data in response to a request
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetPortSettingsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeFleetPortSettingsResult
  {
  public:
    DescribeFleetPortSettingsResult();
    DescribeFleetPortSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeFleetPortSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The port settings for the requested fleet ID.</p>
     */
    inline const Aws::Vector<IpPermission>& GetInboundPermissions() const{ return m_inboundPermissions; }

    /**
     * <p>The port settings for the requested fleet ID.</p>
     */
    inline void SetInboundPermissions(const Aws::Vector<IpPermission>& value) { m_inboundPermissions = value; }

    /**
     * <p>The port settings for the requested fleet ID.</p>
     */
    inline void SetInboundPermissions(Aws::Vector<IpPermission>&& value) { m_inboundPermissions = std::move(value); }

    /**
     * <p>The port settings for the requested fleet ID.</p>
     */
    inline DescribeFleetPortSettingsResult& WithInboundPermissions(const Aws::Vector<IpPermission>& value) { SetInboundPermissions(value); return *this;}

    /**
     * <p>The port settings for the requested fleet ID.</p>
     */
    inline DescribeFleetPortSettingsResult& WithInboundPermissions(Aws::Vector<IpPermission>&& value) { SetInboundPermissions(std::move(value)); return *this;}

    /**
     * <p>The port settings for the requested fleet ID.</p>
     */
    inline DescribeFleetPortSettingsResult& AddInboundPermissions(const IpPermission& value) { m_inboundPermissions.push_back(value); return *this; }

    /**
     * <p>The port settings for the requested fleet ID.</p>
     */
    inline DescribeFleetPortSettingsResult& AddInboundPermissions(IpPermission&& value) { m_inboundPermissions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<IpPermission> m_inboundPermissions;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
