﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
  class AWS_GLUE_API StopTriggerResult
  {
  public:
    StopTriggerResult();
    StopTriggerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StopTriggerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the trigger that was stopped.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the trigger that was stopped.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the trigger that was stopped.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the trigger that was stopped.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the trigger that was stopped.</p>
     */
    inline StopTriggerResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the trigger that was stopped.</p>
     */
    inline StopTriggerResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the trigger that was stopped.</p>
     */
    inline StopTriggerResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
