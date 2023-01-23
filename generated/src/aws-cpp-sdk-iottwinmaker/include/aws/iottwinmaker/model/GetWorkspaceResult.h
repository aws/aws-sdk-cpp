/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    /**
     * <p>The ID of the workspace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceId = value; }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline GetWorkspaceResult& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace.</p>
     */
    inline GetWorkspaceResult& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace.</p>
     */
    inline GetWorkspaceResult& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>The ARN of the workspace.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the workspace.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the workspace.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the workspace.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the workspace.</p>
     */
    inline GetWorkspaceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the workspace.</p>
     */
    inline GetWorkspaceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the workspace.</p>
     */
    inline GetWorkspaceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The description of the workspace.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the workspace.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the workspace.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the workspace.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the workspace.</p>
     */
    inline GetWorkspaceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the workspace.</p>
     */
    inline GetWorkspaceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the workspace.</p>
     */
    inline GetWorkspaceResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the S3 bucket where resources associated with the workspace are
     * stored.</p>
     */
    inline const Aws::String& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>The ARN of the S3 bucket where resources associated with the workspace are
     * stored.</p>
     */
    inline void SetS3Location(const Aws::String& value) { m_s3Location = value; }

    /**
     * <p>The ARN of the S3 bucket where resources associated with the workspace are
     * stored.</p>
     */
    inline void SetS3Location(Aws::String&& value) { m_s3Location = std::move(value); }

    /**
     * <p>The ARN of the S3 bucket where resources associated with the workspace are
     * stored.</p>
     */
    inline void SetS3Location(const char* value) { m_s3Location.assign(value); }

    /**
     * <p>The ARN of the S3 bucket where resources associated with the workspace are
     * stored.</p>
     */
    inline GetWorkspaceResult& WithS3Location(const Aws::String& value) { SetS3Location(value); return *this;}

    /**
     * <p>The ARN of the S3 bucket where resources associated with the workspace are
     * stored.</p>
     */
    inline GetWorkspaceResult& WithS3Location(Aws::String&& value) { SetS3Location(std::move(value)); return *this;}

    /**
     * <p>The ARN of the S3 bucket where resources associated with the workspace are
     * stored.</p>
     */
    inline GetWorkspaceResult& WithS3Location(const char* value) { SetS3Location(value); return *this;}


    /**
     * <p>The ARN of the execution role associated with the workspace.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The ARN of the execution role associated with the workspace.</p>
     */
    inline void SetRole(const Aws::String& value) { m_role = value; }

    /**
     * <p>The ARN of the execution role associated with the workspace.</p>
     */
    inline void SetRole(Aws::String&& value) { m_role = std::move(value); }

    /**
     * <p>The ARN of the execution role associated with the workspace.</p>
     */
    inline void SetRole(const char* value) { m_role.assign(value); }

    /**
     * <p>The ARN of the execution role associated with the workspace.</p>
     */
    inline GetWorkspaceResult& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The ARN of the execution role associated with the workspace.</p>
     */
    inline GetWorkspaceResult& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The ARN of the execution role associated with the workspace.</p>
     */
    inline GetWorkspaceResult& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The date and time when the workspace was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time when the workspace was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The date and time when the workspace was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time when the workspace was created.</p>
     */
    inline GetWorkspaceResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time when the workspace was created.</p>
     */
    inline GetWorkspaceResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the workspace was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }

    /**
     * <p>The date and time when the workspace was last updated.</p>
     */
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTime = value; }

    /**
     * <p>The date and time when the workspace was last updated.</p>
     */
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTime = std::move(value); }

    /**
     * <p>The date and time when the workspace was last updated.</p>
     */
    inline GetWorkspaceResult& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>The date and time when the workspace was last updated.</p>
     */
    inline GetWorkspaceResult& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_workspaceId;

    Aws::String m_arn;

    Aws::String m_description;

    Aws::String m_s3Location;

    Aws::String m_role;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_updateDateTime;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
