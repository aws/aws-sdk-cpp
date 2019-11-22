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
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/DataDestination.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class AWS_FORECASTSERVICE_API CreateForecastExportJobRequest : public ForecastServiceRequest
  {
  public:
    CreateForecastExportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateForecastExportJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the forecast export job.</p>
     */
    inline const Aws::String& GetForecastExportJobName() const{ return m_forecastExportJobName; }

    /**
     * <p>The name for the forecast export job.</p>
     */
    inline bool ForecastExportJobNameHasBeenSet() const { return m_forecastExportJobNameHasBeenSet; }

    /**
     * <p>The name for the forecast export job.</p>
     */
    inline void SetForecastExportJobName(const Aws::String& value) { m_forecastExportJobNameHasBeenSet = true; m_forecastExportJobName = value; }

    /**
     * <p>The name for the forecast export job.</p>
     */
    inline void SetForecastExportJobName(Aws::String&& value) { m_forecastExportJobNameHasBeenSet = true; m_forecastExportJobName = std::move(value); }

    /**
     * <p>The name for the forecast export job.</p>
     */
    inline void SetForecastExportJobName(const char* value) { m_forecastExportJobNameHasBeenSet = true; m_forecastExportJobName.assign(value); }

    /**
     * <p>The name for the forecast export job.</p>
     */
    inline CreateForecastExportJobRequest& WithForecastExportJobName(const Aws::String& value) { SetForecastExportJobName(value); return *this;}

    /**
     * <p>The name for the forecast export job.</p>
     */
    inline CreateForecastExportJobRequest& WithForecastExportJobName(Aws::String&& value) { SetForecastExportJobName(std::move(value)); return *this;}

    /**
     * <p>The name for the forecast export job.</p>
     */
    inline CreateForecastExportJobRequest& WithForecastExportJobName(const char* value) { SetForecastExportJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the forecast that you want to export.</p>
     */
    inline const Aws::String& GetForecastArn() const{ return m_forecastArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast that you want to export.</p>
     */
    inline bool ForecastArnHasBeenSet() const { return m_forecastArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast that you want to export.</p>
     */
    inline void SetForecastArn(const Aws::String& value) { m_forecastArnHasBeenSet = true; m_forecastArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast that you want to export.</p>
     */
    inline void SetForecastArn(Aws::String&& value) { m_forecastArnHasBeenSet = true; m_forecastArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast that you want to export.</p>
     */
    inline void SetForecastArn(const char* value) { m_forecastArnHasBeenSet = true; m_forecastArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast that you want to export.</p>
     */
    inline CreateForecastExportJobRequest& WithForecastArn(const Aws::String& value) { SetForecastArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast that you want to export.</p>
     */
    inline CreateForecastExportJobRequest& WithForecastArn(Aws::String&& value) { SetForecastArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the forecast that you want to export.</p>
     */
    inline CreateForecastExportJobRequest& WithForecastArn(const char* value) { SetForecastArn(value); return *this;}


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
    inline CreateForecastExportJobRequest& WithDestination(const DataDestination& value) { SetDestination(value); return *this;}

    /**
     * <p>The location where you want to save the forecast and an AWS Identity and
     * Access Management (IAM) role that Amazon Forecast can assume to access the
     * location. The forecast must be exported to an Amazon S3 bucket.</p> <p>If
     * encryption is used, <code>Destination</code> must include an AWS Key Management
     * Service (KMS) key. The IAM role must allow Amazon Forecast permission to access
     * the key.</p>
     */
    inline CreateForecastExportJobRequest& WithDestination(DataDestination&& value) { SetDestination(std::move(value)); return *this;}

  private:

    Aws::String m_forecastExportJobName;
    bool m_forecastExportJobNameHasBeenSet;

    Aws::String m_forecastArn;
    bool m_forecastArnHasBeenSet;

    DataDestination m_destination;
    bool m_destinationHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
