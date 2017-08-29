/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IAM_API CreateServiceLinkedRoleResult
  {
  public:
    CreateServiceLinkedRoleResult();
    CreateServiceLinkedRoleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateServiceLinkedRoleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A <a>Role</a> object that contains details about the newly created role.</p>
     */
    inline const Role& GetRole() const{ return m_role; }

    /**
     * <p>A <a>Role</a> object that contains details about the newly created role.</p>
     */
    inline void SetRole(const Role& value) { m_role = value; }

    /**
     * <p>A <a>Role</a> object that contains details about the newly created role.</p>
     */
    inline void SetRole(Role&& value) { m_role = std::move(value); }

    /**
     * <p>A <a>Role</a> object that contains details about the newly created role.</p>
     */
    inline CreateServiceLinkedRoleResult& WithRole(const Role& value) { SetRole(value); return *this;}

    /**
     * <p>A <a>Role</a> object that contains details about the newly created role.</p>
     */
    inline CreateServiceLinkedRoleResult& WithRole(Role&& value) { SetRole(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateServiceLinkedRoleResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateServiceLinkedRoleResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Role m_role;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
