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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API StartSessionRequest : public SSMRequest
  {
  public:
    StartSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSession"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The instance to connect to for the session.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The instance to connect to for the session.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The instance to connect to for the session.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The instance to connect to for the session.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The instance to connect to for the session.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The instance to connect to for the session.</p>
     */
    inline StartSessionRequest& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The instance to connect to for the session.</p>
     */
    inline StartSessionRequest& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The instance to connect to for the session.</p>
     */
    inline StartSessionRequest& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>The name of the SSM document to define the parameters and plugin settings for
     * the session. For example, <code>SSM-SessionManagerRunShell</code>. If no
     * document name is provided, a shell to the instance is launched by default.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>The name of the SSM document to define the parameters and plugin settings for
     * the session. For example, <code>SSM-SessionManagerRunShell</code>. If no
     * document name is provided, a shell to the instance is launched by default.</p>
     */
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }

    /**
     * <p>The name of the SSM document to define the parameters and plugin settings for
     * the session. For example, <code>SSM-SessionManagerRunShell</code>. If no
     * document name is provided, a shell to the instance is launched by default.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The name of the SSM document to define the parameters and plugin settings for
     * the session. For example, <code>SSM-SessionManagerRunShell</code>. If no
     * document name is provided, a shell to the instance is launched by default.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }

    /**
     * <p>The name of the SSM document to define the parameters and plugin settings for
     * the session. For example, <code>SSM-SessionManagerRunShell</code>. If no
     * document name is provided, a shell to the instance is launched by default.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * <p>The name of the SSM document to define the parameters and plugin settings for
     * the session. For example, <code>SSM-SessionManagerRunShell</code>. If no
     * document name is provided, a shell to the instance is launched by default.</p>
     */
    inline StartSessionRequest& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the SSM document to define the parameters and plugin settings for
     * the session. For example, <code>SSM-SessionManagerRunShell</code>. If no
     * document name is provided, a shell to the instance is launched by default.</p>
     */
    inline StartSessionRequest& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}

    /**
     * <p>The name of the SSM document to define the parameters and plugin settings for
     * the session. For example, <code>SSM-SessionManagerRunShell</code>. If no
     * document name is provided, a shell to the instance is launched by default.</p>
     */
    inline StartSessionRequest& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline StartSessionRequest& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline StartSessionRequest& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline StartSessionRequest& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline StartSessionRequest& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline StartSessionRequest& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline StartSessionRequest& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline StartSessionRequest& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline StartSessionRequest& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_target;
    bool m_targetHasBeenSet;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
