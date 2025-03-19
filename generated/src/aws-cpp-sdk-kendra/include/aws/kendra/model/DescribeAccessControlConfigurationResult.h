/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/Principal.h>
#include <aws/kendra/model/HierarchicalPrincipal.h>
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
namespace kendra
{
namespace Model
{
  class DescribeAccessControlConfigurationResult
  {
  public:
    AWS_KENDRA_API DescribeAccessControlConfigurationResult() = default;
    AWS_KENDRA_API DescribeAccessControlConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DescribeAccessControlConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name for the access control configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeAccessControlConfigurationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the access control configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeAccessControlConfigurationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message containing details if there are issues processing the
     * access control configuration.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    DescribeAccessControlConfigurationResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline const Aws::Vector<Principal>& GetAccessControlList() const { return m_accessControlList; }
    template<typename AccessControlListT = Aws::Vector<Principal>>
    void SetAccessControlList(AccessControlListT&& value) { m_accessControlListHasBeenSet = true; m_accessControlList = std::forward<AccessControlListT>(value); }
    template<typename AccessControlListT = Aws::Vector<Principal>>
    DescribeAccessControlConfigurationResult& WithAccessControlList(AccessControlListT&& value) { SetAccessControlList(std::forward<AccessControlListT>(value)); return *this;}
    template<typename AccessControlListT = Principal>
    DescribeAccessControlConfigurationResult& AddAccessControlList(AccessControlListT&& value) { m_accessControlListHasBeenSet = true; m_accessControlList.emplace_back(std::forward<AccessControlListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline const Aws::Vector<HierarchicalPrincipal>& GetHierarchicalAccessControlList() const { return m_hierarchicalAccessControlList; }
    template<typename HierarchicalAccessControlListT = Aws::Vector<HierarchicalPrincipal>>
    void SetHierarchicalAccessControlList(HierarchicalAccessControlListT&& value) { m_hierarchicalAccessControlListHasBeenSet = true; m_hierarchicalAccessControlList = std::forward<HierarchicalAccessControlListT>(value); }
    template<typename HierarchicalAccessControlListT = Aws::Vector<HierarchicalPrincipal>>
    DescribeAccessControlConfigurationResult& WithHierarchicalAccessControlList(HierarchicalAccessControlListT&& value) { SetHierarchicalAccessControlList(std::forward<HierarchicalAccessControlListT>(value)); return *this;}
    template<typename HierarchicalAccessControlListT = HierarchicalPrincipal>
    DescribeAccessControlConfigurationResult& AddHierarchicalAccessControlList(HierarchicalAccessControlListT&& value) { m_hierarchicalAccessControlListHasBeenSet = true; m_hierarchicalAccessControlList.emplace_back(std::forward<HierarchicalAccessControlListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccessControlConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Vector<Principal> m_accessControlList;
    bool m_accessControlListHasBeenSet = false;

    Aws::Vector<HierarchicalPrincipal> m_hierarchicalAccessControlList;
    bool m_hierarchicalAccessControlListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
