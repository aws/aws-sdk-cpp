/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/AggregatedSourceType.h>
#include <aws/config/model/AggregatedSourceStatusType.h>
#include <aws/core/utils/DateTime.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The current sync status between the source and the aggregator
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/AggregatedSourceStatus">AWS
   * API Reference</a></p>
   */
  class AggregatedSourceStatus
  {
  public:
    AWS_CONFIGSERVICE_API AggregatedSourceStatus() = default;
    AWS_CONFIGSERVICE_API AggregatedSourceStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregatedSourceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source account ID or an organization.</p>
     */
    inline const Aws::String& GetSourceId() const { return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    template<typename SourceIdT = Aws::String>
    void SetSourceId(SourceIdT&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::forward<SourceIdT>(value); }
    template<typename SourceIdT = Aws::String>
    AggregatedSourceStatus& WithSourceId(SourceIdT&& value) { SetSourceId(std::forward<SourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source account or an organization.</p>
     */
    inline AggregatedSourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(AggregatedSourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline AggregatedSourceStatus& WithSourceType(AggregatedSourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline const Aws::String& GetAwsRegion() const { return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    template<typename AwsRegionT = Aws::String>
    void SetAwsRegion(AwsRegionT&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::forward<AwsRegionT>(value); }
    template<typename AwsRegionT = Aws::String>
    AggregatedSourceStatus& WithAwsRegion(AwsRegionT&& value) { SetAwsRegion(std::forward<AwsRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the last updated status type.</p> <ul> <li> <p>Valid value FAILED
     * indicates errors while moving data.</p> </li> <li> <p>Valid value SUCCEEDED
     * indicates the data was successfully moved.</p> </li> <li> <p>Valid value
     * OUTDATED indicates the data is not the most recent.</p> </li> </ul>
     */
    inline AggregatedSourceStatusType GetLastUpdateStatus() const { return m_lastUpdateStatus; }
    inline bool LastUpdateStatusHasBeenSet() const { return m_lastUpdateStatusHasBeenSet; }
    inline void SetLastUpdateStatus(AggregatedSourceStatusType value) { m_lastUpdateStatusHasBeenSet = true; m_lastUpdateStatus = value; }
    inline AggregatedSourceStatus& WithLastUpdateStatus(AggregatedSourceStatusType value) { SetLastUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the last update.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    AggregatedSourceStatus& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code that Config returned when the source account aggregation last
     * failed.</p>
     */
    inline const Aws::String& GetLastErrorCode() const { return m_lastErrorCode; }
    inline bool LastErrorCodeHasBeenSet() const { return m_lastErrorCodeHasBeenSet; }
    template<typename LastErrorCodeT = Aws::String>
    void SetLastErrorCode(LastErrorCodeT&& value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode = std::forward<LastErrorCodeT>(value); }
    template<typename LastErrorCodeT = Aws::String>
    AggregatedSourceStatus& WithLastErrorCode(LastErrorCodeT&& value) { SetLastErrorCode(std::forward<LastErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message indicating that the source account aggregation failed due to an
     * error.</p>
     */
    inline const Aws::String& GetLastErrorMessage() const { return m_lastErrorMessage; }
    inline bool LastErrorMessageHasBeenSet() const { return m_lastErrorMessageHasBeenSet; }
    template<typename LastErrorMessageT = Aws::String>
    void SetLastErrorMessage(LastErrorMessageT&& value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage = std::forward<LastErrorMessageT>(value); }
    template<typename LastErrorMessageT = Aws::String>
    AggregatedSourceStatus& WithLastErrorMessage(LastErrorMessageT&& value) { SetLastErrorMessage(std::forward<LastErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    AggregatedSourceType m_sourceType{AggregatedSourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    AggregatedSourceStatusType m_lastUpdateStatus{AggregatedSourceStatusType::NOT_SET};
    bool m_lastUpdateStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::String m_lastErrorCode;
    bool m_lastErrorCodeHasBeenSet = false;

    Aws::String m_lastErrorMessage;
    bool m_lastErrorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
