/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/iotanalytics/model/PipelineActivity.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class RunPipelineActivityRequest : public IoTAnalyticsRequest
  {
  public:
    AWS_IOTANALYTICS_API RunPipelineActivityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RunPipelineActivity"; }

    AWS_IOTANALYTICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The pipeline activity that is run. This must not be a channel activity or a
     * data store activity because these activities are used in a pipeline only to load
     * the original message and to store the (possibly) transformed message. If a
     * Lambda activity is specified, only short-running Lambda functions (those with a
     * timeout of less than 30 seconds or less) can be used.</p>
     */
    inline const PipelineActivity& GetPipelineActivity() const { return m_pipelineActivity; }
    inline bool PipelineActivityHasBeenSet() const { return m_pipelineActivityHasBeenSet; }
    template<typename PipelineActivityT = PipelineActivity>
    void SetPipelineActivity(PipelineActivityT&& value) { m_pipelineActivityHasBeenSet = true; m_pipelineActivity = std::forward<PipelineActivityT>(value); }
    template<typename PipelineActivityT = PipelineActivity>
    RunPipelineActivityRequest& WithPipelineActivity(PipelineActivityT&& value) { SetPipelineActivity(std::forward<PipelineActivityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sample message payloads on which the pipeline activity is run.</p>
     */
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetPayloads() const { return m_payloads; }
    inline bool PayloadsHasBeenSet() const { return m_payloadsHasBeenSet; }
    template<typename PayloadsT = Aws::Vector<Aws::Utils::ByteBuffer>>
    void SetPayloads(PayloadsT&& value) { m_payloadsHasBeenSet = true; m_payloads = std::forward<PayloadsT>(value); }
    template<typename PayloadsT = Aws::Vector<Aws::Utils::ByteBuffer>>
    RunPipelineActivityRequest& WithPayloads(PayloadsT&& value) { SetPayloads(std::forward<PayloadsT>(value)); return *this;}
    template<typename PayloadsT = Aws::Utils::ByteBuffer>
    RunPipelineActivityRequest& AddPayloads(PayloadsT&& value) { m_payloadsHasBeenSet = true; m_payloads.emplace_back(std::forward<PayloadsT>(value)); return *this; }
    ///@}
  private:

    PipelineActivity m_pipelineActivity;
    bool m_pipelineActivityHasBeenSet = false;

    Aws::Vector<Aws::Utils::ByteBuffer> m_payloads;
    bool m_payloadsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
