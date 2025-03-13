/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/UpdateType.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class DescribeUpdateDirectoryRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeUpdateDirectoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeUpdateDirectory"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The unique identifier of the directory. </p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    DescribeUpdateDirectoryRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of updates you want to describe for the directory. </p>
     */
    inline UpdateType GetUpdateType() const { return m_updateType; }
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }
    inline void SetUpdateType(UpdateType value) { m_updateTypeHasBeenSet = true; m_updateType = value; }
    inline DescribeUpdateDirectoryRequest& WithUpdateType(UpdateType value) { SetUpdateType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the Region. </p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    DescribeUpdateDirectoryRequest& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <code>DescribeUpdateDirectoryResult</code>. NextToken value from a
     * previous call to <a>DescribeUpdateDirectory</a>. Pass null if this is the first
     * call. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeUpdateDirectoryRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    UpdateType m_updateType{UpdateType::NOT_SET};
    bool m_updateTypeHasBeenSet = false;

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
