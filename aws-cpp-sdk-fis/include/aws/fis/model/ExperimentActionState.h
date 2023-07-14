/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ExperimentActionStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Describes the state of an action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentActionState">AWS
   * API Reference</a></p>
   */
  class AWS_FIS_API ExperimentActionState
  {
  public:
    ExperimentActionState();
    ExperimentActionState(Aws::Utils::Json::JsonView jsonValue);
    ExperimentActionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state of the action.</p>
     */
    inline const ExperimentActionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The state of the action.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The state of the action.</p>
     */
    inline void SetStatus(const ExperimentActionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The state of the action.</p>
     */
    inline void SetStatus(ExperimentActionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The state of the action.</p>
     */
    inline ExperimentActionState& WithStatus(const ExperimentActionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The state of the action.</p>
     */
    inline ExperimentActionState& WithStatus(ExperimentActionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the state.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the state.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the state.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the state.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the state.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for the state.</p>
     */
    inline ExperimentActionState& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the state.</p>
     */
    inline ExperimentActionState& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the state.</p>
     */
    inline ExperimentActionState& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    ExperimentActionStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
