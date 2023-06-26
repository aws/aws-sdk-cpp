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
  class UpdateAlertResult
  {
  public:
    AWS_LOOKOUTMETRICS_API UpdateAlertResult();
    AWS_LOOKOUTMETRICS_API UpdateAlertResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API UpdateAlertResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the updated alert.</p>
     */
    inline const Aws::String& GetAlertArn() const{ return m_alertArn; }

    /**
     * <p>The ARN of the updated alert.</p>
     */
    inline void SetAlertArn(const Aws::String& value) { m_alertArn = value; }

    /**
     * <p>The ARN of the updated alert.</p>
     */
    inline void SetAlertArn(Aws::String&& value) { m_alertArn = std::move(value); }

    /**
     * <p>The ARN of the updated alert.</p>
     */
    inline void SetAlertArn(const char* value) { m_alertArn.assign(value); }

    /**
     * <p>The ARN of the updated alert.</p>
     */
    inline UpdateAlertResult& WithAlertArn(const Aws::String& value) { SetAlertArn(value); return *this;}

    /**
     * <p>The ARN of the updated alert.</p>
     */
    inline UpdateAlertResult& WithAlertArn(Aws::String&& value) { SetAlertArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the updated alert.</p>
     */
    inline UpdateAlertResult& WithAlertArn(const char* value) { SetAlertArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAlertResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAlertResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAlertResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_alertArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
