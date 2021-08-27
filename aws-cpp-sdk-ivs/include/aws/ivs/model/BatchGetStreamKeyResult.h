/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/model/StreamKey.h>
#include <aws/ivs/model/BatchError.h>
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
  class AWS_IVS_API BatchGetStreamKeyResult
  {
  public:
    BatchGetStreamKeyResult();
    BatchGetStreamKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetStreamKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<StreamKey>& GetStreamKeys() const{ return m_streamKeys; }

    
    inline void SetStreamKeys(const Aws::Vector<StreamKey>& value) { m_streamKeys = value; }

    
    inline void SetStreamKeys(Aws::Vector<StreamKey>&& value) { m_streamKeys = std::move(value); }

    
    inline BatchGetStreamKeyResult& WithStreamKeys(const Aws::Vector<StreamKey>& value) { SetStreamKeys(value); return *this;}

    
    inline BatchGetStreamKeyResult& WithStreamKeys(Aws::Vector<StreamKey>&& value) { SetStreamKeys(std::move(value)); return *this;}

    
    inline BatchGetStreamKeyResult& AddStreamKeys(const StreamKey& value) { m_streamKeys.push_back(value); return *this; }

    
    inline BatchGetStreamKeyResult& AddStreamKeys(StreamKey&& value) { m_streamKeys.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<BatchError>& GetErrors() const{ return m_errors; }

    
    inline void SetErrors(const Aws::Vector<BatchError>& value) { m_errors = value; }

    
    inline void SetErrors(Aws::Vector<BatchError>&& value) { m_errors = std::move(value); }

    
    inline BatchGetStreamKeyResult& WithErrors(const Aws::Vector<BatchError>& value) { SetErrors(value); return *this;}

    
    inline BatchGetStreamKeyResult& WithErrors(Aws::Vector<BatchError>&& value) { SetErrors(std::move(value)); return *this;}

    
    inline BatchGetStreamKeyResult& AddErrors(const BatchError& value) { m_errors.push_back(value); return *this; }

    
    inline BatchGetStreamKeyResult& AddErrors(BatchError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<StreamKey> m_streamKeys;

    Aws::Vector<BatchError> m_errors;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
