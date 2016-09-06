/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/sdb/SimpleDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sdb/model/UpdateCondition.h>
#include <aws/sdb/model/ReplaceableAttribute.h>

namespace Aws
{
namespace SimpleDB
{
namespace Model
{

  /**
   */
  class AWS_SIMPLEDB_API PutAttributesRequest : public SimpleDBRequest
  {
  public:
    PutAttributesRequest();
    Aws::String SerializePayload() const override;

    /**
     * The name of the domain in which to perform the operation.
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * The name of the domain in which to perform the operation.
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * The name of the domain in which to perform the operation.
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * The name of the domain in which to perform the operation.
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * The name of the domain in which to perform the operation.
     */
    inline PutAttributesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * The name of the domain in which to perform the operation.
     */
    inline PutAttributesRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * The name of the domain in which to perform the operation.
     */
    inline PutAttributesRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * The name of the item.
     */
    inline const Aws::String& GetItemName() const{ return m_itemName; }

    /**
     * The name of the item.
     */
    inline void SetItemName(const Aws::String& value) { m_itemNameHasBeenSet = true; m_itemName = value; }

    /**
     * The name of the item.
     */
    inline void SetItemName(Aws::String&& value) { m_itemNameHasBeenSet = true; m_itemName = value; }

    /**
     * The name of the item.
     */
    inline void SetItemName(const char* value) { m_itemNameHasBeenSet = true; m_itemName.assign(value); }

    /**
     * The name of the item.
     */
    inline PutAttributesRequest& WithItemName(const Aws::String& value) { SetItemName(value); return *this;}

    /**
     * The name of the item.
     */
    inline PutAttributesRequest& WithItemName(Aws::String&& value) { SetItemName(value); return *this;}

    /**
     * The name of the item.
     */
    inline PutAttributesRequest& WithItemName(const char* value) { SetItemName(value); return *this;}

    /**
     * The list of attributes.
     */
    inline const Aws::Vector<ReplaceableAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * The list of attributes.
     */
    inline void SetAttributes(const Aws::Vector<ReplaceableAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * The list of attributes.
     */
    inline void SetAttributes(Aws::Vector<ReplaceableAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * The list of attributes.
     */
    inline PutAttributesRequest& WithAttributes(const Aws::Vector<ReplaceableAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * The list of attributes.
     */
    inline PutAttributesRequest& WithAttributes(Aws::Vector<ReplaceableAttribute>&& value) { SetAttributes(value); return *this;}

    /**
     * The list of attributes.
     */
    inline PutAttributesRequest& AddAttributes(const ReplaceableAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * The list of attributes.
     */
    inline PutAttributesRequest& AddAttributes(ReplaceableAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * The update condition which, if specified, determines whether the specified
     * attributes will be updated or not. The update condition must be satisfied in
     * order for this request to be processed and the attributes to be updated.
     */
    inline const UpdateCondition& GetExpected() const{ return m_expected; }

    /**
     * The update condition which, if specified, determines whether the specified
     * attributes will be updated or not. The update condition must be satisfied in
     * order for this request to be processed and the attributes to be updated.
     */
    inline void SetExpected(const UpdateCondition& value) { m_expectedHasBeenSet = true; m_expected = value; }

    /**
     * The update condition which, if specified, determines whether the specified
     * attributes will be updated or not. The update condition must be satisfied in
     * order for this request to be processed and the attributes to be updated.
     */
    inline void SetExpected(UpdateCondition&& value) { m_expectedHasBeenSet = true; m_expected = value; }

    /**
     * The update condition which, if specified, determines whether the specified
     * attributes will be updated or not. The update condition must be satisfied in
     * order for this request to be processed and the attributes to be updated.
     */
    inline PutAttributesRequest& WithExpected(const UpdateCondition& value) { SetExpected(value); return *this;}

    /**
     * The update condition which, if specified, determines whether the specified
     * attributes will be updated or not. The update condition must be satisfied in
     * order for this request to be processed and the attributes to be updated.
     */
    inline PutAttributesRequest& WithExpected(UpdateCondition&& value) { SetExpected(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::String m_itemName;
    bool m_itemNameHasBeenSet;
    Aws::Vector<ReplaceableAttribute> m_attributes;
    bool m_attributesHasBeenSet;
    UpdateCondition m_expected;
    bool m_expectedHasBeenSet;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
