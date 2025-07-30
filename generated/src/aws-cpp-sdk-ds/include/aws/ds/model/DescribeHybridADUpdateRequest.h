/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/HybridUpdateType.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class DescribeHybridADUpdateRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeHybridADUpdateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeHybridADUpdate"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the hybrid directory for which to retrieve update
     * information.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    DescribeHybridADUpdateRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of update activities to retrieve. Valid values include
     * <code>SelfManagedInstances</code> and
     * <code>HybridAdministratorAccount</code>.</p>
     */
    inline HybridUpdateType GetUpdateType() const { return m_updateType; }
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }
    inline void SetUpdateType(HybridUpdateType value) { m_updateTypeHasBeenSet = true; m_updateType = value; }
    inline DescribeHybridADUpdateRequest& WithUpdateType(HybridUpdateType value) { SetUpdateType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token from a previous request to
     * <a>DescribeHybridADUpdate</a>. Pass null if this is the first request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeHybridADUpdateRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    HybridUpdateType m_updateType{HybridUpdateType::NOT_SET};
    bool m_updateTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
