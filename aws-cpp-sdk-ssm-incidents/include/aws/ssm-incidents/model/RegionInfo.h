/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/RegionStatus.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Information about a Amazon Web Services Region in your replication
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/RegionInfo">AWS
   * API Reference</a></p>
   */
  class RegionInfo
  {
  public:
    AWS_SSMINCIDENTS_API RegionInfo();
    AWS_SSMINCIDENTS_API RegionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API RegionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the KMS key used to encrypt the data in this Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetSseKmsKeyId() const{ return m_sseKmsKeyId; }

    /**
     * <p>The ID of the KMS key used to encrypt the data in this Amazon Web Services
     * Region.</p>
     */
    inline bool SseKmsKeyIdHasBeenSet() const { return m_sseKmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the KMS key used to encrypt the data in this Amazon Web Services
     * Region.</p>
     */
    inline void SetSseKmsKeyId(const Aws::String& value) { m_sseKmsKeyIdHasBeenSet = true; m_sseKmsKeyId = value; }

    /**
     * <p>The ID of the KMS key used to encrypt the data in this Amazon Web Services
     * Region.</p>
     */
    inline void SetSseKmsKeyId(Aws::String&& value) { m_sseKmsKeyIdHasBeenSet = true; m_sseKmsKeyId = std::move(value); }

    /**
     * <p>The ID of the KMS key used to encrypt the data in this Amazon Web Services
     * Region.</p>
     */
    inline void SetSseKmsKeyId(const char* value) { m_sseKmsKeyIdHasBeenSet = true; m_sseKmsKeyId.assign(value); }

    /**
     * <p>The ID of the KMS key used to encrypt the data in this Amazon Web Services
     * Region.</p>
     */
    inline RegionInfo& WithSseKmsKeyId(const Aws::String& value) { SetSseKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the KMS key used to encrypt the data in this Amazon Web Services
     * Region.</p>
     */
    inline RegionInfo& WithSseKmsKeyId(Aws::String&& value) { SetSseKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS key used to encrypt the data in this Amazon Web Services
     * Region.</p>
     */
    inline RegionInfo& WithSseKmsKeyId(const char* value) { SetSseKmsKeyId(value); return *this;}


    /**
     * <p>The status of the Amazon Web Services Region in the replication set.</p>
     */
    inline const RegionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Amazon Web Services Region in the replication set.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Amazon Web Services Region in the replication set.</p>
     */
    inline void SetStatus(const RegionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Amazon Web Services Region in the replication set.</p>
     */
    inline void SetStatus(RegionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Amazon Web Services Region in the replication set.</p>
     */
    inline RegionInfo& WithStatus(const RegionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Amazon Web Services Region in the replication set.</p>
     */
    inline RegionInfo& WithStatus(RegionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Information displayed about the status of the Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Information displayed about the status of the Amazon Web Services Region.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>Information displayed about the status of the Amazon Web Services Region.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>Information displayed about the status of the Amazon Web Services Region.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>Information displayed about the status of the Amazon Web Services Region.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>Information displayed about the status of the Amazon Web Services Region.</p>
     */
    inline RegionInfo& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Information displayed about the status of the Amazon Web Services Region.</p>
     */
    inline RegionInfo& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Information displayed about the status of the Amazon Web Services Region.</p>
     */
    inline RegionInfo& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The most recent date and time that Incident Manager updated the Amazon Web
     * Services Region's status.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusUpdateDateTime() const{ return m_statusUpdateDateTime; }

    /**
     * <p>The most recent date and time that Incident Manager updated the Amazon Web
     * Services Region's status.</p>
     */
    inline bool StatusUpdateDateTimeHasBeenSet() const { return m_statusUpdateDateTimeHasBeenSet; }

    /**
     * <p>The most recent date and time that Incident Manager updated the Amazon Web
     * Services Region's status.</p>
     */
    inline void SetStatusUpdateDateTime(const Aws::Utils::DateTime& value) { m_statusUpdateDateTimeHasBeenSet = true; m_statusUpdateDateTime = value; }

    /**
     * <p>The most recent date and time that Incident Manager updated the Amazon Web
     * Services Region's status.</p>
     */
    inline void SetStatusUpdateDateTime(Aws::Utils::DateTime&& value) { m_statusUpdateDateTimeHasBeenSet = true; m_statusUpdateDateTime = std::move(value); }

    /**
     * <p>The most recent date and time that Incident Manager updated the Amazon Web
     * Services Region's status.</p>
     */
    inline RegionInfo& WithStatusUpdateDateTime(const Aws::Utils::DateTime& value) { SetStatusUpdateDateTime(value); return *this;}

    /**
     * <p>The most recent date and time that Incident Manager updated the Amazon Web
     * Services Region's status.</p>
     */
    inline RegionInfo& WithStatusUpdateDateTime(Aws::Utils::DateTime&& value) { SetStatusUpdateDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_sseKmsKeyId;
    bool m_sseKmsKeyIdHasBeenSet = false;

    RegionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_statusUpdateDateTime;
    bool m_statusUpdateDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
