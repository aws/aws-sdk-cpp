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
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_IAM_API DeleteServiceLinkedRoleResult
  {
  public:
    DeleteServiceLinkedRoleResult();
    DeleteServiceLinkedRoleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeleteServiceLinkedRoleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The deletion task identifier that you can use to check the status of the
     * deletion. This identifier is returned in the format
     * <code>task/aws-service-role/&lt;service-principal-name&gt;/&lt;role-name&gt;/&lt;task-uuid&gt;</code>.</p>
     */
    inline const Aws::String& GetDeletionTaskId() const{ return m_deletionTaskId; }

    /**
     * <p>The deletion task identifier that you can use to check the status of the
     * deletion. This identifier is returned in the format
     * <code>task/aws-service-role/&lt;service-principal-name&gt;/&lt;role-name&gt;/&lt;task-uuid&gt;</code>.</p>
     */
    inline void SetDeletionTaskId(const Aws::String& value) { m_deletionTaskId = value; }

    /**
     * <p>The deletion task identifier that you can use to check the status of the
     * deletion. This identifier is returned in the format
     * <code>task/aws-service-role/&lt;service-principal-name&gt;/&lt;role-name&gt;/&lt;task-uuid&gt;</code>.</p>
     */
    inline void SetDeletionTaskId(Aws::String&& value) { m_deletionTaskId = std::move(value); }

    /**
     * <p>The deletion task identifier that you can use to check the status of the
     * deletion. This identifier is returned in the format
     * <code>task/aws-service-role/&lt;service-principal-name&gt;/&lt;role-name&gt;/&lt;task-uuid&gt;</code>.</p>
     */
    inline void SetDeletionTaskId(const char* value) { m_deletionTaskId.assign(value); }

    /**
     * <p>The deletion task identifier that you can use to check the status of the
     * deletion. This identifier is returned in the format
     * <code>task/aws-service-role/&lt;service-principal-name&gt;/&lt;role-name&gt;/&lt;task-uuid&gt;</code>.</p>
     */
    inline DeleteServiceLinkedRoleResult& WithDeletionTaskId(const Aws::String& value) { SetDeletionTaskId(value); return *this;}

    /**
     * <p>The deletion task identifier that you can use to check the status of the
     * deletion. This identifier is returned in the format
     * <code>task/aws-service-role/&lt;service-principal-name&gt;/&lt;role-name&gt;/&lt;task-uuid&gt;</code>.</p>
     */
    inline DeleteServiceLinkedRoleResult& WithDeletionTaskId(Aws::String&& value) { SetDeletionTaskId(std::move(value)); return *this;}

    /**
     * <p>The deletion task identifier that you can use to check the status of the
     * deletion. This identifier is returned in the format
     * <code>task/aws-service-role/&lt;service-principal-name&gt;/&lt;role-name&gt;/&lt;task-uuid&gt;</code>.</p>
     */
    inline DeleteServiceLinkedRoleResult& WithDeletionTaskId(const char* value) { SetDeletionTaskId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteServiceLinkedRoleResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteServiceLinkedRoleResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_deletionTaskId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
