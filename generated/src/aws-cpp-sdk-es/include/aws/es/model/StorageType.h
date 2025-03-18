/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/StorageTypeLimit.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>StorageTypes represents the list of storage related types and their
   * attributes that are available for given InstanceType. </p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/StorageType">AWS
   * API Reference</a></p>
   */
  class StorageType
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API StorageType() = default;
    AWS_ELASTICSEARCHSERVICE_API StorageType(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API StorageType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetStorageTypeName() const { return m_storageTypeName; }
    inline bool StorageTypeNameHasBeenSet() const { return m_storageTypeNameHasBeenSet; }
    template<typename StorageTypeNameT = Aws::String>
    void SetStorageTypeName(StorageTypeNameT&& value) { m_storageTypeNameHasBeenSet = true; m_storageTypeName = std::forward<StorageTypeNameT>(value); }
    template<typename StorageTypeNameT = Aws::String>
    StorageType& WithStorageTypeName(StorageTypeNameT&& value) { SetStorageTypeName(std::forward<StorageTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetStorageSubTypeName() const { return m_storageSubTypeName; }
    inline bool StorageSubTypeNameHasBeenSet() const { return m_storageSubTypeNameHasBeenSet; }
    template<typename StorageSubTypeNameT = Aws::String>
    void SetStorageSubTypeName(StorageSubTypeNameT&& value) { m_storageSubTypeNameHasBeenSet = true; m_storageSubTypeName = std::forward<StorageSubTypeNameT>(value); }
    template<typename StorageSubTypeNameT = Aws::String>
    StorageType& WithStorageSubTypeName(StorageSubTypeNameT&& value) { SetStorageSubTypeName(std::forward<StorageSubTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of limits that are applicable for given storage type. </p>
     */
    inline const Aws::Vector<StorageTypeLimit>& GetStorageTypeLimits() const { return m_storageTypeLimits; }
    inline bool StorageTypeLimitsHasBeenSet() const { return m_storageTypeLimitsHasBeenSet; }
    template<typename StorageTypeLimitsT = Aws::Vector<StorageTypeLimit>>
    void SetStorageTypeLimits(StorageTypeLimitsT&& value) { m_storageTypeLimitsHasBeenSet = true; m_storageTypeLimits = std::forward<StorageTypeLimitsT>(value); }
    template<typename StorageTypeLimitsT = Aws::Vector<StorageTypeLimit>>
    StorageType& WithStorageTypeLimits(StorageTypeLimitsT&& value) { SetStorageTypeLimits(std::forward<StorageTypeLimitsT>(value)); return *this;}
    template<typename StorageTypeLimitsT = StorageTypeLimit>
    StorageType& AddStorageTypeLimits(StorageTypeLimitsT&& value) { m_storageTypeLimitsHasBeenSet = true; m_storageTypeLimits.emplace_back(std::forward<StorageTypeLimitsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_storageTypeName;
    bool m_storageTypeNameHasBeenSet = false;

    Aws::String m_storageSubTypeName;
    bool m_storageSubTypeNameHasBeenSet = false;

    Aws::Vector<StorageTypeLimit> m_storageTypeLimits;
    bool m_storageTypeLimitsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
