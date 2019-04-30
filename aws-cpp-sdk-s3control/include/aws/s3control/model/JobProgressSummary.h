/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Describes the total number of tasks that the specified job has executed, the
   * number of tasks that succeeded, and the number of tasks that
   * failed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobProgressSummary">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API JobProgressSummary
  {
  public:
    JobProgressSummary();
    JobProgressSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    JobProgressSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline long long GetTotalNumberOfTasks() const{ return m_totalNumberOfTasks; }

    /**
     * <p/>
     */
    inline bool TotalNumberOfTasksHasBeenSet() const { return m_totalNumberOfTasksHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTotalNumberOfTasks(long long value) { m_totalNumberOfTasksHasBeenSet = true; m_totalNumberOfTasks = value; }

    /**
     * <p/>
     */
    inline JobProgressSummary& WithTotalNumberOfTasks(long long value) { SetTotalNumberOfTasks(value); return *this;}


    /**
     * <p/>
     */
    inline long long GetNumberOfTasksSucceeded() const{ return m_numberOfTasksSucceeded; }

    /**
     * <p/>
     */
    inline bool NumberOfTasksSucceededHasBeenSet() const { return m_numberOfTasksSucceededHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetNumberOfTasksSucceeded(long long value) { m_numberOfTasksSucceededHasBeenSet = true; m_numberOfTasksSucceeded = value; }

    /**
     * <p/>
     */
    inline JobProgressSummary& WithNumberOfTasksSucceeded(long long value) { SetNumberOfTasksSucceeded(value); return *this;}


    /**
     * <p/>
     */
    inline long long GetNumberOfTasksFailed() const{ return m_numberOfTasksFailed; }

    /**
     * <p/>
     */
    inline bool NumberOfTasksFailedHasBeenSet() const { return m_numberOfTasksFailedHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetNumberOfTasksFailed(long long value) { m_numberOfTasksFailedHasBeenSet = true; m_numberOfTasksFailed = value; }

    /**
     * <p/>
     */
    inline JobProgressSummary& WithNumberOfTasksFailed(long long value) { SetNumberOfTasksFailed(value); return *this;}

  private:

    long long m_totalNumberOfTasks;
    bool m_totalNumberOfTasksHasBeenSet;

    long long m_numberOfTasksSucceeded;
    bool m_numberOfTasksSucceededHasBeenSet;

    long long m_numberOfTasksFailed;
    bool m_numberOfTasksFailedHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
