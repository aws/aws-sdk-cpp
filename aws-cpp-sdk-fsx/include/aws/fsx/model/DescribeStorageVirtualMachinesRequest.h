/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/StorageVirtualMachineFilter.h>
#include <utility>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class DescribeStorageVirtualMachinesRequest : public FSxRequest
  {
  public:
    AWS_FSX_API DescribeStorageVirtualMachinesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStorageVirtualMachines"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Enter the ID of one or more SVMs that you want to view.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStorageVirtualMachineIds() const{ return m_storageVirtualMachineIds; }

    /**
     * <p>Enter the ID of one or more SVMs that you want to view.</p>
     */
    inline bool StorageVirtualMachineIdsHasBeenSet() const { return m_storageVirtualMachineIdsHasBeenSet; }

    /**
     * <p>Enter the ID of one or more SVMs that you want to view.</p>
     */
    inline void SetStorageVirtualMachineIds(const Aws::Vector<Aws::String>& value) { m_storageVirtualMachineIdsHasBeenSet = true; m_storageVirtualMachineIds = value; }

    /**
     * <p>Enter the ID of one or more SVMs that you want to view.</p>
     */
    inline void SetStorageVirtualMachineIds(Aws::Vector<Aws::String>&& value) { m_storageVirtualMachineIdsHasBeenSet = true; m_storageVirtualMachineIds = std::move(value); }

    /**
     * <p>Enter the ID of one or more SVMs that you want to view.</p>
     */
    inline DescribeStorageVirtualMachinesRequest& WithStorageVirtualMachineIds(const Aws::Vector<Aws::String>& value) { SetStorageVirtualMachineIds(value); return *this;}

    /**
     * <p>Enter the ID of one or more SVMs that you want to view.</p>
     */
    inline DescribeStorageVirtualMachinesRequest& WithStorageVirtualMachineIds(Aws::Vector<Aws::String>&& value) { SetStorageVirtualMachineIds(std::move(value)); return *this;}

    /**
     * <p>Enter the ID of one or more SVMs that you want to view.</p>
     */
    inline DescribeStorageVirtualMachinesRequest& AddStorageVirtualMachineIds(const Aws::String& value) { m_storageVirtualMachineIdsHasBeenSet = true; m_storageVirtualMachineIds.push_back(value); return *this; }

    /**
     * <p>Enter the ID of one or more SVMs that you want to view.</p>
     */
    inline DescribeStorageVirtualMachinesRequest& AddStorageVirtualMachineIds(Aws::String&& value) { m_storageVirtualMachineIdsHasBeenSet = true; m_storageVirtualMachineIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Enter the ID of one or more SVMs that you want to view.</p>
     */
    inline DescribeStorageVirtualMachinesRequest& AddStorageVirtualMachineIds(const char* value) { m_storageVirtualMachineIdsHasBeenSet = true; m_storageVirtualMachineIds.push_back(value); return *this; }


    /**
     * <p>Enter a filter name:value pair to view a select set of SVMs.</p>
     */
    inline const Aws::Vector<StorageVirtualMachineFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Enter a filter name:value pair to view a select set of SVMs.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Enter a filter name:value pair to view a select set of SVMs.</p>
     */
    inline void SetFilters(const Aws::Vector<StorageVirtualMachineFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Enter a filter name:value pair to view a select set of SVMs.</p>
     */
    inline void SetFilters(Aws::Vector<StorageVirtualMachineFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Enter a filter name:value pair to view a select set of SVMs.</p>
     */
    inline DescribeStorageVirtualMachinesRequest& WithFilters(const Aws::Vector<StorageVirtualMachineFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Enter a filter name:value pair to view a select set of SVMs.</p>
     */
    inline DescribeStorageVirtualMachinesRequest& WithFilters(Aws::Vector<StorageVirtualMachineFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Enter a filter name:value pair to view a select set of SVMs.</p>
     */
    inline DescribeStorageVirtualMachinesRequest& AddFilters(const StorageVirtualMachineFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Enter a filter name:value pair to view a select set of SVMs.</p>
     */
    inline DescribeStorageVirtualMachinesRequest& AddFilters(StorageVirtualMachineFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline DescribeStorageVirtualMachinesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline DescribeStorageVirtualMachinesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeStorageVirtualMachinesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeStorageVirtualMachinesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_storageVirtualMachineIds;
    bool m_storageVirtualMachineIdsHasBeenSet = false;

    Aws::Vector<StorageVirtualMachineFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
