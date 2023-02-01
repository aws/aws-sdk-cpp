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
  class GetTriggerResult
  {
  public:
    AWS_GLUE_API GetTriggerResult();
    AWS_GLUE_API GetTriggerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetTriggerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested trigger definition.</p>
     */
    inline const Trigger& GetTrigger() const{ return m_trigger; }

    /**
     * <p>The requested trigger definition.</p>
     */
    inline void SetTrigger(const Trigger& value) { m_trigger = value; }

    /**
     * <p>The requested trigger definition.</p>
     */
    inline void SetTrigger(Trigger&& value) { m_trigger = std::move(value); }

    /**
     * <p>The requested trigger definition.</p>
     */
    inline GetTriggerResult& WithTrigger(const Trigger& value) { SetTrigger(value); return *this;}

    /**
     * <p>The requested trigger definition.</p>
     */
    inline GetTriggerResult& WithTrigger(Trigger&& value) { SetTrigger(std::move(value)); return *this;}

  private:

    Trigger m_trigger;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
