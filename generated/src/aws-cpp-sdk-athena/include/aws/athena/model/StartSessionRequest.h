/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/EngineConfiguration.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class StartSessionRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API StartSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSession"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The session description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The session description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The session description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The session description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The session description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The session description.</p>
     */
    inline StartSessionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The session description.</p>
     */
    inline StartSessionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The session description.</p>
     */
    inline StartSessionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }

    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }

    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }

    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }

    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }

    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline StartSessionRequest& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}

    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline StartSessionRequest& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}

    /**
     * <p>The workgroup to which the session belongs.</p>
     */
    inline StartSessionRequest& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}


    /**
     * <p>Contains engine data processing unit (DPU) configuration settings and
     * parameter mappings.</p>
     */
    inline const EngineConfiguration& GetEngineConfiguration() const{ return m_engineConfiguration; }

    /**
     * <p>Contains engine data processing unit (DPU) configuration settings and
     * parameter mappings.</p>
     */
    inline bool EngineConfigurationHasBeenSet() const { return m_engineConfigurationHasBeenSet; }

    /**
     * <p>Contains engine data processing unit (DPU) configuration settings and
     * parameter mappings.</p>
     */
    inline void SetEngineConfiguration(const EngineConfiguration& value) { m_engineConfigurationHasBeenSet = true; m_engineConfiguration = value; }

    /**
     * <p>Contains engine data processing unit (DPU) configuration settings and
     * parameter mappings.</p>
     */
    inline void SetEngineConfiguration(EngineConfiguration&& value) { m_engineConfigurationHasBeenSet = true; m_engineConfiguration = std::move(value); }

    /**
     * <p>Contains engine data processing unit (DPU) configuration settings and
     * parameter mappings.</p>
     */
    inline StartSessionRequest& WithEngineConfiguration(const EngineConfiguration& value) { SetEngineConfiguration(value); return *this;}

    /**
     * <p>Contains engine data processing unit (DPU) configuration settings and
     * parameter mappings.</p>
     */
    inline StartSessionRequest& WithEngineConfiguration(EngineConfiguration&& value) { SetEngineConfiguration(std::move(value)); return *this;}


    /**
     * <p>The notebook version. This value is required only when requesting that a
     * notebook server be started for the session. The only valid notebook version is
     * <code>Jupyter1.0</code>.</p>
     */
    inline const Aws::String& GetNotebookVersion() const{ return m_notebookVersion; }

    /**
     * <p>The notebook version. This value is required only when requesting that a
     * notebook server be started for the session. The only valid notebook version is
     * <code>Jupyter1.0</code>.</p>
     */
    inline bool NotebookVersionHasBeenSet() const { return m_notebookVersionHasBeenSet; }

    /**
     * <p>The notebook version. This value is required only when requesting that a
     * notebook server be started for the session. The only valid notebook version is
     * <code>Jupyter1.0</code>.</p>
     */
    inline void SetNotebookVersion(const Aws::String& value) { m_notebookVersionHasBeenSet = true; m_notebookVersion = value; }

    /**
     * <p>The notebook version. This value is required only when requesting that a
     * notebook server be started for the session. The only valid notebook version is
     * <code>Jupyter1.0</code>.</p>
     */
    inline void SetNotebookVersion(Aws::String&& value) { m_notebookVersionHasBeenSet = true; m_notebookVersion = std::move(value); }

    /**
     * <p>The notebook version. This value is required only when requesting that a
     * notebook server be started for the session. The only valid notebook version is
     * <code>Jupyter1.0</code>.</p>
     */
    inline void SetNotebookVersion(const char* value) { m_notebookVersionHasBeenSet = true; m_notebookVersion.assign(value); }

    /**
     * <p>The notebook version. This value is required only when requesting that a
     * notebook server be started for the session. The only valid notebook version is
     * <code>Jupyter1.0</code>.</p>
     */
    inline StartSessionRequest& WithNotebookVersion(const Aws::String& value) { SetNotebookVersion(value); return *this;}

    /**
     * <p>The notebook version. This value is required only when requesting that a
     * notebook server be started for the session. The only valid notebook version is
     * <code>Jupyter1.0</code>.</p>
     */
    inline StartSessionRequest& WithNotebookVersion(Aws::String&& value) { SetNotebookVersion(std::move(value)); return *this;}

    /**
     * <p>The notebook version. This value is required only when requesting that a
     * notebook server be started for the session. The only valid notebook version is
     * <code>Jupyter1.0</code>.</p>
     */
    inline StartSessionRequest& WithNotebookVersion(const char* value) { SetNotebookVersion(value); return *this;}


    /**
     * <p>The idle timeout in minutes for the session.</p>
     */
    inline int GetSessionIdleTimeoutInMinutes() const{ return m_sessionIdleTimeoutInMinutes; }

    /**
     * <p>The idle timeout in minutes for the session.</p>
     */
    inline bool SessionIdleTimeoutInMinutesHasBeenSet() const { return m_sessionIdleTimeoutInMinutesHasBeenSet; }

    /**
     * <p>The idle timeout in minutes for the session.</p>
     */
    inline void SetSessionIdleTimeoutInMinutes(int value) { m_sessionIdleTimeoutInMinutesHasBeenSet = true; m_sessionIdleTimeoutInMinutes = value; }

    /**
     * <p>The idle timeout in minutes for the session.</p>
     */
    inline StartSessionRequest& WithSessionIdleTimeoutInMinutes(int value) { SetSessionIdleTimeoutInMinutes(value); return *this;}


    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * session is idempotent (executes only once). If another
     * <code>StartSessionRequest</code> is received, the same response is returned and
     * another session is not created. If a parameter has changed, an error is
     * returned.</p>  <p>This token is listed as not required because Amazon
     * Web Services SDKs (for example the Amazon Web Services SDK for Java)
     * auto-generate the token for users. If you are not using the Amazon Web Services
     * SDK or the Amazon Web Services CLI, you must provide this token or the action
     * will fail.</p> 
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * session is idempotent (executes only once). If another
     * <code>StartSessionRequest</code> is received, the same response is returned and
     * another session is not created. If a parameter has changed, an error is
     * returned.</p>  <p>This token is listed as not required because Amazon
     * Web Services SDKs (for example the Amazon Web Services SDK for Java)
     * auto-generate the token for users. If you are not using the Amazon Web Services
     * SDK or the Amazon Web Services CLI, you must provide this token or the action
     * will fail.</p> 
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * session is idempotent (executes only once). If another
     * <code>StartSessionRequest</code> is received, the same response is returned and
     * another session is not created. If a parameter has changed, an error is
     * returned.</p>  <p>This token is listed as not required because Amazon
     * Web Services SDKs (for example the Amazon Web Services SDK for Java)
     * auto-generate the token for users. If you are not using the Amazon Web Services
     * SDK or the Amazon Web Services CLI, you must provide this token or the action
     * will fail.</p> 
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * session is idempotent (executes only once). If another
     * <code>StartSessionRequest</code> is received, the same response is returned and
     * another session is not created. If a parameter has changed, an error is
     * returned.</p>  <p>This token is listed as not required because Amazon
     * Web Services SDKs (for example the Amazon Web Services SDK for Java)
     * auto-generate the token for users. If you are not using the Amazon Web Services
     * SDK or the Amazon Web Services CLI, you must provide this token or the action
     * will fail.</p> 
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * session is idempotent (executes only once). If another
     * <code>StartSessionRequest</code> is received, the same response is returned and
     * another session is not created. If a parameter has changed, an error is
     * returned.</p>  <p>This token is listed as not required because Amazon
     * Web Services SDKs (for example the Amazon Web Services SDK for Java)
     * auto-generate the token for users. If you are not using the Amazon Web Services
     * SDK or the Amazon Web Services CLI, you must provide this token or the action
     * will fail.</p> 
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * session is idempotent (executes only once). If another
     * <code>StartSessionRequest</code> is received, the same response is returned and
     * another session is not created. If a parameter has changed, an error is
     * returned.</p>  <p>This token is listed as not required because Amazon
     * Web Services SDKs (for example the Amazon Web Services SDK for Java)
     * auto-generate the token for users. If you are not using the Amazon Web Services
     * SDK or the Amazon Web Services CLI, you must provide this token or the action
     * will fail.</p> 
     */
    inline StartSessionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * session is idempotent (executes only once). If another
     * <code>StartSessionRequest</code> is received, the same response is returned and
     * another session is not created. If a parameter has changed, an error is
     * returned.</p>  <p>This token is listed as not required because Amazon
     * Web Services SDKs (for example the Amazon Web Services SDK for Java)
     * auto-generate the token for users. If you are not using the Amazon Web Services
     * SDK or the Amazon Web Services CLI, you must provide this token or the action
     * will fail.</p> 
     */
    inline StartSessionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * session is idempotent (executes only once). If another
     * <code>StartSessionRequest</code> is received, the same response is returned and
     * another session is not created. If a parameter has changed, an error is
     * returned.</p>  <p>This token is listed as not required because Amazon
     * Web Services SDKs (for example the Amazon Web Services SDK for Java)
     * auto-generate the token for users. If you are not using the Amazon Web Services
     * SDK or the Amazon Web Services CLI, you must provide this token or the action
     * will fail.</p> 
     */
    inline StartSessionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;

    EngineConfiguration m_engineConfiguration;
    bool m_engineConfigurationHasBeenSet = false;

    Aws::String m_notebookVersion;
    bool m_notebookVersionHasBeenSet = false;

    int m_sessionIdleTimeoutInMinutes;
    bool m_sessionIdleTimeoutInMinutesHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
