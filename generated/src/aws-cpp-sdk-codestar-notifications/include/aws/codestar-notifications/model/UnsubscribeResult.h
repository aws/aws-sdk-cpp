/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
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
namespace CodeStarNotifications
{
namespace Model
{
  class UnsubscribeResult
  {
  public:
    AWS_CODESTARNOTIFICATIONS_API UnsubscribeResult();
    AWS_CODESTARNOTIFICATIONS_API UnsubscribeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARNOTIFICATIONS_API UnsubscribeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the the notification rule from which you
     * have removed a subscription.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the the notification rule from which you
     * have removed a subscription.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the the notification rule from which you
     * have removed a subscription.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the the notification rule from which you
     * have removed a subscription.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the the notification rule from which you
     * have removed a subscription.</p>
     */
    inline UnsubscribeResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the the notification rule from which you
     * have removed a subscription.</p>
     */
    inline UnsubscribeResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the the notification rule from which you
     * have removed a subscription.</p>
     */
    inline UnsubscribeResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
