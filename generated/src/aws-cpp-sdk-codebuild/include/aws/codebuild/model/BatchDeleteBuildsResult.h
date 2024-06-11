﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BatchDeleteBuildsResult
  {
  public:
    AWS_CODEBUILD_API BatchDeleteBuildsResult();
    AWS_CODEBUILD_API BatchDeleteBuildsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API BatchDeleteBuildsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The IDs of the builds that were successfully deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBuildsDeleted() const{ return m_buildsDeleted; }
    inline void SetBuildsDeleted(const Aws::Vector<Aws::String>& value) { m_buildsDeleted = value; }
    inline void SetBuildsDeleted(Aws::Vector<Aws::String>&& value) { m_buildsDeleted = std::move(value); }
    inline BatchDeleteBuildsResult& WithBuildsDeleted(const Aws::Vector<Aws::String>& value) { SetBuildsDeleted(value); return *this;}
    inline BatchDeleteBuildsResult& WithBuildsDeleted(Aws::Vector<Aws::String>&& value) { SetBuildsDeleted(std::move(value)); return *this;}
    inline BatchDeleteBuildsResult& AddBuildsDeleted(const Aws::String& value) { m_buildsDeleted.push_back(value); return *this; }
    inline BatchDeleteBuildsResult& AddBuildsDeleted(Aws::String&& value) { m_buildsDeleted.push_back(std::move(value)); return *this; }
    inline BatchDeleteBuildsResult& AddBuildsDeleted(const char* value) { m_buildsDeleted.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about any builds that could not be successfully deleted.</p>
     */
    inline const Aws::Vector<BuildNotDeleted>& GetBuildsNotDeleted() const{ return m_buildsNotDeleted; }
    inline void SetBuildsNotDeleted(const Aws::Vector<BuildNotDeleted>& value) { m_buildsNotDeleted = value; }
    inline void SetBuildsNotDeleted(Aws::Vector<BuildNotDeleted>&& value) { m_buildsNotDeleted = std::move(value); }
    inline BatchDeleteBuildsResult& WithBuildsNotDeleted(const Aws::Vector<BuildNotDeleted>& value) { SetBuildsNotDeleted(value); return *this;}
    inline BatchDeleteBuildsResult& WithBuildsNotDeleted(Aws::Vector<BuildNotDeleted>&& value) { SetBuildsNotDeleted(std::move(value)); return *this;}
    inline BatchDeleteBuildsResult& AddBuildsNotDeleted(const BuildNotDeleted& value) { m_buildsNotDeleted.push_back(value); return *this; }
    inline BatchDeleteBuildsResult& AddBuildsNotDeleted(BuildNotDeleted&& value) { m_buildsNotDeleted.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteBuildsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteBuildsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteBuildsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_buildsDeleted;

    Aws::Vector<BuildNotDeleted> m_buildsNotDeleted;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
