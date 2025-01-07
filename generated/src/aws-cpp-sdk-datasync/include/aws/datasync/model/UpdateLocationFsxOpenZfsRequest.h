﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/FsxProtocol.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class UpdateLocationFsxOpenZfsRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API UpdateLocationFsxOpenZfsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLocationFsxOpenZfs"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the FSx for OpenZFS transfer
     * location that you're updating.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }
    inline void SetLocationArn(const Aws::String& value) { m_locationArnHasBeenSet = true; m_locationArn = value; }
    inline void SetLocationArn(Aws::String&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::move(value); }
    inline void SetLocationArn(const char* value) { m_locationArnHasBeenSet = true; m_locationArn.assign(value); }
    inline UpdateLocationFsxOpenZfsRequest& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}
    inline UpdateLocationFsxOpenZfsRequest& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}
    inline UpdateLocationFsxOpenZfsRequest& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}
    ///@}

    ///@{
    
    inline const FsxProtocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const FsxProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(FsxProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline UpdateLocationFsxOpenZfsRequest& WithProtocol(const FsxProtocol& value) { SetProtocol(value); return *this;}
    inline UpdateLocationFsxOpenZfsRequest& WithProtocol(FsxProtocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a subdirectory in the location's path that must begin with
     * <code>/fsx</code>. DataSync uses this subdirectory to read or write data
     * (depending on whether the file system is a source or destination location).</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }
    inline UpdateLocationFsxOpenZfsRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}
    inline UpdateLocationFsxOpenZfsRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}
    inline UpdateLocationFsxOpenZfsRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    FsxProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
