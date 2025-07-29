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
  class UpdateServiceEnvironmentResult
  {
  public:
    AWS_BATCH_API UpdateServiceEnvironmentResult() = default;
    AWS_BATCH_API UpdateServiceEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API UpdateServiceEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the service environment that was updated.</p>
     */
    inline const Aws::String& GetServiceEnvironmentName() const { return m_serviceEnvironmentName; }
    template<typename ServiceEnvironmentNameT = Aws::String>
    void SetServiceEnvironmentName(ServiceEnvironmentNameT&& value) { m_serviceEnvironmentNameHasBeenSet = true; m_serviceEnvironmentName = std::forward<ServiceEnvironmentNameT>(value); }
    template<typename ServiceEnvironmentNameT = Aws::String>
    UpdateServiceEnvironmentResult& WithServiceEnvironmentName(ServiceEnvironmentNameT&& value) { SetServiceEnvironmentName(std::forward<ServiceEnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service environment that was
     * updated.</p>
     */
    inline const Aws::String& GetServiceEnvironmentArn() const { return m_serviceEnvironmentArn; }
    template<typename ServiceEnvironmentArnT = Aws::String>
    void SetServiceEnvironmentArn(ServiceEnvironmentArnT&& value) { m_serviceEnvironmentArnHasBeenSet = true; m_serviceEnvironmentArn = std::forward<ServiceEnvironmentArnT>(value); }
    template<typename ServiceEnvironmentArnT = Aws::String>
    UpdateServiceEnvironmentResult& WithServiceEnvironmentArn(ServiceEnvironmentArnT&& value) { SetServiceEnvironmentArn(std::forward<ServiceEnvironmentArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateServiceEnvironmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceEnvironmentName;
    bool m_serviceEnvironmentNameHasBeenSet = false;

    Aws::String m_serviceEnvironmentArn;
    bool m_serviceEnvironmentArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
