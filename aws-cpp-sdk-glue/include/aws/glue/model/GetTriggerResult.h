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
  class AWS_GLUE_API GetTriggerResult
  {
  public:
    GetTriggerResult();
    GetTriggerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTriggerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
