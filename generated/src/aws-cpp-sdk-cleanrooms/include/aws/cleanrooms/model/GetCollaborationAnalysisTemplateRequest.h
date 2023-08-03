/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class GetCollaborationAnalysisTemplateRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API GetCollaborationAnalysisTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCollaborationAnalysisTemplate"; }

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
    inline GetCollaborationAnalysisTemplateRequest& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline GetCollaborationAnalysisTemplateRequest& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline GetCollaborationAnalysisTemplateRequest& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline const Aws::String& GetAnalysisTemplateArn() const{ return m_analysisTemplateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline bool AnalysisTemplateArnHasBeenSet() const { return m_analysisTemplateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline void SetAnalysisTemplateArn(const Aws::String& value) { m_analysisTemplateArnHasBeenSet = true; m_analysisTemplateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline void SetAnalysisTemplateArn(Aws::String&& value) { m_analysisTemplateArnHasBeenSet = true; m_analysisTemplateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline void SetAnalysisTemplateArn(const char* value) { m_analysisTemplateArnHasBeenSet = true; m_analysisTemplateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline GetCollaborationAnalysisTemplateRequest& WithAnalysisTemplateArn(const Aws::String& value) { SetAnalysisTemplateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline GetCollaborationAnalysisTemplateRequest& WithAnalysisTemplateArn(Aws::String&& value) { SetAnalysisTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the analysis template within a
     * collaboration.</p>
     */
    inline GetCollaborationAnalysisTemplateRequest& WithAnalysisTemplateArn(const char* value) { SetAnalysisTemplateArn(value); return *this;}

  private:

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    Aws::String m_analysisTemplateArn;
    bool m_analysisTemplateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
