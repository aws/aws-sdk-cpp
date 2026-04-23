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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_GLUE_API BatchGetTriggersResult
  {
  public:
    BatchGetTriggersResult();
    BatchGetTriggersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetTriggersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of trigger definitions.</p>
     */
    inline const Aws::Vector<Trigger>& GetTriggers() const{ return m_triggers; }

    /**
     * <p>A list of trigger definitions.</p>
     */
    inline void SetTriggers(const Aws::Vector<Trigger>& value) { m_triggers = value; }

    /**
     * <p>A list of trigger definitions.</p>
     */
    inline void SetTriggers(Aws::Vector<Trigger>&& value) { m_triggers = std::move(value); }

    /**
     * <p>A list of trigger definitions.</p>
     */
    inline BatchGetTriggersResult& WithTriggers(const Aws::Vector<Trigger>& value) { SetTriggers(value); return *this;}

    /**
     * <p>A list of trigger definitions.</p>
     */
    inline BatchGetTriggersResult& WithTriggers(Aws::Vector<Trigger>&& value) { SetTriggers(std::move(value)); return *this;}

    /**
     * <p>A list of trigger definitions.</p>
     */
    inline BatchGetTriggersResult& AddTriggers(const Trigger& value) { m_triggers.push_back(value); return *this; }

    /**
     * <p>A list of trigger definitions.</p>
     */
    inline BatchGetTriggersResult& AddTriggers(Trigger&& value) { m_triggers.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of names of triggers not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTriggersNotFound() const{ return m_triggersNotFound; }

    /**
     * <p>A list of names of triggers not found.</p>
     */
    inline void SetTriggersNotFound(const Aws::Vector<Aws::String>& value) { m_triggersNotFound = value; }

    /**
     * <p>A list of names of triggers not found.</p>
     */
    inline void SetTriggersNotFound(Aws::Vector<Aws::String>&& value) { m_triggersNotFound = std::move(value); }

    /**
     * <p>A list of names of triggers not found.</p>
     */
    inline BatchGetTriggersResult& WithTriggersNotFound(const Aws::Vector<Aws::String>& value) { SetTriggersNotFound(value); return *this;}

    /**
     * <p>A list of names of triggers not found.</p>
     */
    inline BatchGetTriggersResult& WithTriggersNotFound(Aws::Vector<Aws::String>&& value) { SetTriggersNotFound(std::move(value)); return *this;}

    /**
     * <p>A list of names of triggers not found.</p>
     */
    inline BatchGetTriggersResult& AddTriggersNotFound(const Aws::String& value) { m_triggersNotFound.push_back(value); return *this; }

    /**
     * <p>A list of names of triggers not found.</p>
     */
    inline BatchGetTriggersResult& AddTriggersNotFound(Aws::String&& value) { m_triggersNotFound.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of names of triggers not found.</p>
     */
    inline BatchGetTriggersResult& AddTriggersNotFound(const char* value) { m_triggersNotFound.push_back(value); return *this; }

  private:

    Aws::Vector<Trigger> m_triggers;

    Aws::Vector<Aws::String> m_triggersNotFound;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
