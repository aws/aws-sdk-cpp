/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glacier/model/InventoryRetrievalJobInput.h>
#include <aws/glacier/model/SelectParameters.h>
#include <aws/glacier/model/OutputLocation.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Provides options for defining a job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/JobParameters">AWS
   * API Reference</a></p>
   */
  class JobParameters
  {
  public:
    AWS_GLACIER_API JobParameters();
    AWS_GLACIER_API JobParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API JobParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When initiating a job to retrieve a vault inventory, you can optionally add
     * this parameter to your request to specify the output format. If you are
     * initiating an inventory job and do not specify a Format field, JSON is the
     * default format. Valid values are "CSV" and "JSON".</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }
    inline JobParameters& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}
    inline JobParameters& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}
    inline JobParameters& WithFormat(const char* value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job type. You can initiate a job to perform a select query on an archive,
     * retrieve an archive, or get an inventory of a vault. Valid values are "select",
     * "archive-retrieval" and "inventory-retrieval".</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline JobParameters& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline JobParameters& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline JobParameters& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the archive that you want to retrieve. This field is required only
     * if <code>Type</code> is set to <code>select</code> or
     * <code>archive-retrieval</code>code&gt;. An error occurs if you specify this
     * request parameter for an inventory retrieval job request. </p>
     */
    inline const Aws::String& GetArchiveId() const{ return m_archiveId; }
    inline bool ArchiveIdHasBeenSet() const { return m_archiveIdHasBeenSet; }
    inline void SetArchiveId(const Aws::String& value) { m_archiveIdHasBeenSet = true; m_archiveId = value; }
    inline void SetArchiveId(Aws::String&& value) { m_archiveIdHasBeenSet = true; m_archiveId = std::move(value); }
    inline void SetArchiveId(const char* value) { m_archiveIdHasBeenSet = true; m_archiveId.assign(value); }
    inline JobParameters& WithArchiveId(const Aws::String& value) { SetArchiveId(value); return *this;}
    inline JobParameters& WithArchiveId(Aws::String&& value) { SetArchiveId(std::move(value)); return *this;}
    inline JobParameters& WithArchiveId(const char* value) { SetArchiveId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional description for the job. The description must be less than or
     * equal to 1,024 bytes. The allowable characters are 7-bit ASCII without control
     * codes-specifically, ASCII values 32-126 decimal or 0x20-0x7E hexadecimal.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline JobParameters& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline JobParameters& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline JobParameters& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS topic ARN to which Amazon S3 Glacier sends a notification when
     * the job is completed and the output is ready for you to download. The specified
     * topic publishes the notification to its subscribers. The SNS topic must
     * exist.</p>
     */
    inline const Aws::String& GetSNSTopic() const{ return m_sNSTopic; }
    inline bool SNSTopicHasBeenSet() const { return m_sNSTopicHasBeenSet; }
    inline void SetSNSTopic(const Aws::String& value) { m_sNSTopicHasBeenSet = true; m_sNSTopic = value; }
    inline void SetSNSTopic(Aws::String&& value) { m_sNSTopicHasBeenSet = true; m_sNSTopic = std::move(value); }
    inline void SetSNSTopic(const char* value) { m_sNSTopicHasBeenSet = true; m_sNSTopic.assign(value); }
    inline JobParameters& WithSNSTopic(const Aws::String& value) { SetSNSTopic(value); return *this;}
    inline JobParameters& WithSNSTopic(Aws::String&& value) { SetSNSTopic(std::move(value)); return *this;}
    inline JobParameters& WithSNSTopic(const char* value) { SetSNSTopic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The byte range to retrieve for an archive retrieval. in the form
     * "<i>StartByteValue</i>-<i>EndByteValue</i>" If not specified, the whole archive
     * is retrieved. If specified, the byte range must be megabyte (1024*1024) aligned
     * which means that <i>StartByteValue</i> must be divisible by 1 MB and
     * <i>EndByteValue</i> plus 1 must be divisible by 1 MB or be the end of the
     * archive specified as the archive byte size value minus 1. If RetrievalByteRange
     * is not megabyte aligned, this operation returns a 400 response. </p> <p>An error
     * occurs if you specify this field for an inventory retrieval job request.</p>
     */
    inline const Aws::String& GetRetrievalByteRange() const{ return m_retrievalByteRange; }
    inline bool RetrievalByteRangeHasBeenSet() const { return m_retrievalByteRangeHasBeenSet; }
    inline void SetRetrievalByteRange(const Aws::String& value) { m_retrievalByteRangeHasBeenSet = true; m_retrievalByteRange = value; }
    inline void SetRetrievalByteRange(Aws::String&& value) { m_retrievalByteRangeHasBeenSet = true; m_retrievalByteRange = std::move(value); }
    inline void SetRetrievalByteRange(const char* value) { m_retrievalByteRangeHasBeenSet = true; m_retrievalByteRange.assign(value); }
    inline JobParameters& WithRetrievalByteRange(const Aws::String& value) { SetRetrievalByteRange(value); return *this;}
    inline JobParameters& WithRetrievalByteRange(Aws::String&& value) { SetRetrievalByteRange(std::move(value)); return *this;}
    inline JobParameters& WithRetrievalByteRange(const char* value) { SetRetrievalByteRange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tier to use for a select or an archive retrieval job. Valid values are
     * <code>Expedited</code>, <code>Standard</code>, or <code>Bulk</code>.
     * <code>Standard</code> is the default.</p>
     */
    inline const Aws::String& GetTier() const{ return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(const Aws::String& value) { m_tierHasBeenSet = true; m_tier = value; }
    inline void SetTier(Aws::String&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }
    inline void SetTier(const char* value) { m_tierHasBeenSet = true; m_tier.assign(value); }
    inline JobParameters& WithTier(const Aws::String& value) { SetTier(value); return *this;}
    inline JobParameters& WithTier(Aws::String&& value) { SetTier(std::move(value)); return *this;}
    inline JobParameters& WithTier(const char* value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input parameters used for range inventory retrieval.</p>
     */
    inline const InventoryRetrievalJobInput& GetInventoryRetrievalParameters() const{ return m_inventoryRetrievalParameters; }
    inline bool InventoryRetrievalParametersHasBeenSet() const { return m_inventoryRetrievalParametersHasBeenSet; }
    inline void SetInventoryRetrievalParameters(const InventoryRetrievalJobInput& value) { m_inventoryRetrievalParametersHasBeenSet = true; m_inventoryRetrievalParameters = value; }
    inline void SetInventoryRetrievalParameters(InventoryRetrievalJobInput&& value) { m_inventoryRetrievalParametersHasBeenSet = true; m_inventoryRetrievalParameters = std::move(value); }
    inline JobParameters& WithInventoryRetrievalParameters(const InventoryRetrievalJobInput& value) { SetInventoryRetrievalParameters(value); return *this;}
    inline JobParameters& WithInventoryRetrievalParameters(InventoryRetrievalJobInput&& value) { SetInventoryRetrievalParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the parameters that define a job.</p>
     */
    inline const SelectParameters& GetSelectParameters() const{ return m_selectParameters; }
    inline bool SelectParametersHasBeenSet() const { return m_selectParametersHasBeenSet; }
    inline void SetSelectParameters(const SelectParameters& value) { m_selectParametersHasBeenSet = true; m_selectParameters = value; }
    inline void SetSelectParameters(SelectParameters&& value) { m_selectParametersHasBeenSet = true; m_selectParameters = std::move(value); }
    inline JobParameters& WithSelectParameters(const SelectParameters& value) { SetSelectParameters(value); return *this;}
    inline JobParameters& WithSelectParameters(SelectParameters&& value) { SetSelectParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the location where the select job results are
     * stored.</p>
     */
    inline const OutputLocation& GetOutputLocation() const{ return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    inline void SetOutputLocation(const OutputLocation& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }
    inline void SetOutputLocation(OutputLocation&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }
    inline JobParameters& WithOutputLocation(const OutputLocation& value) { SetOutputLocation(value); return *this;}
    inline JobParameters& WithOutputLocation(OutputLocation&& value) { SetOutputLocation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_archiveId;
    bool m_archiveIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_sNSTopic;
    bool m_sNSTopicHasBeenSet = false;

    Aws::String m_retrievalByteRange;
    bool m_retrievalByteRangeHasBeenSet = false;

    Aws::String m_tier;
    bool m_tierHasBeenSet = false;

    InventoryRetrievalJobInput m_inventoryRetrievalParameters;
    bool m_inventoryRetrievalParametersHasBeenSet = false;

    SelectParameters m_selectParameters;
    bool m_selectParametersHasBeenSet = false;

    OutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
