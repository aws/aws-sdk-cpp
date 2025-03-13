/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class BatchGetCollaborationAnalysisTemplateRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API BatchGetCollaborationAnalysisTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetCollaborationAnalysisTemplate"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const { return m_collaborationIdentifier; }
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }
    template<typename CollaborationIdentifierT = Aws::String>
    void SetCollaborationIdentifier(CollaborationIdentifierT&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::forward<CollaborationIdentifierT>(value); }
    template<typename CollaborationIdentifierT = Aws::String>
    BatchGetCollaborationAnalysisTemplateRequest& WithCollaborationIdentifier(CollaborationIdentifierT&& value) { SetCollaborationIdentifier(std::forward<CollaborationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAnalysisTemplateArns() const { return m_analysisTemplateArns; }
    inline bool AnalysisTemplateArnsHasBeenSet() const { return m_analysisTemplateArnsHasBeenSet; }
    template<typename AnalysisTemplateArnsT = Aws::Vector<Aws::String>>
    void SetAnalysisTemplateArns(AnalysisTemplateArnsT&& value) { m_analysisTemplateArnsHasBeenSet = true; m_analysisTemplateArns = std::forward<AnalysisTemplateArnsT>(value); }
    template<typename AnalysisTemplateArnsT = Aws::Vector<Aws::String>>
    BatchGetCollaborationAnalysisTemplateRequest& WithAnalysisTemplateArns(AnalysisTemplateArnsT&& value) { SetAnalysisTemplateArns(std::forward<AnalysisTemplateArnsT>(value)); return *this;}
    template<typename AnalysisTemplateArnsT = Aws::String>
    BatchGetCollaborationAnalysisTemplateRequest& AddAnalysisTemplateArns(AnalysisTemplateArnsT&& value) { m_analysisTemplateArnsHasBeenSet = true; m_analysisTemplateArns.emplace_back(std::forward<AnalysisTemplateArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_analysisTemplateArns;
    bool m_analysisTemplateArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
