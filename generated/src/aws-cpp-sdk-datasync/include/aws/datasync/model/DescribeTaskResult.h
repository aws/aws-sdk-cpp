/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/TaskStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/Options.h>
#include <aws/datasync/model/TaskSchedule.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datasync/model/FilterRule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataSync
{
namespace Model
{
  /**
   * <p>DescribeTaskResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeTaskResponse">AWS
   * API Reference</a></p>
   */
  class DescribeTaskResult
  {
  public:
    AWS_DATASYNC_API DescribeTaskResult();
    AWS_DATASYNC_API DescribeTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the task that was described.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was described.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was described.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was described.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was described.</p>
     */
    inline DescribeTaskResult& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was described.</p>
     */
    inline DescribeTaskResult& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task that was described.</p>
     */
    inline DescribeTaskResult& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


    /**
     * <p>The status of the task that was described.</p> <p>For detailed information
     * about task execution statuses, see Understanding Task Statuses in the
     * <i>DataSync User Guide</i>.</p>
     */
    inline const TaskStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the task that was described.</p> <p>For detailed information
     * about task execution statuses, see Understanding Task Statuses in the
     * <i>DataSync User Guide</i>.</p>
     */
    inline void SetStatus(const TaskStatus& value) { m_status = value; }

    /**
     * <p>The status of the task that was described.</p> <p>For detailed information
     * about task execution statuses, see Understanding Task Statuses in the
     * <i>DataSync User Guide</i>.</p>
     */
    inline void SetStatus(TaskStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the task that was described.</p> <p>For detailed information
     * about task execution statuses, see Understanding Task Statuses in the
     * <i>DataSync User Guide</i>.</p>
     */
    inline DescribeTaskResult& WithStatus(const TaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the task that was described.</p> <p>For detailed information
     * about task execution statuses, see Understanding Task Statuses in the
     * <i>DataSync User Guide</i>.</p>
     */
    inline DescribeTaskResult& WithStatus(TaskStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The name of the task that was described.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the task that was described.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the task that was described.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the task that was described.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the task that was described.</p>
     */
    inline DescribeTaskResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the task that was described.</p>
     */
    inline DescribeTaskResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the task that was described.</p>
     */
    inline DescribeTaskResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that is transferring
     * files.</p>
     */
    inline const Aws::String& GetCurrentTaskExecutionArn() const{ return m_currentTaskExecutionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that is transferring
     * files.</p>
     */
    inline void SetCurrentTaskExecutionArn(const Aws::String& value) { m_currentTaskExecutionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that is transferring
     * files.</p>
     */
    inline void SetCurrentTaskExecutionArn(Aws::String&& value) { m_currentTaskExecutionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that is transferring
     * files.</p>
     */
    inline void SetCurrentTaskExecutionArn(const char* value) { m_currentTaskExecutionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that is transferring
     * files.</p>
     */
    inline DescribeTaskResult& WithCurrentTaskExecutionArn(const Aws::String& value) { SetCurrentTaskExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that is transferring
     * files.</p>
     */
    inline DescribeTaskResult& WithCurrentTaskExecutionArn(Aws::String&& value) { SetCurrentTaskExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution that is transferring
     * files.</p>
     */
    inline DescribeTaskResult& WithCurrentTaskExecutionArn(const char* value) { SetCurrentTaskExecutionArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the source file system's location.</p>
     */
    inline const Aws::String& GetSourceLocationArn() const{ return m_sourceLocationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source file system's location.</p>
     */
    inline void SetSourceLocationArn(const Aws::String& value) { m_sourceLocationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source file system's location.</p>
     */
    inline void SetSourceLocationArn(Aws::String&& value) { m_sourceLocationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source file system's location.</p>
     */
    inline void SetSourceLocationArn(const char* value) { m_sourceLocationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source file system's location.</p>
     */
    inline DescribeTaskResult& WithSourceLocationArn(const Aws::String& value) { SetSourceLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source file system's location.</p>
     */
    inline DescribeTaskResult& WithSourceLocationArn(Aws::String&& value) { SetSourceLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source file system's location.</p>
     */
    inline DescribeTaskResult& WithSourceLocationArn(const char* value) { SetSourceLocationArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services storage resource's
     * location.</p>
     */
    inline const Aws::String& GetDestinationLocationArn() const{ return m_destinationLocationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services storage resource's
     * location.</p>
     */
    inline void SetDestinationLocationArn(const Aws::String& value) { m_destinationLocationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services storage resource's
     * location.</p>
     */
    inline void SetDestinationLocationArn(Aws::String&& value) { m_destinationLocationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services storage resource's
     * location.</p>
     */
    inline void SetDestinationLocationArn(const char* value) { m_destinationLocationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services storage resource's
     * location.</p>
     */
    inline DescribeTaskResult& WithDestinationLocationArn(const Aws::String& value) { SetDestinationLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services storage resource's
     * location.</p>
     */
    inline DescribeTaskResult& WithDestinationLocationArn(Aws::String&& value) { SetDestinationLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services storage resource's
     * location.</p>
     */
    inline DescribeTaskResult& WithDestinationLocationArn(const char* value) { SetDestinationLocationArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that was
     * used to monitor and log events in the task.</p> <p>For more information on these
     * groups, see Working with Log Groups and Log Streams in the <i>Amazon CloudWatch
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const{ return m_cloudWatchLogGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that was
     * used to monitor and log events in the task.</p> <p>For more information on these
     * groups, see Working with Log Groups and Log Streams in the <i>Amazon CloudWatch
     * User Guide</i>.</p>
     */
    inline void SetCloudWatchLogGroupArn(const Aws::String& value) { m_cloudWatchLogGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that was
     * used to monitor and log events in the task.</p> <p>For more information on these
     * groups, see Working with Log Groups and Log Streams in the <i>Amazon CloudWatch
     * User Guide</i>.</p>
     */
    inline void SetCloudWatchLogGroupArn(Aws::String&& value) { m_cloudWatchLogGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that was
     * used to monitor and log events in the task.</p> <p>For more information on these
     * groups, see Working with Log Groups and Log Streams in the <i>Amazon CloudWatch
     * User Guide</i>.</p>
     */
    inline void SetCloudWatchLogGroupArn(const char* value) { m_cloudWatchLogGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that was
     * used to monitor and log events in the task.</p> <p>For more information on these
     * groups, see Working with Log Groups and Log Streams in the <i>Amazon CloudWatch
     * User Guide</i>.</p>
     */
    inline DescribeTaskResult& WithCloudWatchLogGroupArn(const Aws::String& value) { SetCloudWatchLogGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that was
     * used to monitor and log events in the task.</p> <p>For more information on these
     * groups, see Working with Log Groups and Log Streams in the <i>Amazon CloudWatch
     * User Guide</i>.</p>
     */
    inline DescribeTaskResult& WithCloudWatchLogGroupArn(Aws::String&& value) { SetCloudWatchLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that was
     * used to monitor and log events in the task.</p> <p>For more information on these
     * groups, see Working with Log Groups and Log Streams in the <i>Amazon CloudWatch
     * User Guide</i>.</p>
     */
    inline DescribeTaskResult& WithCloudWatchLogGroupArn(const char* value) { SetCloudWatchLogGroupArn(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the network interfaces created for your
     * source location. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">Network
     * interface requirements</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceNetworkInterfaceArns() const{ return m_sourceNetworkInterfaceArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the network interfaces created for your
     * source location. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">Network
     * interface requirements</a>.</p>
     */
    inline void SetSourceNetworkInterfaceArns(const Aws::Vector<Aws::String>& value) { m_sourceNetworkInterfaceArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the network interfaces created for your
     * source location. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">Network
     * interface requirements</a>.</p>
     */
    inline void SetSourceNetworkInterfaceArns(Aws::Vector<Aws::String>&& value) { m_sourceNetworkInterfaceArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the network interfaces created for your
     * source location. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">Network
     * interface requirements</a>.</p>
     */
    inline DescribeTaskResult& WithSourceNetworkInterfaceArns(const Aws::Vector<Aws::String>& value) { SetSourceNetworkInterfaceArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the network interfaces created for your
     * source location. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">Network
     * interface requirements</a>.</p>
     */
    inline DescribeTaskResult& WithSourceNetworkInterfaceArns(Aws::Vector<Aws::String>&& value) { SetSourceNetworkInterfaceArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the network interfaces created for your
     * source location. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">Network
     * interface requirements</a>.</p>
     */
    inline DescribeTaskResult& AddSourceNetworkInterfaceArns(const Aws::String& value) { m_sourceNetworkInterfaceArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the network interfaces created for your
     * source location. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">Network
     * interface requirements</a>.</p>
     */
    inline DescribeTaskResult& AddSourceNetworkInterfaceArns(Aws::String&& value) { m_sourceNetworkInterfaceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the network interfaces created for your
     * source location. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">Network
     * interface requirements</a>.</p>
     */
    inline DescribeTaskResult& AddSourceNetworkInterfaceArns(const char* value) { m_sourceNetworkInterfaceArns.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Names (ARNs) of the network interfaces created for your
     * destination location. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">Network
     * interface requirements</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinationNetworkInterfaceArns() const{ return m_destinationNetworkInterfaceArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the network interfaces created for your
     * destination location. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">Network
     * interface requirements</a>.</p>
     */
    inline void SetDestinationNetworkInterfaceArns(const Aws::Vector<Aws::String>& value) { m_destinationNetworkInterfaceArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the network interfaces created for your
     * destination location. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">Network
     * interface requirements</a>.</p>
     */
    inline void SetDestinationNetworkInterfaceArns(Aws::Vector<Aws::String>&& value) { m_destinationNetworkInterfaceArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the network interfaces created for your
     * destination location. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">Network
     * interface requirements</a>.</p>
     */
    inline DescribeTaskResult& WithDestinationNetworkInterfaceArns(const Aws::Vector<Aws::String>& value) { SetDestinationNetworkInterfaceArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the network interfaces created for your
     * destination location. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">Network
     * interface requirements</a>.</p>
     */
    inline DescribeTaskResult& WithDestinationNetworkInterfaceArns(Aws::Vector<Aws::String>&& value) { SetDestinationNetworkInterfaceArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the network interfaces created for your
     * destination location. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">Network
     * interface requirements</a>.</p>
     */
    inline DescribeTaskResult& AddDestinationNetworkInterfaceArns(const Aws::String& value) { m_destinationNetworkInterfaceArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the network interfaces created for your
     * destination location. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">Network
     * interface requirements</a>.</p>
     */
    inline DescribeTaskResult& AddDestinationNetworkInterfaceArns(Aws::String&& value) { m_destinationNetworkInterfaceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the network interfaces created for your
     * destination location. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">Network
     * interface requirements</a>.</p>
     */
    inline DescribeTaskResult& AddDestinationNetworkInterfaceArns(const char* value) { m_destinationNetworkInterfaceArns.push_back(value); return *this; }


    /**
     * <p>The configuration options that control the behavior of the
     * <code>StartTaskExecution</code> operation. Some options include preserving file
     * or object metadata and verifying data integrity.</p> <p>You can override these
     * options for each task execution. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_StartTaskExecution.html">StartTaskExecution</a>.</p>
     */
    inline const Options& GetOptions() const{ return m_options; }

    /**
     * <p>The configuration options that control the behavior of the
     * <code>StartTaskExecution</code> operation. Some options include preserving file
     * or object metadata and verifying data integrity.</p> <p>You can override these
     * options for each task execution. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_StartTaskExecution.html">StartTaskExecution</a>.</p>
     */
    inline void SetOptions(const Options& value) { m_options = value; }

    /**
     * <p>The configuration options that control the behavior of the
     * <code>StartTaskExecution</code> operation. Some options include preserving file
     * or object metadata and verifying data integrity.</p> <p>You can override these
     * options for each task execution. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_StartTaskExecution.html">StartTaskExecution</a>.</p>
     */
    inline void SetOptions(Options&& value) { m_options = std::move(value); }

    /**
     * <p>The configuration options that control the behavior of the
     * <code>StartTaskExecution</code> operation. Some options include preserving file
     * or object metadata and verifying data integrity.</p> <p>You can override these
     * options for each task execution. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_StartTaskExecution.html">StartTaskExecution</a>.</p>
     */
    inline DescribeTaskResult& WithOptions(const Options& value) { SetOptions(value); return *this;}

    /**
     * <p>The configuration options that control the behavior of the
     * <code>StartTaskExecution</code> operation. Some options include preserving file
     * or object metadata and verifying data integrity.</p> <p>You can override these
     * options for each task execution. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_StartTaskExecution.html">StartTaskExecution</a>.</p>
     */
    inline DescribeTaskResult& WithOptions(Options&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>A list of filter rules that exclude specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline const Aws::Vector<FilterRule>& GetExcludes() const{ return m_excludes; }

    /**
     * <p>A list of filter rules that exclude specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline void SetExcludes(const Aws::Vector<FilterRule>& value) { m_excludes = value; }

    /**
     * <p>A list of filter rules that exclude specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline void SetExcludes(Aws::Vector<FilterRule>&& value) { m_excludes = std::move(value); }

    /**
     * <p>A list of filter rules that exclude specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline DescribeTaskResult& WithExcludes(const Aws::Vector<FilterRule>& value) { SetExcludes(value); return *this;}

    /**
     * <p>A list of filter rules that exclude specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline DescribeTaskResult& WithExcludes(Aws::Vector<FilterRule>&& value) { SetExcludes(std::move(value)); return *this;}

    /**
     * <p>A list of filter rules that exclude specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline DescribeTaskResult& AddExcludes(const FilterRule& value) { m_excludes.push_back(value); return *this; }

    /**
     * <p>A list of filter rules that exclude specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline DescribeTaskResult& AddExcludes(FilterRule&& value) { m_excludes.push_back(std::move(value)); return *this; }


    /**
     * <p>The schedule used to periodically transfer files from a source to a
     * destination location.</p>
     */
    inline const TaskSchedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule used to periodically transfer files from a source to a
     * destination location.</p>
     */
    inline void SetSchedule(const TaskSchedule& value) { m_schedule = value; }

    /**
     * <p>The schedule used to periodically transfer files from a source to a
     * destination location.</p>
     */
    inline void SetSchedule(TaskSchedule&& value) { m_schedule = std::move(value); }

    /**
     * <p>The schedule used to periodically transfer files from a source to a
     * destination location.</p>
     */
    inline DescribeTaskResult& WithSchedule(const TaskSchedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule used to periodically transfer files from a source to a
     * destination location.</p>
     */
    inline DescribeTaskResult& WithSchedule(TaskSchedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>Errors that DataSync encountered during execution of the task. You can use
     * this error code to help troubleshoot issues.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>Errors that DataSync encountered during execution of the task. You can use
     * this error code to help troubleshoot issues.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCode = value; }

    /**
     * <p>Errors that DataSync encountered during execution of the task. You can use
     * this error code to help troubleshoot issues.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCode = std::move(value); }

    /**
     * <p>Errors that DataSync encountered during execution of the task. You can use
     * this error code to help troubleshoot issues.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCode.assign(value); }

    /**
     * <p>Errors that DataSync encountered during execution of the task. You can use
     * this error code to help troubleshoot issues.</p>
     */
    inline DescribeTaskResult& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>Errors that DataSync encountered during execution of the task. You can use
     * this error code to help troubleshoot issues.</p>
     */
    inline DescribeTaskResult& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>Errors that DataSync encountered during execution of the task. You can use
     * this error code to help troubleshoot issues.</p>
     */
    inline DescribeTaskResult& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline const Aws::String& GetErrorDetail() const{ return m_errorDetail; }

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline void SetErrorDetail(const Aws::String& value) { m_errorDetail = value; }

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline void SetErrorDetail(Aws::String&& value) { m_errorDetail = std::move(value); }

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline void SetErrorDetail(const char* value) { m_errorDetail.assign(value); }

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline DescribeTaskResult& WithErrorDetail(const Aws::String& value) { SetErrorDetail(value); return *this;}

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline DescribeTaskResult& WithErrorDetail(Aws::String&& value) { SetErrorDetail(std::move(value)); return *this;}

    /**
     * <p>Detailed description of an error that was encountered during the task
     * execution. You can use this information to help troubleshoot issues. </p>
     */
    inline DescribeTaskResult& WithErrorDetail(const char* value) { SetErrorDetail(value); return *this;}


    /**
     * <p>The time that the task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the task was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the task was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the task was created.</p>
     */
    inline DescribeTaskResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the task was created.</p>
     */
    inline DescribeTaskResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A list of filter rules that include specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline const Aws::Vector<FilterRule>& GetIncludes() const{ return m_includes; }

    /**
     * <p>A list of filter rules that include specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline void SetIncludes(const Aws::Vector<FilterRule>& value) { m_includes = value; }

    /**
     * <p>A list of filter rules that include specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline void SetIncludes(Aws::Vector<FilterRule>&& value) { m_includes = std::move(value); }

    /**
     * <p>A list of filter rules that include specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline DescribeTaskResult& WithIncludes(const Aws::Vector<FilterRule>& value) { SetIncludes(value); return *this;}

    /**
     * <p>A list of filter rules that include specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline DescribeTaskResult& WithIncludes(Aws::Vector<FilterRule>&& value) { SetIncludes(std::move(value)); return *this;}

    /**
     * <p>A list of filter rules that include specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline DescribeTaskResult& AddIncludes(const FilterRule& value) { m_includes.push_back(value); return *this; }

    /**
     * <p>A list of filter rules that include specific data during your transfer. For
     * more information and examples, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">Filtering
     * data transferred by DataSync</a>.</p>
     */
    inline DescribeTaskResult& AddIncludes(FilterRule&& value) { m_includes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_taskArn;

    TaskStatus m_status;

    Aws::String m_name;

    Aws::String m_currentTaskExecutionArn;

    Aws::String m_sourceLocationArn;

    Aws::String m_destinationLocationArn;

    Aws::String m_cloudWatchLogGroupArn;

    Aws::Vector<Aws::String> m_sourceNetworkInterfaceArns;

    Aws::Vector<Aws::String> m_destinationNetworkInterfaceArns;

    Options m_options;

    Aws::Vector<FilterRule> m_excludes;

    TaskSchedule m_schedule;

    Aws::String m_errorCode;

    Aws::String m_errorDetail;

    Aws::Utils::DateTime m_creationTime;

    Aws::Vector<FilterRule> m_includes;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
