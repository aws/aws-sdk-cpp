/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ChangeAction.h>
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
   * <p>Specifies <code>RESOURCE</code> type target details for activated
   * hooks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ChangeSetHookResourceTargetDetails">AWS
   * API Reference</a></p>
   */
  class ChangeSetHookResourceTargetDetails
  {
  public:
    AWS_CLOUDFORMATION_API ChangeSetHookResourceTargetDetails();
    AWS_CLOUDFORMATION_API ChangeSetHookResourceTargetDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ChangeSetHookResourceTargetDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The resource's logical ID, which is defined in the stack's template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const{ return m_logicalResourceId; }

    /**
     * <p>The resource's logical ID, which is defined in the stack's template.</p>
     */
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }

    /**
     * <p>The resource's logical ID, which is defined in the stack's template.</p>
     */
    inline void SetLogicalResourceId(const Aws::String& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }

    /**
     * <p>The resource's logical ID, which is defined in the stack's template.</p>
     */
    inline void SetLogicalResourceId(Aws::String&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::move(value); }

    /**
     * <p>The resource's logical ID, which is defined in the stack's template.</p>
     */
    inline void SetLogicalResourceId(const char* value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId.assign(value); }

    /**
     * <p>The resource's logical ID, which is defined in the stack's template.</p>
     */
    inline ChangeSetHookResourceTargetDetails& WithLogicalResourceId(const Aws::String& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The resource's logical ID, which is defined in the stack's template.</p>
     */
    inline ChangeSetHookResourceTargetDetails& WithLogicalResourceId(Aws::String&& value) { SetLogicalResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource's logical ID, which is defined in the stack's template.</p>
     */
    inline ChangeSetHookResourceTargetDetails& WithLogicalResourceId(const char* value) { SetLogicalResourceId(value); return *this;}


    /**
     * <p>The type of CloudFormation resource, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of CloudFormation resource, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of CloudFormation resource, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of CloudFormation resource, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of CloudFormation resource, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of CloudFormation resource, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline ChangeSetHookResourceTargetDetails& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of CloudFormation resource, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline ChangeSetHookResourceTargetDetails& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of CloudFormation resource, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline ChangeSetHookResourceTargetDetails& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>Specifies the action of the resource.</p>
     */
    inline const ChangeAction& GetResourceAction() const{ return m_resourceAction; }

    /**
     * <p>Specifies the action of the resource.</p>
     */
    inline bool ResourceActionHasBeenSet() const { return m_resourceActionHasBeenSet; }

    /**
     * <p>Specifies the action of the resource.</p>
     */
    inline void SetResourceAction(const ChangeAction& value) { m_resourceActionHasBeenSet = true; m_resourceAction = value; }

    /**
     * <p>Specifies the action of the resource.</p>
     */
    inline void SetResourceAction(ChangeAction&& value) { m_resourceActionHasBeenSet = true; m_resourceAction = std::move(value); }

    /**
     * <p>Specifies the action of the resource.</p>
     */
    inline ChangeSetHookResourceTargetDetails& WithResourceAction(const ChangeAction& value) { SetResourceAction(value); return *this;}

    /**
     * <p>Specifies the action of the resource.</p>
     */
    inline ChangeSetHookResourceTargetDetails& WithResourceAction(ChangeAction&& value) { SetResourceAction(std::move(value)); return *this;}

  private:

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    ChangeAction m_resourceAction;
    bool m_resourceActionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
