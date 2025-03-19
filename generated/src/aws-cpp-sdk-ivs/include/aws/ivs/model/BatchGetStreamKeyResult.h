/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/model/BatchError.h>
#include <aws/ivs/model/StreamKey.h>
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
namespace IVS
{
namespace Model
{
  class BatchGetStreamKeyResult
  {
  public:
    AWS_IVS_API BatchGetStreamKeyResult() = default;
    AWS_IVS_API BatchGetStreamKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API BatchGetStreamKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<BatchError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchError>>
    BatchGetStreamKeyResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchError>
    BatchGetStreamKeyResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<StreamKey>& GetStreamKeys() const { return m_streamKeys; }
    template<typename StreamKeysT = Aws::Vector<StreamKey>>
    void SetStreamKeys(StreamKeysT&& value) { m_streamKeysHasBeenSet = true; m_streamKeys = std::forward<StreamKeysT>(value); }
    template<typename StreamKeysT = Aws::Vector<StreamKey>>
    BatchGetStreamKeyResult& WithStreamKeys(StreamKeysT&& value) { SetStreamKeys(std::forward<StreamKeysT>(value)); return *this;}
    template<typename StreamKeysT = StreamKey>
    BatchGetStreamKeyResult& AddStreamKeys(StreamKeysT&& value) { m_streamKeysHasBeenSet = true; m_streamKeys.emplace_back(std::forward<StreamKeysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetStreamKeyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::Vector<StreamKey> m_streamKeys;
    bool m_streamKeysHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
