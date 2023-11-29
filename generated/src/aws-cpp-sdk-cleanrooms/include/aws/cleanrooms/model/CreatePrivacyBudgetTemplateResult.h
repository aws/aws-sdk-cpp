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
  class CreatePrivacyBudgetTemplateResult
  {
  public:
    AWS_CLEANROOMS_API CreatePrivacyBudgetTemplateResult();
    AWS_CLEANROOMS_API CreatePrivacyBudgetTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API CreatePrivacyBudgetTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A summary of the elements in the privacy budget template.</p>
     */
    inline const PrivacyBudgetTemplate& GetPrivacyBudgetTemplate() const{ return m_privacyBudgetTemplate; }

    /**
     * <p>A summary of the elements in the privacy budget template.</p>
     */
    inline void SetPrivacyBudgetTemplate(const PrivacyBudgetTemplate& value) { m_privacyBudgetTemplate = value; }

    /**
     * <p>A summary of the elements in the privacy budget template.</p>
     */
    inline void SetPrivacyBudgetTemplate(PrivacyBudgetTemplate&& value) { m_privacyBudgetTemplate = std::move(value); }

    /**
     * <p>A summary of the elements in the privacy budget template.</p>
     */
    inline CreatePrivacyBudgetTemplateResult& WithPrivacyBudgetTemplate(const PrivacyBudgetTemplate& value) { SetPrivacyBudgetTemplate(value); return *this;}

    /**
     * <p>A summary of the elements in the privacy budget template.</p>
     */
    inline CreatePrivacyBudgetTemplateResult& WithPrivacyBudgetTemplate(PrivacyBudgetTemplate&& value) { SetPrivacyBudgetTemplate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreatePrivacyBudgetTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreatePrivacyBudgetTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreatePrivacyBudgetTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PrivacyBudgetTemplate m_privacyBudgetTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
