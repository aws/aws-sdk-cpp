/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class DescribeProjectResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeProjectResult();
    AWS_IOTSITEWISE_API DescribeProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the project.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }
    inline void SetProjectId(const Aws::String& value) { m_projectId = value; }
    inline void SetProjectId(Aws::String&& value) { m_projectId = std::move(value); }
    inline void SetProjectId(const char* value) { m_projectId.assign(value); }
    inline DescribeProjectResult& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}
    inline DescribeProjectResult& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}
    inline DescribeProjectResult& WithProjectId(const char* value) { SetProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the project, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:project/${ProjectId}</code>
     * </p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArn.assign(value); }
    inline DescribeProjectResult& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline DescribeProjectResult& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline DescribeProjectResult& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline void SetProjectName(const Aws::String& value) { m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectName.assign(value); }
    inline DescribeProjectResult& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline DescribeProjectResult& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline DescribeProjectResult& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the portal that the project is in.</p>
     */
    inline const Aws::String& GetPortalId() const{ return m_portalId; }
    inline void SetPortalId(const Aws::String& value) { m_portalId = value; }
    inline void SetPortalId(Aws::String&& value) { m_portalId = std::move(value); }
    inline void SetPortalId(const char* value) { m_portalId.assign(value); }
    inline DescribeProjectResult& WithPortalId(const Aws::String& value) { SetPortalId(value); return *this;}
    inline DescribeProjectResult& WithPortalId(Aws::String&& value) { SetPortalId(std::move(value)); return *this;}
    inline DescribeProjectResult& WithPortalId(const char* value) { SetPortalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project's description.</p>
     */
    inline const Aws::String& GetProjectDescription() const{ return m_projectDescription; }
    inline void SetProjectDescription(const Aws::String& value) { m_projectDescription = value; }
    inline void SetProjectDescription(Aws::String&& value) { m_projectDescription = std::move(value); }
    inline void SetProjectDescription(const char* value) { m_projectDescription.assign(value); }
    inline DescribeProjectResult& WithProjectDescription(const Aws::String& value) { SetProjectDescription(value); return *this;}
    inline DescribeProjectResult& WithProjectDescription(Aws::String&& value) { SetProjectDescription(std::move(value)); return *this;}
    inline DescribeProjectResult& WithProjectDescription(const char* value) { SetProjectDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the project was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetProjectCreationDate() const{ return m_projectCreationDate; }
    inline void SetProjectCreationDate(const Aws::Utils::DateTime& value) { m_projectCreationDate = value; }
    inline void SetProjectCreationDate(Aws::Utils::DateTime&& value) { m_projectCreationDate = std::move(value); }
    inline DescribeProjectResult& WithProjectCreationDate(const Aws::Utils::DateTime& value) { SetProjectCreationDate(value); return *this;}
    inline DescribeProjectResult& WithProjectCreationDate(Aws::Utils::DateTime&& value) { SetProjectCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the project was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetProjectLastUpdateDate() const{ return m_projectLastUpdateDate; }
    inline void SetProjectLastUpdateDate(const Aws::Utils::DateTime& value) { m_projectLastUpdateDate = value; }
    inline void SetProjectLastUpdateDate(Aws::Utils::DateTime&& value) { m_projectLastUpdateDate = std::move(value); }
    inline DescribeProjectResult& WithProjectLastUpdateDate(const Aws::Utils::DateTime& value) { SetProjectLastUpdateDate(value); return *this;}
    inline DescribeProjectResult& WithProjectLastUpdateDate(Aws::Utils::DateTime&& value) { SetProjectLastUpdateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_projectId;

    Aws::String m_projectArn;

    Aws::String m_projectName;

    Aws::String m_portalId;

    Aws::String m_projectDescription;

    Aws::Utils::DateTime m_projectCreationDate;

    Aws::Utils::DateTime m_projectLastUpdateDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
