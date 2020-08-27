/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
namespace GameLift
{
namespace Model
{
  /**
   * <p>Represents the returned data in response to a request
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetPortSettingsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API UpdateFleetPortSettingsResult
  {
  public:
    UpdateFleetPortSettingsResult();
    UpdateFleetPortSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateFleetPortSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for a fleet that was updated.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for a fleet that was updated.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }

    /**
     * <p>A unique identifier for a fleet that was updated.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for a fleet that was updated.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for a fleet that was updated.</p>
     */
    inline UpdateFleetPortSettingsResult& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for a fleet that was updated.</p>
     */
    inline UpdateFleetPortSettingsResult& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a fleet that was updated.</p>
     */
    inline UpdateFleetPortSettingsResult& WithFleetId(const char* value) { SetFleetId(value); return *this;}

  private:

    Aws::String m_fleetId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
