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
    AWS_KENDRA_API DescribeAccessControlConfigurationResult();
    AWS_KENDRA_API DescribeAccessControlConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DescribeAccessControlConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name for the access control configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the access control configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name for the access control configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name for the access control configuration.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name for the access control configuration.</p>
     */
    inline DescribeAccessControlConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the access control configuration.</p>
     */
    inline DescribeAccessControlConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the access control configuration.</p>
     */
    inline DescribeAccessControlConfigurationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description for the access control configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the access control configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description for the access control configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description for the access control configuration.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description for the access control configuration.</p>
     */
    inline DescribeAccessControlConfigurationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the access control configuration.</p>
     */
    inline DescribeAccessControlConfigurationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the access control configuration.</p>
     */
    inline DescribeAccessControlConfigurationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The error message containing details if there are issues processing the
     * access control configuration.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message containing details if there are issues processing the
     * access control configuration.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>The error message containing details if there are issues processing the
     * access control configuration.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>The error message containing details if there are issues processing the
     * access control configuration.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>The error message containing details if there are issues processing the
     * access control configuration.</p>
     */
    inline DescribeAccessControlConfigurationResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message containing details if there are issues processing the
     * access control configuration.</p>
     */
    inline DescribeAccessControlConfigurationResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message containing details if there are issues processing the
     * access control configuration.</p>
     */
    inline DescribeAccessControlConfigurationResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline const Aws::Vector<Principal>& GetAccessControlList() const{ return m_accessControlList; }

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline void SetAccessControlList(const Aws::Vector<Principal>& value) { m_accessControlList = value; }

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline void SetAccessControlList(Aws::Vector<Principal>&& value) { m_accessControlList = std::move(value); }

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline DescribeAccessControlConfigurationResult& WithAccessControlList(const Aws::Vector<Principal>& value) { SetAccessControlList(value); return *this;}

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline DescribeAccessControlConfigurationResult& WithAccessControlList(Aws::Vector<Principal>&& value) { SetAccessControlList(std::move(value)); return *this;}

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline DescribeAccessControlConfigurationResult& AddAccessControlList(const Principal& value) { m_accessControlList.push_back(value); return *this; }

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline DescribeAccessControlConfigurationResult& AddAccessControlList(Principal&& value) { m_accessControlList.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline const Aws::Vector<HierarchicalPrincipal>& GetHierarchicalAccessControlList() const{ return m_hierarchicalAccessControlList; }

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline void SetHierarchicalAccessControlList(const Aws::Vector<HierarchicalPrincipal>& value) { m_hierarchicalAccessControlList = value; }

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline void SetHierarchicalAccessControlList(Aws::Vector<HierarchicalPrincipal>&& value) { m_hierarchicalAccessControlList = std::move(value); }

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline DescribeAccessControlConfigurationResult& WithHierarchicalAccessControlList(const Aws::Vector<HierarchicalPrincipal>& value) { SetHierarchicalAccessControlList(value); return *this;}

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline DescribeAccessControlConfigurationResult& WithHierarchicalAccessControlList(Aws::Vector<HierarchicalPrincipal>&& value) { SetHierarchicalAccessControlList(std::move(value)); return *this;}

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline DescribeAccessControlConfigurationResult& AddHierarchicalAccessControlList(const HierarchicalPrincipal& value) { m_hierarchicalAccessControlList.push_back(value); return *this; }

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline DescribeAccessControlConfigurationResult& AddHierarchicalAccessControlList(HierarchicalPrincipal&& value) { m_hierarchicalAccessControlList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_errorMessage;

    Aws::Vector<Principal> m_accessControlList;

    Aws::Vector<HierarchicalPrincipal> m_hierarchicalAccessControlList;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
