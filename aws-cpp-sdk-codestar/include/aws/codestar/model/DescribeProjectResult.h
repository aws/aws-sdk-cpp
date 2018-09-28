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
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codestar/model/ProjectStatus.h>
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
namespace CodeStar
{
namespace Model
{
  class AWS_CODESTAR_API DescribeProjectResult
  {
  public:
    DescribeProjectResult();
    DescribeProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The display name for the project.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The display name for the project.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The display name for the project.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The display name for the project.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The display name for the project.</p>
     */
    inline DescribeProjectResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The display name for the project.</p>
     */
    inline DescribeProjectResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The display name for the project.</p>
     */
    inline DescribeProjectResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the project.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the project.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the project.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the project.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the project.</p>
     */
    inline DescribeProjectResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the project.</p>
     */
    inline DescribeProjectResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project.</p>
     */
    inline DescribeProjectResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the project.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the project.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the project.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the project.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the project.</p>
     */
    inline DescribeProjectResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the project.</p>
     */
    inline DescribeProjectResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the project.</p>
     */
    inline DescribeProjectResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The description of the project, if any.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the project, if any.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the project, if any.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the project, if any.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the project, if any.</p>
     */
    inline DescribeProjectResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the project, if any.</p>
     */
    inline DescribeProjectResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the project, if any.</p>
     */
    inline DescribeProjectResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestToken = value; }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestToken = std::move(value); }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestToken.assign(value); }

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. </p>
     */
    inline DescribeProjectResult& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. </p>
     */
    inline DescribeProjectResult& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A user- or system-generated token that identifies the entity that requested
     * project creation. </p>
     */
    inline DescribeProjectResult& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The date and time the project was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimeStamp() const{ return m_createdTimeStamp; }

    /**
     * <p>The date and time the project was created, in timestamp format.</p>
     */
    inline void SetCreatedTimeStamp(const Aws::Utils::DateTime& value) { m_createdTimeStamp = value; }

    /**
     * <p>The date and time the project was created, in timestamp format.</p>
     */
    inline void SetCreatedTimeStamp(Aws::Utils::DateTime&& value) { m_createdTimeStamp = std::move(value); }

    /**
     * <p>The date and time the project was created, in timestamp format.</p>
     */
    inline DescribeProjectResult& WithCreatedTimeStamp(const Aws::Utils::DateTime& value) { SetCreatedTimeStamp(value); return *this;}

    /**
     * <p>The date and time the project was created, in timestamp format.</p>
     */
    inline DescribeProjectResult& WithCreatedTimeStamp(Aws::Utils::DateTime&& value) { SetCreatedTimeStamp(std::move(value)); return *this;}


    /**
     * <p>The ID of the primary stack in AWS CloudFormation used to generate resources
     * for the project.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The ID of the primary stack in AWS CloudFormation used to generate resources
     * for the project.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackId = value; }

    /**
     * <p>The ID of the primary stack in AWS CloudFormation used to generate resources
     * for the project.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackId = std::move(value); }

    /**
     * <p>The ID of the primary stack in AWS CloudFormation used to generate resources
     * for the project.</p>
     */
    inline void SetStackId(const char* value) { m_stackId.assign(value); }

    /**
     * <p>The ID of the primary stack in AWS CloudFormation used to generate resources
     * for the project.</p>
     */
    inline DescribeProjectResult& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The ID of the primary stack in AWS CloudFormation used to generate resources
     * for the project.</p>
     */
    inline DescribeProjectResult& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The ID of the primary stack in AWS CloudFormation used to generate resources
     * for the project.</p>
     */
    inline DescribeProjectResult& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The ID for the AWS CodeStar project template used to create the project.</p>
     */
    inline const Aws::String& GetProjectTemplateId() const{ return m_projectTemplateId; }

    /**
     * <p>The ID for the AWS CodeStar project template used to create the project.</p>
     */
    inline void SetProjectTemplateId(const Aws::String& value) { m_projectTemplateId = value; }

    /**
     * <p>The ID for the AWS CodeStar project template used to create the project.</p>
     */
    inline void SetProjectTemplateId(Aws::String&& value) { m_projectTemplateId = std::move(value); }

    /**
     * <p>The ID for the AWS CodeStar project template used to create the project.</p>
     */
    inline void SetProjectTemplateId(const char* value) { m_projectTemplateId.assign(value); }

    /**
     * <p>The ID for the AWS CodeStar project template used to create the project.</p>
     */
    inline DescribeProjectResult& WithProjectTemplateId(const Aws::String& value) { SetProjectTemplateId(value); return *this;}

    /**
     * <p>The ID for the AWS CodeStar project template used to create the project.</p>
     */
    inline DescribeProjectResult& WithProjectTemplateId(Aws::String&& value) { SetProjectTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID for the AWS CodeStar project template used to create the project.</p>
     */
    inline DescribeProjectResult& WithProjectTemplateId(const char* value) { SetProjectTemplateId(value); return *this;}


    /**
     * <p>The project creation or deletion status.</p>
     */
    inline const ProjectStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The project creation or deletion status.</p>
     */
    inline void SetStatus(const ProjectStatus& value) { m_status = value; }

    /**
     * <p>The project creation or deletion status.</p>
     */
    inline void SetStatus(ProjectStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The project creation or deletion status.</p>
     */
    inline DescribeProjectResult& WithStatus(const ProjectStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The project creation or deletion status.</p>
     */
    inline DescribeProjectResult& WithStatus(ProjectStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_description;

    Aws::String m_clientRequestToken;

    Aws::Utils::DateTime m_createdTimeStamp;

    Aws::String m_stackId;

    Aws::String m_projectTemplateId;

    ProjectStatus m_status;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
