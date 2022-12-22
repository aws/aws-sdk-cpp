/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/model/Channel.h>
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
  class BatchGetChannelResult
  {
  public:
    AWS_IVS_API BatchGetChannelResult();
    AWS_IVS_API BatchGetChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API BatchGetChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Aws::Vector<Channel>& GetChannels() const{ return m_channels; }

    /**
     * <p/>
     */
    inline void SetChannels(const Aws::Vector<Channel>& value) { m_channels = value; }

    /**
     * <p/>
     */
    inline void SetChannels(Aws::Vector<Channel>&& value) { m_channels = std::move(value); }

    /**
     * <p/>
     */
    inline BatchGetChannelResult& WithChannels(const Aws::Vector<Channel>& value) { SetChannels(value); return *this;}

    /**
     * <p/>
     */
    inline BatchGetChannelResult& WithChannels(Aws::Vector<Channel>&& value) { SetChannels(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline BatchGetChannelResult& AddChannels(const Channel& value) { m_channels.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline BatchGetChannelResult& AddChannels(Channel&& value) { m_channels.push_back(std::move(value)); return *this; }


    /**
     * <p>Each error object is related to a specific ARN in the request.</p>
     */
    inline const Aws::Vector<BatchError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Each error object is related to a specific ARN in the request.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchError>& value) { m_errors = value; }

    /**
     * <p>Each error object is related to a specific ARN in the request.</p>
     */
    inline void SetErrors(Aws::Vector<BatchError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Each error object is related to a specific ARN in the request.</p>
     */
    inline BatchGetChannelResult& WithErrors(const Aws::Vector<BatchError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Each error object is related to a specific ARN in the request.</p>
     */
    inline BatchGetChannelResult& WithErrors(Aws::Vector<BatchError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Each error object is related to a specific ARN in the request.</p>
     */
    inline BatchGetChannelResult& AddErrors(const BatchError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Each error object is related to a specific ARN in the request.</p>
     */
    inline BatchGetChannelResult& AddErrors(BatchError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Channel> m_channels;

    Aws::Vector<BatchError> m_errors;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
