/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/Volume.h>
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
namespace FSx
{
namespace Model
{
  class CreateVolumeResult
  {
  public:
    AWS_FSX_API CreateVolumeResult();
    AWS_FSX_API CreateVolumeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API CreateVolumeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returned after a successful <code>CreateVolume</code> API operation,
     * describing the volume just created.</p>
     */
    inline const Volume& GetVolume() const{ return m_volume; }

    /**
     * <p>Returned after a successful <code>CreateVolume</code> API operation,
     * describing the volume just created.</p>
     */
    inline void SetVolume(const Volume& value) { m_volume = value; }

    /**
     * <p>Returned after a successful <code>CreateVolume</code> API operation,
     * describing the volume just created.</p>
     */
    inline void SetVolume(Volume&& value) { m_volume = std::move(value); }

    /**
     * <p>Returned after a successful <code>CreateVolume</code> API operation,
     * describing the volume just created.</p>
     */
    inline CreateVolumeResult& WithVolume(const Volume& value) { SetVolume(value); return *this;}

    /**
     * <p>Returned after a successful <code>CreateVolume</code> API operation,
     * describing the volume just created.</p>
     */
    inline CreateVolumeResult& WithVolume(Volume&& value) { SetVolume(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateVolumeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateVolumeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateVolumeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Volume m_volume;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
