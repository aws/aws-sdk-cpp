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
    AWS_SES_API SendBulkTemplatedEmailResult();
    AWS_SES_API SendBulkTemplatedEmailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API SendBulkTemplatedEmailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> action.</p>
     */
    inline const Aws::Vector<BulkEmailDestinationStatus>& GetStatus() const{ return m_status; }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> action.</p>
     */
    inline void SetStatus(const Aws::Vector<BulkEmailDestinationStatus>& value) { m_status = value; }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> action.</p>
     */
    inline void SetStatus(Aws::Vector<BulkEmailDestinationStatus>&& value) { m_status = std::move(value); }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> action.</p>
     */
    inline SendBulkTemplatedEmailResult& WithStatus(const Aws::Vector<BulkEmailDestinationStatus>& value) { SetStatus(value); return *this;}

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> action.</p>
     */
    inline SendBulkTemplatedEmailResult& WithStatus(Aws::Vector<BulkEmailDestinationStatus>&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> action.</p>
     */
    inline SendBulkTemplatedEmailResult& AddStatus(const BulkEmailDestinationStatus& value) { m_status.push_back(value); return *this; }

    /**
     * <p>The unique message identifier returned from the
     * <code>SendBulkTemplatedEmail</code> action.</p>
     */
    inline SendBulkTemplatedEmailResult& AddStatus(BulkEmailDestinationStatus&& value) { m_status.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline SendBulkTemplatedEmailResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline SendBulkTemplatedEmailResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<BulkEmailDestinationStatus> m_status;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
