/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/Framework.h>
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
namespace AuditManager
{
namespace Model
{
  class GetAssessmentFrameworkResult
  {
  public:
    AWS_AUDITMANAGER_API GetAssessmentFrameworkResult();
    AWS_AUDITMANAGER_API GetAssessmentFrameworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetAssessmentFrameworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The framework that the <code>GetAssessmentFramework</code> API returned.
     * </p>
     */
    inline const Framework& GetFramework() const{ return m_framework; }

    /**
     * <p> The framework that the <code>GetAssessmentFramework</code> API returned.
     * </p>
     */
    inline void SetFramework(const Framework& value) { m_framework = value; }

    /**
     * <p> The framework that the <code>GetAssessmentFramework</code> API returned.
     * </p>
     */
    inline void SetFramework(Framework&& value) { m_framework = std::move(value); }

    /**
     * <p> The framework that the <code>GetAssessmentFramework</code> API returned.
     * </p>
     */
    inline GetAssessmentFrameworkResult& WithFramework(const Framework& value) { SetFramework(value); return *this;}

    /**
     * <p> The framework that the <code>GetAssessmentFramework</code> API returned.
     * </p>
     */
    inline GetAssessmentFrameworkResult& WithFramework(Framework&& value) { SetFramework(std::move(value)); return *this;}

  private:

    Framework m_framework;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
