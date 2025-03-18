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
    AWS_FSX_API DescribeStorageVirtualMachinesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStorageVirtualMachines"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Enter the ID of one or more SVMs that you want to view.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStorageVirtualMachineIds() const { return m_storageVirtualMachineIds; }
    inline bool StorageVirtualMachineIdsHasBeenSet() const { return m_storageVirtualMachineIdsHasBeenSet; }
    template<typename StorageVirtualMachineIdsT = Aws::Vector<Aws::String>>
    void SetStorageVirtualMachineIds(StorageVirtualMachineIdsT&& value) { m_storageVirtualMachineIdsHasBeenSet = true; m_storageVirtualMachineIds = std::forward<StorageVirtualMachineIdsT>(value); }
    template<typename StorageVirtualMachineIdsT = Aws::Vector<Aws::String>>
    DescribeStorageVirtualMachinesRequest& WithStorageVirtualMachineIds(StorageVirtualMachineIdsT&& value) { SetStorageVirtualMachineIds(std::forward<StorageVirtualMachineIdsT>(value)); return *this;}
    template<typename StorageVirtualMachineIdsT = Aws::String>
    DescribeStorageVirtualMachinesRequest& AddStorageVirtualMachineIds(StorageVirtualMachineIdsT&& value) { m_storageVirtualMachineIdsHasBeenSet = true; m_storageVirtualMachineIds.emplace_back(std::forward<StorageVirtualMachineIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enter a filter name:value pair to view a select set of SVMs.</p>
     */
    inline const Aws::Vector<StorageVirtualMachineFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<StorageVirtualMachineFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<StorageVirtualMachineFilter>>
    DescribeStorageVirtualMachinesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = StorageVirtualMachineFilter>
    DescribeStorageVirtualMachinesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeStorageVirtualMachinesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeStorageVirtualMachinesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_storageVirtualMachineIds;
    bool m_storageVirtualMachineIdsHasBeenSet = false;

    Aws::Vector<StorageVirtualMachineFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
