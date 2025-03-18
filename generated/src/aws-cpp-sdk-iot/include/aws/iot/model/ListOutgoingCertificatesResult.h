/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/OutgoingCertificate.h>
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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output from the ListOutgoingCertificates operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListOutgoingCertificatesResponse">AWS
   * API Reference</a></p>
   */
  class ListOutgoingCertificatesResult
  {
  public:
    AWS_IOT_API ListOutgoingCertificatesResult() = default;
    AWS_IOT_API ListOutgoingCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListOutgoingCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The certificates that are being transferred but not yet accepted.</p>
     */
    inline const Aws::Vector<OutgoingCertificate>& GetOutgoingCertificates() const { return m_outgoingCertificates; }
    template<typename OutgoingCertificatesT = Aws::Vector<OutgoingCertificate>>
    void SetOutgoingCertificates(OutgoingCertificatesT&& value) { m_outgoingCertificatesHasBeenSet = true; m_outgoingCertificates = std::forward<OutgoingCertificatesT>(value); }
    template<typename OutgoingCertificatesT = Aws::Vector<OutgoingCertificate>>
    ListOutgoingCertificatesResult& WithOutgoingCertificates(OutgoingCertificatesT&& value) { SetOutgoingCertificates(std::forward<OutgoingCertificatesT>(value)); return *this;}
    template<typename OutgoingCertificatesT = OutgoingCertificate>
    ListOutgoingCertificatesResult& AddOutgoingCertificates(OutgoingCertificatesT&& value) { m_outgoingCertificatesHasBeenSet = true; m_outgoingCertificates.emplace_back(std::forward<OutgoingCertificatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The marker for the next set of results.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListOutgoingCertificatesResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOutgoingCertificatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OutgoingCertificate> m_outgoingCertificates;
    bool m_outgoingCertificatesHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
