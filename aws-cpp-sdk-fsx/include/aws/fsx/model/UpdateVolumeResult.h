/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/Volume.h>
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
  class AWS_FSX_API UpdateVolumeResult
  {
  public:
    UpdateVolumeResult();
    UpdateVolumeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateVolumeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returned after a successful <code>UpdateVolume</code> API operation,
     * describing the volume just updated.</p>
     */
    inline const Volume& GetVolume() const{ return m_volume; }

    /**
     * <p>Returned after a successful <code>UpdateVolume</code> API operation,
     * describing the volume just updated.</p>
     */
    inline void SetVolume(const Volume& value) { m_volume = value; }

    /**
     * <p>Returned after a successful <code>UpdateVolume</code> API operation,
     * describing the volume just updated.</p>
     */
    inline void SetVolume(Volume&& value) { m_volume = std::move(value); }

    /**
     * <p>Returned after a successful <code>UpdateVolume</code> API operation,
     * describing the volume just updated.</p>
     */
    inline UpdateVolumeResult& WithVolume(const Volume& value) { SetVolume(value); return *this;}

    /**
     * <p>Returned after a successful <code>UpdateVolume</code> API operation,
     * describing the volume just updated.</p>
     */
    inline UpdateVolumeResult& WithVolume(Volume&& value) { SetVolume(std::move(value)); return *this;}

  private:

    Volume m_volume;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
