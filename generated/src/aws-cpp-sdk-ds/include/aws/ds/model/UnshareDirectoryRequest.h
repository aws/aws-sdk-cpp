/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/UnshareTarget.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class UnshareDirectoryRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API UnshareDirectoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UnshareDirectory"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the Managed Microsoft AD directory that you want to stop
     * sharing.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    UnshareDirectoryRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier for the directory consumer account with whom the directory has to
     * be unshared.</p>
     */
    inline const UnshareTarget& GetUnshareTarget() const { return m_unshareTarget; }
    inline bool UnshareTargetHasBeenSet() const { return m_unshareTargetHasBeenSet; }
    template<typename UnshareTargetT = UnshareTarget>
    void SetUnshareTarget(UnshareTargetT&& value) { m_unshareTargetHasBeenSet = true; m_unshareTarget = std::forward<UnshareTargetT>(value); }
    template<typename UnshareTargetT = UnshareTarget>
    UnshareDirectoryRequest& WithUnshareTarget(UnshareTargetT&& value) { SetUnshareTarget(std::forward<UnshareTargetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    UnshareTarget m_unshareTarget;
    bool m_unshareTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
