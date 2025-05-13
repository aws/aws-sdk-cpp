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
    AWS_LOOKOUTEQUIPMENT_API CreateRetrainingSchedulerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRetrainingScheduler"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the model to add the retraining scheduler to. </p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    CreateRetrainingSchedulerRequest& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date for the retraining scheduler. Lookout for Equipment truncates
     * the time you provide to the nearest UTC day.</p>
     */
    inline const Aws::Utils::DateTime& GetRetrainingStartDate() const { return m_retrainingStartDate; }
    inline bool RetrainingStartDateHasBeenSet() const { return m_retrainingStartDateHasBeenSet; }
    template<typename RetrainingStartDateT = Aws::Utils::DateTime>
    void SetRetrainingStartDate(RetrainingStartDateT&& value) { m_retrainingStartDateHasBeenSet = true; m_retrainingStartDate = std::forward<RetrainingStartDateT>(value); }
    template<typename RetrainingStartDateT = Aws::Utils::DateTime>
    CreateRetrainingSchedulerRequest& WithRetrainingStartDate(RetrainingStartDateT&& value) { SetRetrainingStartDate(std::forward<RetrainingStartDateT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetRetrainingFrequency() const { return m_retrainingFrequency; }
    inline bool RetrainingFrequencyHasBeenSet() const { return m_retrainingFrequencyHasBeenSet; }
    template<typename RetrainingFrequencyT = Aws::String>
    void SetRetrainingFrequency(RetrainingFrequencyT&& value) { m_retrainingFrequencyHasBeenSet = true; m_retrainingFrequency = std::forward<RetrainingFrequencyT>(value); }
    template<typename RetrainingFrequencyT = Aws::String>
    CreateRetrainingSchedulerRequest& WithRetrainingFrequency(RetrainingFrequencyT&& value) { SetRetrainingFrequency(std::forward<RetrainingFrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of past days of data that will be used for retraining.</p>
     */
    inline const Aws::String& GetLookbackWindow() const { return m_lookbackWindow; }
    inline bool LookbackWindowHasBeenSet() const { return m_lookbackWindowHasBeenSet; }
    template<typename LookbackWindowT = Aws::String>
    void SetLookbackWindow(LookbackWindowT&& value) { m_lookbackWindowHasBeenSet = true; m_lookbackWindow = std::forward<LookbackWindowT>(value); }
    template<typename LookbackWindowT = Aws::String>
    CreateRetrainingSchedulerRequest& WithLookbackWindow(LookbackWindowT&& value) { SetLookbackWindow(std::forward<LookbackWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how the service will use new models. In <code>MANAGED</code> mode,
     * new models will automatically be used for inference if they have better
     * performance than the current model. In <code>MANUAL</code> mode, the new models
     * will not be used <a
     * href="https://docs.aws.amazon.com/lookout-for-equipment/latest/ug/versioning-model.html#model-activation">until
     * they are manually activated</a>.</p>
     */
    inline ModelPromoteMode GetPromoteMode() const { return m_promoteMode; }
    inline bool PromoteModeHasBeenSet() const { return m_promoteModeHasBeenSet; }
    inline void SetPromoteMode(ModelPromoteMode value) { m_promoteModeHasBeenSet = true; m_promoteMode = value; }
    inline CreateRetrainingSchedulerRequest& WithPromoteMode(ModelPromoteMode value) { SetPromoteMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateRetrainingSchedulerRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::Utils::DateTime m_retrainingStartDate{};
    bool m_retrainingStartDateHasBeenSet = false;

    Aws::String m_retrainingFrequency;
    bool m_retrainingFrequencyHasBeenSet = false;

    Aws::String m_lookbackWindow;
    bool m_lookbackWindowHasBeenSet = false;

    ModelPromoteMode m_promoteMode{ModelPromoteMode::NOT_SET};
    bool m_promoteModeHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
