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
    AWS_BATCH_API EksAttemptContainerDetail();
    AWS_BATCH_API EksAttemptContainerDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksAttemptContainerDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a container.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EksAttemptContainerDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EksAttemptContainerDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EksAttemptContainerDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the container.</p>
     */
    inline const Aws::String& GetContainerID() const{ return m_containerID; }
    inline bool ContainerIDHasBeenSet() const { return m_containerIDHasBeenSet; }
    inline void SetContainerID(const Aws::String& value) { m_containerIDHasBeenSet = true; m_containerID = value; }
    inline void SetContainerID(Aws::String&& value) { m_containerIDHasBeenSet = true; m_containerID = std::move(value); }
    inline void SetContainerID(const char* value) { m_containerIDHasBeenSet = true; m_containerID.assign(value); }
    inline EksAttemptContainerDetail& WithContainerID(const Aws::String& value) { SetContainerID(value); return *this;}
    inline EksAttemptContainerDetail& WithContainerID(Aws::String&& value) { SetContainerID(std::move(value)); return *this;}
    inline EksAttemptContainerDetail& WithContainerID(const char* value) { SetContainerID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exit code returned for the job attempt. A non-zero exit code is
     * considered failed.</p>
     */
    inline int GetExitCode() const{ return m_exitCode; }
    inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }
    inline EksAttemptContainerDetail& WithExitCode(int value) { SetExitCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details for a running or stopped container.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline EksAttemptContainerDetail& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline EksAttemptContainerDetail& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline EksAttemptContainerDetail& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_containerID;
    bool m_containerIDHasBeenSet = false;

    int m_exitCode;
    bool m_exitCodeHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
