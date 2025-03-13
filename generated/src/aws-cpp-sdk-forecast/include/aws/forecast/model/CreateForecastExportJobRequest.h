/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/DataDestination.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class CreateForecastExportJobRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API CreateForecastExportJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateForecastExportJob"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the forecast export job.</p>
     */
    inline const Aws::String& GetForecastExportJobName() const { return m_forecastExportJobName; }
    inline bool ForecastExportJobNameHasBeenSet() const { return m_forecastExportJobNameHasBeenSet; }
    template<typename ForecastExportJobNameT = Aws::String>
    void SetForecastExportJobName(ForecastExportJobNameT&& value) { m_forecastExportJobNameHasBeenSet = true; m_forecastExportJobName = std::forward<ForecastExportJobNameT>(value); }
    template<typename ForecastExportJobNameT = Aws::String>
    CreateForecastExportJobRequest& WithForecastExportJobName(ForecastExportJobNameT&& value) { SetForecastExportJobName(std::forward<ForecastExportJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the forecast that you want to export.</p>
     */
    inline const Aws::String& GetForecastArn() const { return m_forecastArn; }
    inline bool ForecastArnHasBeenSet() const { return m_forecastArnHasBeenSet; }
    template<typename ForecastArnT = Aws::String>
    void SetForecastArn(ForecastArnT&& value) { m_forecastArnHasBeenSet = true; m_forecastArn = std::forward<ForecastArnT>(value); }
    template<typename ForecastArnT = Aws::String>
    CreateForecastExportJobRequest& WithForecastArn(ForecastArnT&& value) { SetForecastArn(std::forward<ForecastArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location where you want to save the forecast and an Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the location.
     * The forecast must be exported to an Amazon S3 bucket.</p> <p>If encryption is
     * used, <code>Destination</code> must include an Key Management Service (KMS) key.
     * The IAM role must allow Amazon Forecast permission to access the key.</p>
     */
    inline const DataDestination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = DataDestination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = DataDestination>
    CreateForecastExportJobRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional metadata that you apply to the forecast export job to help you
     * categorize and organize them. Each tag consists of a key and an optional value,
     * both of which you define.</p> <p>The following basic restrictions apply to
     * tags:</p> <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li>
     * <p>For each resource, each tag key must be unique, and each tag key can have
     * only one value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
     * such as a prefix for keys as it is reserved for Amazon Web Services use. You
     * cannot edit or delete tag keys with this prefix. Values can have this prefix. If
     * a tag value has <code>aws</code> as its prefix but the key does not, then
     * Forecast considers it to be a user tag and will count against the limit of 50
     * tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateForecastExportJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateForecastExportJobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The format of the exported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    CreateForecastExportJobRequest& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_forecastExportJobName;
    bool m_forecastExportJobNameHasBeenSet = false;

    Aws::String m_forecastArn;
    bool m_forecastArnHasBeenSet = false;

    DataDestination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
