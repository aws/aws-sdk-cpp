/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/PipelineVariable.h>
#include <aws/codepipeline/model/SourceRevisionOverride.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>StartPipelineExecution</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/StartPipelineExecutionInput">AWS
   * API Reference</a></p>
   */
  class StartPipelineExecutionRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API StartPipelineExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartPipelineExecution"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the pipeline to start.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StartPipelineExecutionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StartPipelineExecutionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StartPipelineExecutionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list that overrides pipeline variables for a pipeline execution that's
     * being started. Variable names must match <code>[A-Za-z0-9@\-_]+</code>, and the
     * values can be anything except an empty string.</p>
     */
    inline const Aws::Vector<PipelineVariable>& GetVariables() const{ return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    inline void SetVariables(const Aws::Vector<PipelineVariable>& value) { m_variablesHasBeenSet = true; m_variables = value; }
    inline void SetVariables(Aws::Vector<PipelineVariable>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }
    inline StartPipelineExecutionRequest& WithVariables(const Aws::Vector<PipelineVariable>& value) { SetVariables(value); return *this;}
    inline StartPipelineExecutionRequest& WithVariables(Aws::Vector<PipelineVariable>&& value) { SetVariables(std::move(value)); return *this;}
    inline StartPipelineExecutionRequest& AddVariables(const PipelineVariable& value) { m_variablesHasBeenSet = true; m_variables.push_back(value); return *this; }
    inline StartPipelineExecutionRequest& AddVariables(PipelineVariable&& value) { m_variablesHasBeenSet = true; m_variables.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID used to identify a unique execution
     * request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline StartPipelineExecutionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline StartPipelineExecutionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline StartPipelineExecutionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list that allows you to specify, or override, the source revision for a
     * pipeline execution that's being started. A source revision is the version with
     * all the changes to your application code, or source artifact, for the pipeline
     * execution.</p>
     */
    inline const Aws::Vector<SourceRevisionOverride>& GetSourceRevisions() const{ return m_sourceRevisions; }
    inline bool SourceRevisionsHasBeenSet() const { return m_sourceRevisionsHasBeenSet; }
    inline void SetSourceRevisions(const Aws::Vector<SourceRevisionOverride>& value) { m_sourceRevisionsHasBeenSet = true; m_sourceRevisions = value; }
    inline void SetSourceRevisions(Aws::Vector<SourceRevisionOverride>&& value) { m_sourceRevisionsHasBeenSet = true; m_sourceRevisions = std::move(value); }
    inline StartPipelineExecutionRequest& WithSourceRevisions(const Aws::Vector<SourceRevisionOverride>& value) { SetSourceRevisions(value); return *this;}
    inline StartPipelineExecutionRequest& WithSourceRevisions(Aws::Vector<SourceRevisionOverride>&& value) { SetSourceRevisions(std::move(value)); return *this;}
    inline StartPipelineExecutionRequest& AddSourceRevisions(const SourceRevisionOverride& value) { m_sourceRevisionsHasBeenSet = true; m_sourceRevisions.push_back(value); return *this; }
    inline StartPipelineExecutionRequest& AddSourceRevisions(SourceRevisionOverride&& value) { m_sourceRevisionsHasBeenSet = true; m_sourceRevisions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<PipelineVariable> m_variables;
    bool m_variablesHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<SourceRevisionOverride> m_sourceRevisions;
    bool m_sourceRevisionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
