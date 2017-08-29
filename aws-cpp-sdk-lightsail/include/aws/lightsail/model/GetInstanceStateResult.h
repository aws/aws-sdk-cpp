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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/InstanceState.h>
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
namespace Lightsail
{
namespace Model
{
  class AWS_LIGHTSAIL_API GetInstanceStateResult
  {
  public:
    GetInstanceStateResult();
    GetInstanceStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetInstanceStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The state of the instance.</p>
     */
    inline const InstanceState& GetState() const{ return m_state; }

    /**
     * <p>The state of the instance.</p>
     */
    inline void SetState(const InstanceState& value) { m_state = value; }

    /**
     * <p>The state of the instance.</p>
     */
    inline void SetState(InstanceState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the instance.</p>
     */
    inline GetInstanceStateResult& WithState(const InstanceState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the instance.</p>
     */
    inline GetInstanceStateResult& WithState(InstanceState&& value) { SetState(std::move(value)); return *this;}

  private:

    InstanceState m_state;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
