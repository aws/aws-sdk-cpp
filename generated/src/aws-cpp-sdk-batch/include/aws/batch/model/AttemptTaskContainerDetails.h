/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/NetworkInterface.h>
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
   * <p>An object that represents the details of a container that's part of a job
   * attempt.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/AttemptTaskContainerDetails">AWS
   * API Reference</a></p>
   */
  class AttemptTaskContainerDetails
  {
  public:
    AWS_BATCH_API AttemptTaskContainerDetails();
    AWS_BATCH_API AttemptTaskContainerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API AttemptTaskContainerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The exit code for the container’s attempt. A non-zero exit code is considered
     * failed.</p>
     */
    inline int GetExitCode() const{ return m_exitCode; }
    inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }
    inline AttemptTaskContainerDetails& WithExitCode(int value) { SetExitCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a container.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AttemptTaskContainerDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AttemptTaskContainerDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AttemptTaskContainerDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short (255 max characters) string that's easy to understand and provides
     * additional details for a running or stopped container.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline AttemptTaskContainerDetails& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline AttemptTaskContainerDetails& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline AttemptTaskContainerDetails& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon CloudWatch Logs log stream that's associated with the
     * container. The log group for Batch jobs is <code>/aws/batch/job</code>. Each
     * container attempt receives a log stream name when they reach the
     * <code>RUNNING</code> status.</p>
     */
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }
    inline void SetLogStreamName(Aws::String&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::move(value); }
    inline void SetLogStreamName(const char* value) { m_logStreamNameHasBeenSet = true; m_logStreamName.assign(value); }
    inline AttemptTaskContainerDetails& WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}
    inline AttemptTaskContainerDetails& WithLogStreamName(Aws::String&& value) { SetLogStreamName(std::move(value)); return *this;}
    inline AttemptTaskContainerDetails& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interfaces that are associated with the job attempt.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const{ return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    inline void SetNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }
    inline void SetNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }
    inline AttemptTaskContainerDetails& WithNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfaces(value); return *this;}
    inline AttemptTaskContainerDetails& WithNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}
    inline AttemptTaskContainerDetails& AddNetworkInterfaces(const NetworkInterface& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }
    inline AttemptTaskContainerDetails& AddNetworkInterfaces(NetworkInterface&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_exitCode;
    bool m_exitCodeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
