/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
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
namespace ConfigService
{
namespace Model
{
  class PutOrganizationConfigRuleResult
  {
  public:
    AWS_CONFIGSERVICE_API PutOrganizationConfigRuleResult();
    AWS_CONFIGSERVICE_API PutOrganizationConfigRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutOrganizationConfigRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of an organization Config rule.</p>
     */
    inline const Aws::String& GetOrganizationConfigRuleArn() const{ return m_organizationConfigRuleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an organization Config rule.</p>
     */
    inline void SetOrganizationConfigRuleArn(const Aws::String& value) { m_organizationConfigRuleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an organization Config rule.</p>
     */
    inline void SetOrganizationConfigRuleArn(Aws::String&& value) { m_organizationConfigRuleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an organization Config rule.</p>
     */
    inline void SetOrganizationConfigRuleArn(const char* value) { m_organizationConfigRuleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an organization Config rule.</p>
     */
    inline PutOrganizationConfigRuleResult& WithOrganizationConfigRuleArn(const Aws::String& value) { SetOrganizationConfigRuleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an organization Config rule.</p>
     */
    inline PutOrganizationConfigRuleResult& WithOrganizationConfigRuleArn(Aws::String&& value) { SetOrganizationConfigRuleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an organization Config rule.</p>
     */
    inline PutOrganizationConfigRuleResult& WithOrganizationConfigRuleArn(const char* value) { SetOrganizationConfigRuleArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutOrganizationConfigRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutOrganizationConfigRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutOrganizationConfigRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_organizationConfigRuleArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
