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
    AWS_IOT_API ListOutgoingCertificatesResult();
    AWS_IOT_API ListOutgoingCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListOutgoingCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The certificates that are being transferred but not yet accepted.</p>
     */
    inline const Aws::Vector<OutgoingCertificate>& GetOutgoingCertificates() const{ return m_outgoingCertificates; }

    /**
     * <p>The certificates that are being transferred but not yet accepted.</p>
     */
    inline void SetOutgoingCertificates(const Aws::Vector<OutgoingCertificate>& value) { m_outgoingCertificates = value; }

    /**
     * <p>The certificates that are being transferred but not yet accepted.</p>
     */
    inline void SetOutgoingCertificates(Aws::Vector<OutgoingCertificate>&& value) { m_outgoingCertificates = std::move(value); }

    /**
     * <p>The certificates that are being transferred but not yet accepted.</p>
     */
    inline ListOutgoingCertificatesResult& WithOutgoingCertificates(const Aws::Vector<OutgoingCertificate>& value) { SetOutgoingCertificates(value); return *this;}

    /**
     * <p>The certificates that are being transferred but not yet accepted.</p>
     */
    inline ListOutgoingCertificatesResult& WithOutgoingCertificates(Aws::Vector<OutgoingCertificate>&& value) { SetOutgoingCertificates(std::move(value)); return *this;}

    /**
     * <p>The certificates that are being transferred but not yet accepted.</p>
     */
    inline ListOutgoingCertificatesResult& AddOutgoingCertificates(const OutgoingCertificate& value) { m_outgoingCertificates.push_back(value); return *this; }

    /**
     * <p>The certificates that are being transferred but not yet accepted.</p>
     */
    inline ListOutgoingCertificatesResult& AddOutgoingCertificates(OutgoingCertificate&& value) { m_outgoingCertificates.push_back(std::move(value)); return *this; }


    /**
     * <p>The marker for the next set of results.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline ListOutgoingCertificatesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline ListOutgoingCertificatesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline ListOutgoingCertificatesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::Vector<OutgoingCertificate> m_outgoingCertificates;

    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
