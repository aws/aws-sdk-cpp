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
    AWS_CODEPIPELINE_API StartPipelineExecutionRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartPipelineExecutionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list that overrides pipeline variables for a pipeline execution that's
     * being started. Variable names must match <code>[A-Za-z0-9@\-_]+</code>, and the
     * values can be anything except an empty string.</p>
     */
    inline const Aws::Vector<PipelineVariable>& GetVariables() const { return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    template<typename VariablesT = Aws::Vector<PipelineVariable>>
    void SetVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables = std::forward<VariablesT>(value); }
    template<typename VariablesT = Aws::Vector<PipelineVariable>>
    StartPipelineExecutionRequest& WithVariables(VariablesT&& value) { SetVariables(std::forward<VariablesT>(value)); return *this;}
    template<typename VariablesT = PipelineVariable>
    StartPipelineExecutionRequest& AddVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables.emplace_back(std::forward<VariablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID used to identify a unique execution
     * request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    StartPipelineExecutionRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list that allows you to specify, or override, the source revision for a
     * pipeline execution that's being started. A source revision is the version with
     * all the changes to your application code, or source artifact, for the pipeline
     * execution.</p>
     */
    inline const Aws::Vector<SourceRevisionOverride>& GetSourceRevisions() const { return m_sourceRevisions; }
    inline bool SourceRevisionsHasBeenSet() const { return m_sourceRevisionsHasBeenSet; }
    template<typename SourceRevisionsT = Aws::Vector<SourceRevisionOverride>>
    void SetSourceRevisions(SourceRevisionsT&& value) { m_sourceRevisionsHasBeenSet = true; m_sourceRevisions = std::forward<SourceRevisionsT>(value); }
    template<typename SourceRevisionsT = Aws::Vector<SourceRevisionOverride>>
    StartPipelineExecutionRequest& WithSourceRevisions(SourceRevisionsT&& value) { SetSourceRevisions(std::forward<SourceRevisionsT>(value)); return *this;}
    template<typename SourceRevisionsT = SourceRevisionOverride>
    StartPipelineExecutionRequest& AddSourceRevisions(SourceRevisionsT&& value) { m_sourceRevisionsHasBeenSet = true; m_sourceRevisions.emplace_back(std::forward<SourceRevisionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<PipelineVariable> m_variables;
    bool m_variablesHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::Vector<SourceRevisionOverride> m_sourceRevisions;
    bool m_sourceRevisionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
