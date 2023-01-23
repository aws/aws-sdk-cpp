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
  class BatchDisassociateUserStackRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API BatchDisassociateUserStackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDisassociateUserStack"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The list of UserStackAssociation objects.</p>
     */
    inline const Aws::Vector<UserStackAssociation>& GetUserStackAssociations() const{ return m_userStackAssociations; }

    /**
     * <p>The list of UserStackAssociation objects.</p>
     */
    inline bool UserStackAssociationsHasBeenSet() const { return m_userStackAssociationsHasBeenSet; }

    /**
     * <p>The list of UserStackAssociation objects.</p>
     */
    inline void SetUserStackAssociations(const Aws::Vector<UserStackAssociation>& value) { m_userStackAssociationsHasBeenSet = true; m_userStackAssociations = value; }

    /**
     * <p>The list of UserStackAssociation objects.</p>
     */
    inline void SetUserStackAssociations(Aws::Vector<UserStackAssociation>&& value) { m_userStackAssociationsHasBeenSet = true; m_userStackAssociations = std::move(value); }

    /**
     * <p>The list of UserStackAssociation objects.</p>
     */
    inline BatchDisassociateUserStackRequest& WithUserStackAssociations(const Aws::Vector<UserStackAssociation>& value) { SetUserStackAssociations(value); return *this;}

    /**
     * <p>The list of UserStackAssociation objects.</p>
     */
    inline BatchDisassociateUserStackRequest& WithUserStackAssociations(Aws::Vector<UserStackAssociation>&& value) { SetUserStackAssociations(std::move(value)); return *this;}

    /**
     * <p>The list of UserStackAssociation objects.</p>
     */
    inline BatchDisassociateUserStackRequest& AddUserStackAssociations(const UserStackAssociation& value) { m_userStackAssociationsHasBeenSet = true; m_userStackAssociations.push_back(value); return *this; }

    /**
     * <p>The list of UserStackAssociation objects.</p>
     */
    inline BatchDisassociateUserStackRequest& AddUserStackAssociations(UserStackAssociation&& value) { m_userStackAssociationsHasBeenSet = true; m_userStackAssociations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UserStackAssociation> m_userStackAssociations;
    bool m_userStackAssociationsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
