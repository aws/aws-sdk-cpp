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
  class GetCollaborationMLInputChannelRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API GetCollaborationMLInputChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCollaborationMLInputChannel"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ML input channel that you want to
     * get.</p>
     */
    inline const Aws::String& GetMlInputChannelArn() const { return m_mlInputChannelArn; }
    inline bool MlInputChannelArnHasBeenSet() const { return m_mlInputChannelArnHasBeenSet; }
    template<typename MlInputChannelArnT = Aws::String>
    void SetMlInputChannelArn(MlInputChannelArnT&& value) { m_mlInputChannelArnHasBeenSet = true; m_mlInputChannelArn = std::forward<MlInputChannelArnT>(value); }
    template<typename MlInputChannelArnT = Aws::String>
    GetCollaborationMLInputChannelRequest& WithMlInputChannelArn(MlInputChannelArnT&& value) { SetMlInputChannelArn(std::forward<MlInputChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaboration ID of the collaboration that contains the ML input channel
     * that you want to get.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const { return m_collaborationIdentifier; }
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }
    template<typename CollaborationIdentifierT = Aws::String>
    void SetCollaborationIdentifier(CollaborationIdentifierT&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::forward<CollaborationIdentifierT>(value); }
    template<typename CollaborationIdentifierT = Aws::String>
    GetCollaborationMLInputChannelRequest& WithCollaborationIdentifier(CollaborationIdentifierT&& value) { SetCollaborationIdentifier(std::forward<CollaborationIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mlInputChannelArn;
    bool m_mlInputChannelArnHasBeenSet = false;

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
