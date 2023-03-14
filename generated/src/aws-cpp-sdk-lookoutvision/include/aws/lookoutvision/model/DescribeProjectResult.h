/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/ProjectDescription.h>
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
namespace LookoutforVision
{
namespace Model
{
  class DescribeProjectResult
  {
  public:
    AWS_LOOKOUTFORVISION_API DescribeProjectResult();
    AWS_LOOKOUTFORVISION_API DescribeProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API DescribeProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of the project.</p>
     */
    inline const ProjectDescription& GetProjectDescription() const{ return m_projectDescription; }

    /**
     * <p>The description of the project.</p>
     */
    inline void SetProjectDescription(const ProjectDescription& value) { m_projectDescription = value; }

    /**
     * <p>The description of the project.</p>
     */
    inline void SetProjectDescription(ProjectDescription&& value) { m_projectDescription = std::move(value); }

    /**
     * <p>The description of the project.</p>
     */
    inline DescribeProjectResult& WithProjectDescription(const ProjectDescription& value) { SetProjectDescription(value); return *this;}

    /**
     * <p>The description of the project.</p>
     */
    inline DescribeProjectResult& WithProjectDescription(ProjectDescription&& value) { SetProjectDescription(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProjectDescription m_projectDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
