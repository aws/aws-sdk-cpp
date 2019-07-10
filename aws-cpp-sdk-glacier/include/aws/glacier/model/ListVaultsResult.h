/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GLACIER_API ListVaultsResult
  {
  public:
    ListVaultsResult();
    ListVaultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListVaultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
