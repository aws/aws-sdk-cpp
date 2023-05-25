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
    AWS_DIRECTORYSERVICE_API UnshareDirectoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UnshareDirectory"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the Managed Microsoft AD directory that you want to stop
     * sharing.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the Managed Microsoft AD directory that you want to stop
     * sharing.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the Managed Microsoft AD directory that you want to stop
     * sharing.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the Managed Microsoft AD directory that you want to stop
     * sharing.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the Managed Microsoft AD directory that you want to stop
     * sharing.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the Managed Microsoft AD directory that you want to stop
     * sharing.</p>
     */
    inline UnshareDirectoryRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the Managed Microsoft AD directory that you want to stop
     * sharing.</p>
     */
    inline UnshareDirectoryRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Managed Microsoft AD directory that you want to stop
     * sharing.</p>
     */
    inline UnshareDirectoryRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>Identifier for the directory consumer account with whom the directory has to
     * be unshared.</p>
     */
    inline const UnshareTarget& GetUnshareTarget() const{ return m_unshareTarget; }

    /**
     * <p>Identifier for the directory consumer account with whom the directory has to
     * be unshared.</p>
     */
    inline bool UnshareTargetHasBeenSet() const { return m_unshareTargetHasBeenSet; }

    /**
     * <p>Identifier for the directory consumer account with whom the directory has to
     * be unshared.</p>
     */
    inline void SetUnshareTarget(const UnshareTarget& value) { m_unshareTargetHasBeenSet = true; m_unshareTarget = value; }

    /**
     * <p>Identifier for the directory consumer account with whom the directory has to
     * be unshared.</p>
     */
    inline void SetUnshareTarget(UnshareTarget&& value) { m_unshareTargetHasBeenSet = true; m_unshareTarget = std::move(value); }

    /**
     * <p>Identifier for the directory consumer account with whom the directory has to
     * be unshared.</p>
     */
    inline UnshareDirectoryRequest& WithUnshareTarget(const UnshareTarget& value) { SetUnshareTarget(value); return *this;}

    /**
     * <p>Identifier for the directory consumer account with whom the directory has to
     * be unshared.</p>
     */
    inline UnshareDirectoryRequest& WithUnshareTarget(UnshareTarget&& value) { SetUnshareTarget(std::move(value)); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    UnshareTarget m_unshareTarget;
    bool m_unshareTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
