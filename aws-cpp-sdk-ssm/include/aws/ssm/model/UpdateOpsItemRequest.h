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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsItemStatus.h>
#include <aws/ssm/model/OpsItemDataValue.h>
#include <aws/ssm/model/OpsItemNotification.h>
#include <aws/ssm/model/RelatedOpsItem.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API UpdateOpsItemRequest : public SSMRequest
  {
  public:
    UpdateOpsItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOpsItem"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Update the information about the OpsItem. Provide enough information so that
     * users reading this OpsItem for the first time understand the issue. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Update the information about the OpsItem. Provide enough information so that
     * users reading this OpsItem for the first time understand the issue. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Update the information about the OpsItem. Provide enough information so that
     * users reading this OpsItem for the first time understand the issue. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Update the information about the OpsItem. Provide enough information so that
     * users reading this OpsItem for the first time understand the issue. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Update the information about the OpsItem. Provide enough information so that
     * users reading this OpsItem for the first time understand the issue. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Update the information about the OpsItem. Provide enough information so that
     * users reading this OpsItem for the first time understand the issue. </p>
     */
    inline UpdateOpsItemRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Update the information about the OpsItem. Provide enough information so that
     * users reading this OpsItem for the first time understand the issue. </p>
     */
    inline UpdateOpsItemRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Update the information about the OpsItem. Provide enough information so that
     * users reading this OpsItem for the first time understand the issue. </p>
     */
    inline UpdateOpsItemRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> <important>
     * <p>Operational data keys <i>can't</i> begin with the following: amazon, aws,
     * amzn, ssm, /amazon, /aws, /amzn, /ssm.</p> </important> <p>You can choose to
     * make the data searchable by other users in the account or you can restrict
     * search access. Searchable data means that all users with access to the OpsItem
     * Overview page (as provided by the <a>DescribeOpsItems</a> API action) can view
     * and search on the specified data. Operational data that is not searchable is
     * only viewable by users who have access to the OpsItem (as provided by the
     * <a>GetOpsItem</a> API action).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view AWS CLI example commands that use these keys,
     * see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, OpsItemDataValue>& GetOperationalData() const{ return m_operationalData; }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> <important>
     * <p>Operational data keys <i>can't</i> begin with the following: amazon, aws,
     * amzn, ssm, /amazon, /aws, /amzn, /ssm.</p> </important> <p>You can choose to
     * make the data searchable by other users in the account or you can restrict
     * search access. Searchable data means that all users with access to the OpsItem
     * Overview page (as provided by the <a>DescribeOpsItems</a> API action) can view
     * and search on the specified data. Operational data that is not searchable is
     * only viewable by users who have access to the OpsItem (as provided by the
     * <a>GetOpsItem</a> API action).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view AWS CLI example commands that use these keys,
     * see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline bool OperationalDataHasBeenSet() const { return m_operationalDataHasBeenSet; }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> <important>
     * <p>Operational data keys <i>can't</i> begin with the following: amazon, aws,
     * amzn, ssm, /amazon, /aws, /amzn, /ssm.</p> </important> <p>You can choose to
     * make the data searchable by other users in the account or you can restrict
     * search access. Searchable data means that all users with access to the OpsItem
     * Overview page (as provided by the <a>DescribeOpsItems</a> API action) can view
     * and search on the specified data. Operational data that is not searchable is
     * only viewable by users who have access to the OpsItem (as provided by the
     * <a>GetOpsItem</a> API action).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view AWS CLI example commands that use these keys,
     * see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetOperationalData(const Aws::Map<Aws::String, OpsItemDataValue>& value) { m_operationalDataHasBeenSet = true; m_operationalData = value; }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> <important>
     * <p>Operational data keys <i>can't</i> begin with the following: amazon, aws,
     * amzn, ssm, /amazon, /aws, /amzn, /ssm.</p> </important> <p>You can choose to
     * make the data searchable by other users in the account or you can restrict
     * search access. Searchable data means that all users with access to the OpsItem
     * Overview page (as provided by the <a>DescribeOpsItems</a> API action) can view
     * and search on the specified data. Operational data that is not searchable is
     * only viewable by users who have access to the OpsItem (as provided by the
     * <a>GetOpsItem</a> API action).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view AWS CLI example commands that use these keys,
     * see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetOperationalData(Aws::Map<Aws::String, OpsItemDataValue>&& value) { m_operationalDataHasBeenSet = true; m_operationalData = std::move(value); }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> <important>
     * <p>Operational data keys <i>can't</i> begin with the following: amazon, aws,
     * amzn, ssm, /amazon, /aws, /amzn, /ssm.</p> </important> <p>You can choose to
     * make the data searchable by other users in the account or you can restrict
     * search access. Searchable data means that all users with access to the OpsItem
     * Overview page (as provided by the <a>DescribeOpsItems</a> API action) can view
     * and search on the specified data. Operational data that is not searchable is
     * only viewable by users who have access to the OpsItem (as provided by the
     * <a>GetOpsItem</a> API action).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view AWS CLI example commands that use these keys,
     * see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& WithOperationalData(const Aws::Map<Aws::String, OpsItemDataValue>& value) { SetOperationalData(value); return *this;}

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> <important>
     * <p>Operational data keys <i>can't</i> begin with the following: amazon, aws,
     * amzn, ssm, /amazon, /aws, /amzn, /ssm.</p> </important> <p>You can choose to
     * make the data searchable by other users in the account or you can restrict
     * search access. Searchable data means that all users with access to the OpsItem
     * Overview page (as provided by the <a>DescribeOpsItems</a> API action) can view
     * and search on the specified data. Operational data that is not searchable is
     * only viewable by users who have access to the OpsItem (as provided by the
     * <a>GetOpsItem</a> API action).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view AWS CLI example commands that use these keys,
     * see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& WithOperationalData(Aws::Map<Aws::String, OpsItemDataValue>&& value) { SetOperationalData(std::move(value)); return *this;}

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> <important>
     * <p>Operational data keys <i>can't</i> begin with the following: amazon, aws,
     * amzn, ssm, /amazon, /aws, /amzn, /ssm.</p> </important> <p>You can choose to
     * make the data searchable by other users in the account or you can restrict
     * search access. Searchable data means that all users with access to the OpsItem
     * Overview page (as provided by the <a>DescribeOpsItems</a> API action) can view
     * and search on the specified data. Operational data that is not searchable is
     * only viewable by users who have access to the OpsItem (as provided by the
     * <a>GetOpsItem</a> API action).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view AWS CLI example commands that use these keys,
     * see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalData(const Aws::String& key, const OpsItemDataValue& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, value); return *this; }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> <important>
     * <p>Operational data keys <i>can't</i> begin with the following: amazon, aws,
     * amzn, ssm, /amazon, /aws, /amzn, /ssm.</p> </important> <p>You can choose to
     * make the data searchable by other users in the account or you can restrict
     * search access. Searchable data means that all users with access to the OpsItem
     * Overview page (as provided by the <a>DescribeOpsItems</a> API action) can view
     * and search on the specified data. Operational data that is not searchable is
     * only viewable by users who have access to the OpsItem (as provided by the
     * <a>GetOpsItem</a> API action).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view AWS CLI example commands that use these keys,
     * see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalData(Aws::String&& key, const OpsItemDataValue& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(std::move(key), value); return *this; }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> <important>
     * <p>Operational data keys <i>can't</i> begin with the following: amazon, aws,
     * amzn, ssm, /amazon, /aws, /amzn, /ssm.</p> </important> <p>You can choose to
     * make the data searchable by other users in the account or you can restrict
     * search access. Searchable data means that all users with access to the OpsItem
     * Overview page (as provided by the <a>DescribeOpsItems</a> API action) can view
     * and search on the specified data. Operational data that is not searchable is
     * only viewable by users who have access to the OpsItem (as provided by the
     * <a>GetOpsItem</a> API action).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view AWS CLI example commands that use these keys,
     * see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalData(const Aws::String& key, OpsItemDataValue&& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> <important>
     * <p>Operational data keys <i>can't</i> begin with the following: amazon, aws,
     * amzn, ssm, /amazon, /aws, /amzn, /ssm.</p> </important> <p>You can choose to
     * make the data searchable by other users in the account or you can restrict
     * search access. Searchable data means that all users with access to the OpsItem
     * Overview page (as provided by the <a>DescribeOpsItems</a> API action) can view
     * and search on the specified data. Operational data that is not searchable is
     * only viewable by users who have access to the OpsItem (as provided by the
     * <a>GetOpsItem</a> API action).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view AWS CLI example commands that use these keys,
     * see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalData(Aws::String&& key, OpsItemDataValue&& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> <important>
     * <p>Operational data keys <i>can't</i> begin with the following: amazon, aws,
     * amzn, ssm, /amazon, /aws, /amzn, /ssm.</p> </important> <p>You can choose to
     * make the data searchable by other users in the account or you can restrict
     * search access. Searchable data means that all users with access to the OpsItem
     * Overview page (as provided by the <a>DescribeOpsItems</a> API action) can view
     * and search on the specified data. Operational data that is not searchable is
     * only viewable by users who have access to the OpsItem (as provided by the
     * <a>GetOpsItem</a> API action).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view AWS CLI example commands that use these keys,
     * see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalData(const char* key, OpsItemDataValue&& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> <important>
     * <p>Operational data keys <i>can't</i> begin with the following: amazon, aws,
     * amzn, ssm, /amazon, /aws, /amzn, /ssm.</p> </important> <p>You can choose to
     * make the data searchable by other users in the account or you can restrict
     * search access. Searchable data means that all users with access to the OpsItem
     * Overview page (as provided by the <a>DescribeOpsItems</a> API action) can view
     * and search on the specified data. Operational data that is not searchable is
     * only viewable by users who have access to the OpsItem (as provided by the
     * <a>GetOpsItem</a> API action).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view AWS CLI example commands that use these keys,
     * see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-creating-OpsItems.html#OpsCenter-manually-create-OpsItems">Creating
     * OpsItems Manually</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalData(const char* key, const OpsItemDataValue& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, value); return *this; }


    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOperationalDataToDelete() const{ return m_operationalDataToDelete; }

    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline bool OperationalDataToDeleteHasBeenSet() const { return m_operationalDataToDeleteHasBeenSet; }

    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline void SetOperationalDataToDelete(const Aws::Vector<Aws::String>& value) { m_operationalDataToDeleteHasBeenSet = true; m_operationalDataToDelete = value; }

    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline void SetOperationalDataToDelete(Aws::Vector<Aws::String>&& value) { m_operationalDataToDeleteHasBeenSet = true; m_operationalDataToDelete = std::move(value); }

    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline UpdateOpsItemRequest& WithOperationalDataToDelete(const Aws::Vector<Aws::String>& value) { SetOperationalDataToDelete(value); return *this;}

    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline UpdateOpsItemRequest& WithOperationalDataToDelete(Aws::Vector<Aws::String>&& value) { SetOperationalDataToDelete(std::move(value)); return *this;}

    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalDataToDelete(const Aws::String& value) { m_operationalDataToDeleteHasBeenSet = true; m_operationalDataToDelete.push_back(value); return *this; }

    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalDataToDelete(Aws::String&& value) { m_operationalDataToDeleteHasBeenSet = true; m_operationalDataToDelete.push_back(std::move(value)); return *this; }

    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalDataToDelete(const char* value) { m_operationalDataToDeleteHasBeenSet = true; m_operationalDataToDelete.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline const Aws::Vector<OpsItemNotification>& GetNotifications() const{ return m_notifications; }

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline bool NotificationsHasBeenSet() const { return m_notificationsHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline void SetNotifications(const Aws::Vector<OpsItemNotification>& value) { m_notificationsHasBeenSet = true; m_notifications = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline void SetNotifications(Aws::Vector<OpsItemNotification>&& value) { m_notificationsHasBeenSet = true; m_notifications = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline UpdateOpsItemRequest& WithNotifications(const Aws::Vector<OpsItemNotification>& value) { SetNotifications(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline UpdateOpsItemRequest& WithNotifications(Aws::Vector<OpsItemNotification>&& value) { SetNotifications(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline UpdateOpsItemRequest& AddNotifications(const OpsItemNotification& value) { m_notificationsHasBeenSet = true; m_notifications.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline UpdateOpsItemRequest& AddNotifications(OpsItemNotification&& value) { m_notificationsHasBeenSet = true; m_notifications.push_back(std::move(value)); return *this; }


    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline UpdateOpsItemRequest& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>One or more OpsItems that share something in common with the current
     * OpsItems. For example, related OpsItems can include OpsItems with similar error
     * messages, impacted resources, or statuses for the impacted resource.</p>
     */
    inline const Aws::Vector<RelatedOpsItem>& GetRelatedOpsItems() const{ return m_relatedOpsItems; }

    /**
     * <p>One or more OpsItems that share something in common with the current
     * OpsItems. For example, related OpsItems can include OpsItems with similar error
     * messages, impacted resources, or statuses for the impacted resource.</p>
     */
    inline bool RelatedOpsItemsHasBeenSet() const { return m_relatedOpsItemsHasBeenSet; }

    /**
     * <p>One or more OpsItems that share something in common with the current
     * OpsItems. For example, related OpsItems can include OpsItems with similar error
     * messages, impacted resources, or statuses for the impacted resource.</p>
     */
    inline void SetRelatedOpsItems(const Aws::Vector<RelatedOpsItem>& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems = value; }

    /**
     * <p>One or more OpsItems that share something in common with the current
     * OpsItems. For example, related OpsItems can include OpsItems with similar error
     * messages, impacted resources, or statuses for the impacted resource.</p>
     */
    inline void SetRelatedOpsItems(Aws::Vector<RelatedOpsItem>&& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems = std::move(value); }

    /**
     * <p>One or more OpsItems that share something in common with the current
     * OpsItems. For example, related OpsItems can include OpsItems with similar error
     * messages, impacted resources, or statuses for the impacted resource.</p>
     */
    inline UpdateOpsItemRequest& WithRelatedOpsItems(const Aws::Vector<RelatedOpsItem>& value) { SetRelatedOpsItems(value); return *this;}

    /**
     * <p>One or more OpsItems that share something in common with the current
     * OpsItems. For example, related OpsItems can include OpsItems with similar error
     * messages, impacted resources, or statuses for the impacted resource.</p>
     */
    inline UpdateOpsItemRequest& WithRelatedOpsItems(Aws::Vector<RelatedOpsItem>&& value) { SetRelatedOpsItems(std::move(value)); return *this;}

    /**
     * <p>One or more OpsItems that share something in common with the current
     * OpsItems. For example, related OpsItems can include OpsItems with similar error
     * messages, impacted resources, or statuses for the impacted resource.</p>
     */
    inline UpdateOpsItemRequest& AddRelatedOpsItems(const RelatedOpsItem& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems.push_back(value); return *this; }

    /**
     * <p>One or more OpsItems that share something in common with the current
     * OpsItems. For example, related OpsItems can include OpsItems with similar error
     * messages, impacted resources, or statuses for the impacted resource.</p>
     */
    inline UpdateOpsItemRequest& AddRelatedOpsItems(RelatedOpsItem&& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems.push_back(std::move(value)); return *this; }


    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem Details</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline const OpsItemStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem Details</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem Details</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetStatus(const OpsItemStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem Details</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetStatus(OpsItemStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem Details</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& WithStatus(const OpsItemStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem Details</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& WithStatus(OpsItemStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = value; }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::move(value); }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline void SetOpsItemId(const char* value) { m_opsItemIdHasBeenSet = true; m_opsItemId.assign(value); }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline UpdateOpsItemRequest& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline UpdateOpsItemRequest& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline UpdateOpsItemRequest& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}


    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline UpdateOpsItemRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline UpdateOpsItemRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline UpdateOpsItemRequest& WithTitle(const char* value) { SetTitle(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Map<Aws::String, OpsItemDataValue> m_operationalData;
    bool m_operationalDataHasBeenSet;

    Aws::Vector<Aws::String> m_operationalDataToDelete;
    bool m_operationalDataToDeleteHasBeenSet;

    Aws::Vector<OpsItemNotification> m_notifications;
    bool m_notificationsHasBeenSet;

    int m_priority;
    bool m_priorityHasBeenSet;

    Aws::Vector<RelatedOpsItem> m_relatedOpsItems;
    bool m_relatedOpsItemsHasBeenSet;

    OpsItemStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
