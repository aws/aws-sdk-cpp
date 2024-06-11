﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class StartSourceNetworkReplicationRequest : public DrsRequest
  {
  public:
    AWS_DRS_API StartSourceNetworkReplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSourceNetworkReplication"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ID of the Source Network to replicate.</p>
     */
    inline const Aws::String& GetSourceNetworkID() const{ return m_sourceNetworkID; }
    inline bool SourceNetworkIDHasBeenSet() const { return m_sourceNetworkIDHasBeenSet; }
    inline void SetSourceNetworkID(const Aws::String& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = value; }
    inline void SetSourceNetworkID(Aws::String&& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = std::move(value); }
    inline void SetSourceNetworkID(const char* value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID.assign(value); }
    inline StartSourceNetworkReplicationRequest& WithSourceNetworkID(const Aws::String& value) { SetSourceNetworkID(value); return *this;}
    inline StartSourceNetworkReplicationRequest& WithSourceNetworkID(Aws::String&& value) { SetSourceNetworkID(std::move(value)); return *this;}
    inline StartSourceNetworkReplicationRequest& WithSourceNetworkID(const char* value) { SetSourceNetworkID(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceNetworkID;
    bool m_sourceNetworkIDHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
