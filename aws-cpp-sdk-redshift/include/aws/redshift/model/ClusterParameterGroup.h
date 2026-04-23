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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a parameter group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterParameterGroup">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API ClusterParameterGroup
  {
  public:
    ClusterParameterGroup();
    ClusterParameterGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    ClusterParameterGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline ClusterParameterGroup& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline ClusterParameterGroup& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline ClusterParameterGroup& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}


    /**
     * <p>The name of the cluster parameter group family that this cluster parameter
     * group is compatible with.</p>
     */
    inline const Aws::String& GetParameterGroupFamily() const{ return m_parameterGroupFamily; }

    /**
     * <p>The name of the cluster parameter group family that this cluster parameter
     * group is compatible with.</p>
     */
    inline bool ParameterGroupFamilyHasBeenSet() const { return m_parameterGroupFamilyHasBeenSet; }

    /**
     * <p>The name of the cluster parameter group family that this cluster parameter
     * group is compatible with.</p>
     */
    inline void SetParameterGroupFamily(const Aws::String& value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily = value; }

    /**
     * <p>The name of the cluster parameter group family that this cluster parameter
     * group is compatible with.</p>
     */
    inline void SetParameterGroupFamily(Aws::String&& value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily = std::move(value); }

    /**
     * <p>The name of the cluster parameter group family that this cluster parameter
     * group is compatible with.</p>
     */
    inline void SetParameterGroupFamily(const char* value) { m_parameterGroupFamilyHasBeenSet = true; m_parameterGroupFamily.assign(value); }

    /**
     * <p>The name of the cluster parameter group family that this cluster parameter
     * group is compatible with.</p>
     */
    inline ClusterParameterGroup& WithParameterGroupFamily(const Aws::String& value) { SetParameterGroupFamily(value); return *this;}

    /**
     * <p>The name of the cluster parameter group family that this cluster parameter
     * group is compatible with.</p>
     */
    inline ClusterParameterGroup& WithParameterGroupFamily(Aws::String&& value) { SetParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster parameter group family that this cluster parameter
     * group is compatible with.</p>
     */
    inline ClusterParameterGroup& WithParameterGroupFamily(const char* value) { SetParameterGroupFamily(value); return *this;}


    /**
     * <p>The description of the parameter group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the parameter group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the parameter group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the parameter group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the parameter group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the parameter group.</p>
     */
    inline ClusterParameterGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the parameter group.</p>
     */
    inline ClusterParameterGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the parameter group.</p>
     */
    inline ClusterParameterGroup& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The list of tags for the cluster parameter group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags for the cluster parameter group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags for the cluster parameter group.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags for the cluster parameter group.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags for the cluster parameter group.</p>
     */
    inline ClusterParameterGroup& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags for the cluster parameter group.</p>
     */
    inline ClusterParameterGroup& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags for the cluster parameter group.</p>
     */
    inline ClusterParameterGroup& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags for the cluster parameter group.</p>
     */
    inline ClusterParameterGroup& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet;

    Aws::String m_parameterGroupFamily;
    bool m_parameterGroupFamilyHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
