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
#include <aws/sdb/model/ReplaceableItem.h>
#include <utility>

namespace Aws
{
namespace SimpleDB
{
namespace Model
{

  /**
   */
  class AWS_SIMPLEDB_API BatchPutAttributesRequest : public SimpleDBRequest
  {
  public:
    BatchPutAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutAttributes"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * The name of the domain in which the attributes are being stored.
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * The name of the domain in which the attributes are being stored.
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * The name of the domain in which the attributes are being stored.
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * The name of the domain in which the attributes are being stored.
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * The name of the domain in which the attributes are being stored.
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * The name of the domain in which the attributes are being stored.
     */
    inline BatchPutAttributesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * The name of the domain in which the attributes are being stored.
     */
    inline BatchPutAttributesRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * The name of the domain in which the attributes are being stored.
     */
    inline BatchPutAttributesRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * A list of items on which to perform the operation.
     */
    inline const Aws::Vector<ReplaceableItem>& GetItems() const{ return m_items; }

    /**
     * A list of items on which to perform the operation.
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * A list of items on which to perform the operation.
     */
    inline void SetItems(const Aws::Vector<ReplaceableItem>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * A list of items on which to perform the operation.
     */
    inline void SetItems(Aws::Vector<ReplaceableItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * A list of items on which to perform the operation.
     */
    inline BatchPutAttributesRequest& WithItems(const Aws::Vector<ReplaceableItem>& value) { SetItems(value); return *this;}

    /**
     * A list of items on which to perform the operation.
     */
    inline BatchPutAttributesRequest& WithItems(Aws::Vector<ReplaceableItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * A list of items on which to perform the operation.
     */
    inline BatchPutAttributesRequest& AddItems(const ReplaceableItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * A list of items on which to perform the operation.
     */
    inline BatchPutAttributesRequest& AddItems(ReplaceableItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::Vector<ReplaceableItem> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
