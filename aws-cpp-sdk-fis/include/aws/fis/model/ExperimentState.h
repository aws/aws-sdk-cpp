/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ExperimentStatus.h>
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
   * <p>Describes the state of an experiment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentState">AWS
   * API Reference</a></p>
   */
  class AWS_FIS_API ExperimentState
  {
  public:
    ExperimentState();
    ExperimentState(Aws::Utils::Json::JsonView jsonValue);
    ExperimentState& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state of the experiment.</p>
     */
    inline const ExperimentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The state of the experiment.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The state of the experiment.</p>
     */
    inline void SetStatus(const ExperimentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The state of the experiment.</p>
     */
    inline void SetStatus(ExperimentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The state of the experiment.</p>
     */
    inline ExperimentState& WithStatus(const ExperimentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The state of the experiment.</p>
     */
    inline ExperimentState& WithStatus(ExperimentStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline ExperimentState& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the state.</p>
     */
    inline ExperimentState& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the state.</p>
     */
    inline ExperimentState& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    ExperimentStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
