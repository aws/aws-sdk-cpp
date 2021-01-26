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
   * <p>Specifies an event that triggers an event-based policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/EventSource">AWS API
   * Reference</a></p>
   */
  class AWS_DLM_API EventSource
  {
  public:
    EventSource();
    EventSource(Aws::Utils::Json::JsonView jsonValue);
    EventSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source of the event. Currently only managed AWS CloudWatch Events rules
     * are supported.</p>
     */
    inline const EventSourceValues& GetType() const{ return m_type; }

    /**
     * <p>The source of the event. Currently only managed AWS CloudWatch Events rules
     * are supported.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The source of the event. Currently only managed AWS CloudWatch Events rules
     * are supported.</p>
     */
    inline void SetType(const EventSourceValues& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The source of the event. Currently only managed AWS CloudWatch Events rules
     * are supported.</p>
     */
    inline void SetType(EventSourceValues&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The source of the event. Currently only managed AWS CloudWatch Events rules
     * are supported.</p>
     */
    inline EventSource& WithType(const EventSourceValues& value) { SetType(value); return *this;}

    /**
     * <p>The source of the event. Currently only managed AWS CloudWatch Events rules
     * are supported.</p>
     */
    inline EventSource& WithType(EventSourceValues&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Information about the event.</p>
     */
    inline const EventParameters& GetParameters() const{ return m_parameters; }

    /**
     * <p>Information about the event.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Information about the event.</p>
     */
    inline void SetParameters(const EventParameters& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Information about the event.</p>
     */
    inline void SetParameters(EventParameters&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Information about the event.</p>
     */
    inline EventSource& WithParameters(const EventParameters& value) { SetParameters(value); return *this;}

    /**
     * <p>Information about the event.</p>
     */
    inline EventSource& WithParameters(EventParameters&& value) { SetParameters(std::move(value)); return *this;}

  private:

    EventSourceValues m_type;
    bool m_typeHasBeenSet;

    EventParameters m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
