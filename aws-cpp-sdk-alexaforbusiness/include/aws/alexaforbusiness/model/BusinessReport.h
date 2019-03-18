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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/BusinessReportStatus.h>
#include <aws/alexaforbusiness/model/BusinessReportFailureCode.h>
#include <aws/alexaforbusiness/model/BusinessReportS3Location.h>
#include <aws/core/utils/DateTime.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>Usage report with specified parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/BusinessReport">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API BusinessReport
  {
  public:
    BusinessReport();
    BusinessReport(Aws::Utils::Json::JsonView jsonValue);
    BusinessReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the report generation execution (RUNNING, SUCCEEDED, or
     * FAILED).</p>
     */
    inline const BusinessReportStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the report generation execution (RUNNING, SUCCEEDED, or
     * FAILED).</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the report generation execution (RUNNING, SUCCEEDED, or
     * FAILED).</p>
     */
    inline void SetStatus(const BusinessReportStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the report generation execution (RUNNING, SUCCEEDED, or
     * FAILED).</p>
     */
    inline void SetStatus(BusinessReportStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the report generation execution (RUNNING, SUCCEEDED, or
     * FAILED).</p>
     */
    inline BusinessReport& WithStatus(const BusinessReportStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the report generation execution (RUNNING, SUCCEEDED, or
     * FAILED).</p>
     */
    inline BusinessReport& WithStatus(BusinessReportStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The failure code.</p>
     */
    inline const BusinessReportFailureCode& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The failure code.</p>
     */
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }

    /**
     * <p>The failure code.</p>
     */
    inline void SetFailureCode(const BusinessReportFailureCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    /**
     * <p>The failure code.</p>
     */
    inline void SetFailureCode(BusinessReportFailureCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }

    /**
     * <p>The failure code.</p>
     */
    inline BusinessReport& WithFailureCode(const BusinessReportFailureCode& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The failure code.</p>
     */
    inline BusinessReport& WithFailureCode(BusinessReportFailureCode&& value) { SetFailureCode(std::move(value)); return *this;}


    /**
     * <p>The S3 location of the output reports.</p>
     */
    inline const BusinessReportS3Location& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>The S3 location of the output reports.</p>
     */
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }

    /**
     * <p>The S3 location of the output reports.</p>
     */
    inline void SetS3Location(const BusinessReportS3Location& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    /**
     * <p>The S3 location of the output reports.</p>
     */
    inline void SetS3Location(BusinessReportS3Location&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }

    /**
     * <p>The S3 location of the output reports.</p>
     */
    inline BusinessReport& WithS3Location(const BusinessReportS3Location& value) { SetS3Location(value); return *this;}

    /**
     * <p>The S3 location of the output reports.</p>
     */
    inline BusinessReport& WithS3Location(BusinessReportS3Location&& value) { SetS3Location(std::move(value)); return *this;}


    /**
     * <p>The time of report delivery.</p>
     */
    inline const Aws::Utils::DateTime& GetDeliveryTime() const{ return m_deliveryTime; }

    /**
     * <p>The time of report delivery.</p>
     */
    inline bool DeliveryTimeHasBeenSet() const { return m_deliveryTimeHasBeenSet; }

    /**
     * <p>The time of report delivery.</p>
     */
    inline void SetDeliveryTime(const Aws::Utils::DateTime& value) { m_deliveryTimeHasBeenSet = true; m_deliveryTime = value; }

    /**
     * <p>The time of report delivery.</p>
     */
    inline void SetDeliveryTime(Aws::Utils::DateTime&& value) { m_deliveryTimeHasBeenSet = true; m_deliveryTime = std::move(value); }

    /**
     * <p>The time of report delivery.</p>
     */
    inline BusinessReport& WithDeliveryTime(const Aws::Utils::DateTime& value) { SetDeliveryTime(value); return *this;}

    /**
     * <p>The time of report delivery.</p>
     */
    inline BusinessReport& WithDeliveryTime(Aws::Utils::DateTime&& value) { SetDeliveryTime(std::move(value)); return *this;}


    /**
     * <p>The download link where a user can download the report.</p>
     */
    inline const Aws::String& GetDownloadUrl() const{ return m_downloadUrl; }

    /**
     * <p>The download link where a user can download the report.</p>
     */
    inline bool DownloadUrlHasBeenSet() const { return m_downloadUrlHasBeenSet; }

    /**
     * <p>The download link where a user can download the report.</p>
     */
    inline void SetDownloadUrl(const Aws::String& value) { m_downloadUrlHasBeenSet = true; m_downloadUrl = value; }

    /**
     * <p>The download link where a user can download the report.</p>
     */
    inline void SetDownloadUrl(Aws::String&& value) { m_downloadUrlHasBeenSet = true; m_downloadUrl = std::move(value); }

    /**
     * <p>The download link where a user can download the report.</p>
     */
    inline void SetDownloadUrl(const char* value) { m_downloadUrlHasBeenSet = true; m_downloadUrl.assign(value); }

    /**
     * <p>The download link where a user can download the report.</p>
     */
    inline BusinessReport& WithDownloadUrl(const Aws::String& value) { SetDownloadUrl(value); return *this;}

    /**
     * <p>The download link where a user can download the report.</p>
     */
    inline BusinessReport& WithDownloadUrl(Aws::String&& value) { SetDownloadUrl(std::move(value)); return *this;}

    /**
     * <p>The download link where a user can download the report.</p>
     */
    inline BusinessReport& WithDownloadUrl(const char* value) { SetDownloadUrl(value); return *this;}

  private:

    BusinessReportStatus m_status;
    bool m_statusHasBeenSet;

    BusinessReportFailureCode m_failureCode;
    bool m_failureCodeHasBeenSet;

    BusinessReportS3Location m_s3Location;
    bool m_s3LocationHasBeenSet;

    Aws::Utils::DateTime m_deliveryTime;
    bool m_deliveryTimeHasBeenSet;

    Aws::String m_downloadUrl;
    bool m_downloadUrlHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
