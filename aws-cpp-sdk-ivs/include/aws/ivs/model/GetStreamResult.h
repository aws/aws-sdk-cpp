/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/Stream.h>
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
  class GetStreamResult
  {
  public:
    AWS_IVS_API GetStreamResult();
    AWS_IVS_API GetStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API GetStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Stream& GetStream() const{ return m_stream; }

    /**
     * <p/>
     */
    inline void SetStream(const Stream& value) { m_stream = value; }

    /**
     * <p/>
     */
    inline void SetStream(Stream&& value) { m_stream = std::move(value); }

    /**
     * <p/>
     */
    inline GetStreamResult& WithStream(const Stream& value) { SetStream(value); return *this;}

    /**
     * <p/>
     */
    inline GetStreamResult& WithStream(Stream&& value) { SetStream(std::move(value)); return *this;}

  private:

    Stream m_stream;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
