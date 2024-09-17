/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   */
  class DeleteAccessPointRequest : public EFSRequest
  {
  public:
    AWS_EFS_API DeleteAccessPointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAccessPoint"; }

    AWS_EFS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the access point that you want to delete.</p>
     */
    inline const Aws::String& GetAccessPointId() const{ return m_accessPointId; }
    inline bool AccessPointIdHasBeenSet() const { return m_accessPointIdHasBeenSet; }
    inline void SetAccessPointId(const Aws::String& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = value; }
    inline void SetAccessPointId(Aws::String&& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = std::move(value); }
    inline void SetAccessPointId(const char* value) { m_accessPointIdHasBeenSet = true; m_accessPointId.assign(value); }
    inline DeleteAccessPointRequest& WithAccessPointId(const Aws::String& value) { SetAccessPointId(value); return *this;}
    inline DeleteAccessPointRequest& WithAccessPointId(Aws::String&& value) { SetAccessPointId(std::move(value)); return *this;}
    inline DeleteAccessPointRequest& WithAccessPointId(const char* value) { SetAccessPointId(value); return *this;}
    ///@}
  private:

    Aws::String m_accessPointId;
    bool m_accessPointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
