/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetInstanceStateResult
  {
  public:
    AWS_LIGHTSAIL_API GetInstanceStateResult();
    AWS_LIGHTSAIL_API GetInstanceStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetInstanceStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
