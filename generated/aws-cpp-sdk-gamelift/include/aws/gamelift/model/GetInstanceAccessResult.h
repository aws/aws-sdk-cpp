﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Represents the returned data in response to a request
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetInstanceAccessOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API GetInstanceAccessResult
  {
  public:
    GetInstanceAccessResult();
    GetInstanceAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetInstanceAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The connection information for a fleet instance, including IP address and
     * access credentials.</p>
     */
    inline const InstanceAccess& GetInstanceAccess() const{ return m_instanceAccess; }

    /**
     * <p>The connection information for a fleet instance, including IP address and
     * access credentials.</p>
     */
    inline void SetInstanceAccess(const InstanceAccess& value) { m_instanceAccess = value; }

    /**
     * <p>The connection information for a fleet instance, including IP address and
     * access credentials.</p>
     */
    inline void SetInstanceAccess(InstanceAccess&& value) { m_instanceAccess = std::move(value); }

    /**
     * <p>The connection information for a fleet instance, including IP address and
     * access credentials.</p>
     */
    inline GetInstanceAccessResult& WithInstanceAccess(const InstanceAccess& value) { SetInstanceAccess(value); return *this;}

    /**
     * <p>The connection information for a fleet instance, including IP address and
     * access credentials.</p>
     */
    inline GetInstanceAccessResult& WithInstanceAccess(InstanceAccess&& value) { SetInstanceAccess(std::move(value)); return *this;}

  private:

    InstanceAccess m_instanceAccess;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
