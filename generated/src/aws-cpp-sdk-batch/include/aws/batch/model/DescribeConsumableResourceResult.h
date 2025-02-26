/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{
  class DescribeConsumableResourceResult
  {
  public:
    AWS_BATCH_API DescribeConsumableResourceResult();
    AWS_BATCH_API DescribeConsumableResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API DescribeConsumableResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the consumable resource.</p>
     */
    inline const Aws::String& GetConsumableResourceName() const{ return m_consumableResourceName; }
    inline void SetConsumableResourceName(const Aws::String& value) { m_consumableResourceName = value; }
    inline void SetConsumableResourceName(Aws::String&& value) { m_consumableResourceName = std::move(value); }
    inline void SetConsumableResourceName(const char* value) { m_consumableResourceName.assign(value); }
    inline DescribeConsumableResourceResult& WithConsumableResourceName(const Aws::String& value) { SetConsumableResourceName(value); return *this;}
    inline DescribeConsumableResourceResult& WithConsumableResourceName(Aws::String&& value) { SetConsumableResourceName(std::move(value)); return *this;}
    inline DescribeConsumableResourceResult& WithConsumableResourceName(const char* value) { SetConsumableResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the consumable resource.</p>
     */
    inline const Aws::String& GetConsumableResourceArn() const{ return m_consumableResourceArn; }
    inline void SetConsumableResourceArn(const Aws::String& value) { m_consumableResourceArn = value; }
    inline void SetConsumableResourceArn(Aws::String&& value) { m_consumableResourceArn = std::move(value); }
    inline void SetConsumableResourceArn(const char* value) { m_consumableResourceArn.assign(value); }
    inline DescribeConsumableResourceResult& WithConsumableResourceArn(const Aws::String& value) { SetConsumableResourceArn(value); return *this;}
    inline DescribeConsumableResourceResult& WithConsumableResourceArn(Aws::String&& value) { SetConsumableResourceArn(std::move(value)); return *this;}
    inline DescribeConsumableResourceResult& WithConsumableResourceArn(const char* value) { SetConsumableResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of the consumable resource that is available.</p>
     */
    inline long long GetTotalQuantity() const{ return m_totalQuantity; }
    inline void SetTotalQuantity(long long value) { m_totalQuantity = value; }
    inline DescribeConsumableResourceResult& WithTotalQuantity(long long value) { SetTotalQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of the consumable resource that is currently in use.</p>
     */
    inline long long GetInUseQuantity() const{ return m_inUseQuantity; }
    inline void SetInUseQuantity(long long value) { m_inUseQuantity = value; }
    inline DescribeConsumableResourceResult& WithInUseQuantity(long long value) { SetInUseQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of the consumable resource that is currently available to use.</p>
     */
    inline long long GetAvailableQuantity() const{ return m_availableQuantity; }
    inline void SetAvailableQuantity(long long value) { m_availableQuantity = value; }
    inline DescribeConsumableResourceResult& WithAvailableQuantity(long long value) { SetAvailableQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the resource is available to be re-used after a job
     * completes. Can be one of: </p> <ul> <li> <p> <code>REPLENISHABLE</code> </p>
     * </li> <li> <p> <code>NON_REPLENISHABLE</code> </p> </li> </ul>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline void SetResourceType(const Aws::String& value) { m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceType.assign(value); }
    inline DescribeConsumableResourceResult& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline DescribeConsumableResourceResult& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline DescribeConsumableResourceResult& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the consumable resource was
     * created.</p>
     */
    inline long long GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(long long value) { m_createdAt = value; }
    inline DescribeConsumableResourceResult& WithCreatedAt(long long value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that you apply to the consumable resource to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using-tags.html">Tagging
     * your Batch resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeConsumableResourceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeConsumableResourceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeConsumableResourceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeConsumableResourceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeConsumableResourceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeConsumableResourceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeConsumableResourceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeConsumableResourceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeConsumableResourceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeConsumableResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeConsumableResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeConsumableResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_consumableResourceName;

    Aws::String m_consumableResourceArn;

    long long m_totalQuantity;

    long long m_inUseQuantity;

    long long m_availableQuantity;

    Aws::String m_resourceType;

    long long m_createdAt;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
