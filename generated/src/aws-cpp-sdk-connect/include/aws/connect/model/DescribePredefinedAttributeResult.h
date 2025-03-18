/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/PredefinedAttribute.h>
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
namespace Connect
{
namespace Model
{
  class DescribePredefinedAttributeResult
  {
  public:
    AWS_CONNECT_API DescribePredefinedAttributeResult() = default;
    AWS_CONNECT_API DescribePredefinedAttributeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribePredefinedAttributeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the predefined attribute.</p>
     */
    inline const PredefinedAttribute& GetPredefinedAttribute() const { return m_predefinedAttribute; }
    template<typename PredefinedAttributeT = PredefinedAttribute>
    void SetPredefinedAttribute(PredefinedAttributeT&& value) { m_predefinedAttributeHasBeenSet = true; m_predefinedAttribute = std::forward<PredefinedAttributeT>(value); }
    template<typename PredefinedAttributeT = PredefinedAttribute>
    DescribePredefinedAttributeResult& WithPredefinedAttribute(PredefinedAttributeT&& value) { SetPredefinedAttribute(std::forward<PredefinedAttributeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePredefinedAttributeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PredefinedAttribute m_predefinedAttribute;
    bool m_predefinedAttributeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
