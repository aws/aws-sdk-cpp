/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
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
namespace CodeCommit
{
namespace Model
{
  class DeleteApprovalRuleTemplateResult
  {
  public:
    AWS_CODECOMMIT_API DeleteApprovalRuleTemplateResult();
    AWS_CODECOMMIT_API DeleteApprovalRuleTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API DeleteApprovalRuleTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The system-generated ID of the deleted approval rule template. If the
     * template has been previously deleted, the only response is a 200 OK.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateId() const{ return m_approvalRuleTemplateId; }

    /**
     * <p>The system-generated ID of the deleted approval rule template. If the
     * template has been previously deleted, the only response is a 200 OK.</p>
     */
    inline void SetApprovalRuleTemplateId(const Aws::String& value) { m_approvalRuleTemplateId = value; }

    /**
     * <p>The system-generated ID of the deleted approval rule template. If the
     * template has been previously deleted, the only response is a 200 OK.</p>
     */
    inline void SetApprovalRuleTemplateId(Aws::String&& value) { m_approvalRuleTemplateId = std::move(value); }

    /**
     * <p>The system-generated ID of the deleted approval rule template. If the
     * template has been previously deleted, the only response is a 200 OK.</p>
     */
    inline void SetApprovalRuleTemplateId(const char* value) { m_approvalRuleTemplateId.assign(value); }

    /**
     * <p>The system-generated ID of the deleted approval rule template. If the
     * template has been previously deleted, the only response is a 200 OK.</p>
     */
    inline DeleteApprovalRuleTemplateResult& WithApprovalRuleTemplateId(const Aws::String& value) { SetApprovalRuleTemplateId(value); return *this;}

    /**
     * <p>The system-generated ID of the deleted approval rule template. If the
     * template has been previously deleted, the only response is a 200 OK.</p>
     */
    inline DeleteApprovalRuleTemplateResult& WithApprovalRuleTemplateId(Aws::String&& value) { SetApprovalRuleTemplateId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the deleted approval rule template. If the
     * template has been previously deleted, the only response is a 200 OK.</p>
     */
    inline DeleteApprovalRuleTemplateResult& WithApprovalRuleTemplateId(const char* value) { SetApprovalRuleTemplateId(value); return *this;}

  private:

    Aws::String m_approvalRuleTemplateId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
