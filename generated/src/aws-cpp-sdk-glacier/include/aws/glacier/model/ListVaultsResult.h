/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glacier/model/DescribeVaultOutput.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glacier
{
namespace Model
{
  /**
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ListVaultsOutput">AWS
   * API Reference</a></p>
   */
  class ListVaultsResult
  {
  public:
    AWS_GLACIER_API ListVaultsResult() = default;
    AWS_GLACIER_API ListVaultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API ListVaultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of vaults.</p>
     */
    inline const Aws::Vector<DescribeVaultOutput>& GetVaultList() const { return m_vaultList; }
    template<typename VaultListT = Aws::Vector<DescribeVaultOutput>>
    void SetVaultList(VaultListT&& value) { m_vaultListHasBeenSet = true; m_vaultList = std::forward<VaultListT>(value); }
    template<typename VaultListT = Aws::Vector<DescribeVaultOutput>>
    ListVaultsResult& WithVaultList(VaultListT&& value) { SetVaultList(std::forward<VaultListT>(value)); return *this;}
    template<typename VaultListT = DescribeVaultOutput>
    ListVaultsResult& AddVaultList(VaultListT&& value) { m_vaultListHasBeenSet = true; m_vaultList.emplace_back(std::forward<VaultListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The vault ARN at which to continue pagination of the results. You use the
     * marker in another List Vaults request to obtain more vaults in the list.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListVaultsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVaultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DescribeVaultOutput> m_vaultList;
    bool m_vaultListHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
