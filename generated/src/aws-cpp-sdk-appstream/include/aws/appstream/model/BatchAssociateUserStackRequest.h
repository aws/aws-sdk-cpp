/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/UserStackAssociation.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class BatchAssociateUserStackRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API BatchAssociateUserStackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchAssociateUserStack"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The list of UserStackAssociation objects.</p>
     */
    inline const Aws::Vector<UserStackAssociation>& GetUserStackAssociations() const { return m_userStackAssociations; }
    inline bool UserStackAssociationsHasBeenSet() const { return m_userStackAssociationsHasBeenSet; }
    template<typename UserStackAssociationsT = Aws::Vector<UserStackAssociation>>
    void SetUserStackAssociations(UserStackAssociationsT&& value) { m_userStackAssociationsHasBeenSet = true; m_userStackAssociations = std::forward<UserStackAssociationsT>(value); }
    template<typename UserStackAssociationsT = Aws::Vector<UserStackAssociation>>
    BatchAssociateUserStackRequest& WithUserStackAssociations(UserStackAssociationsT&& value) { SetUserStackAssociations(std::forward<UserStackAssociationsT>(value)); return *this;}
    template<typename UserStackAssociationsT = UserStackAssociation>
    BatchAssociateUserStackRequest& AddUserStackAssociations(UserStackAssociationsT&& value) { m_userStackAssociationsHasBeenSet = true; m_userStackAssociations.emplace_back(std::forward<UserStackAssociationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<UserStackAssociation> m_userStackAssociations;
    bool m_userStackAssociationsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
