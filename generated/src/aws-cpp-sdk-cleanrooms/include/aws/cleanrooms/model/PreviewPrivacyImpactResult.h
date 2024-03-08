/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/PrivacyImpact.h>
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
namespace CleanRooms
{
namespace Model
{
  class PreviewPrivacyImpactResult
  {
  public:
    AWS_CLEANROOMS_API PreviewPrivacyImpactResult();
    AWS_CLEANROOMS_API PreviewPrivacyImpactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API PreviewPrivacyImpactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An estimate of the number of aggregation functions that the member who can
     * query can run given the epsilon and noise parameters. This does not change the
     * privacy budget.</p>
     */
    inline const PrivacyImpact& GetPrivacyImpact() const{ return m_privacyImpact; }

    /**
     * <p>An estimate of the number of aggregation functions that the member who can
     * query can run given the epsilon and noise parameters. This does not change the
     * privacy budget.</p>
     */
    inline void SetPrivacyImpact(const PrivacyImpact& value) { m_privacyImpact = value; }

    /**
     * <p>An estimate of the number of aggregation functions that the member who can
     * query can run given the epsilon and noise parameters. This does not change the
     * privacy budget.</p>
     */
    inline void SetPrivacyImpact(PrivacyImpact&& value) { m_privacyImpact = std::move(value); }

    /**
     * <p>An estimate of the number of aggregation functions that the member who can
     * query can run given the epsilon and noise parameters. This does not change the
     * privacy budget.</p>
     */
    inline PreviewPrivacyImpactResult& WithPrivacyImpact(const PrivacyImpact& value) { SetPrivacyImpact(value); return *this;}

    /**
     * <p>An estimate of the number of aggregation functions that the member who can
     * query can run given the epsilon and noise parameters. This does not change the
     * privacy budget.</p>
     */
    inline PreviewPrivacyImpactResult& WithPrivacyImpact(PrivacyImpact&& value) { SetPrivacyImpact(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PreviewPrivacyImpactResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PreviewPrivacyImpactResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PreviewPrivacyImpactResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PrivacyImpact m_privacyImpact;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
