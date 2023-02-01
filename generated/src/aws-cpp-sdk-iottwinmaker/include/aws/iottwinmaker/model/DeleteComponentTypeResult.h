/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/State.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class DeleteComponentTypeResult
  {
  public:
    AWS_IOTTWINMAKER_API DeleteComponentTypeResult();
    AWS_IOTTWINMAKER_API DeleteComponentTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API DeleteComponentTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current state of the component type to be deleted.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>The current state of the component type to be deleted.</p>
     */
    inline void SetState(const State& value) { m_state = value; }

    /**
     * <p>The current state of the component type to be deleted.</p>
     */
    inline void SetState(State&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of the component type to be deleted.</p>
     */
    inline DeleteComponentTypeResult& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the component type to be deleted.</p>
     */
    inline DeleteComponentTypeResult& WithState(State&& value) { SetState(std::move(value)); return *this;}

  private:

    State m_state;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
