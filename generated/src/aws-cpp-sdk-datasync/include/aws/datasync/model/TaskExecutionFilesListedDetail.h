/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>

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
namespace DataSync
{
namespace Model
{

  /**
   * <p>The number of objects that DataSync finds at your locations.</p> 
   * <p>Applies only to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TaskExecutionFilesListedDetail">AWS
   * API Reference</a></p>
   */
  class TaskExecutionFilesListedDetail
  {
  public:
    AWS_DATASYNC_API TaskExecutionFilesListedDetail() = default;
    AWS_DATASYNC_API TaskExecutionFilesListedDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API TaskExecutionFilesListedDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of objects that DataSync finds at your source location.</p> <ul>
     * <li> <p>With a <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html">manifest</a>,
     * DataSync lists only what's in your manifest (and not everything at your source
     * location).</p> </li> <li> <p>With an include <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/filtering.html">filter</a>,
     * DataSync lists only what matches the filter at your source location.</p> </li>
     * <li> <p>With an exclude filter, DataSync lists everything at your source
     * location before applying the filter.</p> </li> </ul>
     */
    inline long long GetAtSource() const { return m_atSource; }
    inline bool AtSourceHasBeenSet() const { return m_atSourceHasBeenSet; }
    inline void SetAtSource(long long value) { m_atSourceHasBeenSet = true; m_atSource = value; }
    inline TaskExecutionFilesListedDetail& WithAtSource(long long value) { SetAtSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of objects that DataSync finds at your destination location. This
     * counter is only applicable if you <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html#task-option-file-object-handling">configure
     * your task</a> to delete data in the destination that isn't in the source.</p>
     */
    inline long long GetAtDestinationForDelete() const { return m_atDestinationForDelete; }
    inline bool AtDestinationForDeleteHasBeenSet() const { return m_atDestinationForDeleteHasBeenSet; }
    inline void SetAtDestinationForDelete(long long value) { m_atDestinationForDeleteHasBeenSet = true; m_atDestinationForDelete = value; }
    inline TaskExecutionFilesListedDetail& WithAtDestinationForDelete(long long value) { SetAtDestinationForDelete(value); return *this;}
    ///@}
  private:

    long long m_atSource{0};
    bool m_atSourceHasBeenSet = false;

    long long m_atDestinationForDelete{0};
    bool m_atDestinationForDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
