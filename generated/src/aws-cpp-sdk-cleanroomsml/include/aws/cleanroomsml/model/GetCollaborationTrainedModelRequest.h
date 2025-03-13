/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/CleanRoomsMLRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

  /**
   */
  class GetCollaborationTrainedModelRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API GetCollaborationTrainedModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCollaborationTrainedModel"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model that you want to return
     * information about.</p>
     */
    inline const Aws::String& GetTrainedModelArn() const { return m_trainedModelArn; }
    inline bool TrainedModelArnHasBeenSet() const { return m_trainedModelArnHasBeenSet; }
    template<typename TrainedModelArnT = Aws::String>
    void SetTrainedModelArn(TrainedModelArnT&& value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn = std::forward<TrainedModelArnT>(value); }
    template<typename TrainedModelArnT = Aws::String>
    GetCollaborationTrainedModelRequest& WithTrainedModelArn(TrainedModelArnT&& value) { SetTrainedModelArn(std::forward<TrainedModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaboration ID that contains the trained model that you want to return
     * information about.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const { return m_collaborationIdentifier; }
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }
    template<typename CollaborationIdentifierT = Aws::String>
    void SetCollaborationIdentifier(CollaborationIdentifierT&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::forward<CollaborationIdentifierT>(value); }
    template<typename CollaborationIdentifierT = Aws::String>
    GetCollaborationTrainedModelRequest& WithCollaborationIdentifier(CollaborationIdentifierT&& value) { SetCollaborationIdentifier(std::forward<CollaborationIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trainedModelArn;
    bool m_trainedModelArnHasBeenSet = false;

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
