/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{
  class GetNotificationChannelResult
  {
  public:
    AWS_FMS_API GetNotificationChannelResult();
    AWS_FMS_API GetNotificationChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API GetNotificationChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The SNS topic that records Firewall Manager activity. </p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArn = value; }
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArn = std::move(value); }
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArn.assign(value); }
    inline GetNotificationChannelResult& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}
    inline GetNotificationChannelResult& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}
    inline GetNotificationChannelResult& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that is used by Firewall Manager to record activity to SNS.</p>
     */
    inline const Aws::String& GetSnsRoleName() const{ return m_snsRoleName; }
    inline void SetSnsRoleName(const Aws::String& value) { m_snsRoleName = value; }
    inline void SetSnsRoleName(Aws::String&& value) { m_snsRoleName = std::move(value); }
    inline void SetSnsRoleName(const char* value) { m_snsRoleName.assign(value); }
    inline GetNotificationChannelResult& WithSnsRoleName(const Aws::String& value) { SetSnsRoleName(value); return *this;}
    inline GetNotificationChannelResult& WithSnsRoleName(Aws::String&& value) { SetSnsRoleName(std::move(value)); return *this;}
    inline GetNotificationChannelResult& WithSnsRoleName(const char* value) { SetSnsRoleName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetNotificationChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetNotificationChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetNotificationChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_snsTopicArn;

    Aws::String m_snsRoleName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
