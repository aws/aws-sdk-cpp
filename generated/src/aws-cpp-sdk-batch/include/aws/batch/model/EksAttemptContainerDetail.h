/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>An object that represents the details for an attempt for a job attempt that
   * an Amazon EKS container runs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksAttemptContainerDetail">AWS
   * API Reference</a></p>
   */
  class EksAttemptContainerDetail
  {
  public:
    AWS_BATCH_API EksAttemptContainerDetail() = default;
    AWS_BATCH_API EksAttemptContainerDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksAttemptContainerDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a container.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EksAttemptContainerDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the container.</p>
     */
    inline const Aws::String& GetContainerID() const { return m_containerID; }
    inline bool ContainerIDHasBeenSet() const { return m_containerIDHasBeenSet; }
    template<typename ContainerIDT = Aws::String>
    void SetContainerID(ContainerIDT&& value) { m_containerIDHasBeenSet = true; m_containerID = std::forward<ContainerIDT>(value); }
    template<typename ContainerIDT = Aws::String>
    EksAttemptContainerDetail& WithContainerID(ContainerIDT&& value) { SetContainerID(std::forward<ContainerIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exit code returned for the job attempt. A non-zero exit code is
     * considered failed.</p>
     */
    inline int GetExitCode() const { return m_exitCode; }
    inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }
    inline EksAttemptContainerDetail& WithExitCode(int value) { SetExitCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details for a running or stopped container.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    EksAttemptContainerDetail& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_containerID;
    bool m_containerIDHasBeenSet = false;

    int m_exitCode{0};
    bool m_exitCodeHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
