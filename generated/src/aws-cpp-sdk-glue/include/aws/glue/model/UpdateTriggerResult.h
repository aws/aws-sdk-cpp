/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Trigger.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateTriggerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateTriggerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateTriggerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Trigger m_trigger;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
