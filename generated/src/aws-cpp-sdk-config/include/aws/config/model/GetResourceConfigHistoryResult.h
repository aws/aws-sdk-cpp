/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConfigurationItem.h>
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
namespace ConfigService
{
namespace Model
{
  /**
   * <p>The output for the <a>GetResourceConfigHistory</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetResourceConfigHistoryResponse">AWS
   * API Reference</a></p>
   */
  class GetResourceConfigHistoryResult
  {
  public:
    AWS_CONFIGSERVICE_API GetResourceConfigHistoryResult() = default;
    AWS_CONFIGSERVICE_API GetResourceConfigHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetResourceConfigHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>ConfigurationItems</code> Objects. Contatins the
     * configuration history for one or more resources.</p>
     */
    inline const Aws::Vector<ConfigurationItem>& GetConfigurationItems() const { return m_configurationItems; }
    template<typename ConfigurationItemsT = Aws::Vector<ConfigurationItem>>
    void SetConfigurationItems(ConfigurationItemsT&& value) { m_configurationItemsHasBeenSet = true; m_configurationItems = std::forward<ConfigurationItemsT>(value); }
    template<typename ConfigurationItemsT = Aws::Vector<ConfigurationItem>>
    GetResourceConfigHistoryResult& WithConfigurationItems(ConfigurationItemsT&& value) { SetConfigurationItems(std::forward<ConfigurationItemsT>(value)); return *this;}
    template<typename ConfigurationItemsT = ConfigurationItem>
    GetResourceConfigHistoryResult& AddConfigurationItems(ConfigurationItemsT&& value) { m_configurationItemsHasBeenSet = true; m_configurationItems.emplace_back(std::forward<ConfigurationItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetResourceConfigHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourceConfigHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationItem> m_configurationItems;
    bool m_configurationItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
