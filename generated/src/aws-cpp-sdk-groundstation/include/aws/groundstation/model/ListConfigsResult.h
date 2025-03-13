/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/ConfigListItem.h>
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
namespace GroundStation
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListConfigsResponse">AWS
   * API Reference</a></p>
   */
  class ListConfigsResult
  {
  public:
    AWS_GROUNDSTATION_API ListConfigsResult() = default;
    AWS_GROUNDSTATION_API ListConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API ListConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of <code>Config</code> items.</p>
     */
    inline const Aws::Vector<ConfigListItem>& GetConfigList() const { return m_configList; }
    template<typename ConfigListT = Aws::Vector<ConfigListItem>>
    void SetConfigList(ConfigListT&& value) { m_configListHasBeenSet = true; m_configList = std::forward<ConfigListT>(value); }
    template<typename ConfigListT = Aws::Vector<ConfigListItem>>
    ListConfigsResult& WithConfigList(ConfigListT&& value) { SetConfigList(std::forward<ConfigListT>(value)); return *this;}
    template<typename ConfigListT = ConfigListItem>
    ListConfigsResult& AddConfigList(ConfigListT&& value) { m_configListHasBeenSet = true; m_configList.emplace_back(std::forward<ConfigListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Next token returned in the response of a previous <code>ListConfigs</code>
     * call. Used to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfigsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigListItem> m_configList;
    bool m_configListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
