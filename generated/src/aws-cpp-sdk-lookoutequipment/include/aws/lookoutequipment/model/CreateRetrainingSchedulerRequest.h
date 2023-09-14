/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutequipment/model/ModelPromoteMode.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class CreateRetrainingSchedulerRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CreateRetrainingSchedulerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRetrainingScheduler"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the model to add the retraining scheduler to. </p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model to add the retraining scheduler to. </p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the model to add the retraining scheduler to. </p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model to add the retraining scheduler to. </p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the model to add the retraining scheduler to. </p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the model to add the retraining scheduler to. </p>
     */
    inline CreateRetrainingSchedulerRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model to add the retraining scheduler to. </p>
     */
    inline CreateRetrainingSchedulerRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the model to add the retraining scheduler to. </p>
     */
    inline CreateRetrainingSchedulerRequest& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The start date for the retraining scheduler. Lookout for Equipment truncates
     * the time you provide to the nearest UTC day.</p>
     */
    inline const Aws::Utils::DateTime& GetRetrainingStartDate() const{ return m_retrainingStartDate; }

    /**
     * <p>The start date for the retraining scheduler. Lookout for Equipment truncates
     * the time you provide to the nearest UTC day.</p>
     */
    inline bool RetrainingStartDateHasBeenSet() const { return m_retrainingStartDateHasBeenSet; }

    /**
     * <p>The start date for the retraining scheduler. Lookout for Equipment truncates
     * the time you provide to the nearest UTC day.</p>
     */
    inline void SetRetrainingStartDate(const Aws::Utils::DateTime& value) { m_retrainingStartDateHasBeenSet = true; m_retrainingStartDate = value; }

    /**
     * <p>The start date for the retraining scheduler. Lookout for Equipment truncates
     * the time you provide to the nearest UTC day.</p>
     */
    inline void SetRetrainingStartDate(Aws::Utils::DateTime&& value) { m_retrainingStartDateHasBeenSet = true; m_retrainingStartDate = std::move(value); }

    /**
     * <p>The start date for the retraining scheduler. Lookout for Equipment truncates
     * the time you provide to the nearest UTC day.</p>
     */
    inline CreateRetrainingSchedulerRequest& WithRetrainingStartDate(const Aws::Utils::DateTime& value) { SetRetrainingStartDate(value); return *this;}

    /**
     * <p>The start date for the retraining scheduler. Lookout for Equipment truncates
     * the time you provide to the nearest UTC day.</p>
     */
    inline CreateRetrainingSchedulerRequest& WithRetrainingStartDate(Aws::Utils::DateTime&& value) { SetRetrainingStartDate(std::move(value)); return *this;}


    /**
     * <p>This parameter uses the <a
     * href="https://en.wikipedia.org/wiki/ISO_8601#Durations">ISO 8601</a> standard to
     * set the frequency at which you want retraining to occur in terms of Years,
     * Months, and/or Days (note: other parameters like Time are not currently
     * supported). The minimum value is 30 days (P30D) and the maximum value is 1 year
     * (P1Y). For example, the following values are valid:</p> <ul> <li> <p>P3M15D –
     * Every 3 months and 15 days</p> </li> <li> <p>P2M – Every 2 months</p> </li> <li>
     * <p>P150D – Every 150 days</p> </li> </ul>
     */
    inline const Aws::String& GetRetrainingFrequency() const{ return m_retrainingFrequency; }

    /**
     * <p>This parameter uses the <a
     * href="https://en.wikipedia.org/wiki/ISO_8601#Durations">ISO 8601</a> standard to
     * set the frequency at which you want retraining to occur in terms of Years,
     * Months, and/or Days (note: other parameters like Time are not currently
     * supported). The minimum value is 30 days (P30D) and the maximum value is 1 year
     * (P1Y). For example, the following values are valid:</p> <ul> <li> <p>P3M15D –
     * Every 3 months and 15 days</p> </li> <li> <p>P2M – Every 2 months</p> </li> <li>
     * <p>P150D – Every 150 days</p> </li> </ul>
     */
    inline bool RetrainingFrequencyHasBeenSet() const { return m_retrainingFrequencyHasBeenSet; }

    /**
     * <p>This parameter uses the <a
     * href="https://en.wikipedia.org/wiki/ISO_8601#Durations">ISO 8601</a> standard to
     * set the frequency at which you want retraining to occur in terms of Years,
     * Months, and/or Days (note: other parameters like Time are not currently
     * supported). The minimum value is 30 days (P30D) and the maximum value is 1 year
     * (P1Y). For example, the following values are valid:</p> <ul> <li> <p>P3M15D –
     * Every 3 months and 15 days</p> </li> <li> <p>P2M – Every 2 months</p> </li> <li>
     * <p>P150D – Every 150 days</p> </li> </ul>
     */
    inline void SetRetrainingFrequency(const Aws::String& value) { m_retrainingFrequencyHasBeenSet = true; m_retrainingFrequency = value; }

    /**
     * <p>This parameter uses the <a
     * href="https://en.wikipedia.org/wiki/ISO_8601#Durations">ISO 8601</a> standard to
     * set the frequency at which you want retraining to occur in terms of Years,
     * Months, and/or Days (note: other parameters like Time are not currently
     * supported). The minimum value is 30 days (P30D) and the maximum value is 1 year
     * (P1Y). For example, the following values are valid:</p> <ul> <li> <p>P3M15D –
     * Every 3 months and 15 days</p> </li> <li> <p>P2M – Every 2 months</p> </li> <li>
     * <p>P150D – Every 150 days</p> </li> </ul>
     */
    inline void SetRetrainingFrequency(Aws::String&& value) { m_retrainingFrequencyHasBeenSet = true; m_retrainingFrequency = std::move(value); }

    /**
     * <p>This parameter uses the <a
     * href="https://en.wikipedia.org/wiki/ISO_8601#Durations">ISO 8601</a> standard to
     * set the frequency at which you want retraining to occur in terms of Years,
     * Months, and/or Days (note: other parameters like Time are not currently
     * supported). The minimum value is 30 days (P30D) and the maximum value is 1 year
     * (P1Y). For example, the following values are valid:</p> <ul> <li> <p>P3M15D –
     * Every 3 months and 15 days</p> </li> <li> <p>P2M – Every 2 months</p> </li> <li>
     * <p>P150D – Every 150 days</p> </li> </ul>
     */
    inline void SetRetrainingFrequency(const char* value) { m_retrainingFrequencyHasBeenSet = true; m_retrainingFrequency.assign(value); }

    /**
     * <p>This parameter uses the <a
     * href="https://en.wikipedia.org/wiki/ISO_8601#Durations">ISO 8601</a> standard to
     * set the frequency at which you want retraining to occur in terms of Years,
     * Months, and/or Days (note: other parameters like Time are not currently
     * supported). The minimum value is 30 days (P30D) and the maximum value is 1 year
     * (P1Y). For example, the following values are valid:</p> <ul> <li> <p>P3M15D –
     * Every 3 months and 15 days</p> </li> <li> <p>P2M – Every 2 months</p> </li> <li>
     * <p>P150D – Every 150 days</p> </li> </ul>
     */
    inline CreateRetrainingSchedulerRequest& WithRetrainingFrequency(const Aws::String& value) { SetRetrainingFrequency(value); return *this;}

    /**
     * <p>This parameter uses the <a
     * href="https://en.wikipedia.org/wiki/ISO_8601#Durations">ISO 8601</a> standard to
     * set the frequency at which you want retraining to occur in terms of Years,
     * Months, and/or Days (note: other parameters like Time are not currently
     * supported). The minimum value is 30 days (P30D) and the maximum value is 1 year
     * (P1Y). For example, the following values are valid:</p> <ul> <li> <p>P3M15D –
     * Every 3 months and 15 days</p> </li> <li> <p>P2M – Every 2 months</p> </li> <li>
     * <p>P150D – Every 150 days</p> </li> </ul>
     */
    inline CreateRetrainingSchedulerRequest& WithRetrainingFrequency(Aws::String&& value) { SetRetrainingFrequency(std::move(value)); return *this;}

    /**
     * <p>This parameter uses the <a
     * href="https://en.wikipedia.org/wiki/ISO_8601#Durations">ISO 8601</a> standard to
     * set the frequency at which you want retraining to occur in terms of Years,
     * Months, and/or Days (note: other parameters like Time are not currently
     * supported). The minimum value is 30 days (P30D) and the maximum value is 1 year
     * (P1Y). For example, the following values are valid:</p> <ul> <li> <p>P3M15D –
     * Every 3 months and 15 days</p> </li> <li> <p>P2M – Every 2 months</p> </li> <li>
     * <p>P150D – Every 150 days</p> </li> </ul>
     */
    inline CreateRetrainingSchedulerRequest& WithRetrainingFrequency(const char* value) { SetRetrainingFrequency(value); return *this;}


    /**
     * <p>The number of past days of data that will be used for retraining.</p>
     */
    inline const Aws::String& GetLookbackWindow() const{ return m_lookbackWindow; }

    /**
     * <p>The number of past days of data that will be used for retraining.</p>
     */
    inline bool LookbackWindowHasBeenSet() const { return m_lookbackWindowHasBeenSet; }

    /**
     * <p>The number of past days of data that will be used for retraining.</p>
     */
    inline void SetLookbackWindow(const Aws::String& value) { m_lookbackWindowHasBeenSet = true; m_lookbackWindow = value; }

    /**
     * <p>The number of past days of data that will be used for retraining.</p>
     */
    inline void SetLookbackWindow(Aws::String&& value) { m_lookbackWindowHasBeenSet = true; m_lookbackWindow = std::move(value); }

    /**
     * <p>The number of past days of data that will be used for retraining.</p>
     */
    inline void SetLookbackWindow(const char* value) { m_lookbackWindowHasBeenSet = true; m_lookbackWindow.assign(value); }

    /**
     * <p>The number of past days of data that will be used for retraining.</p>
     */
    inline CreateRetrainingSchedulerRequest& WithLookbackWindow(const Aws::String& value) { SetLookbackWindow(value); return *this;}

    /**
     * <p>The number of past days of data that will be used for retraining.</p>
     */
    inline CreateRetrainingSchedulerRequest& WithLookbackWindow(Aws::String&& value) { SetLookbackWindow(std::move(value)); return *this;}

    /**
     * <p>The number of past days of data that will be used for retraining.</p>
     */
    inline CreateRetrainingSchedulerRequest& WithLookbackWindow(const char* value) { SetLookbackWindow(value); return *this;}


    /**
     * <p>Indicates how the service will use new models. In <code>MANAGED</code> mode,
     * new models will automatically be used for inference if they have better
     * performance than the current model. In <code>MANUAL</code> mode, the new models
     * will not be used <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/versioning-model.html#model-activation">until
     * they are manually activated</a>.</p>
     */
    inline const ModelPromoteMode& GetPromoteMode() const{ return m_promoteMode; }

    /**
     * <p>Indicates how the service will use new models. In <code>MANAGED</code> mode,
     * new models will automatically be used for inference if they have better
     * performance than the current model. In <code>MANUAL</code> mode, the new models
     * will not be used <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/versioning-model.html#model-activation">until
     * they are manually activated</a>.</p>
     */
    inline bool PromoteModeHasBeenSet() const { return m_promoteModeHasBeenSet; }

    /**
     * <p>Indicates how the service will use new models. In <code>MANAGED</code> mode,
     * new models will automatically be used for inference if they have better
     * performance than the current model. In <code>MANUAL</code> mode, the new models
     * will not be used <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/versioning-model.html#model-activation">until
     * they are manually activated</a>.</p>
     */
    inline void SetPromoteMode(const ModelPromoteMode& value) { m_promoteModeHasBeenSet = true; m_promoteMode = value; }

    /**
     * <p>Indicates how the service will use new models. In <code>MANAGED</code> mode,
     * new models will automatically be used for inference if they have better
     * performance than the current model. In <code>MANUAL</code> mode, the new models
     * will not be used <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/versioning-model.html#model-activation">until
     * they are manually activated</a>.</p>
     */
    inline void SetPromoteMode(ModelPromoteMode&& value) { m_promoteModeHasBeenSet = true; m_promoteMode = std::move(value); }

    /**
     * <p>Indicates how the service will use new models. In <code>MANAGED</code> mode,
     * new models will automatically be used for inference if they have better
     * performance than the current model. In <code>MANUAL</code> mode, the new models
     * will not be used <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/versioning-model.html#model-activation">until
     * they are manually activated</a>.</p>
     */
    inline CreateRetrainingSchedulerRequest& WithPromoteMode(const ModelPromoteMode& value) { SetPromoteMode(value); return *this;}

    /**
     * <p>Indicates how the service will use new models. In <code>MANAGED</code> mode,
     * new models will automatically be used for inference if they have better
     * performance than the current model. In <code>MANUAL</code> mode, the new models
     * will not be used <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/versioning-model.html#model-activation">until
     * they are manually activated</a>.</p>
     */
    inline CreateRetrainingSchedulerRequest& WithPromoteMode(ModelPromoteMode&& value) { SetPromoteMode(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline CreateRetrainingSchedulerRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline CreateRetrainingSchedulerRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline CreateRetrainingSchedulerRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::Utils::DateTime m_retrainingStartDate;
    bool m_retrainingStartDateHasBeenSet = false;

    Aws::String m_retrainingFrequency;
    bool m_retrainingFrequencyHasBeenSet = false;

    Aws::String m_lookbackWindow;
    bool m_lookbackWindowHasBeenSet = false;

    ModelPromoteMode m_promoteMode;
    bool m_promoteModeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
