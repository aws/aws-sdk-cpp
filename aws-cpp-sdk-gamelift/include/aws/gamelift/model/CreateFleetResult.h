/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/FleetAttributes.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateFleetOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CreateFleetResult
  {
  public:
    CreateFleetResult();
    CreateFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Properties for the newly created fleet.</p>
     */
    inline const FleetAttributes& GetFleetAttributes() const{ return m_fleetAttributes; }

    /**
     * <p>Properties for the newly created fleet.</p>
     */
    inline void SetFleetAttributes(const FleetAttributes& value) { m_fleetAttributes = value; }

    /**
     * <p>Properties for the newly created fleet.</p>
     */
    inline void SetFleetAttributes(FleetAttributes&& value) { m_fleetAttributes = std::move(value); }

    /**
     * <p>Properties for the newly created fleet.</p>
     */
    inline CreateFleetResult& WithFleetAttributes(const FleetAttributes& value) { SetFleetAttributes(value); return *this;}

    /**
     * <p>Properties for the newly created fleet.</p>
     */
    inline CreateFleetResult& WithFleetAttributes(FleetAttributes&& value) { SetFleetAttributes(std::move(value)); return *this;}

  private:

    FleetAttributes m_fleetAttributes;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
