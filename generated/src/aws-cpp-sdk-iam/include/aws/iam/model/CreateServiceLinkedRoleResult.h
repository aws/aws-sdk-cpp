/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/Role.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  class CreateServiceLinkedRoleResult
  {
  public:
    AWS_IAM_API CreateServiceLinkedRoleResult() = default;
    AWS_IAM_API CreateServiceLinkedRoleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API CreateServiceLinkedRoleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_Role.html">Role</a>
     * object that contains details about the newly created role.</p>
     */
    inline const Role& GetRole() const { return m_role; }
    template<typename RoleT = Role>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Role>
    CreateServiceLinkedRoleResult& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateServiceLinkedRoleResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Role m_role;
    bool m_roleHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
