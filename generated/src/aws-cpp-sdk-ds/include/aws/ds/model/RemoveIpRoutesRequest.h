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
    AWS_DIRECTORYSERVICE_API RemoveIpRoutesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveIpRoutes"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Identifier (ID) of the directory from which you want to remove the IP
     * addresses.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    RemoveIpRoutesRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IP address blocks that you want to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrIps() const { return m_cidrIps; }
    inline bool CidrIpsHasBeenSet() const { return m_cidrIpsHasBeenSet; }
    template<typename CidrIpsT = Aws::Vector<Aws::String>>
    void SetCidrIps(CidrIpsT&& value) { m_cidrIpsHasBeenSet = true; m_cidrIps = std::forward<CidrIpsT>(value); }
    template<typename CidrIpsT = Aws::Vector<Aws::String>>
    RemoveIpRoutesRequest& WithCidrIps(CidrIpsT&& value) { SetCidrIps(std::forward<CidrIpsT>(value)); return *this;}
    template<typename CidrIpsT = Aws::String>
    RemoveIpRoutesRequest& AddCidrIps(CidrIpsT&& value) { m_cidrIpsHasBeenSet = true; m_cidrIps.emplace_back(std::forward<CidrIpsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_cidrIps;
    bool m_cidrIpsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
