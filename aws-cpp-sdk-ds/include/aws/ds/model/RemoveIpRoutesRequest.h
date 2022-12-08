/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class RemoveIpRoutesRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API RemoveIpRoutesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveIpRoutes"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifier (ID) of the directory from which you want to remove the IP
     * addresses.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>Identifier (ID) of the directory from which you want to remove the IP
     * addresses.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>Identifier (ID) of the directory from which you want to remove the IP
     * addresses.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Identifier (ID) of the directory from which you want to remove the IP
     * addresses.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

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
    inline RemoveIpRoutesRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

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
    inline bool CidrIpsHasBeenSet() const { return m_cidrIpsHasBeenSet; }

    /**
     * <p>IP address blocks that you want to remove.</p>
     */
    inline void SetCidrIps(const Aws::Vector<Aws::String>& value) { m_cidrIpsHasBeenSet = true; m_cidrIps = value; }

    /**
     * <p>IP address blocks that you want to remove.</p>
     */
    inline void SetCidrIps(Aws::Vector<Aws::String>&& value) { m_cidrIpsHasBeenSet = true; m_cidrIps = std::move(value); }

    /**
     * <p>IP address blocks that you want to remove.</p>
     */
    inline RemoveIpRoutesRequest& WithCidrIps(const Aws::Vector<Aws::String>& value) { SetCidrIps(value); return *this;}

    /**
     * <p>IP address blocks that you want to remove.</p>
     */
    inline RemoveIpRoutesRequest& WithCidrIps(Aws::Vector<Aws::String>&& value) { SetCidrIps(std::move(value)); return *this;}

    /**
     * <p>IP address blocks that you want to remove.</p>
     */
    inline RemoveIpRoutesRequest& AddCidrIps(const Aws::String& value) { m_cidrIpsHasBeenSet = true; m_cidrIps.push_back(value); return *this; }

    /**
     * <p>IP address blocks that you want to remove.</p>
     */
    inline RemoveIpRoutesRequest& AddCidrIps(Aws::String&& value) { m_cidrIpsHasBeenSet = true; m_cidrIps.push_back(std::move(value)); return *this; }

    /**
     * <p>IP address blocks that you want to remove.</p>
     */
    inline RemoveIpRoutesRequest& AddCidrIps(const char* value) { m_cidrIpsHasBeenSet = true; m_cidrIps.push_back(value); return *this; }

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_cidrIps;
    bool m_cidrIpsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
