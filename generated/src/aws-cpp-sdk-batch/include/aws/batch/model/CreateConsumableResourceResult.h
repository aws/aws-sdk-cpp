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
    AWS_BATCH_API CreateConsumableResourceResult() = default;
    AWS_BATCH_API CreateConsumableResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API CreateConsumableResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the consumable resource.</p>
     */
    inline const Aws::String& GetConsumableResourceName() const { return m_consumableResourceName; }
    template<typename ConsumableResourceNameT = Aws::String>
    void SetConsumableResourceName(ConsumableResourceNameT&& value) { m_consumableResourceNameHasBeenSet = true; m_consumableResourceName = std::forward<ConsumableResourceNameT>(value); }
    template<typename ConsumableResourceNameT = Aws::String>
    CreateConsumableResourceResult& WithConsumableResourceName(ConsumableResourceNameT&& value) { SetConsumableResourceName(std::forward<ConsumableResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the consumable resource.</p>
     */
    inline const Aws::String& GetConsumableResourceArn() const { return m_consumableResourceArn; }
    template<typename ConsumableResourceArnT = Aws::String>
    void SetConsumableResourceArn(ConsumableResourceArnT&& value) { m_consumableResourceArnHasBeenSet = true; m_consumableResourceArn = std::forward<ConsumableResourceArnT>(value); }
    template<typename ConsumableResourceArnT = Aws::String>
    CreateConsumableResourceResult& WithConsumableResourceArn(ConsumableResourceArnT&& value) { SetConsumableResourceArn(std::forward<ConsumableResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateConsumableResourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_consumableResourceName;
    bool m_consumableResourceNameHasBeenSet = false;

    Aws::String m_consumableResourceArn;
    bool m_consumableResourceArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
