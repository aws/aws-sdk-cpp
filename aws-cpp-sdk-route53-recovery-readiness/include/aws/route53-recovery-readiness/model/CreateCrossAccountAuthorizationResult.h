/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class AWS_ROUTE53RECOVERYREADINESS_API CreateCrossAccountAuthorizationResult
  {
  public:
    CreateCrossAccountAuthorizationResult();
    CreateCrossAccountAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateCrossAccountAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The cross account authorization
     */
    inline const Aws::String& GetCrossAccountAuthorization() const{ return m_crossAccountAuthorization; }

    /**
     * The cross account authorization
     */
    inline void SetCrossAccountAuthorization(const Aws::String& value) { m_crossAccountAuthorization = value; }

    /**
     * The cross account authorization
     */
    inline void SetCrossAccountAuthorization(Aws::String&& value) { m_crossAccountAuthorization = std::move(value); }

    /**
     * The cross account authorization
     */
    inline void SetCrossAccountAuthorization(const char* value) { m_crossAccountAuthorization.assign(value); }

    /**
     * The cross account authorization
     */
    inline CreateCrossAccountAuthorizationResult& WithCrossAccountAuthorization(const Aws::String& value) { SetCrossAccountAuthorization(value); return *this;}

    /**
     * The cross account authorization
     */
    inline CreateCrossAccountAuthorizationResult& WithCrossAccountAuthorization(Aws::String&& value) { SetCrossAccountAuthorization(std::move(value)); return *this;}

    /**
     * The cross account authorization
     */
    inline CreateCrossAccountAuthorizationResult& WithCrossAccountAuthorization(const char* value) { SetCrossAccountAuthorization(value); return *this;}

  private:

    Aws::String m_crossAccountAuthorization;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
