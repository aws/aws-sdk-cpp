/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/DataDestination.h>
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
  class CreateWhatIfForecastExportRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API CreateWhatIfForecastExportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWhatIfForecastExport"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the what-if forecast to export.</p>
     */
    inline const Aws::String& GetWhatIfForecastExportName() const { return m_whatIfForecastExportName; }
    inline bool WhatIfForecastExportNameHasBeenSet() const { return m_whatIfForecastExportNameHasBeenSet; }
    template<typename WhatIfForecastExportNameT = Aws::String>
    void SetWhatIfForecastExportName(WhatIfForecastExportNameT&& value) { m_whatIfForecastExportNameHasBeenSet = true; m_whatIfForecastExportName = std::forward<WhatIfForecastExportNameT>(value); }
    template<typename WhatIfForecastExportNameT = Aws::String>
    CreateWhatIfForecastExportRequest& WithWhatIfForecastExportName(WhatIfForecastExportNameT&& value) { SetWhatIfForecastExportName(std::forward<WhatIfForecastExportNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of what-if forecast Amazon Resource Names (ARNs) to export.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWhatIfForecastArns() const { return m_whatIfForecastArns; }
    inline bool WhatIfForecastArnsHasBeenSet() const { return m_whatIfForecastArnsHasBeenSet; }
    template<typename WhatIfForecastArnsT = Aws::Vector<Aws::String>>
    void SetWhatIfForecastArns(WhatIfForecastArnsT&& value) { m_whatIfForecastArnsHasBeenSet = true; m_whatIfForecastArns = std::forward<WhatIfForecastArnsT>(value); }
    template<typename WhatIfForecastArnsT = Aws::Vector<Aws::String>>
    CreateWhatIfForecastExportRequest& WithWhatIfForecastArns(WhatIfForecastArnsT&& value) { SetWhatIfForecastArns(std::forward<WhatIfForecastArnsT>(value)); return *this;}
    template<typename WhatIfForecastArnsT = Aws::String>
    CreateWhatIfForecastExportRequest& AddWhatIfForecastArns(WhatIfForecastArnsT&& value) { m_whatIfForecastArnsHasBeenSet = true; m_whatIfForecastArns.emplace_back(std::forward<WhatIfForecastArnsT>(value)); return *this; }
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
    CreateWhatIfForecastExportRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateWhatIfForecastExportRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateWhatIfForecastExportRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    CreateWhatIfForecastExportRequest& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_whatIfForecastExportName;
    bool m_whatIfForecastExportNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_whatIfForecastArns;
    bool m_whatIfForecastArnsHasBeenSet = false;

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
