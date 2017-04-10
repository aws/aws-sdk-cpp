/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Represents the returned data in response to a request action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateFleetOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CreateFleetResult
  {
  public:
    CreateFleetResult();
    CreateFleetResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateFleetResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
