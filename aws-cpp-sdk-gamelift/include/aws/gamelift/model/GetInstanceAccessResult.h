﻿/*
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
#include <aws/gamelift/model/InstanceAccess.h>

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
  class AWS_GAMELIFT_API GetInstanceAccessResult
  {
  public:
    GetInstanceAccessResult();
    GetInstanceAccessResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetInstanceAccessResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Object containing connection information for a fleet instance, including IP
     * address and access credentials.</p>
     */
    inline const InstanceAccess& GetInstanceAccess() const{ return m_instanceAccess; }

    /**
     * <p>Object containing connection information for a fleet instance, including IP
     * address and access credentials.</p>
     */
    inline void SetInstanceAccess(const InstanceAccess& value) { m_instanceAccess = value; }

    /**
     * <p>Object containing connection information for a fleet instance, including IP
     * address and access credentials.</p>
     */
    inline void SetInstanceAccess(InstanceAccess&& value) { m_instanceAccess = value; }

    /**
     * <p>Object containing connection information for a fleet instance, including IP
     * address and access credentials.</p>
     */
    inline GetInstanceAccessResult& WithInstanceAccess(const InstanceAccess& value) { SetInstanceAccess(value); return *this;}

    /**
     * <p>Object containing connection information for a fleet instance, including IP
     * address and access credentials.</p>
     */
    inline GetInstanceAccessResult& WithInstanceAccess(InstanceAccess&& value) { SetInstanceAccess(value); return *this;}

  private:
    InstanceAccess m_instanceAccess;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
