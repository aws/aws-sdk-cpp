/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/PrivacyBudgetTemplate.h>
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
  class UpdatePrivacyBudgetTemplateResult
  {
  public:
    AWS_CLEANROOMS_API UpdatePrivacyBudgetTemplateResult();
    AWS_CLEANROOMS_API UpdatePrivacyBudgetTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API UpdatePrivacyBudgetTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary of the privacy budget template.</p>
     */
    inline const PrivacyBudgetTemplate& GetPrivacyBudgetTemplate() const{ return m_privacyBudgetTemplate; }

    /**
     * <p>Summary of the privacy budget template.</p>
     */
    inline void SetPrivacyBudgetTemplate(const PrivacyBudgetTemplate& value) { m_privacyBudgetTemplate = value; }

    /**
     * <p>Summary of the privacy budget template.</p>
     */
    inline void SetPrivacyBudgetTemplate(PrivacyBudgetTemplate&& value) { m_privacyBudgetTemplate = std::move(value); }

    /**
     * <p>Summary of the privacy budget template.</p>
     */
    inline UpdatePrivacyBudgetTemplateResult& WithPrivacyBudgetTemplate(const PrivacyBudgetTemplate& value) { SetPrivacyBudgetTemplate(value); return *this;}

    /**
     * <p>Summary of the privacy budget template.</p>
     */
    inline UpdatePrivacyBudgetTemplateResult& WithPrivacyBudgetTemplate(PrivacyBudgetTemplate&& value) { SetPrivacyBudgetTemplate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdatePrivacyBudgetTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdatePrivacyBudgetTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdatePrivacyBudgetTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PrivacyBudgetTemplate m_privacyBudgetTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
