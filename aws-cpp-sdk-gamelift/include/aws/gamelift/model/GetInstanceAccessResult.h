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
#include <aws/gamelift/model/InstanceAccess.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetInstanceAccessOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API GetInstanceAccessResult
  {
  public:
    GetInstanceAccessResult();
    GetInstanceAccessResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetInstanceAccessResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Object that contains connection information for a fleet instance, including
     * IP address and access credentials.</p>
     */
    inline const InstanceAccess& GetInstanceAccess() const{ return m_instanceAccess; }

    /**
     * <p>Object that contains connection information for a fleet instance, including
     * IP address and access credentials.</p>
     */
    inline void SetInstanceAccess(const InstanceAccess& value) { m_instanceAccess = value; }

    /**
     * <p>Object that contains connection information for a fleet instance, including
     * IP address and access credentials.</p>
     */
    inline void SetInstanceAccess(InstanceAccess&& value) { m_instanceAccess = std::move(value); }

    /**
     * <p>Object that contains connection information for a fleet instance, including
     * IP address and access credentials.</p>
     */
    inline GetInstanceAccessResult& WithInstanceAccess(const InstanceAccess& value) { SetInstanceAccess(value); return *this;}

    /**
     * <p>Object that contains connection information for a fleet instance, including
     * IP address and access credentials.</p>
     */
    inline GetInstanceAccessResult& WithInstanceAccess(InstanceAccess&& value) { SetInstanceAccess(std::move(value)); return *this;}

  private:
    InstanceAccess m_instanceAccess;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
