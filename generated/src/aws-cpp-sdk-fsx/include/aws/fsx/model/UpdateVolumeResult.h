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
  class UpdateVolumeResult
  {
  public:
    AWS_FSX_API UpdateVolumeResult();
    AWS_FSX_API UpdateVolumeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API UpdateVolumeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the volume just updated. Returned after a successful
     * <code>UpdateVolume</code> API operation.</p>
     */
    inline const Volume& GetVolume() const{ return m_volume; }

    /**
     * <p>A description of the volume just updated. Returned after a successful
     * <code>UpdateVolume</code> API operation.</p>
     */
    inline void SetVolume(const Volume& value) { m_volume = value; }

    /**
     * <p>A description of the volume just updated. Returned after a successful
     * <code>UpdateVolume</code> API operation.</p>
     */
    inline void SetVolume(Volume&& value) { m_volume = std::move(value); }

    /**
     * <p>A description of the volume just updated. Returned after a successful
     * <code>UpdateVolume</code> API operation.</p>
     */
    inline UpdateVolumeResult& WithVolume(const Volume& value) { SetVolume(value); return *this;}

    /**
     * <p>A description of the volume just updated. Returned after a successful
     * <code>UpdateVolume</code> API operation.</p>
     */
    inline UpdateVolumeResult& WithVolume(Volume&& value) { SetVolume(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateVolumeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateVolumeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateVolumeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Volume m_volume;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
