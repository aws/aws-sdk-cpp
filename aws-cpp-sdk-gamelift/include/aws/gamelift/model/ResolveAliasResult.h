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
   * <p>Represents the returned data in response to a request action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ResolveAliasOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API ResolveAliasResult
  {
  public:
    ResolveAliasResult();
    ResolveAliasResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ResolveAliasResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Fleet identifier that is associated with the requested alias.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Fleet identifier that is associated with the requested alias.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }

    /**
     * <p>Fleet identifier that is associated with the requested alias.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }

    /**
     * <p>Fleet identifier that is associated with the requested alias.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }

    /**
     * <p>Fleet identifier that is associated with the requested alias.</p>
     */
    inline ResolveAliasResult& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Fleet identifier that is associated with the requested alias.</p>
     */
    inline ResolveAliasResult& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Fleet identifier that is associated with the requested alias.</p>
     */
    inline ResolveAliasResult& WithFleetId(const char* value) { SetFleetId(value); return *this;}

  private:
    Aws::String m_fleetId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
