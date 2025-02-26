/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateConsumableResourceResult
  {
  public:
    AWS_BATCH_API CreateConsumableResourceResult();
    AWS_BATCH_API CreateConsumableResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API CreateConsumableResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the consumable resource.</p>
     */
    inline const Aws::String& GetConsumableResourceName() const{ return m_consumableResourceName; }
    inline void SetConsumableResourceName(const Aws::String& value) { m_consumableResourceName = value; }
    inline void SetConsumableResourceName(Aws::String&& value) { m_consumableResourceName = std::move(value); }
    inline void SetConsumableResourceName(const char* value) { m_consumableResourceName.assign(value); }
    inline CreateConsumableResourceResult& WithConsumableResourceName(const Aws::String& value) { SetConsumableResourceName(value); return *this;}
    inline CreateConsumableResourceResult& WithConsumableResourceName(Aws::String&& value) { SetConsumableResourceName(std::move(value)); return *this;}
    inline CreateConsumableResourceResult& WithConsumableResourceName(const char* value) { SetConsumableResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the consumable resource.</p>
     */
    inline const Aws::String& GetConsumableResourceArn() const{ return m_consumableResourceArn; }
    inline void SetConsumableResourceArn(const Aws::String& value) { m_consumableResourceArn = value; }
    inline void SetConsumableResourceArn(Aws::String&& value) { m_consumableResourceArn = std::move(value); }
    inline void SetConsumableResourceArn(const char* value) { m_consumableResourceArn.assign(value); }
    inline CreateConsumableResourceResult& WithConsumableResourceArn(const Aws::String& value) { SetConsumableResourceArn(value); return *this;}
    inline CreateConsumableResourceResult& WithConsumableResourceArn(Aws::String&& value) { SetConsumableResourceArn(std::move(value)); return *this;}
    inline CreateConsumableResourceResult& WithConsumableResourceArn(const char* value) { SetConsumableResourceArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateConsumableResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateConsumableResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateConsumableResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_consumableResourceName;

    Aws::String m_consumableResourceArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
