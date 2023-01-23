/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
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
namespace LookoutMetrics
{
namespace Model
{
  class CreateAlertResult
  {
  public:
    AWS_LOOKOUTMETRICS_API CreateAlertResult();
    AWS_LOOKOUTMETRICS_API CreateAlertResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API CreateAlertResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the alert.</p>
     */
    inline const Aws::String& GetAlertArn() const{ return m_alertArn; }

    /**
     * <p>The ARN of the alert.</p>
     */
    inline void SetAlertArn(const Aws::String& value) { m_alertArn = value; }

    /**
     * <p>The ARN of the alert.</p>
     */
    inline void SetAlertArn(Aws::String&& value) { m_alertArn = std::move(value); }

    /**
     * <p>The ARN of the alert.</p>
     */
    inline void SetAlertArn(const char* value) { m_alertArn.assign(value); }

    /**
     * <p>The ARN of the alert.</p>
     */
    inline CreateAlertResult& WithAlertArn(const Aws::String& value) { SetAlertArn(value); return *this;}

    /**
     * <p>The ARN of the alert.</p>
     */
    inline CreateAlertResult& WithAlertArn(Aws::String&& value) { SetAlertArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the alert.</p>
     */
    inline CreateAlertResult& WithAlertArn(const char* value) { SetAlertArn(value); return *this;}

  private:

    Aws::String m_alertArn;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
