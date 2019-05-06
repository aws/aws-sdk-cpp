/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_APPSTREAM_API BatchAssociateUserStackRequest : public AppStreamRequest
  {
  public:
    BatchAssociateUserStackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchAssociateUserStack"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline BatchAssociateUserStackRequest& WithUserStackAssociations(const Aws::Vector<UserStackAssociation>& value) { SetUserStackAssociations(value); return *this;}

    /**
     * <p>The list of UserStackAssociation objects.</p>
     */
    inline BatchAssociateUserStackRequest& WithUserStackAssociations(Aws::Vector<UserStackAssociation>&& value) { SetUserStackAssociations(std::move(value)); return *this;}

    /**
     * <p>The list of UserStackAssociation objects.</p>
     */
    inline BatchAssociateUserStackRequest& AddUserStackAssociations(const UserStackAssociation& value) { m_userStackAssociationsHasBeenSet = true; m_userStackAssociations.push_back(value); return *this; }

    /**
     * <p>The list of UserStackAssociation objects.</p>
     */
    inline BatchAssociateUserStackRequest& AddUserStackAssociations(UserStackAssociation&& value) { m_userStackAssociationsHasBeenSet = true; m_userStackAssociations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UserStackAssociation> m_userStackAssociations;
    bool m_userStackAssociationsHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
