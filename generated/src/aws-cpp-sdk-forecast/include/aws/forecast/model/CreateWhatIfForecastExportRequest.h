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
    AWS_FORECASTSERVICE_API CreateWhatIfForecastExportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWhatIfForecastExport"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the what-if forecast to export.</p>
     */
    inline const Aws::String& GetWhatIfForecastExportName() const{ return m_whatIfForecastExportName; }

    /**
     * <p>The name of the what-if forecast to export.</p>
     */
    inline bool WhatIfForecastExportNameHasBeenSet() const { return m_whatIfForecastExportNameHasBeenSet; }

    /**
     * <p>The name of the what-if forecast to export.</p>
     */
    inline void SetWhatIfForecastExportName(const Aws::String& value) { m_whatIfForecastExportNameHasBeenSet = true; m_whatIfForecastExportName = value; }

    /**
     * <p>The name of the what-if forecast to export.</p>
     */
    inline void SetWhatIfForecastExportName(Aws::String&& value) { m_whatIfForecastExportNameHasBeenSet = true; m_whatIfForecastExportName = std::move(value); }

    /**
     * <p>The name of the what-if forecast to export.</p>
     */
    inline void SetWhatIfForecastExportName(const char* value) { m_whatIfForecastExportNameHasBeenSet = true; m_whatIfForecastExportName.assign(value); }

    /**
     * <p>The name of the what-if forecast to export.</p>
     */
    inline CreateWhatIfForecastExportRequest& WithWhatIfForecastExportName(const Aws::String& value) { SetWhatIfForecastExportName(value); return *this;}

    /**
     * <p>The name of the what-if forecast to export.</p>
     */
    inline CreateWhatIfForecastExportRequest& WithWhatIfForecastExportName(Aws::String&& value) { SetWhatIfForecastExportName(std::move(value)); return *this;}

    /**
     * <p>The name of the what-if forecast to export.</p>
     */
    inline CreateWhatIfForecastExportRequest& WithWhatIfForecastExportName(const char* value) { SetWhatIfForecastExportName(value); return *this;}


    /**
     * <p>The list of what-if forecast Amazon Resource Names (ARNs) to export.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWhatIfForecastArns() const{ return m_whatIfForecastArns; }

    /**
     * <p>The list of what-if forecast Amazon Resource Names (ARNs) to export.</p>
     */
    inline bool WhatIfForecastArnsHasBeenSet() const { return m_whatIfForecastArnsHasBeenSet; }

    /**
     * <p>The list of what-if forecast Amazon Resource Names (ARNs) to export.</p>
     */
    inline void SetWhatIfForecastArns(const Aws::Vector<Aws::String>& value) { m_whatIfForecastArnsHasBeenSet = true; m_whatIfForecastArns = value; }

    /**
     * <p>The list of what-if forecast Amazon Resource Names (ARNs) to export.</p>
     */
    inline void SetWhatIfForecastArns(Aws::Vector<Aws::String>&& value) { m_whatIfForecastArnsHasBeenSet = true; m_whatIfForecastArns = std::move(value); }

    /**
     * <p>The list of what-if forecast Amazon Resource Names (ARNs) to export.</p>
     */
    inline CreateWhatIfForecastExportRequest& WithWhatIfForecastArns(const Aws::Vector<Aws::String>& value) { SetWhatIfForecastArns(value); return *this;}

    /**
     * <p>The list of what-if forecast Amazon Resource Names (ARNs) to export.</p>
     */
    inline CreateWhatIfForecastExportRequest& WithWhatIfForecastArns(Aws::Vector<Aws::String>&& value) { SetWhatIfForecastArns(std::move(value)); return *this;}

    /**
     * <p>The list of what-if forecast Amazon Resource Names (ARNs) to export.</p>
     */
    inline CreateWhatIfForecastExportRequest& AddWhatIfForecastArns(const Aws::String& value) { m_whatIfForecastArnsHasBeenSet = true; m_whatIfForecastArns.push_back(value); return *this; }

    /**
     * <p>The list of what-if forecast Amazon Resource Names (ARNs) to export.</p>
     */
    inline CreateWhatIfForecastExportRequest& AddWhatIfForecastArns(Aws::String&& value) { m_whatIfForecastArnsHasBeenSet = true; m_whatIfForecastArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of what-if forecast Amazon Resource Names (ARNs) to export.</p>
     */
    inline CreateWhatIfForecastExportRequest& AddWhatIfForecastArns(const char* value) { m_whatIfForecastArnsHasBeenSet = true; m_whatIfForecastArns.push_back(value); return *this; }


    /**
     * <p>The location where you want to save the forecast and an AWS Identity and
     * Access Management (IAM) role that Amazon Forecast can assume to access the
     * location. The forecast must be exported to an Amazon S3 bucket.</p> <p>If
     * encryption is used, <code>Destination</code> must include an AWS Key Management
     * Service (KMS) key. The IAM role must allow Amazon Forecast permission to access
     * the key.</p>
     */
    inline const DataDestination& GetDestination() const{ return m_destination; }

    /**
     * <p>The location where you want to save the forecast and an AWS Identity and
     * Access Management (IAM) role that Amazon Forecast can assume to access the
     * location. The forecast must be exported to an Amazon S3 bucket.</p> <p>If
     * encryption is used, <code>Destination</code> must include an AWS Key Management
     * Service (KMS) key. The IAM role must allow Amazon Forecast permission to access
     * the key.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The location where you want to save the forecast and an AWS Identity and
     * Access Management (IAM) role that Amazon Forecast can assume to access the
     * location. The forecast must be exported to an Amazon S3 bucket.</p> <p>If
     * encryption is used, <code>Destination</code> must include an AWS Key Management
     * Service (KMS) key. The IAM role must allow Amazon Forecast permission to access
     * the key.</p>
     */
    inline void SetDestination(const DataDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The location where you want to save the forecast and an AWS Identity and
     * Access Management (IAM) role that Amazon Forecast can assume to access the
     * location. The forecast must be exported to an Amazon S3 bucket.</p> <p>If
     * encryption is used, <code>Destination</code> must include an AWS Key Management
     * Service (KMS) key. The IAM role must allow Amazon Forecast permission to access
     * the key.</p>
     */
    inline void SetDestination(DataDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The location where you want to save the forecast and an AWS Identity and
     * Access Management (IAM) role that Amazon Forecast can assume to access the
     * location. The forecast must be exported to an Amazon S3 bucket.</p> <p>If
     * encryption is used, <code>Destination</code> must include an AWS Key Management
     * Service (KMS) key. The IAM role must allow Amazon Forecast permission to access
     * the key.</p>
     */
    inline CreateWhatIfForecastExportRequest& WithDestination(const DataDestination& value) { SetDestination(value); return *this;}

    /**
     * <p>The location where you want to save the forecast and an AWS Identity and
     * Access Management (IAM) role that Amazon Forecast can assume to access the
     * location. The forecast must be exported to an Amazon S3 bucket.</p> <p>If
     * encryption is used, <code>Destination</code> must include an AWS Key Management
     * Service (KMS) key. The IAM role must allow Amazon Forecast permission to access
     * the key.</p>
     */
    inline CreateWhatIfForecastExportRequest& WithDestination(DataDestination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline CreateWhatIfForecastExportRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline CreateWhatIfForecastExportRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline CreateWhatIfForecastExportRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/tagging-forecast-resources.html">tags</a>
     * to apply to the what if forecast.</p>
     */
    inline CreateWhatIfForecastExportRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }

    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline CreateWhatIfForecastExportRequest& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline CreateWhatIfForecastExportRequest& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>The format of the exported data, CSV or PARQUET.</p>
     */
    inline CreateWhatIfForecastExportRequest& WithFormat(const char* value) { SetFormat(value); return *this;}

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
