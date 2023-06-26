/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class UpdateBillingGroupResult
  {
  public:
    AWS_IOT_API UpdateBillingGroupResult();
    AWS_IOT_API UpdateBillingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API UpdateBillingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The latest version of the billing group.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The latest version of the billing group.</p>
     */
    inline void SetVersion(long long value) { m_version = value; }

    /**
     * <p>The latest version of the billing group.</p>
     */
    inline UpdateBillingGroupResult& WithVersion(long long value) { SetVersion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateBillingGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateBillingGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateBillingGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    long long m_version;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
