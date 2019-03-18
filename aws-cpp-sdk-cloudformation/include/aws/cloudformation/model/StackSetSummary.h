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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/StackSetStatus.h>
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
   * <p>The structures that contain summary information about the specified stack
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackSetSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API StackSetSummary
  {
  public:
    StackSetSummary();
    StackSetSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    StackSetSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the stack set.</p>
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }

    /**
     * <p>The name of the stack set.</p>
     */
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }

    /**
     * <p>The name of the stack set.</p>
     */
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }

    /**
     * <p>The name of the stack set.</p>
     */
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }

    /**
     * <p>The name of the stack set.</p>
     */
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }

    /**
     * <p>The name of the stack set.</p>
     */
    inline StackSetSummary& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}

    /**
     * <p>The name of the stack set.</p>
     */
    inline StackSetSummary& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the stack set.</p>
     */
    inline StackSetSummary& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}


    /**
     * <p>The ID of the stack set.</p>
     */
    inline const Aws::String& GetStackSetId() const{ return m_stackSetId; }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline bool StackSetIdHasBeenSet() const { return m_stackSetIdHasBeenSet; }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline void SetStackSetId(const Aws::String& value) { m_stackSetIdHasBeenSet = true; m_stackSetId = value; }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline void SetStackSetId(Aws::String&& value) { m_stackSetIdHasBeenSet = true; m_stackSetId = std::move(value); }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline void SetStackSetId(const char* value) { m_stackSetIdHasBeenSet = true; m_stackSetId.assign(value); }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline StackSetSummary& WithStackSetId(const Aws::String& value) { SetStackSetId(value); return *this;}

    /**
     * <p>The ID of the stack set.</p>
     */
    inline StackSetSummary& WithStackSetId(Aws::String&& value) { SetStackSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the stack set.</p>
     */
    inline StackSetSummary& WithStackSetId(const char* value) { SetStackSetId(value); return *this;}


    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline StackSetSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline StackSetSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline StackSetSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The status of the stack set.</p>
     */
    inline const StackSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the stack set.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the stack set.</p>
     */
    inline void SetStatus(const StackSetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the stack set.</p>
     */
    inline void SetStatus(StackSetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the stack set.</p>
     */
    inline StackSetSummary& WithStatus(const StackSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the stack set.</p>
     */
    inline StackSetSummary& WithStatus(StackSetStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet;

    Aws::String m_stackSetId;
    bool m_stackSetIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    StackSetStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
