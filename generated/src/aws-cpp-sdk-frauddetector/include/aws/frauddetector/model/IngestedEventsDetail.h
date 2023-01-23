/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/IngestedEventsTimeWindow.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The details of the ingested event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/IngestedEventsDetail">AWS
   * API Reference</a></p>
   */
  class IngestedEventsDetail
  {
  public:
    AWS_FRAUDDETECTOR_API IngestedEventsDetail();
    AWS_FRAUDDETECTOR_API IngestedEventsDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API IngestedEventsDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start and stop time of the ingested events.</p>
     */
    inline const IngestedEventsTimeWindow& GetIngestedEventsTimeWindow() const{ return m_ingestedEventsTimeWindow; }

    /**
     * <p>The start and stop time of the ingested events.</p>
     */
    inline bool IngestedEventsTimeWindowHasBeenSet() const { return m_ingestedEventsTimeWindowHasBeenSet; }

    /**
     * <p>The start and stop time of the ingested events.</p>
     */
    inline void SetIngestedEventsTimeWindow(const IngestedEventsTimeWindow& value) { m_ingestedEventsTimeWindowHasBeenSet = true; m_ingestedEventsTimeWindow = value; }

    /**
     * <p>The start and stop time of the ingested events.</p>
     */
    inline void SetIngestedEventsTimeWindow(IngestedEventsTimeWindow&& value) { m_ingestedEventsTimeWindowHasBeenSet = true; m_ingestedEventsTimeWindow = std::move(value); }

    /**
     * <p>The start and stop time of the ingested events.</p>
     */
    inline IngestedEventsDetail& WithIngestedEventsTimeWindow(const IngestedEventsTimeWindow& value) { SetIngestedEventsTimeWindow(value); return *this;}

    /**
     * <p>The start and stop time of the ingested events.</p>
     */
    inline IngestedEventsDetail& WithIngestedEventsTimeWindow(IngestedEventsTimeWindow&& value) { SetIngestedEventsTimeWindow(std::move(value)); return *this;}

  private:

    IngestedEventsTimeWindow m_ingestedEventsTimeWindow;
    bool m_ingestedEventsTimeWindowHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
