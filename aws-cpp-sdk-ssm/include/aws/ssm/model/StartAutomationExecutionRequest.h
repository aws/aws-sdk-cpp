/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API StartAutomationExecutionRequest : public SSMRequest
  {
  public:
    StartAutomationExecutionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Automation document to use for this execution.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>The name of the Automation document to use for this execution.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The name of the Automation document to use for this execution.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The name of the Automation document to use for this execution.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * <p>The name of the Automation document to use for this execution.</p>
     */
    inline StartAutomationExecutionRequest& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the Automation document to use for this execution.</p>
     */
    inline StartAutomationExecutionRequest& WithDocumentName(Aws::String&& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the Automation document to use for this execution.</p>
     */
    inline StartAutomationExecutionRequest& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}

    /**
     * <p>The version of the Automation document to use for this execution.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The version of the Automation document to use for this execution.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The version of the Automation document to use for this execution.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The version of the Automation document to use for this execution.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The version of the Automation document to use for this execution.</p>
     */
    inline StartAutomationExecutionRequest& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The version of the Automation document to use for this execution.</p>
     */
    inline StartAutomationExecutionRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The version of the Automation document to use for this execution.</p>
     */
    inline StartAutomationExecutionRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline StartAutomationExecutionRequest& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline StartAutomationExecutionRequest& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(value); return *this;}

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline StartAutomationExecutionRequest& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline StartAutomationExecutionRequest& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline StartAutomationExecutionRequest& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline StartAutomationExecutionRequest& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline StartAutomationExecutionRequest& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation document.</p>
     */
    inline StartAutomationExecutionRequest& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

  private:
    Aws::String m_documentName;
    bool m_documentNameHasBeenSet;
    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet;
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
