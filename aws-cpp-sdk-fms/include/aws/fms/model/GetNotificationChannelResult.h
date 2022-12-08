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


    /**
     * <p>The SNS topic that records Firewall Manager activity. </p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The SNS topic that records Firewall Manager activity. </p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArn = value; }

    /**
     * <p>The SNS topic that records Firewall Manager activity. </p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArn = std::move(value); }

    /**
     * <p>The SNS topic that records Firewall Manager activity. </p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArn.assign(value); }

    /**
     * <p>The SNS topic that records Firewall Manager activity. </p>
     */
    inline GetNotificationChannelResult& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The SNS topic that records Firewall Manager activity. </p>
     */
    inline GetNotificationChannelResult& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The SNS topic that records Firewall Manager activity. </p>
     */
    inline GetNotificationChannelResult& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p>The IAM role that is used by Firewall Manager to record activity to SNS.</p>
     */
    inline const Aws::String& GetSnsRoleName() const{ return m_snsRoleName; }

    /**
     * <p>The IAM role that is used by Firewall Manager to record activity to SNS.</p>
     */
    inline void SetSnsRoleName(const Aws::String& value) { m_snsRoleName = value; }

    /**
     * <p>The IAM role that is used by Firewall Manager to record activity to SNS.</p>
     */
    inline void SetSnsRoleName(Aws::String&& value) { m_snsRoleName = std::move(value); }

    /**
     * <p>The IAM role that is used by Firewall Manager to record activity to SNS.</p>
     */
    inline void SetSnsRoleName(const char* value) { m_snsRoleName.assign(value); }

    /**
     * <p>The IAM role that is used by Firewall Manager to record activity to SNS.</p>
     */
    inline GetNotificationChannelResult& WithSnsRoleName(const Aws::String& value) { SetSnsRoleName(value); return *this;}

    /**
     * <p>The IAM role that is used by Firewall Manager to record activity to SNS.</p>
     */
    inline GetNotificationChannelResult& WithSnsRoleName(Aws::String&& value) { SetSnsRoleName(std::move(value)); return *this;}

    /**
     * <p>The IAM role that is used by Firewall Manager to record activity to SNS.</p>
     */
    inline GetNotificationChannelResult& WithSnsRoleName(const char* value) { SetSnsRoleName(value); return *this;}

  private:

    Aws::String m_snsTopicArn;

    Aws::String m_snsRoleName;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
