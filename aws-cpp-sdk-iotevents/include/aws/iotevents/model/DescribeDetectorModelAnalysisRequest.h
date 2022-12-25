/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class DescribeDetectorModelAnalysisRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API DescribeDetectorModelAnalysisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDetectorModelAnalysis"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the analysis result that you want to retrieve.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }

    /**
     * <p>The ID of the analysis result that you want to retrieve.</p>
     */
    inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }

    /**
     * <p>The ID of the analysis result that you want to retrieve.</p>
     */
    inline void SetAnalysisId(const Aws::String& value) { m_analysisIdHasBeenSet = true; m_analysisId = value; }

    /**
     * <p>The ID of the analysis result that you want to retrieve.</p>
     */
    inline void SetAnalysisId(Aws::String&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::move(value); }

    /**
     * <p>The ID of the analysis result that you want to retrieve.</p>
     */
    inline void SetAnalysisId(const char* value) { m_analysisIdHasBeenSet = true; m_analysisId.assign(value); }

    /**
     * <p>The ID of the analysis result that you want to retrieve.</p>
     */
    inline DescribeDetectorModelAnalysisRequest& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}

    /**
     * <p>The ID of the analysis result that you want to retrieve.</p>
     */
    inline DescribeDetectorModelAnalysisRequest& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID of the analysis result that you want to retrieve.</p>
     */
    inline DescribeDetectorModelAnalysisRequest& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}

  private:

    Aws::String m_analysisId;
    bool m_analysisIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
