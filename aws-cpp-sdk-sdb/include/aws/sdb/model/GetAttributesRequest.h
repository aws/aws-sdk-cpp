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
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/sdb/SimpleDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SimpleDB
{
namespace Model
{

  /**
   */
  class AWS_SIMPLEDB_API GetAttributesRequest : public SimpleDBRequest
  {
  public:
    GetAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAttributes"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * The name of the domain in which to perform the operation.
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * The name of the domain in which to perform the operation.
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * The name of the domain in which to perform the operation.
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * The name of the domain in which to perform the operation.
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * The name of the domain in which to perform the operation.
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * The name of the domain in which to perform the operation.
     */
    inline GetAttributesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * The name of the domain in which to perform the operation.
     */
    inline GetAttributesRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * The name of the domain in which to perform the operation.
     */
    inline GetAttributesRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * The name of the item.
     */
    inline const Aws::String& GetItemName() const{ return m_itemName; }

    /**
     * The name of the item.
     */
    inline bool ItemNameHasBeenSet() const { return m_itemNameHasBeenSet; }

    /**
     * The name of the item.
     */
    inline void SetItemName(const Aws::String& value) { m_itemNameHasBeenSet = true; m_itemName = value; }

    /**
     * The name of the item.
     */
    inline void SetItemName(Aws::String&& value) { m_itemNameHasBeenSet = true; m_itemName = std::move(value); }

    /**
     * The name of the item.
     */
    inline void SetItemName(const char* value) { m_itemNameHasBeenSet = true; m_itemName.assign(value); }

    /**
     * The name of the item.
     */
    inline GetAttributesRequest& WithItemName(const Aws::String& value) { SetItemName(value); return *this;}

    /**
     * The name of the item.
     */
    inline GetAttributesRequest& WithItemName(Aws::String&& value) { SetItemName(std::move(value)); return *this;}

    /**
     * The name of the item.
     */
    inline GetAttributesRequest& WithItemName(const char* value) { SetItemName(value); return *this;}


    /**
     * The names of the attributes.
     */
    inline const Aws::Vector<Aws::String>& GetAttributeNames() const{ return m_attributeNames; }

    /**
     * The names of the attributes.
     */
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }

    /**
     * The names of the attributes.
     */
    inline void SetAttributeNames(const Aws::Vector<Aws::String>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * The names of the attributes.
     */
    inline void SetAttributeNames(Aws::Vector<Aws::String>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::move(value); }

    /**
     * The names of the attributes.
     */
    inline GetAttributesRequest& WithAttributeNames(const Aws::Vector<Aws::String>& value) { SetAttributeNames(value); return *this;}

    /**
     * The names of the attributes.
     */
    inline GetAttributesRequest& WithAttributeNames(Aws::Vector<Aws::String>&& value) { SetAttributeNames(std::move(value)); return *this;}

    /**
     * The names of the attributes.
     */
    inline GetAttributesRequest& AddAttributeNames(const Aws::String& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

    /**
     * The names of the attributes.
     */
    inline GetAttributesRequest& AddAttributeNames(Aws::String&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(std::move(value)); return *this; }

    /**
     * The names of the attributes.
     */
    inline GetAttributesRequest& AddAttributeNames(const char* value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }


    /**
     * Determines whether or not strong consistency should be enforced when data is
     * read from SimpleDB. If <code>true</code>, any data previously written to
     * SimpleDB will be returned. Otherwise, results will be consistent eventually, and
     * the client may not see data that was written immediately before your read.
     */
    inline bool GetConsistentRead() const{ return m_consistentRead; }

    /**
     * Determines whether or not strong consistency should be enforced when data is
     * read from SimpleDB. If <code>true</code>, any data previously written to
     * SimpleDB will be returned. Otherwise, results will be consistent eventually, and
     * the client may not see data that was written immediately before your read.
     */
    inline bool ConsistentReadHasBeenSet() const { return m_consistentReadHasBeenSet; }

    /**
     * Determines whether or not strong consistency should be enforced when data is
     * read from SimpleDB. If <code>true</code>, any data previously written to
     * SimpleDB will be returned. Otherwise, results will be consistent eventually, and
     * the client may not see data that was written immediately before your read.
     */
    inline void SetConsistentRead(bool value) { m_consistentReadHasBeenSet = true; m_consistentRead = value; }

    /**
     * Determines whether or not strong consistency should be enforced when data is
     * read from SimpleDB. If <code>true</code>, any data previously written to
     * SimpleDB will be returned. Otherwise, results will be consistent eventually, and
     * the client may not see data that was written immediately before your read.
     */
    inline GetAttributesRequest& WithConsistentRead(bool value) { SetConsistentRead(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_itemName;
    bool m_itemNameHasBeenSet;

    Aws::Vector<Aws::String> m_attributeNames;
    bool m_attributeNamesHasBeenSet;

    bool m_consistentRead;
    bool m_consistentReadHasBeenSet;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
