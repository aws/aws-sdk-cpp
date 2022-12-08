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
  class GetStreamKeyResult
  {
  public:
    AWS_IVS_API GetStreamKeyResult();
    AWS_IVS_API GetStreamKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API GetStreamKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <zonbook></zonbook><xhtml></xhtml>
     */
    inline const StreamKey& GetStreamKey() const{ return m_streamKey; }

    /**
     * <zonbook></zonbook><xhtml></xhtml>
     */
    inline void SetStreamKey(const StreamKey& value) { m_streamKey = value; }

    /**
     * <zonbook></zonbook><xhtml></xhtml>
     */
    inline void SetStreamKey(StreamKey&& value) { m_streamKey = std::move(value); }

    /**
     * <zonbook></zonbook><xhtml></xhtml>
     */
    inline GetStreamKeyResult& WithStreamKey(const StreamKey& value) { SetStreamKey(value); return *this;}

    /**
     * <zonbook></zonbook><xhtml></xhtml>
     */
    inline GetStreamKeyResult& WithStreamKey(StreamKey&& value) { SetStreamKey(std::move(value)); return *this;}

  private:

    StreamKey m_streamKey;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
