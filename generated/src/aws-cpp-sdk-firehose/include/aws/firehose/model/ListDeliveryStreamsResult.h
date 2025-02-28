﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Firehose
{
namespace Model
{
  class ListDeliveryStreamsResult
  {
  public:
    AWS_FIREHOSE_API ListDeliveryStreamsResult();
    AWS_FIREHOSE_API ListDeliveryStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIREHOSE_API ListDeliveryStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names of the Firehose streams.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeliveryStreamNames() const{ return m_deliveryStreamNames; }
    inline void SetDeliveryStreamNames(const Aws::Vector<Aws::String>& value) { m_deliveryStreamNames = value; }
    inline void SetDeliveryStreamNames(Aws::Vector<Aws::String>&& value) { m_deliveryStreamNames = std::move(value); }
    inline ListDeliveryStreamsResult& WithDeliveryStreamNames(const Aws::Vector<Aws::String>& value) { SetDeliveryStreamNames(value); return *this;}
    inline ListDeliveryStreamsResult& WithDeliveryStreamNames(Aws::Vector<Aws::String>&& value) { SetDeliveryStreamNames(std::move(value)); return *this;}
    inline ListDeliveryStreamsResult& AddDeliveryStreamNames(const Aws::String& value) { m_deliveryStreamNames.push_back(value); return *this; }
    inline ListDeliveryStreamsResult& AddDeliveryStreamNames(Aws::String&& value) { m_deliveryStreamNames.push_back(std::move(value)); return *this; }
    inline ListDeliveryStreamsResult& AddDeliveryStreamNames(const char* value) { m_deliveryStreamNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether there are more Firehose streams available to list.</p>
     */
    inline bool GetHasMoreDeliveryStreams() const{ return m_hasMoreDeliveryStreams; }
    inline void SetHasMoreDeliveryStreams(bool value) { m_hasMoreDeliveryStreams = value; }
    inline ListDeliveryStreamsResult& WithHasMoreDeliveryStreams(bool value) { SetHasMoreDeliveryStreams(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDeliveryStreamsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDeliveryStreamsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDeliveryStreamsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_deliveryStreamNames;

    bool m_hasMoreDeliveryStreams;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
