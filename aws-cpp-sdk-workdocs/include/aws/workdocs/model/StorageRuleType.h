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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/StorageType.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the storage for a user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/StorageRuleType">AWS
   * API Reference</a></p>
   */
  class AWS_WORKDOCS_API StorageRuleType
  {
  public:
    StorageRuleType();
    StorageRuleType(Aws::Utils::Json::JsonView jsonValue);
    StorageRuleType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of storage allocated, in bytes.</p>
     */
    inline long long GetStorageAllocatedInBytes() const{ return m_storageAllocatedInBytes; }

    /**
     * <p>The amount of storage allocated, in bytes.</p>
     */
    inline bool StorageAllocatedInBytesHasBeenSet() const { return m_storageAllocatedInBytesHasBeenSet; }

    /**
     * <p>The amount of storage allocated, in bytes.</p>
     */
    inline void SetStorageAllocatedInBytes(long long value) { m_storageAllocatedInBytesHasBeenSet = true; m_storageAllocatedInBytes = value; }

    /**
     * <p>The amount of storage allocated, in bytes.</p>
     */
    inline StorageRuleType& WithStorageAllocatedInBytes(long long value) { SetStorageAllocatedInBytes(value); return *this;}


    /**
     * <p>The type of storage.</p>
     */
    inline const StorageType& GetStorageType() const{ return m_storageType; }

    /**
     * <p>The type of storage.</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>The type of storage.</p>
     */
    inline void SetStorageType(const StorageType& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>The type of storage.</p>
     */
    inline void SetStorageType(StorageType&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>The type of storage.</p>
     */
    inline StorageRuleType& WithStorageType(const StorageType& value) { SetStorageType(value); return *this;}

    /**
     * <p>The type of storage.</p>
     */
    inline StorageRuleType& WithStorageType(StorageType&& value) { SetStorageType(std::move(value)); return *this;}

  private:

    long long m_storageAllocatedInBytes;
    bool m_storageAllocatedInBytesHasBeenSet;

    StorageType m_storageType;
    bool m_storageTypeHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
