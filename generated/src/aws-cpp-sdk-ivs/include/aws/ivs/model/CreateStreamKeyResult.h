/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
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
  class CreateStreamKeyResult
  {
  public:
    AWS_IVS_API CreateStreamKeyResult();
    AWS_IVS_API CreateStreamKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API CreateStreamKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Stream key used to authenticate an RTMPS stream for ingestion.</p>
     */
    inline const StreamKey& GetStreamKey() const{ return m_streamKey; }

    /**
     * <p>Stream key used to authenticate an RTMPS stream for ingestion.</p>
     */
    inline void SetStreamKey(const StreamKey& value) { m_streamKey = value; }

    /**
     * <p>Stream key used to authenticate an RTMPS stream for ingestion.</p>
     */
    inline void SetStreamKey(StreamKey&& value) { m_streamKey = std::move(value); }

    /**
     * <p>Stream key used to authenticate an RTMPS stream for ingestion.</p>
     */
    inline CreateStreamKeyResult& WithStreamKey(const StreamKey& value) { SetStreamKey(value); return *this;}

    /**
     * <p>Stream key used to authenticate an RTMPS stream for ingestion.</p>
     */
    inline CreateStreamKeyResult& WithStreamKey(StreamKey&& value) { SetStreamKey(std::move(value)); return *this;}

  private:

    StreamKey m_streamKey;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
