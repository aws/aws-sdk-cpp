﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/StorageTypeLimit.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>StorageTypes represents the list of storage-related types and their
   * attributes that are available for a given InstanceType. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/StorageType">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API StorageType
  {
  public:
    StorageType();
    StorageType(Aws::Utils::Json::JsonView jsonValue);
    StorageType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetStorageTypeName() const{ return m_storageTypeName; }

    
    inline bool StorageTypeNameHasBeenSet() const { return m_storageTypeNameHasBeenSet; }

    
    inline void SetStorageTypeName(const Aws::String& value) { m_storageTypeNameHasBeenSet = true; m_storageTypeName = value; }

    
    inline void SetStorageTypeName(Aws::String&& value) { m_storageTypeNameHasBeenSet = true; m_storageTypeName = std::move(value); }

    
    inline void SetStorageTypeName(const char* value) { m_storageTypeNameHasBeenSet = true; m_storageTypeName.assign(value); }

    
    inline StorageType& WithStorageTypeName(const Aws::String& value) { SetStorageTypeName(value); return *this;}

    
    inline StorageType& WithStorageTypeName(Aws::String&& value) { SetStorageTypeName(std::move(value)); return *this;}

    
    inline StorageType& WithStorageTypeName(const char* value) { SetStorageTypeName(value); return *this;}


    
    inline const Aws::String& GetStorageSubTypeName() const{ return m_storageSubTypeName; }

    
    inline bool StorageSubTypeNameHasBeenSet() const { return m_storageSubTypeNameHasBeenSet; }

    
    inline void SetStorageSubTypeName(const Aws::String& value) { m_storageSubTypeNameHasBeenSet = true; m_storageSubTypeName = value; }

    
    inline void SetStorageSubTypeName(Aws::String&& value) { m_storageSubTypeNameHasBeenSet = true; m_storageSubTypeName = std::move(value); }

    
    inline void SetStorageSubTypeName(const char* value) { m_storageSubTypeNameHasBeenSet = true; m_storageSubTypeName.assign(value); }

    
    inline StorageType& WithStorageSubTypeName(const Aws::String& value) { SetStorageSubTypeName(value); return *this;}

    
    inline StorageType& WithStorageSubTypeName(Aws::String&& value) { SetStorageSubTypeName(std::move(value)); return *this;}

    
    inline StorageType& WithStorageSubTypeName(const char* value) { SetStorageSubTypeName(value); return *this;}


    /**
     * <p>Limits that are applicable for the given storage type. </p>
     */
    inline const Aws::Vector<StorageTypeLimit>& GetStorageTypeLimits() const{ return m_storageTypeLimits; }

    /**
     * <p>Limits that are applicable for the given storage type. </p>
     */
    inline bool StorageTypeLimitsHasBeenSet() const { return m_storageTypeLimitsHasBeenSet; }

    /**
     * <p>Limits that are applicable for the given storage type. </p>
     */
    inline void SetStorageTypeLimits(const Aws::Vector<StorageTypeLimit>& value) { m_storageTypeLimitsHasBeenSet = true; m_storageTypeLimits = value; }

    /**
     * <p>Limits that are applicable for the given storage type. </p>
     */
    inline void SetStorageTypeLimits(Aws::Vector<StorageTypeLimit>&& value) { m_storageTypeLimitsHasBeenSet = true; m_storageTypeLimits = std::move(value); }

    /**
     * <p>Limits that are applicable for the given storage type. </p>
     */
    inline StorageType& WithStorageTypeLimits(const Aws::Vector<StorageTypeLimit>& value) { SetStorageTypeLimits(value); return *this;}

    /**
     * <p>Limits that are applicable for the given storage type. </p>
     */
    inline StorageType& WithStorageTypeLimits(Aws::Vector<StorageTypeLimit>&& value) { SetStorageTypeLimits(std::move(value)); return *this;}

    /**
     * <p>Limits that are applicable for the given storage type. </p>
     */
    inline StorageType& AddStorageTypeLimits(const StorageTypeLimit& value) { m_storageTypeLimitsHasBeenSet = true; m_storageTypeLimits.push_back(value); return *this; }

    /**
     * <p>Limits that are applicable for the given storage type. </p>
     */
    inline StorageType& AddStorageTypeLimits(StorageTypeLimit&& value) { m_storageTypeLimitsHasBeenSet = true; m_storageTypeLimits.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_storageTypeName;
    bool m_storageTypeNameHasBeenSet;

    Aws::String m_storageSubTypeName;
    bool m_storageSubTypeNameHasBeenSet;

    Aws::Vector<StorageTypeLimit> m_storageTypeLimits;
    bool m_storageTypeLimitsHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
