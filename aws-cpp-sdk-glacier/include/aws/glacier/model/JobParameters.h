/*
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
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glacier/model/InventoryRetrievalJobInput.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glacier
{
namespace Model
{

  /**
   * <p>Provides options for defining a job.</p>
   */
  class AWS_GLACIER_API JobParameters
  {
  public:
    JobParameters();
    JobParameters(const Aws::Utils::Json::JsonValue& jsonValue);
    JobParameters& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>When initiating a job to retrieve a vault inventory, you can optionally add
     * this parameter to your request to specify the output format. If you are
     * initiating an inventory job and do not specify a Format field, JSON is the
     * default format. Valid values are "CSV" and "JSON". </p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>When initiating a job to retrieve a vault inventory, you can optionally add
     * this parameter to your request to specify the output format. If you are
     * initiating an inventory job and do not specify a Format field, JSON is the
     * default format. Valid values are "CSV" and "JSON". </p>
     */
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>When initiating a job to retrieve a vault inventory, you can optionally add
     * this parameter to your request to specify the output format. If you are
     * initiating an inventory job and do not specify a Format field, JSON is the
     * default format. Valid values are "CSV" and "JSON". </p>
     */
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>When initiating a job to retrieve a vault inventory, you can optionally add
     * this parameter to your request to specify the output format. If you are
     * initiating an inventory job and do not specify a Format field, JSON is the
     * default format. Valid values are "CSV" and "JSON". </p>
     */
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }

    /**
     * <p>When initiating a job to retrieve a vault inventory, you can optionally add
     * this parameter to your request to specify the output format. If you are
     * initiating an inventory job and do not specify a Format field, JSON is the
     * default format. Valid values are "CSV" and "JSON". </p>
     */
    inline JobParameters& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>When initiating a job to retrieve a vault inventory, you can optionally add
     * this parameter to your request to specify the output format. If you are
     * initiating an inventory job and do not specify a Format field, JSON is the
     * default format. Valid values are "CSV" and "JSON". </p>
     */
    inline JobParameters& WithFormat(Aws::String&& value) { SetFormat(value); return *this;}

    /**
     * <p>When initiating a job to retrieve a vault inventory, you can optionally add
     * this parameter to your request to specify the output format. If you are
     * initiating an inventory job and do not specify a Format field, JSON is the
     * default format. Valid values are "CSV" and "JSON". </p>
     */
    inline JobParameters& WithFormat(const char* value) { SetFormat(value); return *this;}

    /**
     * <p>The job type. You can initiate a job to retrieve an archive or get an
     * inventory of a vault. Valid values are "archive-retrieval" and
     * "inventory-retrieval".</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The job type. You can initiate a job to retrieve an archive or get an
     * inventory of a vault. Valid values are "archive-retrieval" and
     * "inventory-retrieval".</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The job type. You can initiate a job to retrieve an archive or get an
     * inventory of a vault. Valid values are "archive-retrieval" and
     * "inventory-retrieval".</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The job type. You can initiate a job to retrieve an archive or get an
     * inventory of a vault. Valid values are "archive-retrieval" and
     * "inventory-retrieval".</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The job type. You can initiate a job to retrieve an archive or get an
     * inventory of a vault. Valid values are "archive-retrieval" and
     * "inventory-retrieval".</p>
     */
    inline JobParameters& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The job type. You can initiate a job to retrieve an archive or get an
     * inventory of a vault. Valid values are "archive-retrieval" and
     * "inventory-retrieval".</p>
     */
    inline JobParameters& WithType(Aws::String&& value) { SetType(value); return *this;}

    /**
     * <p>The job type. You can initiate a job to retrieve an archive or get an
     * inventory of a vault. Valid values are "archive-retrieval" and
     * "inventory-retrieval".</p>
     */
    inline JobParameters& WithType(const char* value) { SetType(value); return *this;}

    /**
     * <p>The ID of the archive that you want to retrieve. This field is required only
     * if <code>Type</code> is set to archive-retrieval. An error occurs if you specify
     * this request parameter for an inventory retrieval job request. </p>
     */
    inline const Aws::String& GetArchiveId() const{ return m_archiveId; }

    /**
     * <p>The ID of the archive that you want to retrieve. This field is required only
     * if <code>Type</code> is set to archive-retrieval. An error occurs if you specify
     * this request parameter for an inventory retrieval job request. </p>
     */
    inline void SetArchiveId(const Aws::String& value) { m_archiveIdHasBeenSet = true; m_archiveId = value; }

    /**
     * <p>The ID of the archive that you want to retrieve. This field is required only
     * if <code>Type</code> is set to archive-retrieval. An error occurs if you specify
     * this request parameter for an inventory retrieval job request. </p>
     */
    inline void SetArchiveId(Aws::String&& value) { m_archiveIdHasBeenSet = true; m_archiveId = value; }

    /**
     * <p>The ID of the archive that you want to retrieve. This field is required only
     * if <code>Type</code> is set to archive-retrieval. An error occurs if you specify
     * this request parameter for an inventory retrieval job request. </p>
     */
    inline void SetArchiveId(const char* value) { m_archiveIdHasBeenSet = true; m_archiveId.assign(value); }

    /**
     * <p>The ID of the archive that you want to retrieve. This field is required only
     * if <code>Type</code> is set to archive-retrieval. An error occurs if you specify
     * this request parameter for an inventory retrieval job request. </p>
     */
    inline JobParameters& WithArchiveId(const Aws::String& value) { SetArchiveId(value); return *this;}

    /**
     * <p>The ID of the archive that you want to retrieve. This field is required only
     * if <code>Type</code> is set to archive-retrieval. An error occurs if you specify
     * this request parameter for an inventory retrieval job request. </p>
     */
    inline JobParameters& WithArchiveId(Aws::String&& value) { SetArchiveId(value); return *this;}

    /**
     * <p>The ID of the archive that you want to retrieve. This field is required only
     * if <code>Type</code> is set to archive-retrieval. An error occurs if you specify
     * this request parameter for an inventory retrieval job request. </p>
     */
    inline JobParameters& WithArchiveId(const char* value) { SetArchiveId(value); return *this;}

    /**
     * <p>The optional description for the job. The description must be less than or
     * equal to 1,024 bytes. The allowable characters are 7-bit ASCII without control
     * codes-specifically, ASCII values 32-126 decimal or 0x20-0x7E hexadecimal.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The optional description for the job. The description must be less than or
     * equal to 1,024 bytes. The allowable characters are 7-bit ASCII without control
     * codes-specifically, ASCII values 32-126 decimal or 0x20-0x7E hexadecimal.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The optional description for the job. The description must be less than or
     * equal to 1,024 bytes. The allowable characters are 7-bit ASCII without control
     * codes-specifically, ASCII values 32-126 decimal or 0x20-0x7E hexadecimal.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The optional description for the job. The description must be less than or
     * equal to 1,024 bytes. The allowable characters are 7-bit ASCII without control
     * codes-specifically, ASCII values 32-126 decimal or 0x20-0x7E hexadecimal.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The optional description for the job. The description must be less than or
     * equal to 1,024 bytes. The allowable characters are 7-bit ASCII without control
     * codes-specifically, ASCII values 32-126 decimal or 0x20-0x7E hexadecimal.</p>
     */
    inline JobParameters& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The optional description for the job. The description must be less than or
     * equal to 1,024 bytes. The allowable characters are 7-bit ASCII without control
     * codes-specifically, ASCII values 32-126 decimal or 0x20-0x7E hexadecimal.</p>
     */
    inline JobParameters& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The optional description for the job. The description must be less than or
     * equal to 1,024 bytes. The allowable characters are 7-bit ASCII without control
     * codes-specifically, ASCII values 32-126 decimal or 0x20-0x7E hexadecimal.</p>
     */
    inline JobParameters& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The Amazon SNS topic ARN to which Amazon Glacier sends a notification when
     * the job is completed and the output is ready for you to download. The specified
     * topic publishes the notification to its subscribers. The SNS topic must
     * exist.</p>
     */
    inline const Aws::String& GetSNSTopic() const{ return m_sNSTopic; }

    /**
     * <p>The Amazon SNS topic ARN to which Amazon Glacier sends a notification when
     * the job is completed and the output is ready for you to download. The specified
     * topic publishes the notification to its subscribers. The SNS topic must
     * exist.</p>
     */
    inline void SetSNSTopic(const Aws::String& value) { m_sNSTopicHasBeenSet = true; m_sNSTopic = value; }

    /**
     * <p>The Amazon SNS topic ARN to which Amazon Glacier sends a notification when
     * the job is completed and the output is ready for you to download. The specified
     * topic publishes the notification to its subscribers. The SNS topic must
     * exist.</p>
     */
    inline void SetSNSTopic(Aws::String&& value) { m_sNSTopicHasBeenSet = true; m_sNSTopic = value; }

    /**
     * <p>The Amazon SNS topic ARN to which Amazon Glacier sends a notification when
     * the job is completed and the output is ready for you to download. The specified
     * topic publishes the notification to its subscribers. The SNS topic must
     * exist.</p>
     */
    inline void SetSNSTopic(const char* value) { m_sNSTopicHasBeenSet = true; m_sNSTopic.assign(value); }

    /**
     * <p>The Amazon SNS topic ARN to which Amazon Glacier sends a notification when
     * the job is completed and the output is ready for you to download. The specified
     * topic publishes the notification to its subscribers. The SNS topic must
     * exist.</p>
     */
    inline JobParameters& WithSNSTopic(const Aws::String& value) { SetSNSTopic(value); return *this;}

    /**
     * <p>The Amazon SNS topic ARN to which Amazon Glacier sends a notification when
     * the job is completed and the output is ready for you to download. The specified
     * topic publishes the notification to its subscribers. The SNS topic must
     * exist.</p>
     */
    inline JobParameters& WithSNSTopic(Aws::String&& value) { SetSNSTopic(value); return *this;}

    /**
     * <p>The Amazon SNS topic ARN to which Amazon Glacier sends a notification when
     * the job is completed and the output is ready for you to download. The specified
     * topic publishes the notification to its subscribers. The SNS topic must
     * exist.</p>
     */
    inline JobParameters& WithSNSTopic(const char* value) { SetSNSTopic(value); return *this;}

    /**
     * <p>The byte range to retrieve for an archive retrieval. in the form
     * "<i>StartByteValue</i>-<i>EndByteValue</i>" If not specified, the whole archive
     * is retrieved. If specified, the byte range must be megabyte (1024*1024) aligned
     * which means that <i>StartByteValue</i> must be divisible by 1 MB and
     * <i>EndByteValue</i> plus 1 must be divisible by 1 MB or be the end of the
     * archive specified as the archive byte size value minus 1. If RetrievalByteRange
     * is not megabyte aligned, this operation returns a 400 response. </p> <p>An error
     * occurs if you specify this field for an inventory retrieval job request. </p>
     */
    inline const Aws::String& GetRetrievalByteRange() const{ return m_retrievalByteRange; }

    /**
     * <p>The byte range to retrieve for an archive retrieval. in the form
     * "<i>StartByteValue</i>-<i>EndByteValue</i>" If not specified, the whole archive
     * is retrieved. If specified, the byte range must be megabyte (1024*1024) aligned
     * which means that <i>StartByteValue</i> must be divisible by 1 MB and
     * <i>EndByteValue</i> plus 1 must be divisible by 1 MB or be the end of the
     * archive specified as the archive byte size value minus 1. If RetrievalByteRange
     * is not megabyte aligned, this operation returns a 400 response. </p> <p>An error
     * occurs if you specify this field for an inventory retrieval job request. </p>
     */
    inline void SetRetrievalByteRange(const Aws::String& value) { m_retrievalByteRangeHasBeenSet = true; m_retrievalByteRange = value; }

    /**
     * <p>The byte range to retrieve for an archive retrieval. in the form
     * "<i>StartByteValue</i>-<i>EndByteValue</i>" If not specified, the whole archive
     * is retrieved. If specified, the byte range must be megabyte (1024*1024) aligned
     * which means that <i>StartByteValue</i> must be divisible by 1 MB and
     * <i>EndByteValue</i> plus 1 must be divisible by 1 MB or be the end of the
     * archive specified as the archive byte size value minus 1. If RetrievalByteRange
     * is not megabyte aligned, this operation returns a 400 response. </p> <p>An error
     * occurs if you specify this field for an inventory retrieval job request. </p>
     */
    inline void SetRetrievalByteRange(Aws::String&& value) { m_retrievalByteRangeHasBeenSet = true; m_retrievalByteRange = value; }

    /**
     * <p>The byte range to retrieve for an archive retrieval. in the form
     * "<i>StartByteValue</i>-<i>EndByteValue</i>" If not specified, the whole archive
     * is retrieved. If specified, the byte range must be megabyte (1024*1024) aligned
     * which means that <i>StartByteValue</i> must be divisible by 1 MB and
     * <i>EndByteValue</i> plus 1 must be divisible by 1 MB or be the end of the
     * archive specified as the archive byte size value minus 1. If RetrievalByteRange
     * is not megabyte aligned, this operation returns a 400 response. </p> <p>An error
     * occurs if you specify this field for an inventory retrieval job request. </p>
     */
    inline void SetRetrievalByteRange(const char* value) { m_retrievalByteRangeHasBeenSet = true; m_retrievalByteRange.assign(value); }

    /**
     * <p>The byte range to retrieve for an archive retrieval. in the form
     * "<i>StartByteValue</i>-<i>EndByteValue</i>" If not specified, the whole archive
     * is retrieved. If specified, the byte range must be megabyte (1024*1024) aligned
     * which means that <i>StartByteValue</i> must be divisible by 1 MB and
     * <i>EndByteValue</i> plus 1 must be divisible by 1 MB or be the end of the
     * archive specified as the archive byte size value minus 1. If RetrievalByteRange
     * is not megabyte aligned, this operation returns a 400 response. </p> <p>An error
     * occurs if you specify this field for an inventory retrieval job request. </p>
     */
    inline JobParameters& WithRetrievalByteRange(const Aws::String& value) { SetRetrievalByteRange(value); return *this;}

    /**
     * <p>The byte range to retrieve for an archive retrieval. in the form
     * "<i>StartByteValue</i>-<i>EndByteValue</i>" If not specified, the whole archive
     * is retrieved. If specified, the byte range must be megabyte (1024*1024) aligned
     * which means that <i>StartByteValue</i> must be divisible by 1 MB and
     * <i>EndByteValue</i> plus 1 must be divisible by 1 MB or be the end of the
     * archive specified as the archive byte size value minus 1. If RetrievalByteRange
     * is not megabyte aligned, this operation returns a 400 response. </p> <p>An error
     * occurs if you specify this field for an inventory retrieval job request. </p>
     */
    inline JobParameters& WithRetrievalByteRange(Aws::String&& value) { SetRetrievalByteRange(value); return *this;}

    /**
     * <p>The byte range to retrieve for an archive retrieval. in the form
     * "<i>StartByteValue</i>-<i>EndByteValue</i>" If not specified, the whole archive
     * is retrieved. If specified, the byte range must be megabyte (1024*1024) aligned
     * which means that <i>StartByteValue</i> must be divisible by 1 MB and
     * <i>EndByteValue</i> plus 1 must be divisible by 1 MB or be the end of the
     * archive specified as the archive byte size value minus 1. If RetrievalByteRange
     * is not megabyte aligned, this operation returns a 400 response. </p> <p>An error
     * occurs if you specify this field for an inventory retrieval job request. </p>
     */
    inline JobParameters& WithRetrievalByteRange(const char* value) { SetRetrievalByteRange(value); return *this;}

    /**
     * <p>Input parameters used for range inventory retrieval.</p>
     */
    inline const InventoryRetrievalJobInput& GetInventoryRetrievalParameters() const{ return m_inventoryRetrievalParameters; }

    /**
     * <p>Input parameters used for range inventory retrieval.</p>
     */
    inline void SetInventoryRetrievalParameters(const InventoryRetrievalJobInput& value) { m_inventoryRetrievalParametersHasBeenSet = true; m_inventoryRetrievalParameters = value; }

    /**
     * <p>Input parameters used for range inventory retrieval.</p>
     */
    inline void SetInventoryRetrievalParameters(InventoryRetrievalJobInput&& value) { m_inventoryRetrievalParametersHasBeenSet = true; m_inventoryRetrievalParameters = value; }

    /**
     * <p>Input parameters used for range inventory retrieval.</p>
     */
    inline JobParameters& WithInventoryRetrievalParameters(const InventoryRetrievalJobInput& value) { SetInventoryRetrievalParameters(value); return *this;}

    /**
     * <p>Input parameters used for range inventory retrieval.</p>
     */
    inline JobParameters& WithInventoryRetrievalParameters(InventoryRetrievalJobInput&& value) { SetInventoryRetrievalParameters(value); return *this;}

  private:
    Aws::String m_format;
    bool m_formatHasBeenSet;
    Aws::String m_type;
    bool m_typeHasBeenSet;
    Aws::String m_archiveId;
    bool m_archiveIdHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_sNSTopic;
    bool m_sNSTopicHasBeenSet;
    Aws::String m_retrievalByteRange;
    bool m_retrievalByteRangeHasBeenSet;
    InventoryRetrievalJobInput m_inventoryRetrievalParameters;
    bool m_inventoryRetrievalParametersHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
