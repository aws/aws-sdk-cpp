/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/cloud9/model/EnvironmentLifecycleStatus.h>
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
namespace Cloud9
{
namespace Model
{

  /**
   * <p>Information about the current creation or deletion lifecycle state of an
   * Cloud9 development environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloud9-2017-09-23/EnvironmentLifecycle">AWS
   * API Reference</a></p>
   */
  class EnvironmentLifecycle
  {
  public:
    AWS_CLOUD9_API EnvironmentLifecycle() = default;
    AWS_CLOUD9_API EnvironmentLifecycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUD9_API EnvironmentLifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUD9_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current creation or deletion lifecycle state of the environment.</p> <ul>
     * <li> <p> <code>CREATING</code>: The environment is in the process of being
     * created.</p> </li> <li> <p> <code>CREATED</code>: The environment was
     * successfully created.</p> </li> <li> <p> <code>CREATE_FAILED</code>: The
     * environment failed to be created.</p> </li> <li> <p> <code>DELETING</code>: The
     * environment is in the process of being deleted.</p> </li> <li> <p>
     * <code>DELETE_FAILED</code>: The environment failed to delete.</p> </li> </ul>
     */
    inline EnvironmentLifecycleStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EnvironmentLifecycleStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EnvironmentLifecycle& WithStatus(EnvironmentLifecycleStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any informational message about the lifecycle state of the environment.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    EnvironmentLifecycle& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the environment failed to delete, the Amazon Resource Name (ARN) of the
     * related Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetFailureResource() const { return m_failureResource; }
    inline bool FailureResourceHasBeenSet() const { return m_failureResourceHasBeenSet; }
    template<typename FailureResourceT = Aws::String>
    void SetFailureResource(FailureResourceT&& value) { m_failureResourceHasBeenSet = true; m_failureResource = std::forward<FailureResourceT>(value); }
    template<typename FailureResourceT = Aws::String>
    EnvironmentLifecycle& WithFailureResource(FailureResourceT&& value) { SetFailureResource(std::forward<FailureResourceT>(value)); return *this;}
    ///@}
  private:

    EnvironmentLifecycleStatus m_status{EnvironmentLifecycleStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_failureResource;
    bool m_failureResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
