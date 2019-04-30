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
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/MemberStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>A summary of configuration properties for a member.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/MemberSummary">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API MemberSummary
  {
  public:
    MemberSummary();
    MemberSummary(Aws::Utils::Json::JsonView jsonValue);
    MemberSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the member.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline MemberSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline MemberSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the member.</p>
     */
    inline MemberSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the member.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the member.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the member.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the member.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the member.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the member.</p>
     */
    inline MemberSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the member.</p>
     */
    inline MemberSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the member.</p>
     */
    inline MemberSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional description of the member.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description of the member.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description of the member.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description of the member.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description of the member.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description of the member.</p>
     */
    inline MemberSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description of the member.</p>
     */
    inline MemberSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the member.</p>
     */
    inline MemberSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The status of the member.</p> <ul> <li> <p> <code>CREATING</code> - The AWS
     * account is in the process of creating a member.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The member has been created and can participate in the
     * network.</p> </li> <li> <p> <code>CREATE_FAILED</code> - The AWS account
     * attempted to create a member and creation failed.</p> </li> <li> <p>
     * <code>DELETING</code> - The member and all associated resources are in the
     * process of being deleted. Either the AWS account that owns the member deleted
     * it, or the member is being deleted as the result of an <code>APPROVED</code>
     * <code>PROPOSAL</code> to remove the member.</p> </li> <li> <p>
     * <code>DELETED</code> - The member can no longer participate on the network and
     * all associated resources are deleted. Either the AWS account that owns the
     * member deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li>
     * </ul>
     */
    inline const MemberStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the member.</p> <ul> <li> <p> <code>CREATING</code> - The AWS
     * account is in the process of creating a member.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The member has been created and can participate in the
     * network.</p> </li> <li> <p> <code>CREATE_FAILED</code> - The AWS account
     * attempted to create a member and creation failed.</p> </li> <li> <p>
     * <code>DELETING</code> - The member and all associated resources are in the
     * process of being deleted. Either the AWS account that owns the member deleted
     * it, or the member is being deleted as the result of an <code>APPROVED</code>
     * <code>PROPOSAL</code> to remove the member.</p> </li> <li> <p>
     * <code>DELETED</code> - The member can no longer participate on the network and
     * all associated resources are deleted. Either the AWS account that owns the
     * member deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li>
     * </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the member.</p> <ul> <li> <p> <code>CREATING</code> - The AWS
     * account is in the process of creating a member.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The member has been created and can participate in the
     * network.</p> </li> <li> <p> <code>CREATE_FAILED</code> - The AWS account
     * attempted to create a member and creation failed.</p> </li> <li> <p>
     * <code>DELETING</code> - The member and all associated resources are in the
     * process of being deleted. Either the AWS account that owns the member deleted
     * it, or the member is being deleted as the result of an <code>APPROVED</code>
     * <code>PROPOSAL</code> to remove the member.</p> </li> <li> <p>
     * <code>DELETED</code> - The member can no longer participate on the network and
     * all associated resources are deleted. Either the AWS account that owns the
     * member deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li>
     * </ul>
     */
    inline void SetStatus(const MemberStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the member.</p> <ul> <li> <p> <code>CREATING</code> - The AWS
     * account is in the process of creating a member.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The member has been created and can participate in the
     * network.</p> </li> <li> <p> <code>CREATE_FAILED</code> - The AWS account
     * attempted to create a member and creation failed.</p> </li> <li> <p>
     * <code>DELETING</code> - The member and all associated resources are in the
     * process of being deleted. Either the AWS account that owns the member deleted
     * it, or the member is being deleted as the result of an <code>APPROVED</code>
     * <code>PROPOSAL</code> to remove the member.</p> </li> <li> <p>
     * <code>DELETED</code> - The member can no longer participate on the network and
     * all associated resources are deleted. Either the AWS account that owns the
     * member deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li>
     * </ul>
     */
    inline void SetStatus(MemberStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the member.</p> <ul> <li> <p> <code>CREATING</code> - The AWS
     * account is in the process of creating a member.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The member has been created and can participate in the
     * network.</p> </li> <li> <p> <code>CREATE_FAILED</code> - The AWS account
     * attempted to create a member and creation failed.</p> </li> <li> <p>
     * <code>DELETING</code> - The member and all associated resources are in the
     * process of being deleted. Either the AWS account that owns the member deleted
     * it, or the member is being deleted as the result of an <code>APPROVED</code>
     * <code>PROPOSAL</code> to remove the member.</p> </li> <li> <p>
     * <code>DELETED</code> - The member can no longer participate on the network and
     * all associated resources are deleted. Either the AWS account that owns the
     * member deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li>
     * </ul>
     */
    inline MemberSummary& WithStatus(const MemberStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the member.</p> <ul> <li> <p> <code>CREATING</code> - The AWS
     * account is in the process of creating a member.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The member has been created and can participate in the
     * network.</p> </li> <li> <p> <code>CREATE_FAILED</code> - The AWS account
     * attempted to create a member and creation failed.</p> </li> <li> <p>
     * <code>DELETING</code> - The member and all associated resources are in the
     * process of being deleted. Either the AWS account that owns the member deleted
     * it, or the member is being deleted as the result of an <code>APPROVED</code>
     * <code>PROPOSAL</code> to remove the member.</p> </li> <li> <p>
     * <code>DELETED</code> - The member can no longer participate on the network and
     * all associated resources are deleted. Either the AWS account that owns the
     * member deleted it, or the member is being deleted as the result of an
     * <code>APPROVED</code> <code>PROPOSAL</code> to remove the member.</p> </li>
     * </ul>
     */
    inline MemberSummary& WithStatus(MemberStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time that the member was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time that the member was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time that the member was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time that the member was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time that the member was created.</p>
     */
    inline MemberSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time that the member was created.</p>
     */
    inline MemberSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>An indicator of whether the member is owned by your AWS account or a
     * different AWS account.</p>
     */
    inline bool GetIsOwned() const{ return m_isOwned; }

    /**
     * <p>An indicator of whether the member is owned by your AWS account or a
     * different AWS account.</p>
     */
    inline bool IsOwnedHasBeenSet() const { return m_isOwnedHasBeenSet; }

    /**
     * <p>An indicator of whether the member is owned by your AWS account or a
     * different AWS account.</p>
     */
    inline void SetIsOwned(bool value) { m_isOwnedHasBeenSet = true; m_isOwned = value; }

    /**
     * <p>An indicator of whether the member is owned by your AWS account or a
     * different AWS account.</p>
     */
    inline MemberSummary& WithIsOwned(bool value) { SetIsOwned(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    MemberStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    bool m_isOwned;
    bool m_isOwnedHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
