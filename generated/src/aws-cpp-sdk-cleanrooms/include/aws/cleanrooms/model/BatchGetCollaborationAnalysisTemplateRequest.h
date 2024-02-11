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
    AWS_CLEANROOMS_API BatchGetCollaborationAnalysisTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetCollaborationAnalysisTemplate"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const{ return m_collaborationIdentifier; }

    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline void SetCollaborationIdentifier(const Aws::String& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = value; }

    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline void SetCollaborationIdentifier(Aws::String&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline void SetCollaborationIdentifier(const char* value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline BatchGetCollaborationAnalysisTemplateRequest& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline BatchGetCollaborationAnalysisTemplateRequest& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline BatchGetCollaborationAnalysisTemplateRequest& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAnalysisTemplateArns() const{ return m_analysisTemplateArns; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline bool AnalysisTemplateArnsHasBeenSet() const { return m_analysisTemplateArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline void SetAnalysisTemplateArns(const Aws::Vector<Aws::String>& value) { m_analysisTemplateArnsHasBeenSet = true; m_analysisTemplateArns = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline void SetAnalysisTemplateArns(Aws::Vector<Aws::String>&& value) { m_analysisTemplateArnsHasBeenSet = true; m_analysisTemplateArns = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline BatchGetCollaborationAnalysisTemplateRequest& WithAnalysisTemplateArns(const Aws::Vector<Aws::String>& value) { SetAnalysisTemplateArns(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline BatchGetCollaborationAnalysisTemplateRequest& WithAnalysisTemplateArns(Aws::Vector<Aws::String>&& value) { SetAnalysisTemplateArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline BatchGetCollaborationAnalysisTemplateRequest& AddAnalysisTemplateArns(const Aws::String& value) { m_analysisTemplateArnsHasBeenSet = true; m_analysisTemplateArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline BatchGetCollaborationAnalysisTemplateRequest& AddAnalysisTemplateArns(Aws::String&& value) { m_analysisTemplateArnsHasBeenSet = true; m_analysisTemplateArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline BatchGetCollaborationAnalysisTemplateRequest& AddAnalysisTemplateArns(const char* value) { m_analysisTemplateArnsHasBeenSet = true; m_analysisTemplateArns.push_back(value); return *this; }

  private:

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_analysisTemplateArns;
    bool m_analysisTemplateArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
