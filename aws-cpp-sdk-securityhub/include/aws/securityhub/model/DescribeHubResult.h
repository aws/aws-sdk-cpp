/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{
  class AWS_SECURITYHUB_API DescribeHubResult
  {
  public:
    DescribeHubResult();
    DescribeHubResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeHubResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the Hub resource retrieved.</p>
     */
    inline const Aws::String& GetHubArn() const{ return m_hubArn; }

    /**
     * <p>The ARN of the Hub resource retrieved.</p>
     */
    inline void SetHubArn(const Aws::String& value) { m_hubArn = value; }

    /**
     * <p>The ARN of the Hub resource retrieved.</p>
     */
    inline void SetHubArn(Aws::String&& value) { m_hubArn = std::move(value); }

    /**
     * <p>The ARN of the Hub resource retrieved.</p>
     */
    inline void SetHubArn(const char* value) { m_hubArn.assign(value); }

    /**
     * <p>The ARN of the Hub resource retrieved.</p>
     */
    inline DescribeHubResult& WithHubArn(const Aws::String& value) { SetHubArn(value); return *this;}

    /**
     * <p>The ARN of the Hub resource retrieved.</p>
     */
    inline DescribeHubResult& WithHubArn(Aws::String&& value) { SetHubArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Hub resource retrieved.</p>
     */
    inline DescribeHubResult& WithHubArn(const char* value) { SetHubArn(value); return *this;}


    /**
     * <p>The date and time when Security Hub was enabled in the account.</p>
     */
    inline const Aws::String& GetSubscribedAt() const{ return m_subscribedAt; }

    /**
     * <p>The date and time when Security Hub was enabled in the account.</p>
     */
    inline void SetSubscribedAt(const Aws::String& value) { m_subscribedAt = value; }

    /**
     * <p>The date and time when Security Hub was enabled in the account.</p>
     */
    inline void SetSubscribedAt(Aws::String&& value) { m_subscribedAt = std::move(value); }

    /**
     * <p>The date and time when Security Hub was enabled in the account.</p>
     */
    inline void SetSubscribedAt(const char* value) { m_subscribedAt.assign(value); }

    /**
     * <p>The date and time when Security Hub was enabled in the account.</p>
     */
    inline DescribeHubResult& WithSubscribedAt(const Aws::String& value) { SetSubscribedAt(value); return *this;}

    /**
     * <p>The date and time when Security Hub was enabled in the account.</p>
     */
    inline DescribeHubResult& WithSubscribedAt(Aws::String&& value) { SetSubscribedAt(std::move(value)); return *this;}

    /**
     * <p>The date and time when Security Hub was enabled in the account.</p>
     */
    inline DescribeHubResult& WithSubscribedAt(const char* value) { SetSubscribedAt(value); return *this;}

  private:

    Aws::String m_hubArn;

    Aws::String m_subscribedAt;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
