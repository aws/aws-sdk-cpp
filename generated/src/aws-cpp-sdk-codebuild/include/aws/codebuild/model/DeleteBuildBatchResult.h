/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DeleteBuildBatchResult
  {
  public:
    AWS_CODEBUILD_API DeleteBuildBatchResult();
    AWS_CODEBUILD_API DeleteBuildBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API DeleteBuildBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status code.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The status code.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCode = value; }

    /**
     * <p>The status code.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCode = std::move(value); }

    /**
     * <p>The status code.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCode.assign(value); }

    /**
     * <p>The status code.</p>
     */
    inline DeleteBuildBatchResult& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The status code.</p>
     */
    inline DeleteBuildBatchResult& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}

    /**
     * <p>The status code.</p>
     */
    inline DeleteBuildBatchResult& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}


    /**
     * <p>An array of strings that contain the identifiers of the builds that were
     * deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBuildsDeleted() const{ return m_buildsDeleted; }

    /**
     * <p>An array of strings that contain the identifiers of the builds that were
     * deleted.</p>
     */
    inline void SetBuildsDeleted(const Aws::Vector<Aws::String>& value) { m_buildsDeleted = value; }

    /**
     * <p>An array of strings that contain the identifiers of the builds that were
     * deleted.</p>
     */
    inline void SetBuildsDeleted(Aws::Vector<Aws::String>&& value) { m_buildsDeleted = std::move(value); }

    /**
     * <p>An array of strings that contain the identifiers of the builds that were
     * deleted.</p>
     */
    inline DeleteBuildBatchResult& WithBuildsDeleted(const Aws::Vector<Aws::String>& value) { SetBuildsDeleted(value); return *this;}

    /**
     * <p>An array of strings that contain the identifiers of the builds that were
     * deleted.</p>
     */
    inline DeleteBuildBatchResult& WithBuildsDeleted(Aws::Vector<Aws::String>&& value) { SetBuildsDeleted(std::move(value)); return *this;}

    /**
     * <p>An array of strings that contain the identifiers of the builds that were
     * deleted.</p>
     */
    inline DeleteBuildBatchResult& AddBuildsDeleted(const Aws::String& value) { m_buildsDeleted.push_back(value); return *this; }

    /**
     * <p>An array of strings that contain the identifiers of the builds that were
     * deleted.</p>
     */
    inline DeleteBuildBatchResult& AddBuildsDeleted(Aws::String&& value) { m_buildsDeleted.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that contain the identifiers of the builds that were
     * deleted.</p>
     */
    inline DeleteBuildBatchResult& AddBuildsDeleted(const char* value) { m_buildsDeleted.push_back(value); return *this; }


    /**
     * <p>An array of <code>BuildNotDeleted</code> objects that specify the builds that
     * could not be deleted.</p>
     */
    inline const Aws::Vector<BuildNotDeleted>& GetBuildsNotDeleted() const{ return m_buildsNotDeleted; }

    /**
     * <p>An array of <code>BuildNotDeleted</code> objects that specify the builds that
     * could not be deleted.</p>
     */
    inline void SetBuildsNotDeleted(const Aws::Vector<BuildNotDeleted>& value) { m_buildsNotDeleted = value; }

    /**
     * <p>An array of <code>BuildNotDeleted</code> objects that specify the builds that
     * could not be deleted.</p>
     */
    inline void SetBuildsNotDeleted(Aws::Vector<BuildNotDeleted>&& value) { m_buildsNotDeleted = std::move(value); }

    /**
     * <p>An array of <code>BuildNotDeleted</code> objects that specify the builds that
     * could not be deleted.</p>
     */
    inline DeleteBuildBatchResult& WithBuildsNotDeleted(const Aws::Vector<BuildNotDeleted>& value) { SetBuildsNotDeleted(value); return *this;}

    /**
     * <p>An array of <code>BuildNotDeleted</code> objects that specify the builds that
     * could not be deleted.</p>
     */
    inline DeleteBuildBatchResult& WithBuildsNotDeleted(Aws::Vector<BuildNotDeleted>&& value) { SetBuildsNotDeleted(std::move(value)); return *this;}

    /**
     * <p>An array of <code>BuildNotDeleted</code> objects that specify the builds that
     * could not be deleted.</p>
     */
    inline DeleteBuildBatchResult& AddBuildsNotDeleted(const BuildNotDeleted& value) { m_buildsNotDeleted.push_back(value); return *this; }

    /**
     * <p>An array of <code>BuildNotDeleted</code> objects that specify the builds that
     * could not be deleted.</p>
     */
    inline DeleteBuildBatchResult& AddBuildsNotDeleted(BuildNotDeleted&& value) { m_buildsNotDeleted.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_statusCode;

    Aws::Vector<Aws::String> m_buildsDeleted;

    Aws::Vector<BuildNotDeleted> m_buildsNotDeleted;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
