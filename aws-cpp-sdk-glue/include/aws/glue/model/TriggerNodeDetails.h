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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>The details of a Trigger node present in the workflow.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TriggerNodeDetails">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API TriggerNodeDetails
  {
  public:
    TriggerNodeDetails();
    TriggerNodeDetails(Aws::Utils::Json::JsonView jsonValue);
    TriggerNodeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The information of the trigger represented by the trigger node.</p>
     */
    inline const Trigger& GetTrigger() const{ return m_trigger; }

    /**
     * <p>The information of the trigger represented by the trigger node.</p>
     */
    inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }

    /**
     * <p>The information of the trigger represented by the trigger node.</p>
     */
    inline void SetTrigger(const Trigger& value) { m_triggerHasBeenSet = true; m_trigger = value; }

    /**
     * <p>The information of the trigger represented by the trigger node.</p>
     */
    inline void SetTrigger(Trigger&& value) { m_triggerHasBeenSet = true; m_trigger = std::move(value); }

    /**
     * <p>The information of the trigger represented by the trigger node.</p>
     */
    inline TriggerNodeDetails& WithTrigger(const Trigger& value) { SetTrigger(value); return *this;}

    /**
     * <p>The information of the trigger represented by the trigger node.</p>
     */
    inline TriggerNodeDetails& WithTrigger(Trigger&& value) { SetTrigger(std::move(value)); return *this;}

  private:

    Trigger m_trigger;
    bool m_triggerHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
