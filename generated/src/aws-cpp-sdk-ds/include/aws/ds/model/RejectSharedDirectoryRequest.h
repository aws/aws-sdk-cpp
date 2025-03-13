/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class RejectSharedDirectoryRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API RejectSharedDirectoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectSharedDirectory"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Identifier of the shared directory in the directory consumer account. This
     * identifier is different for each directory owner account.</p>
     */
    inline const Aws::String& GetSharedDirectoryId() const { return m_sharedDirectoryId; }
    inline bool SharedDirectoryIdHasBeenSet() const { return m_sharedDirectoryIdHasBeenSet; }
    template<typename SharedDirectoryIdT = Aws::String>
    void SetSharedDirectoryId(SharedDirectoryIdT&& value) { m_sharedDirectoryIdHasBeenSet = true; m_sharedDirectoryId = std::forward<SharedDirectoryIdT>(value); }
    template<typename SharedDirectoryIdT = Aws::String>
    RejectSharedDirectoryRequest& WithSharedDirectoryId(SharedDirectoryIdT&& value) { SetSharedDirectoryId(std::forward<SharedDirectoryIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sharedDirectoryId;
    bool m_sharedDirectoryIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
