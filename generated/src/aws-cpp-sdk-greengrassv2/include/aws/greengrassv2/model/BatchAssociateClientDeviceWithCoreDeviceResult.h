/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/AssociateClientDeviceWithCoreDeviceErrorEntry.h>
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
namespace GreengrassV2
{
namespace Model
{
  class BatchAssociateClientDeviceWithCoreDeviceResult
  {
  public:
    AWS_GREENGRASSV2_API BatchAssociateClientDeviceWithCoreDeviceResult() = default;
    AWS_GREENGRASSV2_API BatchAssociateClientDeviceWithCoreDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API BatchAssociateClientDeviceWithCoreDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of any errors for the entries in the request. Each error entry
     * contains the name of the IoT thing that failed to associate.</p>
     */
    inline const Aws::Vector<AssociateClientDeviceWithCoreDeviceErrorEntry>& GetErrorEntries() const { return m_errorEntries; }
    template<typename ErrorEntriesT = Aws::Vector<AssociateClientDeviceWithCoreDeviceErrorEntry>>
    void SetErrorEntries(ErrorEntriesT&& value) { m_errorEntriesHasBeenSet = true; m_errorEntries = std::forward<ErrorEntriesT>(value); }
    template<typename ErrorEntriesT = Aws::Vector<AssociateClientDeviceWithCoreDeviceErrorEntry>>
    BatchAssociateClientDeviceWithCoreDeviceResult& WithErrorEntries(ErrorEntriesT&& value) { SetErrorEntries(std::forward<ErrorEntriesT>(value)); return *this;}
    template<typename ErrorEntriesT = AssociateClientDeviceWithCoreDeviceErrorEntry>
    BatchAssociateClientDeviceWithCoreDeviceResult& AddErrorEntries(ErrorEntriesT&& value) { m_errorEntriesHasBeenSet = true; m_errorEntries.emplace_back(std::forward<ErrorEntriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchAssociateClientDeviceWithCoreDeviceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssociateClientDeviceWithCoreDeviceErrorEntry> m_errorEntries;
    bool m_errorEntriesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
