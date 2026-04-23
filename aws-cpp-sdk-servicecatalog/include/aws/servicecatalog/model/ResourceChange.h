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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ChangeAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/Replacement.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/ResourceAttribute.h>
#include <aws/servicecatalog/model/ResourceChangeDetail.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a resource change that will occur when a plan is
   * executed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ResourceChange">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API ResourceChange
  {
  public:
    ResourceChange();
    ResourceChange(Aws::Utils::Json::JsonView jsonValue);
    ResourceChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The change action.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>The change action.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The change action.</p>
     */
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The change action.</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The change action.</p>
     */
    inline ResourceChange& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>The change action.</p>
     */
    inline ResourceChange& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The ID of the resource, as defined in the CloudFormation template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const{ return m_logicalResourceId; }

    /**
     * <p>The ID of the resource, as defined in the CloudFormation template.</p>
     */
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource, as defined in the CloudFormation template.</p>
     */
    inline void SetLogicalResourceId(const Aws::String& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }

    /**
     * <p>The ID of the resource, as defined in the CloudFormation template.</p>
     */
    inline void SetLogicalResourceId(Aws::String&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::move(value); }

    /**
     * <p>The ID of the resource, as defined in the CloudFormation template.</p>
     */
    inline void SetLogicalResourceId(const char* value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId.assign(value); }

    /**
     * <p>The ID of the resource, as defined in the CloudFormation template.</p>
     */
    inline ResourceChange& WithLogicalResourceId(const Aws::String& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The ID of the resource, as defined in the CloudFormation template.</p>
     */
    inline ResourceChange& WithLogicalResourceId(Aws::String&& value) { SetLogicalResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource, as defined in the CloudFormation template.</p>
     */
    inline ResourceChange& WithLogicalResourceId(const char* value) { SetLogicalResourceId(value); return *this;}


    /**
     * <p>The ID of the resource, if it was already created.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const{ return m_physicalResourceId; }

    /**
     * <p>The ID of the resource, if it was already created.</p>
     */
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource, if it was already created.</p>
     */
    inline void SetPhysicalResourceId(const Aws::String& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }

    /**
     * <p>The ID of the resource, if it was already created.</p>
     */
    inline void SetPhysicalResourceId(Aws::String&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::move(value); }

    /**
     * <p>The ID of the resource, if it was already created.</p>
     */
    inline void SetPhysicalResourceId(const char* value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId.assign(value); }

    /**
     * <p>The ID of the resource, if it was already created.</p>
     */
    inline ResourceChange& WithPhysicalResourceId(const Aws::String& value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>The ID of the resource, if it was already created.</p>
     */
    inline ResourceChange& WithPhysicalResourceId(Aws::String&& value) { SetPhysicalResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource, if it was already created.</p>
     */
    inline ResourceChange& WithPhysicalResourceId(const char* value) { SetPhysicalResourceId(value); return *this;}


    /**
     * <p>The type of resource.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of resource.</p>
     */
    inline ResourceChange& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource.</p>
     */
    inline ResourceChange& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of resource.</p>
     */
    inline ResourceChange& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>If the change type is <code>Modify</code>, indicates whether the existing
     * resource is deleted and replaced with a new one.</p>
     */
    inline const Replacement& GetReplacement() const{ return m_replacement; }

    /**
     * <p>If the change type is <code>Modify</code>, indicates whether the existing
     * resource is deleted and replaced with a new one.</p>
     */
    inline bool ReplacementHasBeenSet() const { return m_replacementHasBeenSet; }

    /**
     * <p>If the change type is <code>Modify</code>, indicates whether the existing
     * resource is deleted and replaced with a new one.</p>
     */
    inline void SetReplacement(const Replacement& value) { m_replacementHasBeenSet = true; m_replacement = value; }

    /**
     * <p>If the change type is <code>Modify</code>, indicates whether the existing
     * resource is deleted and replaced with a new one.</p>
     */
    inline void SetReplacement(Replacement&& value) { m_replacementHasBeenSet = true; m_replacement = std::move(value); }

    /**
     * <p>If the change type is <code>Modify</code>, indicates whether the existing
     * resource is deleted and replaced with a new one.</p>
     */
    inline ResourceChange& WithReplacement(const Replacement& value) { SetReplacement(value); return *this;}

    /**
     * <p>If the change type is <code>Modify</code>, indicates whether the existing
     * resource is deleted and replaced with a new one.</p>
     */
    inline ResourceChange& WithReplacement(Replacement&& value) { SetReplacement(std::move(value)); return *this;}


    /**
     * <p>The change scope.</p>
     */
    inline const Aws::Vector<ResourceAttribute>& GetScope() const{ return m_scope; }

    /**
     * <p>The change scope.</p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>The change scope.</p>
     */
    inline void SetScope(const Aws::Vector<ResourceAttribute>& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>The change scope.</p>
     */
    inline void SetScope(Aws::Vector<ResourceAttribute>&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>The change scope.</p>
     */
    inline ResourceChange& WithScope(const Aws::Vector<ResourceAttribute>& value) { SetScope(value); return *this;}

    /**
     * <p>The change scope.</p>
     */
    inline ResourceChange& WithScope(Aws::Vector<ResourceAttribute>&& value) { SetScope(std::move(value)); return *this;}

    /**
     * <p>The change scope.</p>
     */
    inline ResourceChange& AddScope(const ResourceAttribute& value) { m_scopeHasBeenSet = true; m_scope.push_back(value); return *this; }

    /**
     * <p>The change scope.</p>
     */
    inline ResourceChange& AddScope(ResourceAttribute&& value) { m_scopeHasBeenSet = true; m_scope.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the resource changes.</p>
     */
    inline const Aws::Vector<ResourceChangeDetail>& GetDetails() const{ return m_details; }

    /**
     * <p>Information about the resource changes.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>Information about the resource changes.</p>
     */
    inline void SetDetails(const Aws::Vector<ResourceChangeDetail>& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>Information about the resource changes.</p>
     */
    inline void SetDetails(Aws::Vector<ResourceChangeDetail>&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>Information about the resource changes.</p>
     */
    inline ResourceChange& WithDetails(const Aws::Vector<ResourceChangeDetail>& value) { SetDetails(value); return *this;}

    /**
     * <p>Information about the resource changes.</p>
     */
    inline ResourceChange& WithDetails(Aws::Vector<ResourceChangeDetail>&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>Information about the resource changes.</p>
     */
    inline ResourceChange& AddDetails(const ResourceChangeDetail& value) { m_detailsHasBeenSet = true; m_details.push_back(value); return *this; }

    /**
     * <p>Information about the resource changes.</p>
     */
    inline ResourceChange& AddDetails(ResourceChangeDetail&& value) { m_detailsHasBeenSet = true; m_details.push_back(std::move(value)); return *this; }

  private:

    ChangeAction m_action;
    bool m_actionHasBeenSet;

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet;

    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Replacement m_replacement;
    bool m_replacementHasBeenSet;

    Aws::Vector<ResourceAttribute> m_scope;
    bool m_scopeHasBeenSet;

    Aws::Vector<ResourceChangeDetail> m_details;
    bool m_detailsHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
