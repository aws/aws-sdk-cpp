/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RestJsonProtocol
{
namespace Model
{

  /**
   */
  class JsonTimestampsRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API JsonTimestampsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "JsonTimestamps"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::Utils::DateTime& GetNormal() const{ return m_normal; }
    inline bool NormalHasBeenSet() const { return m_normalHasBeenSet; }
    inline void SetNormal(const Aws::Utils::DateTime& value) { m_normalHasBeenSet = true; m_normal = value; }
    inline void SetNormal(Aws::Utils::DateTime&& value) { m_normalHasBeenSet = true; m_normal = std::move(value); }
    inline JsonTimestampsRequest& WithNormal(const Aws::Utils::DateTime& value) { SetNormal(value); return *this;}
    inline JsonTimestampsRequest& WithNormal(Aws::Utils::DateTime&& value) { SetNormal(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetDateTime() const{ return m_dateTime; }
    inline bool DateTimeHasBeenSet() const { return m_dateTimeHasBeenSet; }
    inline void SetDateTime(const Aws::Utils::DateTime& value) { m_dateTimeHasBeenSet = true; m_dateTime = value; }
    inline void SetDateTime(Aws::Utils::DateTime&& value) { m_dateTimeHasBeenSet = true; m_dateTime = std::move(value); }
    inline JsonTimestampsRequest& WithDateTime(const Aws::Utils::DateTime& value) { SetDateTime(value); return *this;}
    inline JsonTimestampsRequest& WithDateTime(Aws::Utils::DateTime&& value) { SetDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetDateTimeOnTarget() const{ return m_dateTimeOnTarget; }
    inline bool DateTimeOnTargetHasBeenSet() const { return m_dateTimeOnTargetHasBeenSet; }
    inline void SetDateTimeOnTarget(const Aws::Utils::DateTime& value) { m_dateTimeOnTargetHasBeenSet = true; m_dateTimeOnTarget = value; }
    inline void SetDateTimeOnTarget(Aws::Utils::DateTime&& value) { m_dateTimeOnTargetHasBeenSet = true; m_dateTimeOnTarget = std::move(value); }
    inline JsonTimestampsRequest& WithDateTimeOnTarget(const Aws::Utils::DateTime& value) { SetDateTimeOnTarget(value); return *this;}
    inline JsonTimestampsRequest& WithDateTimeOnTarget(Aws::Utils::DateTime&& value) { SetDateTimeOnTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetEpochSeconds() const{ return m_epochSeconds; }
    inline bool EpochSecondsHasBeenSet() const { return m_epochSecondsHasBeenSet; }
    inline void SetEpochSeconds(const Aws::Utils::DateTime& value) { m_epochSecondsHasBeenSet = true; m_epochSeconds = value; }
    inline void SetEpochSeconds(Aws::Utils::DateTime&& value) { m_epochSecondsHasBeenSet = true; m_epochSeconds = std::move(value); }
    inline JsonTimestampsRequest& WithEpochSeconds(const Aws::Utils::DateTime& value) { SetEpochSeconds(value); return *this;}
    inline JsonTimestampsRequest& WithEpochSeconds(Aws::Utils::DateTime&& value) { SetEpochSeconds(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetEpochSecondsOnTarget() const{ return m_epochSecondsOnTarget; }
    inline bool EpochSecondsOnTargetHasBeenSet() const { return m_epochSecondsOnTargetHasBeenSet; }
    inline void SetEpochSecondsOnTarget(const Aws::Utils::DateTime& value) { m_epochSecondsOnTargetHasBeenSet = true; m_epochSecondsOnTarget = value; }
    inline void SetEpochSecondsOnTarget(Aws::Utils::DateTime&& value) { m_epochSecondsOnTargetHasBeenSet = true; m_epochSecondsOnTarget = std::move(value); }
    inline JsonTimestampsRequest& WithEpochSecondsOnTarget(const Aws::Utils::DateTime& value) { SetEpochSecondsOnTarget(value); return *this;}
    inline JsonTimestampsRequest& WithEpochSecondsOnTarget(Aws::Utils::DateTime&& value) { SetEpochSecondsOnTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetHttpDate() const{ return m_httpDate; }
    inline bool HttpDateHasBeenSet() const { return m_httpDateHasBeenSet; }
    inline void SetHttpDate(const Aws::Utils::DateTime& value) { m_httpDateHasBeenSet = true; m_httpDate = value; }
    inline void SetHttpDate(Aws::Utils::DateTime&& value) { m_httpDateHasBeenSet = true; m_httpDate = std::move(value); }
    inline JsonTimestampsRequest& WithHttpDate(const Aws::Utils::DateTime& value) { SetHttpDate(value); return *this;}
    inline JsonTimestampsRequest& WithHttpDate(Aws::Utils::DateTime&& value) { SetHttpDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetHttpDateOnTarget() const{ return m_httpDateOnTarget; }
    inline bool HttpDateOnTargetHasBeenSet() const { return m_httpDateOnTargetHasBeenSet; }
    inline void SetHttpDateOnTarget(const Aws::Utils::DateTime& value) { m_httpDateOnTargetHasBeenSet = true; m_httpDateOnTarget = value; }
    inline void SetHttpDateOnTarget(Aws::Utils::DateTime&& value) { m_httpDateOnTargetHasBeenSet = true; m_httpDateOnTarget = std::move(value); }
    inline JsonTimestampsRequest& WithHttpDateOnTarget(const Aws::Utils::DateTime& value) { SetHttpDateOnTarget(value); return *this;}
    inline JsonTimestampsRequest& WithHttpDateOnTarget(Aws::Utils::DateTime&& value) { SetHttpDateOnTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline JsonTimestampsRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline JsonTimestampsRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline JsonTimestampsRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_normal;
    bool m_normalHasBeenSet = false;

    Aws::Utils::DateTime m_dateTime;
    bool m_dateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_dateTimeOnTarget;
    bool m_dateTimeOnTargetHasBeenSet = false;

    Aws::Utils::DateTime m_epochSeconds;
    bool m_epochSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_epochSecondsOnTarget;
    bool m_epochSecondsOnTargetHasBeenSet = false;

    Aws::Utils::DateTime m_httpDate;
    bool m_httpDateHasBeenSet = false;

    Aws::Utils::DateTime m_httpDateOnTarget;
    bool m_httpDateOnTargetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
