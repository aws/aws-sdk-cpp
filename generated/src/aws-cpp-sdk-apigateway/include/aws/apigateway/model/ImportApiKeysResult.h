/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>The identifier of an ApiKey used in a UsagePlan.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ApiKeyIds">AWS
   * API Reference</a></p>
   */
  class ImportApiKeysResult
  {
  public:
    AWS_APIGATEWAY_API ImportApiKeysResult() = default;
    AWS_APIGATEWAY_API ImportApiKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API ImportApiKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all the ApiKey identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const { return m_ids; }
    template<typename IdsT = Aws::Vector<Aws::String>>
    void SetIds(IdsT&& value) { m_idsHasBeenSet = true; m_ids = std::forward<IdsT>(value); }
    template<typename IdsT = Aws::Vector<Aws::String>>
    ImportApiKeysResult& WithIds(IdsT&& value) { SetIds(std::forward<IdsT>(value)); return *this;}
    template<typename IdsT = Aws::String>
    ImportApiKeysResult& AddIds(IdsT&& value) { m_idsHasBeenSet = true; m_ids.emplace_back(std::forward<IdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of warning messages.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWarnings() const { return m_warnings; }
    template<typename WarningsT = Aws::Vector<Aws::String>>
    void SetWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings = std::forward<WarningsT>(value); }
    template<typename WarningsT = Aws::Vector<Aws::String>>
    ImportApiKeysResult& WithWarnings(WarningsT&& value) { SetWarnings(std::forward<WarningsT>(value)); return *this;}
    template<typename WarningsT = Aws::String>
    ImportApiKeysResult& AddWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings.emplace_back(std::forward<WarningsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ImportApiKeysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet = false;

    Aws::Vector<Aws::String> m_warnings;
    bool m_warningsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
