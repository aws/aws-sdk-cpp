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
    AWS_GLACIER_API JobParameters() = default;
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
    inline const Aws::String& GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    JobParameters& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job type. You can initiate a job to perform a select query on an archive,
     * retrieve an archive, or get an inventory of a vault. Valid values are "select",
     * "archive-retrieval" and "inventory-retrieval".</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    JobParameters& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the archive that you want to retrieve. This field is required only
     * if <code>Type</code> is set to <code>select</code> or
     * <code>archive-retrieval</code>code&gt;. An error occurs if you specify this
     * request parameter for an inventory retrieval job request. </p>
     */
    inline const Aws::String& GetArchiveId() const { return m_archiveId; }
    inline bool ArchiveIdHasBeenSet() const { return m_archiveIdHasBeenSet; }
    template<typename ArchiveIdT = Aws::String>
    void SetArchiveId(ArchiveIdT&& value) { m_archiveIdHasBeenSet = true; m_archiveId = std::forward<ArchiveIdT>(value); }
    template<typename ArchiveIdT = Aws::String>
    JobParameters& WithArchiveId(ArchiveIdT&& value) { SetArchiveId(std::forward<ArchiveIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional description for the job. The description must be less than or
     * equal to 1,024 bytes. The allowable characters are 7-bit ASCII without control
     * codes-specifically, ASCII values 32-126 decimal or 0x20-0x7E hexadecimal.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    JobParameters& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS topic ARN to which Amazon S3 Glacier sends a notification when
     * the job is completed and the output is ready for you to download. The specified
     * topic publishes the notification to its subscribers. The SNS topic must
     * exist.</p>
     */
    inline const Aws::String& GetSNSTopic() const { return m_sNSTopic; }
    inline bool SNSTopicHasBeenSet() const { return m_sNSTopicHasBeenSet; }
    template<typename SNSTopicT = Aws::String>
    void SetSNSTopic(SNSTopicT&& value) { m_sNSTopicHasBeenSet = true; m_sNSTopic = std::forward<SNSTopicT>(value); }
    template<typename SNSTopicT = Aws::String>
    JobParameters& WithSNSTopic(SNSTopicT&& value) { SetSNSTopic(std::forward<SNSTopicT>(value)); return *this;}
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
    inline const Aws::String& GetRetrievalByteRange() const { return m_retrievalByteRange; }
    inline bool RetrievalByteRangeHasBeenSet() const { return m_retrievalByteRangeHasBeenSet; }
    template<typename RetrievalByteRangeT = Aws::String>
    void SetRetrievalByteRange(RetrievalByteRangeT&& value) { m_retrievalByteRangeHasBeenSet = true; m_retrievalByteRange = std::forward<RetrievalByteRangeT>(value); }
    template<typename RetrievalByteRangeT = Aws::String>
    JobParameters& WithRetrievalByteRange(RetrievalByteRangeT&& value) { SetRetrievalByteRange(std::forward<RetrievalByteRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tier to use for a select or an archive retrieval job. Valid values are
     * <code>Expedited</code>, <code>Standard</code>, or <code>Bulk</code>.
     * <code>Standard</code> is the default.</p>
     */
    inline const Aws::String& GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    template<typename TierT = Aws::String>
    void SetTier(TierT&& value) { m_tierHasBeenSet = true; m_tier = std::forward<TierT>(value); }
    template<typename TierT = Aws::String>
    JobParameters& WithTier(TierT&& value) { SetTier(std::forward<TierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input parameters used for range inventory retrieval.</p>
     */
    inline const InventoryRetrievalJobInput& GetInventoryRetrievalParameters() const { return m_inventoryRetrievalParameters; }
    inline bool InventoryRetrievalParametersHasBeenSet() const { return m_inventoryRetrievalParametersHasBeenSet; }
    template<typename InventoryRetrievalParametersT = InventoryRetrievalJobInput>
    void SetInventoryRetrievalParameters(InventoryRetrievalParametersT&& value) { m_inventoryRetrievalParametersHasBeenSet = true; m_inventoryRetrievalParameters = std::forward<InventoryRetrievalParametersT>(value); }
    template<typename InventoryRetrievalParametersT = InventoryRetrievalJobInput>
    JobParameters& WithInventoryRetrievalParameters(InventoryRetrievalParametersT&& value) { SetInventoryRetrievalParameters(std::forward<InventoryRetrievalParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the parameters that define a job.</p>
     */
    inline const SelectParameters& GetSelectParameters() const { return m_selectParameters; }
    inline bool SelectParametersHasBeenSet() const { return m_selectParametersHasBeenSet; }
    template<typename SelectParametersT = SelectParameters>
    void SetSelectParameters(SelectParametersT&& value) { m_selectParametersHasBeenSet = true; m_selectParameters = std::forward<SelectParametersT>(value); }
    template<typename SelectParametersT = SelectParameters>
    JobParameters& WithSelectParameters(SelectParametersT&& value) { SetSelectParameters(std::forward<SelectParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the location where the select job results are
     * stored.</p>
     */
    inline const OutputLocation& GetOutputLocation() const { return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    template<typename OutputLocationT = OutputLocation>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = OutputLocation>
    JobParameters& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
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
