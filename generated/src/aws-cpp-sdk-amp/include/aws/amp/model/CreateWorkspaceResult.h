/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amp/model/WorkspaceStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace PrometheusService
{
namespace Model
{
  /**
   * <p>Represents the output of a CreateWorkspace operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateWorkspaceResponse">AWS
   * API Reference</a></p>
   */
  class CreateWorkspaceResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API CreateWorkspaceResult();
    AWS_PROMETHEUSSERVICE_API CreateWorkspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API CreateWorkspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the workspace that was just created.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the workspace that was just created.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the workspace that was just created.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the workspace that was just created.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the workspace that was just created.</p>
     */
    inline CreateWorkspaceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the workspace that was just created.</p>
     */
    inline CreateWorkspaceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the workspace that was just created.</p>
     */
    inline CreateWorkspaceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The status of the workspace that was just created (usually CREATING).</p>
     */
    inline const WorkspaceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the workspace that was just created (usually CREATING).</p>
     */
    inline void SetStatus(const WorkspaceStatus& value) { m_status = value; }

    /**
     * <p>The status of the workspace that was just created (usually CREATING).</p>
     */
    inline void SetStatus(WorkspaceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the workspace that was just created (usually CREATING).</p>
     */
    inline CreateWorkspaceResult& WithStatus(const WorkspaceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the workspace that was just created (usually CREATING).</p>
     */
    inline CreateWorkspaceResult& WithStatus(WorkspaceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The tags of this workspace.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of this workspace.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags of this workspace.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags of this workspace.</p>
     */
    inline CreateWorkspaceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of this workspace.</p>
     */
    inline CreateWorkspaceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of this workspace.</p>
     */
    inline CreateWorkspaceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of this workspace.</p>
     */
    inline CreateWorkspaceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of this workspace.</p>
     */
    inline CreateWorkspaceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of this workspace.</p>
     */
    inline CreateWorkspaceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of this workspace.</p>
     */
    inline CreateWorkspaceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of this workspace.</p>
     */
    inline CreateWorkspaceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of this workspace.</p>
     */
    inline CreateWorkspaceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The generated ID of the workspace that was just created.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The generated ID of the workspace that was just created.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceId = value; }

    /**
     * <p>The generated ID of the workspace that was just created.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceId = std::move(value); }

    /**
     * <p>The generated ID of the workspace that was just created.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceId.assign(value); }

    /**
     * <p>The generated ID of the workspace that was just created.</p>
     */
    inline CreateWorkspaceResult& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The generated ID of the workspace that was just created.</p>
     */
    inline CreateWorkspaceResult& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The generated ID of the workspace that was just created.</p>
     */
    inline CreateWorkspaceResult& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::String m_arn;

    WorkspaceStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_workspaceId;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
