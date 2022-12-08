/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/HookTargetType.h>
#include <aws/cloudformation/model/ChangeSetHookResourceTargetDetails.h>
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
   * <p>Specifies target details for an activated hook.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ChangeSetHookTargetDetails">AWS
   * API Reference</a></p>
   */
  class ChangeSetHookTargetDetails
  {
  public:
    AWS_CLOUDFORMATION_API ChangeSetHookTargetDetails();
    AWS_CLOUDFORMATION_API ChangeSetHookTargetDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ChangeSetHookTargetDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the type.</p>
     */
    inline const HookTargetType& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The name of the type.</p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The name of the type.</p>
     */
    inline void SetTargetType(const HookTargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The name of the type.</p>
     */
    inline void SetTargetType(HookTargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The name of the type.</p>
     */
    inline ChangeSetHookTargetDetails& WithTargetType(const HookTargetType& value) { SetTargetType(value); return *this;}

    /**
     * <p>The name of the type.</p>
     */
    inline ChangeSetHookTargetDetails& WithTargetType(HookTargetType&& value) { SetTargetType(std::move(value)); return *this;}


    /**
     * <p>Required if <code>TargetType</code> is <code>RESOURCE</code>.</p>
     */
    inline const ChangeSetHookResourceTargetDetails& GetResourceTargetDetails() const{ return m_resourceTargetDetails; }

    /**
     * <p>Required if <code>TargetType</code> is <code>RESOURCE</code>.</p>
     */
    inline bool ResourceTargetDetailsHasBeenSet() const { return m_resourceTargetDetailsHasBeenSet; }

    /**
     * <p>Required if <code>TargetType</code> is <code>RESOURCE</code>.</p>
     */
    inline void SetResourceTargetDetails(const ChangeSetHookResourceTargetDetails& value) { m_resourceTargetDetailsHasBeenSet = true; m_resourceTargetDetails = value; }

    /**
     * <p>Required if <code>TargetType</code> is <code>RESOURCE</code>.</p>
     */
    inline void SetResourceTargetDetails(ChangeSetHookResourceTargetDetails&& value) { m_resourceTargetDetailsHasBeenSet = true; m_resourceTargetDetails = std::move(value); }

    /**
     * <p>Required if <code>TargetType</code> is <code>RESOURCE</code>.</p>
     */
    inline ChangeSetHookTargetDetails& WithResourceTargetDetails(const ChangeSetHookResourceTargetDetails& value) { SetResourceTargetDetails(value); return *this;}

    /**
     * <p>Required if <code>TargetType</code> is <code>RESOURCE</code>.</p>
     */
    inline ChangeSetHookTargetDetails& WithResourceTargetDetails(ChangeSetHookResourceTargetDetails&& value) { SetResourceTargetDetails(std::move(value)); return *this;}

  private:

    HookTargetType m_targetType;
    bool m_targetTypeHasBeenSet = false;

    ChangeSetHookResourceTargetDetails m_resourceTargetDetails;
    bool m_resourceTargetDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
