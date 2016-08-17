/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>DeleteTapeArchiveInput</p>
   */
  class AWS_STORAGEGATEWAY_API DeleteTapeArchiveRequest : public StorageGatewayRequest
  {
  public:
    DeleteTapeArchiveRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete from the virtual
     * tape shelf (VTS).</p>
     */
    inline const Aws::String& GetTapeARN() const{ return m_tapeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete from the virtual
     * tape shelf (VTS).</p>
     */
    inline void SetTapeARN(const Aws::String& value) { m_tapeARNHasBeenSet = true; m_tapeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete from the virtual
     * tape shelf (VTS).</p>
     */
    inline void SetTapeARN(Aws::String&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete from the virtual
     * tape shelf (VTS).</p>
     */
    inline void SetTapeARN(const char* value) { m_tapeARNHasBeenSet = true; m_tapeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete from the virtual
     * tape shelf (VTS).</p>
     */
    inline DeleteTapeArchiveRequest& WithTapeARN(const Aws::String& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete from the virtual
     * tape shelf (VTS).</p>
     */
    inline DeleteTapeArchiveRequest& WithTapeARN(Aws::String&& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete from the virtual
     * tape shelf (VTS).</p>
     */
    inline DeleteTapeArchiveRequest& WithTapeARN(const char* value) { SetTapeARN(value); return *this;}

  private:
    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
