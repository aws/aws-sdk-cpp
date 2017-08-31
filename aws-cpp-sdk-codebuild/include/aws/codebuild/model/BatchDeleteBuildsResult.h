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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/BuildNotDeleted.h>
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
namespace CodeBuild
{
namespace Model
{
  class AWS_CODEBUILD_API BatchDeleteBuildsResult
  {
  public:
    BatchDeleteBuildsResult();
    BatchDeleteBuildsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchDeleteBuildsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The IDs of the builds that were successfully deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBuildsDeleted() const{ return m_buildsDeleted; }

    /**
     * <p>The IDs of the builds that were successfully deleted.</p>
     */
    inline void SetBuildsDeleted(const Aws::Vector<Aws::String>& value) { m_buildsDeleted = value; }

    /**
     * <p>The IDs of the builds that were successfully deleted.</p>
     */
    inline void SetBuildsDeleted(Aws::Vector<Aws::String>&& value) { m_buildsDeleted = std::move(value); }

    /**
     * <p>The IDs of the builds that were successfully deleted.</p>
     */
    inline BatchDeleteBuildsResult& WithBuildsDeleted(const Aws::Vector<Aws::String>& value) { SetBuildsDeleted(value); return *this;}

    /**
     * <p>The IDs of the builds that were successfully deleted.</p>
     */
    inline BatchDeleteBuildsResult& WithBuildsDeleted(Aws::Vector<Aws::String>&& value) { SetBuildsDeleted(std::move(value)); return *this;}

    /**
     * <p>The IDs of the builds that were successfully deleted.</p>
     */
    inline BatchDeleteBuildsResult& AddBuildsDeleted(const Aws::String& value) { m_buildsDeleted.push_back(value); return *this; }

    /**
     * <p>The IDs of the builds that were successfully deleted.</p>
     */
    inline BatchDeleteBuildsResult& AddBuildsDeleted(Aws::String&& value) { m_buildsDeleted.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the builds that were successfully deleted.</p>
     */
    inline BatchDeleteBuildsResult& AddBuildsDeleted(const char* value) { m_buildsDeleted.push_back(value); return *this; }


    /**
     * <p>Information about any builds that could not be successfully deleted.</p>
     */
    inline const Aws::Vector<BuildNotDeleted>& GetBuildsNotDeleted() const{ return m_buildsNotDeleted; }

    /**
     * <p>Information about any builds that could not be successfully deleted.</p>
     */
    inline void SetBuildsNotDeleted(const Aws::Vector<BuildNotDeleted>& value) { m_buildsNotDeleted = value; }

    /**
     * <p>Information about any builds that could not be successfully deleted.</p>
     */
    inline void SetBuildsNotDeleted(Aws::Vector<BuildNotDeleted>&& value) { m_buildsNotDeleted = std::move(value); }

    /**
     * <p>Information about any builds that could not be successfully deleted.</p>
     */
    inline BatchDeleteBuildsResult& WithBuildsNotDeleted(const Aws::Vector<BuildNotDeleted>& value) { SetBuildsNotDeleted(value); return *this;}

    /**
     * <p>Information about any builds that could not be successfully deleted.</p>
     */
    inline BatchDeleteBuildsResult& WithBuildsNotDeleted(Aws::Vector<BuildNotDeleted>&& value) { SetBuildsNotDeleted(std::move(value)); return *this;}

    /**
     * <p>Information about any builds that could not be successfully deleted.</p>
     */
    inline BatchDeleteBuildsResult& AddBuildsNotDeleted(const BuildNotDeleted& value) { m_buildsNotDeleted.push_back(value); return *this; }

    /**
     * <p>Information about any builds that could not be successfully deleted.</p>
     */
    inline BatchDeleteBuildsResult& AddBuildsNotDeleted(BuildNotDeleted&& value) { m_buildsNotDeleted.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_buildsDeleted;

    Aws::Vector<BuildNotDeleted> m_buildsNotDeleted;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
