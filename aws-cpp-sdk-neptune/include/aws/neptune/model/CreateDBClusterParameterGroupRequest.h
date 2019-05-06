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
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class AWS_NEPTUNE_API CreateDBClusterParameterGroupRequest : public NeptuneRequest
  {
  public:
    CreateDBClusterParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBClusterParameterGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match the name of an existing DBClusterParameterGroup.</p> </li> </ul>
     * <note> <p>This value is stored as a lowercase string.</p> </note>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match the name of an existing DBClusterParameterGroup.</p> </li> </ul>
     * <note> <p>This value is stored as a lowercase string.</p> </note>
     */
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match the name of an existing DBClusterParameterGroup.</p> </li> </ul>
     * <note> <p>This value is stored as a lowercase string.</p> </note>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match the name of an existing DBClusterParameterGroup.</p> </li> </ul>
     * <note> <p>This value is stored as a lowercase string.</p> </note>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match the name of an existing DBClusterParameterGroup.</p> </li> </ul>
     * <note> <p>This value is stored as a lowercase string.</p> </note>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match the name of an existing DBClusterParameterGroup.</p> </li> </ul>
     * <note> <p>This value is stored as a lowercase string.</p> </note>
     */
    inline CreateDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match the name of an existing DBClusterParameterGroup.</p> </li> </ul>
     * <note> <p>This value is stored as a lowercase string.</p> </note>
     */
    inline CreateDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match the name of an existing DBClusterParameterGroup.</p> </li> </ul>
     * <note> <p>This value is stored as a lowercase string.</p> </note>
     */
    inline CreateDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}


    /**
     * <p>The DB cluster parameter group family name. A DB cluster parameter group can
     * be associated with one and only one DB cluster parameter group family, and can
     * be applied only to a DB cluster running a database engine and engine version
     * compatible with that DB cluster parameter group family.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }

    /**
     * <p>The DB cluster parameter group family name. A DB cluster parameter group can
     * be associated with one and only one DB cluster parameter group family, and can
     * be applied only to a DB cluster running a database engine and engine version
     * compatible with that DB cluster parameter group family.</p>
     */
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }

    /**
     * <p>The DB cluster parameter group family name. A DB cluster parameter group can
     * be associated with one and only one DB cluster parameter group family, and can
     * be applied only to a DB cluster running a database engine and engine version
     * compatible with that DB cluster parameter group family.</p>
     */
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }

    /**
     * <p>The DB cluster parameter group family name. A DB cluster parameter group can
     * be associated with one and only one DB cluster parameter group family, and can
     * be applied only to a DB cluster running a database engine and engine version
     * compatible with that DB cluster parameter group family.</p>
     */
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::move(value); }

    /**
     * <p>The DB cluster parameter group family name. A DB cluster parameter group can
     * be associated with one and only one DB cluster parameter group family, and can
     * be applied only to a DB cluster running a database engine and engine version
     * compatible with that DB cluster parameter group family.</p>
     */
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily.assign(value); }

    /**
     * <p>The DB cluster parameter group family name. A DB cluster parameter group can
     * be associated with one and only one DB cluster parameter group family, and can
     * be applied only to a DB cluster running a database engine and engine version
     * compatible with that DB cluster parameter group family.</p>
     */
    inline CreateDBClusterParameterGroupRequest& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}

    /**
     * <p>The DB cluster parameter group family name. A DB cluster parameter group can
     * be associated with one and only one DB cluster parameter group family, and can
     * be applied only to a DB cluster running a database engine and engine version
     * compatible with that DB cluster parameter group family.</p>
     */
    inline CreateDBClusterParameterGroupRequest& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>The DB cluster parameter group family name. A DB cluster parameter group can
     * be associated with one and only one DB cluster parameter group family, and can
     * be applied only to a DB cluster running a database engine and engine version
     * compatible with that DB cluster parameter group family.</p>
     */
    inline CreateDBClusterParameterGroupRequest& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}


    /**
     * <p>The description for the DB cluster parameter group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the DB cluster parameter group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the DB cluster parameter group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the DB cluster parameter group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the DB cluster parameter group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the DB cluster parameter group.</p>
     */
    inline CreateDBClusterParameterGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the DB cluster parameter group.</p>
     */
    inline CreateDBClusterParameterGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the DB cluster parameter group.</p>
     */
    inline CreateDBClusterParameterGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The tags to be assigned to the new DB cluster parameter group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be assigned to the new DB cluster parameter group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be assigned to the new DB cluster parameter group.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to the new DB cluster parameter group.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be assigned to the new DB cluster parameter group.</p>
     */
    inline CreateDBClusterParameterGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the new DB cluster parameter group.</p>
     */
    inline CreateDBClusterParameterGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be assigned to the new DB cluster parameter group.</p>
     */
    inline CreateDBClusterParameterGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be assigned to the new DB cluster parameter group.</p>
     */
    inline CreateDBClusterParameterGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet;

    Aws::String m_dBParameterGroupFamily;
    bool m_dBParameterGroupFamilyHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
