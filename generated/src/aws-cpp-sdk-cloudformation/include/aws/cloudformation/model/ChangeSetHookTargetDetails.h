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
   * <p>Specifies target details for an activated Hook.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ChangeSetHookTargetDetails">AWS
   * API Reference</a></p>
   */
  class ChangeSetHookTargetDetails
  {
  public:
    AWS_CLOUDFORMATION_API ChangeSetHookTargetDetails() = default;
    AWS_CLOUDFORMATION_API ChangeSetHookTargetDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ChangeSetHookTargetDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the type.</p>
     */
    inline HookTargetType GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(HookTargetType value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline ChangeSetHookTargetDetails& WithTargetType(HookTargetType value) { SetTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required if <code>TargetType</code> is <code>RESOURCE</code>.</p>
     */
    inline const ChangeSetHookResourceTargetDetails& GetResourceTargetDetails() const { return m_resourceTargetDetails; }
    inline bool ResourceTargetDetailsHasBeenSet() const { return m_resourceTargetDetailsHasBeenSet; }
    template<typename ResourceTargetDetailsT = ChangeSetHookResourceTargetDetails>
    void SetResourceTargetDetails(ResourceTargetDetailsT&& value) { m_resourceTargetDetailsHasBeenSet = true; m_resourceTargetDetails = std::forward<ResourceTargetDetailsT>(value); }
    template<typename ResourceTargetDetailsT = ChangeSetHookResourceTargetDetails>
    ChangeSetHookTargetDetails& WithResourceTargetDetails(ResourceTargetDetailsT&& value) { SetResourceTargetDetails(std::forward<ResourceTargetDetailsT>(value)); return *this;}
    ///@}
  private:

    HookTargetType m_targetType{HookTargetType::NOT_SET};
    bool m_targetTypeHasBeenSet = false;

    ChangeSetHookResourceTargetDetails m_resourceTargetDetails;
    bool m_resourceTargetDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
