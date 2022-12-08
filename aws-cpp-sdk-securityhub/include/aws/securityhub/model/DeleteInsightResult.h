/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DeleteInsightResult
  {
  public:
    AWS_SECURITYHUB_API DeleteInsightResult();
    AWS_SECURITYHUB_API DeleteInsightResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API DeleteInsightResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the insight that was deleted.</p>
     */
    inline const Aws::String& GetInsightArn() const{ return m_insightArn; }

    /**
     * <p>The ARN of the insight that was deleted.</p>
     */
    inline void SetInsightArn(const Aws::String& value) { m_insightArn = value; }

    /**
     * <p>The ARN of the insight that was deleted.</p>
     */
    inline void SetInsightArn(Aws::String&& value) { m_insightArn = std::move(value); }

    /**
     * <p>The ARN of the insight that was deleted.</p>
     */
    inline void SetInsightArn(const char* value) { m_insightArn.assign(value); }

    /**
     * <p>The ARN of the insight that was deleted.</p>
     */
    inline DeleteInsightResult& WithInsightArn(const Aws::String& value) { SetInsightArn(value); return *this;}

    /**
     * <p>The ARN of the insight that was deleted.</p>
     */
    inline DeleteInsightResult& WithInsightArn(Aws::String&& value) { SetInsightArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the insight that was deleted.</p>
     */
    inline DeleteInsightResult& WithInsightArn(const char* value) { SetInsightArn(value); return *this;}

  private:

    Aws::String m_insightArn;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
