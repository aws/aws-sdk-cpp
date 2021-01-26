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
  class AWS_IVS_API GetStreamKeyResult
  {
  public:
    GetStreamKeyResult();
    GetStreamKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetStreamKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const StreamKey& GetStreamKey() const{ return m_streamKey; }

    
    inline void SetStreamKey(const StreamKey& value) { m_streamKey = value; }

    
    inline void SetStreamKey(StreamKey&& value) { m_streamKey = std::move(value); }

    
    inline GetStreamKeyResult& WithStreamKey(const StreamKey& value) { SetStreamKey(value); return *this;}

    
    inline GetStreamKeyResult& WithStreamKey(StreamKey&& value) { SetStreamKey(std::move(value)); return *this;}

  private:

    StreamKey m_streamKey;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
