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
  class CreatePredictorBacktestExportJobRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API CreatePredictorBacktestExportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePredictorBacktestExportJob"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the backtest export job.</p>
     */
    inline const Aws::String& GetPredictorBacktestExportJobName() const{ return m_predictorBacktestExportJobName; }

    /**
     * <p>The name for the backtest export job.</p>
     */
    inline bool PredictorBacktestExportJobNameHasBeenSet() const { return m_predictorBacktestExportJobNameHasBeenSet; }

    /**
     * <p>The name for the backtest export job.</p>
     */
    inline void SetPredictorBacktestExportJobName(const Aws::String& value) { m_predictorBacktestExportJobNameHasBeenSet = true; m_predictorBacktestExportJobName = value; }

    /**
     * <p>The name for the backtest export job.</p>
     */
    inline void SetPredictorBacktestExportJobName(Aws::String&& value) { m_predictorBacktestExportJobNameHasBeenSet = true; m_predictorBacktestExportJobName = std::move(value); }

    /**
     * <p>The name for the backtest export job.</p>
     */
    inline void SetPredictorBacktestExportJobName(const char* value) { m_predictorBacktestExportJobNameHasBeenSet = true; m_predictorBacktestExportJobName.assign(value); }

    /**
     * <p>The name for the backtest export job.</p>
     */
    inline CreatePredictorBacktestExportJobRequest& WithPredictorBacktestExportJobName(const Aws::String& value) { SetPredictorBacktestExportJobName(value); return *this;}

    /**
     * <p>The name for the backtest export job.</p>
     */
    inline CreatePredictorBacktestExportJobRequest& WithPredictorBacktestExportJobName(Aws::String&& value) { SetPredictorBacktestExportJobName(std::move(value)); return *this;}

    /**
     * <p>The name for the backtest export job.</p>
     */
    inline CreatePredictorBacktestExportJobRequest& WithPredictorBacktestExportJobName(const char* value) { SetPredictorBacktestExportJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the predictor that you want to export.</p>
     */
    inline const Aws::String& GetPredictorArn() const{ return m_predictorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor that you want to export.</p>
     */
    inline bool PredictorArnHasBeenSet() const { return m_predictorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor that you want to export.</p>
     */
    inline void SetPredictorArn(const Aws::String& value) { m_predictorArnHasBeenSet = true; m_predictorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor that you want to export.</p>
     */
    inline void SetPredictorArn(Aws::String&& value) { m_predictorArnHasBeenSet = true; m_predictorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor that you want to export.</p>
     */
    inline void SetPredictorArn(const char* value) { m_predictorArnHasBeenSet = true; m_predictorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor that you want to export.</p>
     */
    inline CreatePredictorBacktestExportJobRequest& WithPredictorArn(const Aws::String& value) { SetPredictorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor that you want to export.</p>
     */
    inline CreatePredictorBacktestExportJobRequest& WithPredictorArn(Aws::String&& value) { SetPredictorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor that you want to export.</p>
     */
    inline CreatePredictorBacktestExportJobRequest& WithPredictorArn(const char* value) { SetPredictorArn(value); return *this;}


    
    inline const DataDestination& GetDestination() const{ return m_destination; }

    
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    
    inline void SetDestination(const DataDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    
    inline void SetDestination(DataDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    
    inline CreatePredictorBacktestExportJobRequest& WithDestination(const DataDestination& value) { SetDestination(value); return *this;}

    
    inline CreatePredictorBacktestExportJobRequest& WithDestination(DataDestination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>Optional metadata to help you categorize and organize your backtests. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional metadata to help you categorize and organize your backtests. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional metadata to help you categorize and organize your backtests. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional metadata to help you categorize and organize your backtests. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional metadata to help you categorize and organize your backtests. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline CreatePredictorBacktestExportJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional metadata to help you categorize and organize your backtests. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline CreatePredictorBacktestExportJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional metadata to help you categorize and organize your backtests. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline CreatePredictorBacktestExportJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Optional metadata to help you categorize and organize your backtests. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline CreatePredictorBacktestExportJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The format of the exported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the exported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the exported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the exported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the exported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }

    /**
     * <p>The format of the exported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline CreatePredictorBacktestExportJobRequest& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the exported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline CreatePredictorBacktestExportJobRequest& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>The format of the exported data, CSV or PARQUET. The default value is
     * CSV.</p>
     */
    inline CreatePredictorBacktestExportJobRequest& WithFormat(const char* value) { SetFormat(value); return *this;}

  private:

    Aws::String m_predictorBacktestExportJobName;
    bool m_predictorBacktestExportJobNameHasBeenSet = false;

    Aws::String m_predictorArn;
    bool m_predictorArnHasBeenSet = false;

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
