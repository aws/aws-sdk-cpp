﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the Amazon Resource Name (ARN) of the storage volume
   * that was deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteVolumeOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API DeleteVolumeResult
  {
  public:
    DeleteVolumeResult();
    DeleteVolumeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteVolumeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume that was deleted. It is
     * the same ARN you provided in the request.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume that was deleted. It is
     * the same ARN you provided in the request.</p>
     */
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume that was deleted. It is
     * the same ARN you provided in the request.</p>
     */
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume that was deleted. It is
     * the same ARN you provided in the request.</p>
     */
    inline void SetVolumeARN(const char* value) { m_volumeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume that was deleted. It is
     * the same ARN you provided in the request.</p>
     */
    inline DeleteVolumeResult& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume that was deleted. It is
     * the same ARN you provided in the request.</p>
     */
    inline DeleteVolumeResult& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume that was deleted. It is
     * the same ARN you provided in the request.</p>
     */
    inline DeleteVolumeResult& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}

  private:

    Aws::String m_volumeARN;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
