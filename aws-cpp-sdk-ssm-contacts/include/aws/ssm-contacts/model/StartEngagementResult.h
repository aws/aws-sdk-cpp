/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
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
namespace SSMContacts
{
namespace Model
{
  class StartEngagementResult
  {
  public:
    AWS_SSMCONTACTS_API StartEngagementResult();
    AWS_SSMCONTACTS_API StartEngagementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API StartEngagementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the engagement.</p>
     */
    inline const Aws::String& GetEngagementArn() const{ return m_engagementArn; }

    /**
     * <p>The ARN of the engagement.</p>
     */
    inline void SetEngagementArn(const Aws::String& value) { m_engagementArn = value; }

    /**
     * <p>The ARN of the engagement.</p>
     */
    inline void SetEngagementArn(Aws::String&& value) { m_engagementArn = std::move(value); }

    /**
     * <p>The ARN of the engagement.</p>
     */
    inline void SetEngagementArn(const char* value) { m_engagementArn.assign(value); }

    /**
     * <p>The ARN of the engagement.</p>
     */
    inline StartEngagementResult& WithEngagementArn(const Aws::String& value) { SetEngagementArn(value); return *this;}

    /**
     * <p>The ARN of the engagement.</p>
     */
    inline StartEngagementResult& WithEngagementArn(Aws::String&& value) { SetEngagementArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the engagement.</p>
     */
    inline StartEngagementResult& WithEngagementArn(const char* value) { SetEngagementArn(value); return *this;}

  private:

    Aws::String m_engagementArn;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
