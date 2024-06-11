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
   * <p>Represents the output of a <code>CreateWorkspace</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateWorkspaceResponse">AWS
   * API Reference</a></p>
   */
  class CreateWorkspaceResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API CreateWorkspaceResult();
    AWS_PROMETHEUSSERVICE_API CreateWorkspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API CreateWorkspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for the new workspace.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateWorkspaceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateWorkspaceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateWorkspaceResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(optional) If the workspace was created with a customer managed KMS key, the
     * ARN for the key used.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }
    inline CreateWorkspaceResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline CreateWorkspaceResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline CreateWorkspaceResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the new workspace. Immediately after you create the
     * workspace, the status is usually <code>CREATING</code>.</p>
     */
    inline const WorkspaceStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const WorkspaceStatus& value) { m_status = value; }
    inline void SetStatus(WorkspaceStatus&& value) { m_status = std::move(value); }
    inline CreateWorkspaceResult& WithStatus(const WorkspaceStatus& value) { SetStatus(value); return *this;}
    inline CreateWorkspaceResult& WithStatus(WorkspaceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tag keys and values that are associated with the workspace.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateWorkspaceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateWorkspaceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateWorkspaceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateWorkspaceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateWorkspaceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateWorkspaceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateWorkspaceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateWorkspaceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateWorkspaceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique ID for the new workspace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceId.assign(value); }
    inline CreateWorkspaceResult& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline CreateWorkspaceResult& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline CreateWorkspaceResult& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateWorkspaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWorkspaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWorkspaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_kmsKeyArn;

    WorkspaceStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_workspaceId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
