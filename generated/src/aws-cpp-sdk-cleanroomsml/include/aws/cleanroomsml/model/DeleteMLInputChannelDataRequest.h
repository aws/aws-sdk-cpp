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
  class DeleteMLInputChannelDataRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API DeleteMLInputChannelDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMLInputChannelData"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ML input channel that you want to
     * delete.</p>
     */
    inline const Aws::String& GetMlInputChannelArn() const{ return m_mlInputChannelArn; }
    inline bool MlInputChannelArnHasBeenSet() const { return m_mlInputChannelArnHasBeenSet; }
    inline void SetMlInputChannelArn(const Aws::String& value) { m_mlInputChannelArnHasBeenSet = true; m_mlInputChannelArn = value; }
    inline void SetMlInputChannelArn(Aws::String&& value) { m_mlInputChannelArnHasBeenSet = true; m_mlInputChannelArn = std::move(value); }
    inline void SetMlInputChannelArn(const char* value) { m_mlInputChannelArnHasBeenSet = true; m_mlInputChannelArn.assign(value); }
    inline DeleteMLInputChannelDataRequest& WithMlInputChannelArn(const Aws::String& value) { SetMlInputChannelArn(value); return *this;}
    inline DeleteMLInputChannelDataRequest& WithMlInputChannelArn(Aws::String&& value) { SetMlInputChannelArn(std::move(value)); return *this;}
    inline DeleteMLInputChannelDataRequest& WithMlInputChannelArn(const char* value) { SetMlInputChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership ID of the membership that contains the ML input channel you
     * want to delete.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline DeleteMLInputChannelDataRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline DeleteMLInputChannelDataRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline DeleteMLInputChannelDataRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_mlInputChannelArn;
    bool m_mlInputChannelArnHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
