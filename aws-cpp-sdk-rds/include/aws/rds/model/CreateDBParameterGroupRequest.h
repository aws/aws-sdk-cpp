﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBParameterGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API CreateDBParameterGroupRequest : public RDSRequest
  {
  public:
    CreateDBParameterGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 alphanumeric characters</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <note> <p>This value is stored as a lowercase
     * string.</p> </note>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 alphanumeric characters</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <note> <p>This value is stored as a lowercase
     * string.</p> </note>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 alphanumeric characters</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <note> <p>This value is stored as a lowercase
     * string.</p> </note>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 alphanumeric characters</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <note> <p>This value is stored as a lowercase
     * string.</p> </note>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 alphanumeric characters</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <note> <p>This value is stored as a lowercase
     * string.</p> </note>
     */
    inline CreateDBParameterGroupRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 alphanumeric characters</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <note> <p>This value is stored as a lowercase
     * string.</p> </note>
     */
    inline CreateDBParameterGroupRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be 1 to 255 alphanumeric characters</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <note> <p>This value is stored as a lowercase
     * string.</p> </note>
     */
    inline CreateDBParameterGroupRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The DB parameter group family name. A DB parameter group can be associated
     * with one and only one DB parameter group family, and can be applied only to a DB
     * instance running a database engine and engine version compatible with that DB
     * parameter group family.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }

    /**
     * <p>The DB parameter group family name. A DB parameter group can be associated
     * with one and only one DB parameter group family, and can be applied only to a DB
     * instance running a database engine and engine version compatible with that DB
     * parameter group family.</p>
     */
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }

    /**
     * <p>The DB parameter group family name. A DB parameter group can be associated
     * with one and only one DB parameter group family, and can be applied only to a DB
     * instance running a database engine and engine version compatible with that DB
     * parameter group family.</p>
     */
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }

    /**
     * <p>The DB parameter group family name. A DB parameter group can be associated
     * with one and only one DB parameter group family, and can be applied only to a DB
     * instance running a database engine and engine version compatible with that DB
     * parameter group family.</p>
     */
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily.assign(value); }

    /**
     * <p>The DB parameter group family name. A DB parameter group can be associated
     * with one and only one DB parameter group family, and can be applied only to a DB
     * instance running a database engine and engine version compatible with that DB
     * parameter group family.</p>
     */
    inline CreateDBParameterGroupRequest& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}

    /**
     * <p>The DB parameter group family name. A DB parameter group can be associated
     * with one and only one DB parameter group family, and can be applied only to a DB
     * instance running a database engine and engine version compatible with that DB
     * parameter group family.</p>
     */
    inline CreateDBParameterGroupRequest& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(value); return *this;}

    /**
     * <p>The DB parameter group family name. A DB parameter group can be associated
     * with one and only one DB parameter group family, and can be applied only to a DB
     * instance running a database engine and engine version compatible with that DB
     * parameter group family.</p>
     */
    inline CreateDBParameterGroupRequest& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}

    /**
     * <p>The description for the DB parameter group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the DB parameter group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the DB parameter group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the DB parameter group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the DB parameter group.</p>
     */
    inline CreateDBParameterGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the DB parameter group.</p>
     */
    inline CreateDBParameterGroupRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the DB parameter group.</p>
     */
    inline CreateDBParameterGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline CreateDBParameterGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateDBParameterGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    
    inline CreateDBParameterGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateDBParameterGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet;
    Aws::String m_dBParameterGroupFamily;
    bool m_dBParameterGroupFamilyHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
