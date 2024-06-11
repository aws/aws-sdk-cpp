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
    AWS_CONFIGSERVICE_API AggregatedSourceStatus();
    AWS_CONFIGSERVICE_API AggregatedSourceStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregatedSourceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source account ID or an organization.</p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    inline void SetSourceId(const Aws::String& value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }
    inline void SetSourceId(Aws::String&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::move(value); }
    inline void SetSourceId(const char* value) { m_sourceIdHasBeenSet = true; m_sourceId.assign(value); }
    inline AggregatedSourceStatus& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}
    inline AggregatedSourceStatus& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}
    inline AggregatedSourceStatus& WithSourceId(const char* value) { SetSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source account or an organization.</p>
     */
    inline const AggregatedSourceType& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const AggregatedSourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(AggregatedSourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline AggregatedSourceStatus& WithSourceType(const AggregatedSourceType& value) { SetSourceType(value); return *this;}
    inline AggregatedSourceStatus& WithSourceType(AggregatedSourceType&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region authorized to collect aggregated data.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }
    inline AggregatedSourceStatus& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}
    inline AggregatedSourceStatus& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}
    inline AggregatedSourceStatus& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the last updated status type.</p> <ul> <li> <p>Valid value FAILED
     * indicates errors while moving data.</p> </li> <li> <p>Valid value SUCCEEDED
     * indicates the data was successfully moved.</p> </li> <li> <p>Valid value
     * OUTDATED indicates the data is not the most recent.</p> </li> </ul>
     */
    inline const AggregatedSourceStatusType& GetLastUpdateStatus() const{ return m_lastUpdateStatus; }
    inline bool LastUpdateStatusHasBeenSet() const { return m_lastUpdateStatusHasBeenSet; }
    inline void SetLastUpdateStatus(const AggregatedSourceStatusType& value) { m_lastUpdateStatusHasBeenSet = true; m_lastUpdateStatus = value; }
    inline void SetLastUpdateStatus(AggregatedSourceStatusType&& value) { m_lastUpdateStatusHasBeenSet = true; m_lastUpdateStatus = std::move(value); }
    inline AggregatedSourceStatus& WithLastUpdateStatus(const AggregatedSourceStatusType& value) { SetLastUpdateStatus(value); return *this;}
    inline AggregatedSourceStatus& WithLastUpdateStatus(AggregatedSourceStatusType&& value) { SetLastUpdateStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the last update.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline AggregatedSourceStatus& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline AggregatedSourceStatus& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code that Config returned when the source account aggregation last
     * failed.</p>
     */
    inline const Aws::String& GetLastErrorCode() const{ return m_lastErrorCode; }
    inline bool LastErrorCodeHasBeenSet() const { return m_lastErrorCodeHasBeenSet; }
    inline void SetLastErrorCode(const Aws::String& value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode = value; }
    inline void SetLastErrorCode(Aws::String&& value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode = std::move(value); }
    inline void SetLastErrorCode(const char* value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode.assign(value); }
    inline AggregatedSourceStatus& WithLastErrorCode(const Aws::String& value) { SetLastErrorCode(value); return *this;}
    inline AggregatedSourceStatus& WithLastErrorCode(Aws::String&& value) { SetLastErrorCode(std::move(value)); return *this;}
    inline AggregatedSourceStatus& WithLastErrorCode(const char* value) { SetLastErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message indicating that the source account aggregation failed due to an
     * error.</p>
     */
    inline const Aws::String& GetLastErrorMessage() const{ return m_lastErrorMessage; }
    inline bool LastErrorMessageHasBeenSet() const { return m_lastErrorMessageHasBeenSet; }
    inline void SetLastErrorMessage(const Aws::String& value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage = value; }
    inline void SetLastErrorMessage(Aws::String&& value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage = std::move(value); }
    inline void SetLastErrorMessage(const char* value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage.assign(value); }
    inline AggregatedSourceStatus& WithLastErrorMessage(const Aws::String& value) { SetLastErrorMessage(value); return *this;}
    inline AggregatedSourceStatus& WithLastErrorMessage(Aws::String&& value) { SetLastErrorMessage(std::move(value)); return *this;}
    inline AggregatedSourceStatus& WithLastErrorMessage(const char* value) { SetLastErrorMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    AggregatedSourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    AggregatedSourceStatusType m_lastUpdateStatus;
    bool m_lastUpdateStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::String m_lastErrorCode;
    bool m_lastErrorCodeHasBeenSet = false;

    Aws::String m_lastErrorMessage;
    bool m_lastErrorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
