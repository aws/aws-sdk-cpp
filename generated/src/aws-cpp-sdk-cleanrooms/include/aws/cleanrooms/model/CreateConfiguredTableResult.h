/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ConfiguredTable.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CleanRooms
{
namespace Model
{
  class CreateConfiguredTableResult
  {
  public:
    AWS_CLEANROOMS_API CreateConfiguredTableResult() = default;
    AWS_CLEANROOMS_API CreateConfiguredTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API CreateConfiguredTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The created configured table.</p>
     */
    inline const ConfiguredTable& GetConfiguredTable() const { return m_configuredTable; }
    template<typename ConfiguredTableT = ConfiguredTable>
    void SetConfiguredTable(ConfiguredTableT&& value) { m_configuredTableHasBeenSet = true; m_configuredTable = std::forward<ConfiguredTableT>(value); }
    template<typename ConfiguredTableT = ConfiguredTable>
    CreateConfiguredTableResult& WithConfiguredTable(ConfiguredTableT&& value) { SetConfiguredTable(std::forward<ConfiguredTableT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateConfiguredTableResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConfiguredTable m_configuredTable;
    bool m_configuredTableHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
