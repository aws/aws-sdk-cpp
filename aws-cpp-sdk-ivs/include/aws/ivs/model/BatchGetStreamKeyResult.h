/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_IVS_API BatchGetStreamKeyResult();
    AWS_IVS_API BatchGetStreamKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API BatchGetStreamKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Aws::Vector<BatchError>& GetErrors() const{ return m_errors; }

    /**
     * <p/>
     */
    inline void SetErrors(const Aws::Vector<BatchError>& value) { m_errors = value; }

    /**
     * <p/>
     */
    inline void SetErrors(Aws::Vector<BatchError>&& value) { m_errors = std::move(value); }

    /**
     * <p/>
     */
    inline BatchGetStreamKeyResult& WithErrors(const Aws::Vector<BatchError>& value) { SetErrors(value); return *this;}

    /**
     * <p/>
     */
    inline BatchGetStreamKeyResult& WithErrors(Aws::Vector<BatchError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline BatchGetStreamKeyResult& AddErrors(const BatchError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline BatchGetStreamKeyResult& AddErrors(BatchError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const Aws::Vector<StreamKey>& GetStreamKeys() const{ return m_streamKeys; }

    /**
     * <p/>
     */
    inline void SetStreamKeys(const Aws::Vector<StreamKey>& value) { m_streamKeys = value; }

    /**
     * <p/>
     */
    inline void SetStreamKeys(Aws::Vector<StreamKey>&& value) { m_streamKeys = std::move(value); }

    /**
     * <p/>
     */
    inline BatchGetStreamKeyResult& WithStreamKeys(const Aws::Vector<StreamKey>& value) { SetStreamKeys(value); return *this;}

    /**
     * <p/>
     */
    inline BatchGetStreamKeyResult& WithStreamKeys(Aws::Vector<StreamKey>&& value) { SetStreamKeys(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline BatchGetStreamKeyResult& AddStreamKeys(const StreamKey& value) { m_streamKeys.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline BatchGetStreamKeyResult& AddStreamKeys(StreamKey&& value) { m_streamKeys.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchError> m_errors;

    Aws::Vector<StreamKey> m_streamKeys;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
