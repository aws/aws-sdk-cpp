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
  class UpdateIdMappingTableRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API UpdateIdMappingTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIdMappingTable"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the ID mapping table that you want to update.</p>
     */
    inline const Aws::String& GetIdMappingTableIdentifier() const{ return m_idMappingTableIdentifier; }
    inline bool IdMappingTableIdentifierHasBeenSet() const { return m_idMappingTableIdentifierHasBeenSet; }
    inline void SetIdMappingTableIdentifier(const Aws::String& value) { m_idMappingTableIdentifierHasBeenSet = true; m_idMappingTableIdentifier = value; }
    inline void SetIdMappingTableIdentifier(Aws::String&& value) { m_idMappingTableIdentifierHasBeenSet = true; m_idMappingTableIdentifier = std::move(value); }
    inline void SetIdMappingTableIdentifier(const char* value) { m_idMappingTableIdentifierHasBeenSet = true; m_idMappingTableIdentifier.assign(value); }
    inline UpdateIdMappingTableRequest& WithIdMappingTableIdentifier(const Aws::String& value) { SetIdMappingTableIdentifier(value); return *this;}
    inline UpdateIdMappingTableRequest& WithIdMappingTableIdentifier(Aws::String&& value) { SetIdMappingTableIdentifier(std::move(value)); return *this;}
    inline UpdateIdMappingTableRequest& WithIdMappingTableIdentifier(const char* value) { SetIdMappingTableIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the membership that contains the ID mapping table
     * that you want to update.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline UpdateIdMappingTableRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline UpdateIdMappingTableRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline UpdateIdMappingTableRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the ID mapping table.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateIdMappingTableRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateIdMappingTableRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateIdMappingTableRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline UpdateIdMappingTableRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline UpdateIdMappingTableRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline UpdateIdMappingTableRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}
  private:

    Aws::String m_idMappingTableIdentifier;
    bool m_idMappingTableIdentifierHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
