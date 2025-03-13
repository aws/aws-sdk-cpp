/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glacier/model/ProvisionedCapacityDescription.h>
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
  class ListProvisionedCapacityResult
  {
  public:
    AWS_GLACIER_API ListProvisionedCapacityResult() = default;
    AWS_GLACIER_API ListProvisionedCapacityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API ListProvisionedCapacityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response body contains the following JSON fields.</p>
     */
    inline const Aws::Vector<ProvisionedCapacityDescription>& GetProvisionedCapacityList() const { return m_provisionedCapacityList; }
    template<typename ProvisionedCapacityListT = Aws::Vector<ProvisionedCapacityDescription>>
    void SetProvisionedCapacityList(ProvisionedCapacityListT&& value) { m_provisionedCapacityListHasBeenSet = true; m_provisionedCapacityList = std::forward<ProvisionedCapacityListT>(value); }
    template<typename ProvisionedCapacityListT = Aws::Vector<ProvisionedCapacityDescription>>
    ListProvisionedCapacityResult& WithProvisionedCapacityList(ProvisionedCapacityListT&& value) { SetProvisionedCapacityList(std::forward<ProvisionedCapacityListT>(value)); return *this;}
    template<typename ProvisionedCapacityListT = ProvisionedCapacityDescription>
    ListProvisionedCapacityResult& AddProvisionedCapacityList(ProvisionedCapacityListT&& value) { m_provisionedCapacityListHasBeenSet = true; m_provisionedCapacityList.emplace_back(std::forward<ProvisionedCapacityListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProvisionedCapacityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProvisionedCapacityDescription> m_provisionedCapacityList;
    bool m_provisionedCapacityListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
