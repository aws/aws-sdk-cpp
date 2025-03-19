/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/email/model/BulkEmailDestinationStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{
  class SendBulkTemplatedEmailResult
  {
  public:
    AWS_SES_API SendBulkTemplatedEmailResult() = default;
    AWS_SES_API SendBulkTemplatedEmailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API SendBulkTemplatedEmailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>One object per intended recipient. Check each response object and retry any
     * messages with a failure status. (Note that order of responses will be respective
     * to order of destinations in the request.)Receipt rules enable you to specify
     * which actions </p>
     */
    inline const Aws::Vector<BulkEmailDestinationStatus>& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::Vector<BulkEmailDestinationStatus>>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::Vector<BulkEmailDestinationStatus>>
    SendBulkTemplatedEmailResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    template<typename StatusT = BulkEmailDestinationStatus>
    SendBulkTemplatedEmailResult& AddStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status.emplace_back(std::forward<StatusT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    SendBulkTemplatedEmailResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BulkEmailDestinationStatus> m_status;
    bool m_statusHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
