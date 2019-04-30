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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Contains the details of an Amazon Neptune DB parameter group.</p> <p>This
   * data type is used as a response element in the <a>DescribeDBParameterGroups</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DBParameterGroup">AWS
   * API Reference</a></p>
   */
  class AWS_NEPTUNE_API DBParameterGroup
  {
  public:
    DBParameterGroup();
    DBParameterGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBParameterGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Provides the name of the DB parameter group.</p>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>Provides the name of the DB parameter group.</p>
     */
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }

    /**
     * <p>Provides the name of the DB parameter group.</p>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>Provides the name of the DB parameter group.</p>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }

    /**
     * <p>Provides the name of the DB parameter group.</p>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p>Provides the name of the DB parameter group.</p>
     */
    inline DBParameterGroup& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>Provides the name of the DB parameter group.</p>
     */
    inline DBParameterGroup& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>Provides the name of the DB parameter group.</p>
     */
    inline DBParameterGroup& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}


    /**
     * <p>Provides the name of the DB parameter group family that this DB parameter
     * group is compatible with.</p>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }

    /**
     * <p>Provides the name of the DB parameter group family that this DB parameter
     * group is compatible with.</p>
     */
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }

    /**
     * <p>Provides the name of the DB parameter group family that this DB parameter
     * group is compatible with.</p>
     */
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }

    /**
     * <p>Provides the name of the DB parameter group family that this DB parameter
     * group is compatible with.</p>
     */
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::move(value); }

    /**
     * <p>Provides the name of the DB parameter group family that this DB parameter
     * group is compatible with.</p>
     */
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily.assign(value); }

    /**
     * <p>Provides the name of the DB parameter group family that this DB parameter
     * group is compatible with.</p>
     */
    inline DBParameterGroup& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}

    /**
     * <p>Provides the name of the DB parameter group family that this DB parameter
     * group is compatible with.</p>
     */
    inline DBParameterGroup& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>Provides the name of the DB parameter group family that this DB parameter
     * group is compatible with.</p>
     */
    inline DBParameterGroup& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}


    /**
     * <p>Provides the customer-specified description for this DB parameter group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Provides the customer-specified description for this DB parameter group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Provides the customer-specified description for this DB parameter group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Provides the customer-specified description for this DB parameter group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Provides the customer-specified description for this DB parameter group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Provides the customer-specified description for this DB parameter group.</p>
     */
    inline DBParameterGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Provides the customer-specified description for this DB parameter group.</p>
     */
    inline DBParameterGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Provides the customer-specified description for this DB parameter group.</p>
     */
    inline DBParameterGroup& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the DB parameter group.</p>
     */
    inline const Aws::String& GetDBParameterGroupArn() const{ return m_dBParameterGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB parameter group.</p>
     */
    inline bool DBParameterGroupArnHasBeenSet() const { return m_dBParameterGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB parameter group.</p>
     */
    inline void SetDBParameterGroupArn(const Aws::String& value) { m_dBParameterGroupArnHasBeenSet = true; m_dBParameterGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB parameter group.</p>
     */
    inline void SetDBParameterGroupArn(Aws::String&& value) { m_dBParameterGroupArnHasBeenSet = true; m_dBParameterGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB parameter group.</p>
     */
    inline void SetDBParameterGroupArn(const char* value) { m_dBParameterGroupArnHasBeenSet = true; m_dBParameterGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB parameter group.</p>
     */
    inline DBParameterGroup& WithDBParameterGroupArn(const Aws::String& value) { SetDBParameterGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB parameter group.</p>
     */
    inline DBParameterGroup& WithDBParameterGroupArn(Aws::String&& value) { SetDBParameterGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB parameter group.</p>
     */
    inline DBParameterGroup& WithDBParameterGroupArn(const char* value) { SetDBParameterGroupArn(value); return *this;}

  private:

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet;

    Aws::String m_dBParameterGroupFamily;
    bool m_dBParameterGroupFamilyHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_dBParameterGroupArn;
    bool m_dBParameterGroupArnHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
