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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/ChangeType.h>
#include <aws/cloudformation/model/ResourceChange.h>
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
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The <code>Change</code> structure describes the changes AWS CloudFormation
   * will perform if you execute the change set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/Change">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API Change
  {
  public:
    Change();
    Change(const Aws::Utils::Xml::XmlNode& xmlNode);
    Change& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The type of entity that AWS CloudFormation changes. Currently, the only
     * entity type is <code>Resource</code>.</p>
     */
    inline const ChangeType& GetType() const{ return m_type; }

    /**
     * <p>The type of entity that AWS CloudFormation changes. Currently, the only
     * entity type is <code>Resource</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of entity that AWS CloudFormation changes. Currently, the only
     * entity type is <code>Resource</code>.</p>
     */
    inline void SetType(const ChangeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of entity that AWS CloudFormation changes. Currently, the only
     * entity type is <code>Resource</code>.</p>
     */
    inline void SetType(ChangeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of entity that AWS CloudFormation changes. Currently, the only
     * entity type is <code>Resource</code>.</p>
     */
    inline Change& WithType(const ChangeType& value) { SetType(value); return *this;}

    /**
     * <p>The type of entity that AWS CloudFormation changes. Currently, the only
     * entity type is <code>Resource</code>.</p>
     */
    inline Change& WithType(ChangeType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A <code>ResourceChange</code> structure that describes the resource and
     * action that AWS CloudFormation will perform.</p>
     */
    inline const ResourceChange& GetResourceChange() const{ return m_resourceChange; }

    /**
     * <p>A <code>ResourceChange</code> structure that describes the resource and
     * action that AWS CloudFormation will perform.</p>
     */
    inline bool ResourceChangeHasBeenSet() const { return m_resourceChangeHasBeenSet; }

    /**
     * <p>A <code>ResourceChange</code> structure that describes the resource and
     * action that AWS CloudFormation will perform.</p>
     */
    inline void SetResourceChange(const ResourceChange& value) { m_resourceChangeHasBeenSet = true; m_resourceChange = value; }

    /**
     * <p>A <code>ResourceChange</code> structure that describes the resource and
     * action that AWS CloudFormation will perform.</p>
     */
    inline void SetResourceChange(ResourceChange&& value) { m_resourceChangeHasBeenSet = true; m_resourceChange = std::move(value); }

    /**
     * <p>A <code>ResourceChange</code> structure that describes the resource and
     * action that AWS CloudFormation will perform.</p>
     */
    inline Change& WithResourceChange(const ResourceChange& value) { SetResourceChange(value); return *this;}

    /**
     * <p>A <code>ResourceChange</code> structure that describes the resource and
     * action that AWS CloudFormation will perform.</p>
     */
    inline Change& WithResourceChange(ResourceChange&& value) { SetResourceChange(std::move(value)); return *this;}

  private:

    ChangeType m_type;
    bool m_typeHasBeenSet;

    ResourceChange m_resourceChange;
    bool m_resourceChangeHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
