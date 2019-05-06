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
  class AWS_IOTANALYTICS_API RunPipelineActivityRequest : public IoTAnalyticsRequest
  {
  public:
    RunPipelineActivityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RunPipelineActivity"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The pipeline activity that is run. This must not be a 'channel' activity or a
     * 'datastore' activity because these activities are used in a pipeline only to
     * load the original message and to store the (possibly) transformed message. If a
     * 'lambda' activity is specified, only short-running Lambda functions (those with
     * a timeout of less than 30 seconds or less) can be used.</p>
     */
    inline const PipelineActivity& GetPipelineActivity() const{ return m_pipelineActivity; }

    /**
     * <p>The pipeline activity that is run. This must not be a 'channel' activity or a
     * 'datastore' activity because these activities are used in a pipeline only to
     * load the original message and to store the (possibly) transformed message. If a
     * 'lambda' activity is specified, only short-running Lambda functions (those with
     * a timeout of less than 30 seconds or less) can be used.</p>
     */
    inline bool PipelineActivityHasBeenSet() const { return m_pipelineActivityHasBeenSet; }

    /**
     * <p>The pipeline activity that is run. This must not be a 'channel' activity or a
     * 'datastore' activity because these activities are used in a pipeline only to
     * load the original message and to store the (possibly) transformed message. If a
     * 'lambda' activity is specified, only short-running Lambda functions (those with
     * a timeout of less than 30 seconds or less) can be used.</p>
     */
    inline void SetPipelineActivity(const PipelineActivity& value) { m_pipelineActivityHasBeenSet = true; m_pipelineActivity = value; }

    /**
     * <p>The pipeline activity that is run. This must not be a 'channel' activity or a
     * 'datastore' activity because these activities are used in a pipeline only to
     * load the original message and to store the (possibly) transformed message. If a
     * 'lambda' activity is specified, only short-running Lambda functions (those with
     * a timeout of less than 30 seconds or less) can be used.</p>
     */
    inline void SetPipelineActivity(PipelineActivity&& value) { m_pipelineActivityHasBeenSet = true; m_pipelineActivity = std::move(value); }

    /**
     * <p>The pipeline activity that is run. This must not be a 'channel' activity or a
     * 'datastore' activity because these activities are used in a pipeline only to
     * load the original message and to store the (possibly) transformed message. If a
     * 'lambda' activity is specified, only short-running Lambda functions (those with
     * a timeout of less than 30 seconds or less) can be used.</p>
     */
    inline RunPipelineActivityRequest& WithPipelineActivity(const PipelineActivity& value) { SetPipelineActivity(value); return *this;}

    /**
     * <p>The pipeline activity that is run. This must not be a 'channel' activity or a
     * 'datastore' activity because these activities are used in a pipeline only to
     * load the original message and to store the (possibly) transformed message. If a
     * 'lambda' activity is specified, only short-running Lambda functions (those with
     * a timeout of less than 30 seconds or less) can be used.</p>
     */
    inline RunPipelineActivityRequest& WithPipelineActivity(PipelineActivity&& value) { SetPipelineActivity(std::move(value)); return *this;}


    /**
     * <p>The sample message payloads on which the pipeline activity is run.</p>
     */
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetPayloads() const{ return m_payloads; }

    /**
     * <p>The sample message payloads on which the pipeline activity is run.</p>
     */
    inline bool PayloadsHasBeenSet() const { return m_payloadsHasBeenSet; }

    /**
     * <p>The sample message payloads on which the pipeline activity is run.</p>
     */
    inline void SetPayloads(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { m_payloadsHasBeenSet = true; m_payloads = value; }

    /**
     * <p>The sample message payloads on which the pipeline activity is run.</p>
     */
    inline void SetPayloads(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { m_payloadsHasBeenSet = true; m_payloads = std::move(value); }

    /**
     * <p>The sample message payloads on which the pipeline activity is run.</p>
     */
    inline RunPipelineActivityRequest& WithPayloads(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { SetPayloads(value); return *this;}

    /**
     * <p>The sample message payloads on which the pipeline activity is run.</p>
     */
    inline RunPipelineActivityRequest& WithPayloads(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { SetPayloads(std::move(value)); return *this;}

    /**
     * <p>The sample message payloads on which the pipeline activity is run.</p>
     */
    inline RunPipelineActivityRequest& AddPayloads(const Aws::Utils::ByteBuffer& value) { m_payloadsHasBeenSet = true; m_payloads.push_back(value); return *this; }

    /**
     * <p>The sample message payloads on which the pipeline activity is run.</p>
     */
    inline RunPipelineActivityRequest& AddPayloads(Aws::Utils::ByteBuffer&& value) { m_payloadsHasBeenSet = true; m_payloads.push_back(std::move(value)); return *this; }

  private:

    PipelineActivity m_pipelineActivity;
    bool m_pipelineActivityHasBeenSet;

    Aws::Vector<Aws::Utils::ByteBuffer> m_payloads;
    bool m_payloadsHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
