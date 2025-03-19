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
    AWS_CLEANROOMS_API GetPrivacyBudgetTemplateResult() = default;
    AWS_CLEANROOMS_API GetPrivacyBudgetTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetPrivacyBudgetTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the details of the privacy budget template that you requested.</p>
     */
    inline const PrivacyBudgetTemplate& GetPrivacyBudgetTemplate() const { return m_privacyBudgetTemplate; }
    template<typename PrivacyBudgetTemplateT = PrivacyBudgetTemplate>
    void SetPrivacyBudgetTemplate(PrivacyBudgetTemplateT&& value) { m_privacyBudgetTemplateHasBeenSet = true; m_privacyBudgetTemplate = std::forward<PrivacyBudgetTemplateT>(value); }
    template<typename PrivacyBudgetTemplateT = PrivacyBudgetTemplate>
    GetPrivacyBudgetTemplateResult& WithPrivacyBudgetTemplate(PrivacyBudgetTemplateT&& value) { SetPrivacyBudgetTemplate(std::forward<PrivacyBudgetTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPrivacyBudgetTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PrivacyBudgetTemplate m_privacyBudgetTemplate;
    bool m_privacyBudgetTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
