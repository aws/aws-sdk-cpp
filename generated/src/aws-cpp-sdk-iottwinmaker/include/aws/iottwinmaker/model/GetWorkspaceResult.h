/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class GetWorkspaceResult
  {
  public:
    AWS_IOTTWINMAKER_API GetWorkspaceResult();
    AWS_IOTTWINMAKER_API GetWorkspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API GetWorkspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the workspace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceId.assign(value); }
    inline GetWorkspaceResult& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline GetWorkspaceResult& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline GetWorkspaceResult& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the workspace.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetWorkspaceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetWorkspaceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetWorkspaceResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the workspace.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetWorkspaceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetWorkspaceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetWorkspaceResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of services that are linked to the workspace.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkedServices() const{ return m_linkedServices; }
    inline void SetLinkedServices(const Aws::Vector<Aws::String>& value) { m_linkedServices = value; }
    inline void SetLinkedServices(Aws::Vector<Aws::String>&& value) { m_linkedServices = std::move(value); }
    inline GetWorkspaceResult& WithLinkedServices(const Aws::Vector<Aws::String>& value) { SetLinkedServices(value); return *this;}
    inline GetWorkspaceResult& WithLinkedServices(Aws::Vector<Aws::String>&& value) { SetLinkedServices(std::move(value)); return *this;}
    inline GetWorkspaceResult& AddLinkedServices(const Aws::String& value) { m_linkedServices.push_back(value); return *this; }
    inline GetWorkspaceResult& AddLinkedServices(Aws::String&& value) { m_linkedServices.push_back(std::move(value)); return *this; }
    inline GetWorkspaceResult& AddLinkedServices(const char* value) { m_linkedServices.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the S3 bucket where resources associated with the workspace are
     * stored.</p>
     */
    inline const Aws::String& GetS3Location() const{ return m_s3Location; }
    inline void SetS3Location(const Aws::String& value) { m_s3Location = value; }
    inline void SetS3Location(Aws::String&& value) { m_s3Location = std::move(value); }
    inline void SetS3Location(const char* value) { m_s3Location.assign(value); }
    inline GetWorkspaceResult& WithS3Location(const Aws::String& value) { SetS3Location(value); return *this;}
    inline GetWorkspaceResult& WithS3Location(Aws::String&& value) { SetS3Location(std::move(value)); return *this;}
    inline GetWorkspaceResult& WithS3Location(const char* value) { SetS3Location(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the execution role associated with the workspace.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline void SetRole(const Aws::String& value) { m_role = value; }
    inline void SetRole(Aws::String&& value) { m_role = std::move(value); }
    inline void SetRole(const char* value) { m_role.assign(value); }
    inline GetWorkspaceResult& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline GetWorkspaceResult& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline GetWorkspaceResult& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the workspace was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline GetWorkspaceResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline GetWorkspaceResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the workspace was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTime = value; }
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTime = std::move(value); }
    inline GetWorkspaceResult& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}
    inline GetWorkspaceResult& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetWorkspaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetWorkspaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetWorkspaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;

    Aws::String m_arn;

    Aws::String m_description;

    Aws::Vector<Aws::String> m_linkedServices;

    Aws::String m_s3Location;

    Aws::String m_role;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_updateDateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
