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
  class GetPrivacyBudgetTemplateResult
  {
  public:
    AWS_CLEANROOMS_API GetPrivacyBudgetTemplateResult();
    AWS_CLEANROOMS_API GetPrivacyBudgetTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetPrivacyBudgetTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the details of the privacy budget template that you requested.</p>
     */
    inline const PrivacyBudgetTemplate& GetPrivacyBudgetTemplate() const{ return m_privacyBudgetTemplate; }

    /**
     * <p>Returns the details of the privacy budget template that you requested.</p>
     */
    inline void SetPrivacyBudgetTemplate(const PrivacyBudgetTemplate& value) { m_privacyBudgetTemplate = value; }

    /**
     * <p>Returns the details of the privacy budget template that you requested.</p>
     */
    inline void SetPrivacyBudgetTemplate(PrivacyBudgetTemplate&& value) { m_privacyBudgetTemplate = std::move(value); }

    /**
     * <p>Returns the details of the privacy budget template that you requested.</p>
     */
    inline GetPrivacyBudgetTemplateResult& WithPrivacyBudgetTemplate(const PrivacyBudgetTemplate& value) { SetPrivacyBudgetTemplate(value); return *this;}

    /**
     * <p>Returns the details of the privacy budget template that you requested.</p>
     */
    inline GetPrivacyBudgetTemplateResult& WithPrivacyBudgetTemplate(PrivacyBudgetTemplate&& value) { SetPrivacyBudgetTemplate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPrivacyBudgetTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPrivacyBudgetTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPrivacyBudgetTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PrivacyBudgetTemplate m_privacyBudgetTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
