﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   * <p>DeleteLocation</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DeleteLocationRequest">AWS
   * API Reference</a></p>
   */
  class DeleteLocationRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API DeleteLocationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLocation"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the location to delete.</p>
     */
    inline const Aws::String& GetLocationArn() const { return m_locationArn; }
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }
    template<typename LocationArnT = Aws::String>
    void SetLocationArn(LocationArnT&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::forward<LocationArnT>(value); }
    template<typename LocationArnT = Aws::String>
    DeleteLocationRequest& WithLocationArn(LocationArnT&& value) { SetLocationArn(std::forward<LocationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
