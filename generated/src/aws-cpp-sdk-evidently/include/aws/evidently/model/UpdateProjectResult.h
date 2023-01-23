/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/model/Project.h>
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
namespace CloudWatchEvidently
{
namespace Model
{
  class UpdateProjectResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API UpdateProjectResult();
    AWS_CLOUDWATCHEVIDENTLY_API UpdateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API UpdateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure containing information about the updated project.</p>
     */
    inline const Project& GetProject() const{ return m_project; }

    /**
     * <p>A structure containing information about the updated project.</p>
     */
    inline void SetProject(const Project& value) { m_project = value; }

    /**
     * <p>A structure containing information about the updated project.</p>
     */
    inline void SetProject(Project&& value) { m_project = std::move(value); }

    /**
     * <p>A structure containing information about the updated project.</p>
     */
    inline UpdateProjectResult& WithProject(const Project& value) { SetProject(value); return *this;}

    /**
     * <p>A structure containing information about the updated project.</p>
     */
    inline UpdateProjectResult& WithProject(Project&& value) { SetProject(std::move(value)); return *this;}

  private:

    Project m_project;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
