/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/model/EventSourceValues.h>
#include <aws/dlm/model/EventParameters.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p> <b>[Event-based policies only]</b> Specifies an event that activates an
   * event-based policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/EventSource">AWS API
   * Reference</a></p>
   */
  class EventSource
  {
  public:
    AWS_DLM_API EventSource() = default;
    AWS_DLM_API EventSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API EventSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source of the event. Currently only managed CloudWatch Events rules are
     * supported.</p>
     */
    inline EventSourceValues GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EventSourceValues value) { m_typeHasBeenSet = true; m_type = value; }
    inline EventSource& WithType(EventSourceValues value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the event.</p>
     */
    inline const EventParameters& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = EventParameters>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = EventParameters>
    EventSource& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}
  private:

    EventSourceValues m_type{EventSourceValues::NOT_SET};
    bool m_typeHasBeenSet = false;

    EventParameters m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
