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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ComplianceExecutionSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/ComplianceItemEntry.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API PutComplianceItemsRequest : public SSMRequest
  {
  public:
    PutComplianceItemsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutComplianceItems"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specify an ID for this resource. For a managed instance, this is the instance
     * ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Specify an ID for this resource. For a managed instance, this is the instance
     * ID.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>Specify an ID for this resource. For a managed instance, this is the instance
     * ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Specify an ID for this resource. For a managed instance, this is the instance
     * ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Specify an ID for this resource. For a managed instance, this is the instance
     * ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Specify an ID for this resource. For a managed instance, this is the instance
     * ID.</p>
     */
    inline PutComplianceItemsRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Specify an ID for this resource. For a managed instance, this is the instance
     * ID.</p>
     */
    inline PutComplianceItemsRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Specify an ID for this resource. For a managed instance, this is the instance
     * ID.</p>
     */
    inline PutComplianceItemsRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Specify the type of resource. <code>ManagedInstance</code> is currently the
     * only supported resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Specify the type of resource. <code>ManagedInstance</code> is currently the
     * only supported resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Specify the type of resource. <code>ManagedInstance</code> is currently the
     * only supported resource type.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Specify the type of resource. <code>ManagedInstance</code> is currently the
     * only supported resource type.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Specify the type of resource. <code>ManagedInstance</code> is currently the
     * only supported resource type.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Specify the type of resource. <code>ManagedInstance</code> is currently the
     * only supported resource type.</p>
     */
    inline PutComplianceItemsRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Specify the type of resource. <code>ManagedInstance</code> is currently the
     * only supported resource type.</p>
     */
    inline PutComplianceItemsRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Specify the type of resource. <code>ManagedInstance</code> is currently the
     * only supported resource type.</p>
     */
    inline PutComplianceItemsRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>Specify the compliance type. For example, specify Association (for a State
     * Manager association), Patch, or Custom:<code>string</code>.</p>
     */
    inline const Aws::String& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>Specify the compliance type. For example, specify Association (for a State
     * Manager association), Patch, or Custom:<code>string</code>.</p>
     */
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }

    /**
     * <p>Specify the compliance type. For example, specify Association (for a State
     * Manager association), Patch, or Custom:<code>string</code>.</p>
     */
    inline void SetComplianceType(const Aws::String& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>Specify the compliance type. For example, specify Association (for a State
     * Manager association), Patch, or Custom:<code>string</code>.</p>
     */
    inline void SetComplianceType(Aws::String&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p>Specify the compliance type. For example, specify Association (for a State
     * Manager association), Patch, or Custom:<code>string</code>.</p>
     */
    inline void SetComplianceType(const char* value) { m_complianceTypeHasBeenSet = true; m_complianceType.assign(value); }

    /**
     * <p>Specify the compliance type. For example, specify Association (for a State
     * Manager association), Patch, or Custom:<code>string</code>.</p>
     */
    inline PutComplianceItemsRequest& WithComplianceType(const Aws::String& value) { SetComplianceType(value); return *this;}

    /**
     * <p>Specify the compliance type. For example, specify Association (for a State
     * Manager association), Patch, or Custom:<code>string</code>.</p>
     */
    inline PutComplianceItemsRequest& WithComplianceType(Aws::String&& value) { SetComplianceType(std::move(value)); return *this;}

    /**
     * <p>Specify the compliance type. For example, specify Association (for a State
     * Manager association), Patch, or Custom:<code>string</code>.</p>
     */
    inline PutComplianceItemsRequest& WithComplianceType(const char* value) { SetComplianceType(value); return *this;}


    /**
     * <p>A summary of the call execution that includes an execution ID, the type of
     * execution (for example, <code>Command</code>), and the date/time of the
     * execution using a datetime object that is saved in the following format:
     * yyyy-MM-dd'T'HH:mm:ss'Z'.</p>
     */
    inline const ComplianceExecutionSummary& GetExecutionSummary() const{ return m_executionSummary; }

    /**
     * <p>A summary of the call execution that includes an execution ID, the type of
     * execution (for example, <code>Command</code>), and the date/time of the
     * execution using a datetime object that is saved in the following format:
     * yyyy-MM-dd'T'HH:mm:ss'Z'.</p>
     */
    inline bool ExecutionSummaryHasBeenSet() const { return m_executionSummaryHasBeenSet; }

    /**
     * <p>A summary of the call execution that includes an execution ID, the type of
     * execution (for example, <code>Command</code>), and the date/time of the
     * execution using a datetime object that is saved in the following format:
     * yyyy-MM-dd'T'HH:mm:ss'Z'.</p>
     */
    inline void SetExecutionSummary(const ComplianceExecutionSummary& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = value; }

    /**
     * <p>A summary of the call execution that includes an execution ID, the type of
     * execution (for example, <code>Command</code>), and the date/time of the
     * execution using a datetime object that is saved in the following format:
     * yyyy-MM-dd'T'HH:mm:ss'Z'.</p>
     */
    inline void SetExecutionSummary(ComplianceExecutionSummary&& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = std::move(value); }

    /**
     * <p>A summary of the call execution that includes an execution ID, the type of
     * execution (for example, <code>Command</code>), and the date/time of the
     * execution using a datetime object that is saved in the following format:
     * yyyy-MM-dd'T'HH:mm:ss'Z'.</p>
     */
    inline PutComplianceItemsRequest& WithExecutionSummary(const ComplianceExecutionSummary& value) { SetExecutionSummary(value); return *this;}

    /**
     * <p>A summary of the call execution that includes an execution ID, the type of
     * execution (for example, <code>Command</code>), and the date/time of the
     * execution using a datetime object that is saved in the following format:
     * yyyy-MM-dd'T'HH:mm:ss'Z'.</p>
     */
    inline PutComplianceItemsRequest& WithExecutionSummary(ComplianceExecutionSummary&& value) { SetExecutionSummary(std::move(value)); return *this;}


    /**
     * <p>Information about the compliance as defined by the resource type. For
     * example, for a patch compliance type, <code>Items</code> includes information
     * about the PatchSeverity, Classification, etc.</p>
     */
    inline const Aws::Vector<ComplianceItemEntry>& GetItems() const{ return m_items; }

    /**
     * <p>Information about the compliance as defined by the resource type. For
     * example, for a patch compliance type, <code>Items</code> includes information
     * about the PatchSeverity, Classification, etc.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>Information about the compliance as defined by the resource type. For
     * example, for a patch compliance type, <code>Items</code> includes information
     * about the PatchSeverity, Classification, etc.</p>
     */
    inline void SetItems(const Aws::Vector<ComplianceItemEntry>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>Information about the compliance as defined by the resource type. For
     * example, for a patch compliance type, <code>Items</code> includes information
     * about the PatchSeverity, Classification, etc.</p>
     */
    inline void SetItems(Aws::Vector<ComplianceItemEntry>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>Information about the compliance as defined by the resource type. For
     * example, for a patch compliance type, <code>Items</code> includes information
     * about the PatchSeverity, Classification, etc.</p>
     */
    inline PutComplianceItemsRequest& WithItems(const Aws::Vector<ComplianceItemEntry>& value) { SetItems(value); return *this;}

    /**
     * <p>Information about the compliance as defined by the resource type. For
     * example, for a patch compliance type, <code>Items</code> includes information
     * about the PatchSeverity, Classification, etc.</p>
     */
    inline PutComplianceItemsRequest& WithItems(Aws::Vector<ComplianceItemEntry>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Information about the compliance as defined by the resource type. For
     * example, for a patch compliance type, <code>Items</code> includes information
     * about the PatchSeverity, Classification, etc.</p>
     */
    inline PutComplianceItemsRequest& AddItems(const ComplianceItemEntry& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>Information about the compliance as defined by the resource type. For
     * example, for a patch compliance type, <code>Items</code> includes information
     * about the PatchSeverity, Classification, etc.</p>
     */
    inline PutComplianceItemsRequest& AddItems(ComplianceItemEntry&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>MD5 or SHA-256 content hash. The content hash is used to determine if
     * existing information should be overwritten or ignored. If the content hashes
     * match, the request to put compliance information is ignored.</p>
     */
    inline const Aws::String& GetItemContentHash() const{ return m_itemContentHash; }

    /**
     * <p>MD5 or SHA-256 content hash. The content hash is used to determine if
     * existing information should be overwritten or ignored. If the content hashes
     * match, the request to put compliance information is ignored.</p>
     */
    inline bool ItemContentHashHasBeenSet() const { return m_itemContentHashHasBeenSet; }

    /**
     * <p>MD5 or SHA-256 content hash. The content hash is used to determine if
     * existing information should be overwritten or ignored. If the content hashes
     * match, the request to put compliance information is ignored.</p>
     */
    inline void SetItemContentHash(const Aws::String& value) { m_itemContentHashHasBeenSet = true; m_itemContentHash = value; }

    /**
     * <p>MD5 or SHA-256 content hash. The content hash is used to determine if
     * existing information should be overwritten or ignored. If the content hashes
     * match, the request to put compliance information is ignored.</p>
     */
    inline void SetItemContentHash(Aws::String&& value) { m_itemContentHashHasBeenSet = true; m_itemContentHash = std::move(value); }

    /**
     * <p>MD5 or SHA-256 content hash. The content hash is used to determine if
     * existing information should be overwritten or ignored. If the content hashes
     * match, the request to put compliance information is ignored.</p>
     */
    inline void SetItemContentHash(const char* value) { m_itemContentHashHasBeenSet = true; m_itemContentHash.assign(value); }

    /**
     * <p>MD5 or SHA-256 content hash. The content hash is used to determine if
     * existing information should be overwritten or ignored. If the content hashes
     * match, the request to put compliance information is ignored.</p>
     */
    inline PutComplianceItemsRequest& WithItemContentHash(const Aws::String& value) { SetItemContentHash(value); return *this;}

    /**
     * <p>MD5 or SHA-256 content hash. The content hash is used to determine if
     * existing information should be overwritten or ignored. If the content hashes
     * match, the request to put compliance information is ignored.</p>
     */
    inline PutComplianceItemsRequest& WithItemContentHash(Aws::String&& value) { SetItemContentHash(std::move(value)); return *this;}

    /**
     * <p>MD5 or SHA-256 content hash. The content hash is used to determine if
     * existing information should be overwritten or ignored. If the content hashes
     * match, the request to put compliance information is ignored.</p>
     */
    inline PutComplianceItemsRequest& WithItemContentHash(const char* value) { SetItemContentHash(value); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_complianceType;
    bool m_complianceTypeHasBeenSet;

    ComplianceExecutionSummary m_executionSummary;
    bool m_executionSummaryHasBeenSet;

    Aws::Vector<ComplianceItemEntry> m_items;
    bool m_itemsHasBeenSet;

    Aws::String m_itemContentHash;
    bool m_itemContentHashHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
