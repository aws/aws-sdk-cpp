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
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class AWS_IOTSITEWISE_API CreateProjectResult
  {
  public:
    CreateProjectResult();
    CreateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the project.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The ID of the project.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectId = value; }

    /**
     * <p>The ID of the project.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectId = std::move(value); }

    /**
     * <p>The ID of the project.</p>
     */
    inline void SetProjectId(const char* value) { m_projectId.assign(value); }

    /**
     * <p>The ID of the project.</p>
     */
    inline CreateProjectResult& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The ID of the project.</p>
     */
    inline CreateProjectResult& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project.</p>
     */
    inline CreateProjectResult& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the project, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:project/${ProjectId}</code>
     * </p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the project, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:project/${ProjectId}</code>
     * </p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the project, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:project/${ProjectId}</code>
     * </p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the project, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:project/${ProjectId}</code>
     * </p>
     */
    inline void SetProjectArn(const char* value) { m_projectArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the project, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:project/${ProjectId}</code>
     * </p>
     */
    inline CreateProjectResult& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the project, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:project/${ProjectId}</code>
     * </p>
     */
    inline CreateProjectResult& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the project, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:project/${ProjectId}</code>
     * </p>
     */
    inline CreateProjectResult& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}

  private:

    Aws::String m_projectId;

    Aws::String m_projectArn;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
