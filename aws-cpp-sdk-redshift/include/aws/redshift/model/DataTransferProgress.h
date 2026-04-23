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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes the status of a cluster while it is in the process of resizing with
   * an incremental resize.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DataTransferProgress">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DataTransferProgress
  {
  public:
    DataTransferProgress();
    DataTransferProgress(const Aws::Utils::Xml::XmlNode& xmlNode);
    DataTransferProgress& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Describes the status of the cluster. While the transfer is in progress the
     * status is <code>transferringdata</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Describes the status of the cluster. While the transfer is in progress the
     * status is <code>transferringdata</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Describes the status of the cluster. While the transfer is in progress the
     * status is <code>transferringdata</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Describes the status of the cluster. While the transfer is in progress the
     * status is <code>transferringdata</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Describes the status of the cluster. While the transfer is in progress the
     * status is <code>transferringdata</code>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Describes the status of the cluster. While the transfer is in progress the
     * status is <code>transferringdata</code>.</p>
     */
    inline DataTransferProgress& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Describes the status of the cluster. While the transfer is in progress the
     * status is <code>transferringdata</code>.</p>
     */
    inline DataTransferProgress& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Describes the status of the cluster. While the transfer is in progress the
     * status is <code>transferringdata</code>.</p>
     */
    inline DataTransferProgress& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Describes the data transfer rate in MB's per second.</p>
     */
    inline double GetCurrentRateInMegaBytesPerSecond() const{ return m_currentRateInMegaBytesPerSecond; }

    /**
     * <p>Describes the data transfer rate in MB's per second.</p>
     */
    inline bool CurrentRateInMegaBytesPerSecondHasBeenSet() const { return m_currentRateInMegaBytesPerSecondHasBeenSet; }

    /**
     * <p>Describes the data transfer rate in MB's per second.</p>
     */
    inline void SetCurrentRateInMegaBytesPerSecond(double value) { m_currentRateInMegaBytesPerSecondHasBeenSet = true; m_currentRateInMegaBytesPerSecond = value; }

    /**
     * <p>Describes the data transfer rate in MB's per second.</p>
     */
    inline DataTransferProgress& WithCurrentRateInMegaBytesPerSecond(double value) { SetCurrentRateInMegaBytesPerSecond(value); return *this;}


    /**
     * <p>Describes the total amount of data to be transfered in megabytes.</p>
     */
    inline long long GetTotalDataInMegaBytes() const{ return m_totalDataInMegaBytes; }

    /**
     * <p>Describes the total amount of data to be transfered in megabytes.</p>
     */
    inline bool TotalDataInMegaBytesHasBeenSet() const { return m_totalDataInMegaBytesHasBeenSet; }

    /**
     * <p>Describes the total amount of data to be transfered in megabytes.</p>
     */
    inline void SetTotalDataInMegaBytes(long long value) { m_totalDataInMegaBytesHasBeenSet = true; m_totalDataInMegaBytes = value; }

    /**
     * <p>Describes the total amount of data to be transfered in megabytes.</p>
     */
    inline DataTransferProgress& WithTotalDataInMegaBytes(long long value) { SetTotalDataInMegaBytes(value); return *this;}


    /**
     * <p>Describes the total amount of data that has been transfered in MB's.</p>
     */
    inline long long GetDataTransferredInMegaBytes() const{ return m_dataTransferredInMegaBytes; }

    /**
     * <p>Describes the total amount of data that has been transfered in MB's.</p>
     */
    inline bool DataTransferredInMegaBytesHasBeenSet() const { return m_dataTransferredInMegaBytesHasBeenSet; }

    /**
     * <p>Describes the total amount of data that has been transfered in MB's.</p>
     */
    inline void SetDataTransferredInMegaBytes(long long value) { m_dataTransferredInMegaBytesHasBeenSet = true; m_dataTransferredInMegaBytes = value; }

    /**
     * <p>Describes the total amount of data that has been transfered in MB's.</p>
     */
    inline DataTransferProgress& WithDataTransferredInMegaBytes(long long value) { SetDataTransferredInMegaBytes(value); return *this;}


    /**
     * <p>Describes the estimated number of seconds remaining to complete the
     * transfer.</p>
     */
    inline long long GetEstimatedTimeToCompletionInSeconds() const{ return m_estimatedTimeToCompletionInSeconds; }

    /**
     * <p>Describes the estimated number of seconds remaining to complete the
     * transfer.</p>
     */
    inline bool EstimatedTimeToCompletionInSecondsHasBeenSet() const { return m_estimatedTimeToCompletionInSecondsHasBeenSet; }

    /**
     * <p>Describes the estimated number of seconds remaining to complete the
     * transfer.</p>
     */
    inline void SetEstimatedTimeToCompletionInSeconds(long long value) { m_estimatedTimeToCompletionInSecondsHasBeenSet = true; m_estimatedTimeToCompletionInSeconds = value; }

    /**
     * <p>Describes the estimated number of seconds remaining to complete the
     * transfer.</p>
     */
    inline DataTransferProgress& WithEstimatedTimeToCompletionInSeconds(long long value) { SetEstimatedTimeToCompletionInSeconds(value); return *this;}


    /**
     * <p>Describes the number of seconds that have elapsed during the data
     * transfer.</p>
     */
    inline long long GetElapsedTimeInSeconds() const{ return m_elapsedTimeInSeconds; }

    /**
     * <p>Describes the number of seconds that have elapsed during the data
     * transfer.</p>
     */
    inline bool ElapsedTimeInSecondsHasBeenSet() const { return m_elapsedTimeInSecondsHasBeenSet; }

    /**
     * <p>Describes the number of seconds that have elapsed during the data
     * transfer.</p>
     */
    inline void SetElapsedTimeInSeconds(long long value) { m_elapsedTimeInSecondsHasBeenSet = true; m_elapsedTimeInSeconds = value; }

    /**
     * <p>Describes the number of seconds that have elapsed during the data
     * transfer.</p>
     */
    inline DataTransferProgress& WithElapsedTimeInSeconds(long long value) { SetElapsedTimeInSeconds(value); return *this;}

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet;

    double m_currentRateInMegaBytesPerSecond;
    bool m_currentRateInMegaBytesPerSecondHasBeenSet;

    long long m_totalDataInMegaBytes;
    bool m_totalDataInMegaBytesHasBeenSet;

    long long m_dataTransferredInMegaBytes;
    bool m_dataTransferredInMegaBytesHasBeenSet;

    long long m_estimatedTimeToCompletionInSeconds;
    bool m_estimatedTimeToCompletionInSecondsHasBeenSet;

    long long m_elapsedTimeInSeconds;
    bool m_elapsedTimeInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
