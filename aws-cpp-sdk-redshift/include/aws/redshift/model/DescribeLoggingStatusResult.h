﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift/model/ResponseMetadata.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{
  /**
   * <p>Describes the status of logging for a cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/LoggingStatus">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DescribeLoggingStatusResult
  {
  public:
    DescribeLoggingStatusResult();
    DescribeLoggingStatusResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeLoggingStatusResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p> <code>true</code> if logging is on, <code>false</code> if logging is
     * off.</p>
     */
    inline bool GetLoggingEnabled() const{ return m_loggingEnabled; }

    /**
     * <p> <code>true</code> if logging is on, <code>false</code> if logging is
     * off.</p>
     */
    inline void SetLoggingEnabled(bool value) { m_loggingEnabled = value; }

    /**
     * <p> <code>true</code> if logging is on, <code>false</code> if logging is
     * off.</p>
     */
    inline DescribeLoggingStatusResult& WithLoggingEnabled(bool value) { SetLoggingEnabled(value); return *this;}

    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketName = value; }

    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketName = value; }

    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline DescribeLoggingStatusResult& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline DescribeLoggingStatusResult& WithBucketName(Aws::String&& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline DescribeLoggingStatusResult& WithBucketName(const char* value) { SetBucketName(value); return *this;}

    /**
     * <p>The prefix applied to the log file names.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }

    /**
     * <p>The prefix applied to the log file names.</p>
     */
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefix = value; }

    /**
     * <p>The prefix applied to the log file names.</p>
     */
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefix = value; }

    /**
     * <p>The prefix applied to the log file names.</p>
     */
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefix.assign(value); }

    /**
     * <p>The prefix applied to the log file names.</p>
     */
    inline DescribeLoggingStatusResult& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>The prefix applied to the log file names.</p>
     */
    inline DescribeLoggingStatusResult& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>The prefix applied to the log file names.</p>
     */
    inline DescribeLoggingStatusResult& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>The last time that logs were delivered.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulDeliveryTime() const{ return m_lastSuccessfulDeliveryTime; }

    /**
     * <p>The last time that logs were delivered.</p>
     */
    inline void SetLastSuccessfulDeliveryTime(const Aws::Utils::DateTime& value) { m_lastSuccessfulDeliveryTime = value; }

    /**
     * <p>The last time that logs were delivered.</p>
     */
    inline void SetLastSuccessfulDeliveryTime(Aws::Utils::DateTime&& value) { m_lastSuccessfulDeliveryTime = value; }

    /**
     * <p>The last time that logs were delivered.</p>
     */
    inline DescribeLoggingStatusResult& WithLastSuccessfulDeliveryTime(const Aws::Utils::DateTime& value) { SetLastSuccessfulDeliveryTime(value); return *this;}

    /**
     * <p>The last time that logs were delivered.</p>
     */
    inline DescribeLoggingStatusResult& WithLastSuccessfulDeliveryTime(Aws::Utils::DateTime&& value) { SetLastSuccessfulDeliveryTime(value); return *this;}

    /**
     * <p>The last time when logs failed to be delivered.</p>
     */
    inline const Aws::Utils::DateTime& GetLastFailureTime() const{ return m_lastFailureTime; }

    /**
     * <p>The last time when logs failed to be delivered.</p>
     */
    inline void SetLastFailureTime(const Aws::Utils::DateTime& value) { m_lastFailureTime = value; }

    /**
     * <p>The last time when logs failed to be delivered.</p>
     */
    inline void SetLastFailureTime(Aws::Utils::DateTime&& value) { m_lastFailureTime = value; }

    /**
     * <p>The last time when logs failed to be delivered.</p>
     */
    inline DescribeLoggingStatusResult& WithLastFailureTime(const Aws::Utils::DateTime& value) { SetLastFailureTime(value); return *this;}

    /**
     * <p>The last time when logs failed to be delivered.</p>
     */
    inline DescribeLoggingStatusResult& WithLastFailureTime(Aws::Utils::DateTime&& value) { SetLastFailureTime(value); return *this;}

    /**
     * <p>The message indicating that logs failed to be delivered.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const{ return m_lastFailureMessage; }

    /**
     * <p>The message indicating that logs failed to be delivered.</p>
     */
    inline void SetLastFailureMessage(const Aws::String& value) { m_lastFailureMessage = value; }

    /**
     * <p>The message indicating that logs failed to be delivered.</p>
     */
    inline void SetLastFailureMessage(Aws::String&& value) { m_lastFailureMessage = value; }

    /**
     * <p>The message indicating that logs failed to be delivered.</p>
     */
    inline void SetLastFailureMessage(const char* value) { m_lastFailureMessage.assign(value); }

    /**
     * <p>The message indicating that logs failed to be delivered.</p>
     */
    inline DescribeLoggingStatusResult& WithLastFailureMessage(const Aws::String& value) { SetLastFailureMessage(value); return *this;}

    /**
     * <p>The message indicating that logs failed to be delivered.</p>
     */
    inline DescribeLoggingStatusResult& WithLastFailureMessage(Aws::String&& value) { SetLastFailureMessage(value); return *this;}

    /**
     * <p>The message indicating that logs failed to be delivered.</p>
     */
    inline DescribeLoggingStatusResult& WithLastFailureMessage(const char* value) { SetLastFailureMessage(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeLoggingStatusResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeLoggingStatusResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    bool m_loggingEnabled;
    Aws::String m_bucketName;
    Aws::String m_s3KeyPrefix;
    Aws::Utils::DateTime m_lastSuccessfulDeliveryTime;
    Aws::Utils::DateTime m_lastFailureTime;
    Aws::String m_lastFailureMessage;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws