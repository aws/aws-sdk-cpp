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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class AWS_DIRECTORYSERVICE_API RemoveIpRoutesRequest : public DirectoryServiceRequest
  {
  public:
    RemoveIpRoutesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Identifier (ID) of the directory from which you want to remove the IP
     * addresses.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>Identifier (ID) of the directory from which you want to remove the IP
     * addresses.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Identifier (ID) of the directory from which you want to remove the IP
     * addresses.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Identifier (ID) of the directory from which you want to remove the IP
     * addresses.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>Identifier (ID) of the directory from which you want to remove the IP
     * addresses.</p>
     */
    inline RemoveIpRoutesRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Identifier (ID) of the directory from which you want to remove the IP
     * addresses.</p>
     */
    inline RemoveIpRoutesRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Identifier (ID) of the directory from which you want to remove the IP
     * addresses.</p>
     */
    inline RemoveIpRoutesRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}

    /**
     * <p>IP address blocks that you want to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrIps() const{ return m_cidrIps; }

    /**
     * <p>IP address blocks that you want to remove.</p>
     */
    inline void SetCidrIps(const Aws::Vector<Aws::String>& value) { m_cidrIpsHasBeenSet = true; m_cidrIps = value; }

    /**
     * <p>IP address blocks that you want to remove.</p>
     */
    inline void SetCidrIps(Aws::Vector<Aws::String>&& value) { m_cidrIpsHasBeenSet = true; m_cidrIps = value; }

    /**
     * <p>IP address blocks that you want to remove.</p>
     */
    inline RemoveIpRoutesRequest& WithCidrIps(const Aws::Vector<Aws::String>& value) { SetCidrIps(value); return *this;}

    /**
     * <p>IP address blocks that you want to remove.</p>
     */
    inline RemoveIpRoutesRequest& WithCidrIps(Aws::Vector<Aws::String>&& value) { SetCidrIps(value); return *this;}

    /**
     * <p>IP address blocks that you want to remove.</p>
     */
    inline RemoveIpRoutesRequest& AddCidrIps(const Aws::String& value) { m_cidrIpsHasBeenSet = true; m_cidrIps.push_back(value); return *this; }

    /**
     * <p>IP address blocks that you want to remove.</p>
     */
    inline RemoveIpRoutesRequest& AddCidrIps(Aws::String&& value) { m_cidrIpsHasBeenSet = true; m_cidrIps.push_back(value); return *this; }

    /**
     * <p>IP address blocks that you want to remove.</p>
     */
    inline RemoveIpRoutesRequest& AddCidrIps(const char* value) { m_cidrIpsHasBeenSet = true; m_cidrIps.push_back(value); return *this; }

  private:
    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;
    Aws::Vector<Aws::String> m_cidrIps;
    bool m_cidrIpsHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
