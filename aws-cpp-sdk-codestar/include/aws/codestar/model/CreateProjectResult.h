/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_CODESTAR_API CreateProjectResult
  {
  public:
    CreateProjectResult();
    CreateProjectResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateProjectResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The ID for the project.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID for the project.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID for the project.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID for the project.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID for the project.</p>
     */
    inline CreateProjectResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID for the project.</p>
     */
    inline CreateProjectResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID for the project.</p>
     */
    inline CreateProjectResult& WithId(const char* value) { SetId(value); return *this;}

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
    inline CreateProjectResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the project.</p>
     */
    inline CreateProjectResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the project.</p>
     */
    inline CreateProjectResult& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The user- or system-generated token from the initial request that can be used
     * to repeat the request. It can also be used to identify which user or system made
     * the request in DescribeProject and ListProjects.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The user- or system-generated token from the initial request that can be used
     * to repeat the request. It can also be used to identify which user or system made
     * the request in DescribeProject and ListProjects.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestToken = value; }

    /**
     * <p>The user- or system-generated token from the initial request that can be used
     * to repeat the request. It can also be used to identify which user or system made
     * the request in DescribeProject and ListProjects.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestToken = std::move(value); }

    /**
     * <p>The user- or system-generated token from the initial request that can be used
     * to repeat the request. It can also be used to identify which user or system made
     * the request in DescribeProject and ListProjects.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestToken.assign(value); }

    /**
     * <p>The user- or system-generated token from the initial request that can be used
     * to repeat the request. It can also be used to identify which user or system made
     * the request in DescribeProject and ListProjects.</p>
     */
    inline CreateProjectResult& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The user- or system-generated token from the initial request that can be used
     * to repeat the request. It can also be used to identify which user or system made
     * the request in DescribeProject and ListProjects.</p>
     */
    inline CreateProjectResult& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The user- or system-generated token from the initial request that can be used
     * to repeat the request. It can also be used to identify which user or system made
     * the request in DescribeProject and ListProjects.</p>
     */
    inline CreateProjectResult& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

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
    inline CreateProjectResult& WithProjectTemplateId(const Aws::String& value) { SetProjectTemplateId(value); return *this;}

    /**
     * <p>The ID for the AWS CodeStar project template used to create the project.</p>
     */
    inline CreateProjectResult& WithProjectTemplateId(Aws::String&& value) { SetProjectTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID for the AWS CodeStar project template used to create the project.</p>
     */
    inline CreateProjectResult& WithProjectTemplateId(const char* value) { SetProjectTemplateId(value); return *this;}

  private:
    Aws::String m_id;
    Aws::String m_arn;
    Aws::String m_clientRequestToken;
    Aws::String m_projectTemplateId;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
