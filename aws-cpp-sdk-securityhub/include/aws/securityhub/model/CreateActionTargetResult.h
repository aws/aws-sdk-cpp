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
  class CreateActionTargetResult
  {
  public:
    AWS_SECURITYHUB_API CreateActionTargetResult();
    AWS_SECURITYHUB_API CreateActionTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API CreateActionTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN for the custom action target.</p>
     */
    inline const Aws::String& GetActionTargetArn() const{ return m_actionTargetArn; }

    /**
     * <p>The ARN for the custom action target.</p>
     */
    inline void SetActionTargetArn(const Aws::String& value) { m_actionTargetArn = value; }

    /**
     * <p>The ARN for the custom action target.</p>
     */
    inline void SetActionTargetArn(Aws::String&& value) { m_actionTargetArn = std::move(value); }

    /**
     * <p>The ARN for the custom action target.</p>
     */
    inline void SetActionTargetArn(const char* value) { m_actionTargetArn.assign(value); }

    /**
     * <p>The ARN for the custom action target.</p>
     */
    inline CreateActionTargetResult& WithActionTargetArn(const Aws::String& value) { SetActionTargetArn(value); return *this;}

    /**
     * <p>The ARN for the custom action target.</p>
     */
    inline CreateActionTargetResult& WithActionTargetArn(Aws::String&& value) { SetActionTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the custom action target.</p>
     */
    inline CreateActionTargetResult& WithActionTargetArn(const char* value) { SetActionTargetArn(value); return *this;}

  private:

    Aws::String m_actionTargetArn;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
