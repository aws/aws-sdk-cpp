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
  class TriggerNodeDetails
  {
  public:
    AWS_GLUE_API TriggerNodeDetails() = default;
    AWS_GLUE_API TriggerNodeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TriggerNodeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The information of the trigger represented by the trigger node.</p>
     */
    inline const Trigger& GetTrigger() const { return m_trigger; }
    inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }
    template<typename TriggerT = Trigger>
    void SetTrigger(TriggerT&& value) { m_triggerHasBeenSet = true; m_trigger = std::forward<TriggerT>(value); }
    template<typename TriggerT = Trigger>
    TriggerNodeDetails& WithTrigger(TriggerT&& value) { SetTrigger(std::forward<TriggerT>(value)); return *this;}
    ///@}
  private:

    Trigger m_trigger;
    bool m_triggerHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
