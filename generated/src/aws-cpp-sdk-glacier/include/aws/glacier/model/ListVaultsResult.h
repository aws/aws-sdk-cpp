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
    AWS_GLACIER_API ListVaultsResult();
    AWS_GLACIER_API ListVaultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API ListVaultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of vaults.</p>
     */
    inline const Aws::Vector<DescribeVaultOutput>& GetVaultList() const{ return m_vaultList; }

    /**
     * <p>List of vaults.</p>
     */
    inline void SetVaultList(const Aws::Vector<DescribeVaultOutput>& value) { m_vaultList = value; }

    /**
     * <p>List of vaults.</p>
     */
    inline void SetVaultList(Aws::Vector<DescribeVaultOutput>&& value) { m_vaultList = std::move(value); }

    /**
     * <p>List of vaults.</p>
     */
    inline ListVaultsResult& WithVaultList(const Aws::Vector<DescribeVaultOutput>& value) { SetVaultList(value); return *this;}

    /**
     * <p>List of vaults.</p>
     */
    inline ListVaultsResult& WithVaultList(Aws::Vector<DescribeVaultOutput>&& value) { SetVaultList(std::move(value)); return *this;}

    /**
     * <p>List of vaults.</p>
     */
    inline ListVaultsResult& AddVaultList(const DescribeVaultOutput& value) { m_vaultList.push_back(value); return *this; }

    /**
     * <p>List of vaults.</p>
     */
    inline ListVaultsResult& AddVaultList(DescribeVaultOutput&& value) { m_vaultList.push_back(std::move(value)); return *this; }


    /**
     * <p>The vault ARN at which to continue pagination of the results. You use the
     * marker in another List Vaults request to obtain more vaults in the list.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The vault ARN at which to continue pagination of the results. You use the
     * marker in another List Vaults request to obtain more vaults in the list.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The vault ARN at which to continue pagination of the results. You use the
     * marker in another List Vaults request to obtain more vaults in the list.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The vault ARN at which to continue pagination of the results. You use the
     * marker in another List Vaults request to obtain more vaults in the list.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The vault ARN at which to continue pagination of the results. You use the
     * marker in another List Vaults request to obtain more vaults in the list.</p>
     */
    inline ListVaultsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The vault ARN at which to continue pagination of the results. You use the
     * marker in another List Vaults request to obtain more vaults in the list.</p>
     */
    inline ListVaultsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The vault ARN at which to continue pagination of the results. You use the
     * marker in another List Vaults request to obtain more vaults in the list.</p>
     */
    inline ListVaultsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<DescribeVaultOutput> m_vaultList;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
