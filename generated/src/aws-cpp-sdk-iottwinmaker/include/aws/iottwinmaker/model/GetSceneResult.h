/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iottwinmaker/model/SceneError.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class GetSceneResult
  {
  public:
    AWS_IOTTWINMAKER_API GetSceneResult();
    AWS_IOTTWINMAKER_API GetSceneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API GetSceneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the workspace that contains the scene.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace that contains the scene.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceId = value; }

    /**
     * <p>The ID of the workspace that contains the scene.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace that contains the scene.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace that contains the scene.</p>
     */
    inline GetSceneResult& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace that contains the scene.</p>
     */
    inline GetSceneResult& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace that contains the scene.</p>
     */
    inline GetSceneResult& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>The ID of the scene.</p>
     */
    inline const Aws::String& GetSceneId() const{ return m_sceneId; }

    /**
     * <p>The ID of the scene.</p>
     */
    inline void SetSceneId(const Aws::String& value) { m_sceneId = value; }

    /**
     * <p>The ID of the scene.</p>
     */
    inline void SetSceneId(Aws::String&& value) { m_sceneId = std::move(value); }

    /**
     * <p>The ID of the scene.</p>
     */
    inline void SetSceneId(const char* value) { m_sceneId.assign(value); }

    /**
     * <p>The ID of the scene.</p>
     */
    inline GetSceneResult& WithSceneId(const Aws::String& value) { SetSceneId(value); return *this;}

    /**
     * <p>The ID of the scene.</p>
     */
    inline GetSceneResult& WithSceneId(Aws::String&& value) { SetSceneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the scene.</p>
     */
    inline GetSceneResult& WithSceneId(const char* value) { SetSceneId(value); return *this;}


    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline const Aws::String& GetContentLocation() const{ return m_contentLocation; }

    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline void SetContentLocation(const Aws::String& value) { m_contentLocation = value; }

    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline void SetContentLocation(Aws::String&& value) { m_contentLocation = std::move(value); }

    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline void SetContentLocation(const char* value) { m_contentLocation.assign(value); }

    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline GetSceneResult& WithContentLocation(const Aws::String& value) { SetContentLocation(value); return *this;}

    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline GetSceneResult& WithContentLocation(Aws::String&& value) { SetContentLocation(std::move(value)); return *this;}

    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline GetSceneResult& WithContentLocation(const char* value) { SetContentLocation(value); return *this;}


    /**
     * <p>The ARN of the scene.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the scene.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the scene.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the scene.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the scene.</p>
     */
    inline GetSceneResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the scene.</p>
     */
    inline GetSceneResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the scene.</p>
     */
    inline GetSceneResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time when the scene was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time when the scene was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The date and time when the scene was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time when the scene was created.</p>
     */
    inline GetSceneResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time when the scene was created.</p>
     */
    inline GetSceneResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the scene was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }

    /**
     * <p>The date and time when the scene was last updated.</p>
     */
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTime = value; }

    /**
     * <p>The date and time when the scene was last updated.</p>
     */
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTime = std::move(value); }

    /**
     * <p>The date and time when the scene was last updated.</p>
     */
    inline GetSceneResult& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>The date and time when the scene was last updated.</p>
     */
    inline GetSceneResult& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}


    /**
     * <p>The description of the scene.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the scene.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the scene.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the scene.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the scene.</p>
     */
    inline GetSceneResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the scene.</p>
     */
    inline GetSceneResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the scene.</p>
     */
    inline GetSceneResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of capabilities that the scene uses to render.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>A list of capabilities that the scene uses to render.</p>
     */
    inline void SetCapabilities(const Aws::Vector<Aws::String>& value) { m_capabilities = value; }

    /**
     * <p>A list of capabilities that the scene uses to render.</p>
     */
    inline void SetCapabilities(Aws::Vector<Aws::String>&& value) { m_capabilities = std::move(value); }

    /**
     * <p>A list of capabilities that the scene uses to render.</p>
     */
    inline GetSceneResult& WithCapabilities(const Aws::Vector<Aws::String>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>A list of capabilities that the scene uses to render.</p>
     */
    inline GetSceneResult& WithCapabilities(Aws::Vector<Aws::String>&& value) { SetCapabilities(std::move(value)); return *this;}

    /**
     * <p>A list of capabilities that the scene uses to render.</p>
     */
    inline GetSceneResult& AddCapabilities(const Aws::String& value) { m_capabilities.push_back(value); return *this; }

    /**
     * <p>A list of capabilities that the scene uses to render.</p>
     */
    inline GetSceneResult& AddCapabilities(Aws::String&& value) { m_capabilities.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of capabilities that the scene uses to render.</p>
     */
    inline GetSceneResult& AddCapabilities(const char* value) { m_capabilities.push_back(value); return *this; }


    /**
     * <p>The response metadata.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSceneMetadata() const{ return m_sceneMetadata; }

    /**
     * <p>The response metadata.</p>
     */
    inline void SetSceneMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_sceneMetadata = value; }

    /**
     * <p>The response metadata.</p>
     */
    inline void SetSceneMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_sceneMetadata = std::move(value); }

    /**
     * <p>The response metadata.</p>
     */
    inline GetSceneResult& WithSceneMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetSceneMetadata(value); return *this;}

    /**
     * <p>The response metadata.</p>
     */
    inline GetSceneResult& WithSceneMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetSceneMetadata(std::move(value)); return *this;}

    /**
     * <p>The response metadata.</p>
     */
    inline GetSceneResult& AddSceneMetadata(const Aws::String& key, const Aws::String& value) { m_sceneMetadata.emplace(key, value); return *this; }

    /**
     * <p>The response metadata.</p>
     */
    inline GetSceneResult& AddSceneMetadata(Aws::String&& key, const Aws::String& value) { m_sceneMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The response metadata.</p>
     */
    inline GetSceneResult& AddSceneMetadata(const Aws::String& key, Aws::String&& value) { m_sceneMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The response metadata.</p>
     */
    inline GetSceneResult& AddSceneMetadata(Aws::String&& key, Aws::String&& value) { m_sceneMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The response metadata.</p>
     */
    inline GetSceneResult& AddSceneMetadata(const char* key, Aws::String&& value) { m_sceneMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The response metadata.</p>
     */
    inline GetSceneResult& AddSceneMetadata(Aws::String&& key, const char* value) { m_sceneMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The response metadata.</p>
     */
    inline GetSceneResult& AddSceneMetadata(const char* key, const char* value) { m_sceneMetadata.emplace(key, value); return *this; }


    /**
     * <p>The generated scene metadata.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetGeneratedSceneMetadata() const{ return m_generatedSceneMetadata; }

    /**
     * <p>The generated scene metadata.</p>
     */
    inline void SetGeneratedSceneMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_generatedSceneMetadata = value; }

    /**
     * <p>The generated scene metadata.</p>
     */
    inline void SetGeneratedSceneMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_generatedSceneMetadata = std::move(value); }

    /**
     * <p>The generated scene metadata.</p>
     */
    inline GetSceneResult& WithGeneratedSceneMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetGeneratedSceneMetadata(value); return *this;}

    /**
     * <p>The generated scene metadata.</p>
     */
    inline GetSceneResult& WithGeneratedSceneMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetGeneratedSceneMetadata(std::move(value)); return *this;}

    /**
     * <p>The generated scene metadata.</p>
     */
    inline GetSceneResult& AddGeneratedSceneMetadata(const Aws::String& key, const Aws::String& value) { m_generatedSceneMetadata.emplace(key, value); return *this; }

    /**
     * <p>The generated scene metadata.</p>
     */
    inline GetSceneResult& AddGeneratedSceneMetadata(Aws::String&& key, const Aws::String& value) { m_generatedSceneMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The generated scene metadata.</p>
     */
    inline GetSceneResult& AddGeneratedSceneMetadata(const Aws::String& key, Aws::String&& value) { m_generatedSceneMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The generated scene metadata.</p>
     */
    inline GetSceneResult& AddGeneratedSceneMetadata(Aws::String&& key, Aws::String&& value) { m_generatedSceneMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The generated scene metadata.</p>
     */
    inline GetSceneResult& AddGeneratedSceneMetadata(const char* key, Aws::String&& value) { m_generatedSceneMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The generated scene metadata.</p>
     */
    inline GetSceneResult& AddGeneratedSceneMetadata(Aws::String&& key, const char* value) { m_generatedSceneMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The generated scene metadata.</p>
     */
    inline GetSceneResult& AddGeneratedSceneMetadata(const char* key, const char* value) { m_generatedSceneMetadata.emplace(key, value); return *this; }


    /**
     * <p>The SceneResponse error.</p>
     */
    inline const SceneError& GetError() const{ return m_error; }

    /**
     * <p>The SceneResponse error.</p>
     */
    inline void SetError(const SceneError& value) { m_error = value; }

    /**
     * <p>The SceneResponse error.</p>
     */
    inline void SetError(SceneError&& value) { m_error = std::move(value); }

    /**
     * <p>The SceneResponse error.</p>
     */
    inline GetSceneResult& WithError(const SceneError& value) { SetError(value); return *this;}

    /**
     * <p>The SceneResponse error.</p>
     */
    inline GetSceneResult& WithError(SceneError&& value) { SetError(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSceneResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSceneResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSceneResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_workspaceId;

    Aws::String m_sceneId;

    Aws::String m_contentLocation;

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_updateDateTime;

    Aws::String m_description;

    Aws::Vector<Aws::String> m_capabilities;

    Aws::Map<Aws::String, Aws::String> m_sceneMetadata;

    Aws::Map<Aws::String, Aws::String> m_generatedSceneMetadata;

    SceneError m_error;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
