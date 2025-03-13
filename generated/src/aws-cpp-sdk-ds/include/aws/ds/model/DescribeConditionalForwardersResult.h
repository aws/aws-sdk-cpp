/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/ConditionalForwarder.h>
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
namespace DirectoryService
{
namespace Model
{
  /**
   * <p>The result of a DescribeConditionalForwarder request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeConditionalForwardersResult">AWS
   * API Reference</a></p>
   */
  class DescribeConditionalForwardersResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeConditionalForwardersResult() = default;
    AWS_DIRECTORYSERVICE_API DescribeConditionalForwardersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeConditionalForwardersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of conditional forwarders that have been created.</p>
     */
    inline const Aws::Vector<ConditionalForwarder>& GetConditionalForwarders() const { return m_conditionalForwarders; }
    template<typename ConditionalForwardersT = Aws::Vector<ConditionalForwarder>>
    void SetConditionalForwarders(ConditionalForwardersT&& value) { m_conditionalForwardersHasBeenSet = true; m_conditionalForwarders = std::forward<ConditionalForwardersT>(value); }
    template<typename ConditionalForwardersT = Aws::Vector<ConditionalForwarder>>
    DescribeConditionalForwardersResult& WithConditionalForwarders(ConditionalForwardersT&& value) { SetConditionalForwarders(std::forward<ConditionalForwardersT>(value)); return *this;}
    template<typename ConditionalForwardersT = ConditionalForwarder>
    DescribeConditionalForwardersResult& AddConditionalForwarders(ConditionalForwardersT&& value) { m_conditionalForwardersHasBeenSet = true; m_conditionalForwarders.emplace_back(std::forward<ConditionalForwardersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConditionalForwardersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConditionalForwarder> m_conditionalForwarders;
    bool m_conditionalForwardersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
