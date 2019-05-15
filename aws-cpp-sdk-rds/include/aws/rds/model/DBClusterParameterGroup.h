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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains the details of an Amazon RDS DB cluster parameter group. </p>
   * <p>This data type is used as a response element in the
   * <code>DescribeDBClusterParameterGroups</code> action. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterParameterGroup">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DBClusterParameterGroup
  {
  public:
    DBClusterParameterGroup();
    DBClusterParameterGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBClusterParameterGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Provides the name of the DB cluster parameter group.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>Provides the name of the DB cluster parameter group.</p>
     */
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }

    /**
     * <p>Provides the name of the DB cluster parameter group.</p>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>Provides the name of the DB cluster parameter group.</p>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p>Provides the name of the DB cluster parameter group.</p>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>Provides the name of the DB cluster parameter group.</p>
     */
    inline DBClusterParameterGroup& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>Provides the name of the DB cluster parameter group.</p>
     */
    inline DBClusterParameterGroup& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>Provides the name of the DB cluster parameter group.</p>
     */
    inline DBClusterParameterGroup& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}


    /**
     * <p>Provides the name of the DB parameter group family that this DB cluster
     * parameter group is compatible with.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }

    /**
     * <p>Provides the name of the DB parameter group family that this DB cluster
     * parameter group is compatible with.</p>
     */
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }

    /**
     * <p>Provides the name of the DB parameter group family that this DB cluster
     * parameter group is compatible with.</p>
     */
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }

    /**
     * <p>Provides the name of the DB parameter group family that this DB cluster
     * parameter group is compatible with.</p>
     */
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::move(value); }

    /**
     * <p>Provides the name of the DB parameter group family that this DB cluster
     * parameter group is compatible with.</p>
     */
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily.assign(value); }

    /**
     * <p>Provides the name of the DB parameter group family that this DB cluster
     * parameter group is compatible with.</p>
     */
    inline DBClusterParameterGroup& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}

    /**
     * <p>Provides the name of the DB parameter group family that this DB cluster
     * parameter group is compatible with.</p>
     */
    inline DBClusterParameterGroup& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>Provides the name of the DB parameter group family that this DB cluster
     * parameter group is compatible with.</p>
     */
    inline DBClusterParameterGroup& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}


    /**
     * <p>Provides the customer-specified description for this DB cluster parameter
     * group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Provides the customer-specified description for this DB cluster parameter
     * group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Provides the customer-specified description for this DB cluster parameter
     * group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Provides the customer-specified description for this DB cluster parameter
     * group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Provides the customer-specified description for this DB cluster parameter
     * group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Provides the customer-specified description for this DB cluster parameter
     * group.</p>
     */
    inline DBClusterParameterGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Provides the customer-specified description for this DB cluster parameter
     * group.</p>
     */
    inline DBClusterParameterGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Provides the customer-specified description for this DB cluster parameter
     * group.</p>
     */
    inline DBClusterParameterGroup& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster parameter group.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupArn() const{ return m_dBClusterParameterGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster parameter group.</p>
     */
    inline bool DBClusterParameterGroupArnHasBeenSet() const { return m_dBClusterParameterGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster parameter group.</p>
     */
    inline void SetDBClusterParameterGroupArn(const Aws::String& value) { m_dBClusterParameterGroupArnHasBeenSet = true; m_dBClusterParameterGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster parameter group.</p>
     */
    inline void SetDBClusterParameterGroupArn(Aws::String&& value) { m_dBClusterParameterGroupArnHasBeenSet = true; m_dBClusterParameterGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster parameter group.</p>
     */
    inline void SetDBClusterParameterGroupArn(const char* value) { m_dBClusterParameterGroupArnHasBeenSet = true; m_dBClusterParameterGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster parameter group.</p>
     */
    inline DBClusterParameterGroup& WithDBClusterParameterGroupArn(const Aws::String& value) { SetDBClusterParameterGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster parameter group.</p>
     */
    inline DBClusterParameterGroup& WithDBClusterParameterGroupArn(Aws::String&& value) { SetDBClusterParameterGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster parameter group.</p>
     */
    inline DBClusterParameterGroup& WithDBClusterParameterGroupArn(const char* value) { SetDBClusterParameterGroupArn(value); return *this;}

  private:

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet;

    Aws::String m_dBParameterGroupFamily;
    bool m_dBParameterGroupFamilyHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_dBClusterParameterGroupArn;
    bool m_dBClusterParameterGroupArnHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
