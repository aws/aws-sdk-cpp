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
  class AWS_ELASTICSEARCHSERVICE_API StorageType
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
     * <p>List of limits that are applicable for given storage type. </p>
     */
    inline const Aws::Vector<StorageTypeLimit>& GetStorageTypeLimits() const{ return m_storageTypeLimits; }

    /**
     * <p>List of limits that are applicable for given storage type. </p>
     */
    inline bool StorageTypeLimitsHasBeenSet() const { return m_storageTypeLimitsHasBeenSet; }

    /**
     * <p>List of limits that are applicable for given storage type. </p>
     */
    inline void SetStorageTypeLimits(const Aws::Vector<StorageTypeLimit>& value) { m_storageTypeLimitsHasBeenSet = true; m_storageTypeLimits = value; }

    /**
     * <p>List of limits that are applicable for given storage type. </p>
     */
    inline void SetStorageTypeLimits(Aws::Vector<StorageTypeLimit>&& value) { m_storageTypeLimitsHasBeenSet = true; m_storageTypeLimits = std::move(value); }

    /**
     * <p>List of limits that are applicable for given storage type. </p>
     */
    inline StorageType& WithStorageTypeLimits(const Aws::Vector<StorageTypeLimit>& value) { SetStorageTypeLimits(value); return *this;}

    /**
     * <p>List of limits that are applicable for given storage type. </p>
     */
    inline StorageType& WithStorageTypeLimits(Aws::Vector<StorageTypeLimit>&& value) { SetStorageTypeLimits(std::move(value)); return *this;}

    /**
     * <p>List of limits that are applicable for given storage type. </p>
     */
    inline StorageType& AddStorageTypeLimits(const StorageTypeLimit& value) { m_storageTypeLimitsHasBeenSet = true; m_storageTypeLimits.push_back(value); return *this; }

    /**
     * <p>List of limits that are applicable for given storage type. </p>
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
} // namespace ElasticsearchService
} // namespace Aws
