/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Trigger.h>
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
namespace Glue
{
namespace Model
{
  class UpdateTriggerResult
  {
  public:
    AWS_GLUE_API UpdateTriggerResult();
    AWS_GLUE_API UpdateTriggerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API UpdateTriggerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The resulting trigger definition.</p>
     */
    inline const Trigger& GetTrigger() const{ return m_trigger; }

    /**
     * <p>The resulting trigger definition.</p>
     */
    inline void SetTrigger(const Trigger& value) { m_trigger = value; }

    /**
     * <p>The resulting trigger definition.</p>
     */
    inline void SetTrigger(Trigger&& value) { m_trigger = std::move(value); }

    /**
     * <p>The resulting trigger definition.</p>
     */
    inline UpdateTriggerResult& WithTrigger(const Trigger& value) { SetTrigger(value); return *this;}

    /**
     * <p>The resulting trigger definition.</p>
     */
    inline UpdateTriggerResult& WithTrigger(Trigger&& value) { SetTrigger(std::move(value)); return *this;}

  private:

    Trigger m_trigger;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
