/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
  class UpdateEntityResult
  {
  public:
    AWS_IOTTWINMAKER_API UpdateEntityResult();
    AWS_IOTTWINMAKER_API UpdateEntityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API UpdateEntityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date and time when the entity was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }

    /**
     * <p>The date and time when the entity was last updated.</p>
     */
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTime = value; }

    /**
     * <p>The date and time when the entity was last updated.</p>
     */
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTime = std::move(value); }

    /**
     * <p>The date and time when the entity was last updated.</p>
     */
    inline UpdateEntityResult& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>The date and time when the entity was last updated.</p>
     */
    inline UpdateEntityResult& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}


    /**
     * <p>The current state of the entity update.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>The current state of the entity update.</p>
     */
    inline void SetState(const State& value) { m_state = value; }

    /**
     * <p>The current state of the entity update.</p>
     */
    inline void SetState(State&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of the entity update.</p>
     */
    inline UpdateEntityResult& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the entity update.</p>
     */
    inline UpdateEntityResult& WithState(State&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_updateDateTime;

    State m_state;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
