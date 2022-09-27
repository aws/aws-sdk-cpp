﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/UsageLimit.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class AWS_REDSHIFTSERVERLESS_API CreateUsageLimitResult
  {
  public:
    CreateUsageLimitResult();
    CreateUsageLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateUsageLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The returned usage limit object.</p>
     */
    inline const UsageLimit& GetUsageLimit() const{ return m_usageLimit; }

    /**
     * <p>The returned usage limit object.</p>
     */
    inline void SetUsageLimit(const UsageLimit& value) { m_usageLimit = value; }

    /**
     * <p>The returned usage limit object.</p>
     */
    inline void SetUsageLimit(UsageLimit&& value) { m_usageLimit = std::move(value); }

    /**
     * <p>The returned usage limit object.</p>
     */
    inline CreateUsageLimitResult& WithUsageLimit(const UsageLimit& value) { SetUsageLimit(value); return *this;}

    /**
     * <p>The returned usage limit object.</p>
     */
    inline CreateUsageLimitResult& WithUsageLimit(UsageLimit&& value) { SetUsageLimit(std::move(value)); return *this;}

  private:

    UsageLimit m_usageLimit;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
