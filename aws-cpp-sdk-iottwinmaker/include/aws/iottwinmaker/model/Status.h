/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/State.h>
#include <aws/iottwinmaker/model/ErrorDetails.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>An object that represents the status of an entity, component, component type,
   * or workspace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/Status">AWS
   * API Reference</a></p>
   */
  class Status
  {
  public:
    AWS_IOTTWINMAKER_API Status();
    AWS_IOTTWINMAKER_API Status(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Status& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current state of the entity, component, component type, or workspace.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>The current state of the entity, component, component type, or workspace.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the entity, component, component type, or workspace.</p>
     */
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the entity, component, component type, or workspace.</p>
     */
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the entity, component, component type, or workspace.</p>
     */
    inline Status& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the entity, component, component type, or workspace.</p>
     */
    inline Status& WithState(State&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The error message.</p>
     */
    inline const ErrorDetails& GetError() const{ return m_error; }

    /**
     * <p>The error message.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>The error message.</p>
     */
    inline void SetError(const ErrorDetails& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>The error message.</p>
     */
    inline void SetError(ErrorDetails&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>The error message.</p>
     */
    inline Status& WithError(const ErrorDetails& value) { SetError(value); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline Status& WithError(ErrorDetails&& value) { SetError(std::move(value)); return *this;}

  private:

    State m_state;
    bool m_stateHasBeenSet = false;

    ErrorDetails m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
