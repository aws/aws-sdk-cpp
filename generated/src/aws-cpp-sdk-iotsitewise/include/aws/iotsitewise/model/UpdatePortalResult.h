/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/PortalStatus.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class UpdatePortalResult
  {
  public:
    AWS_IOTSITEWISE_API UpdatePortalResult();
    AWS_IOTSITEWISE_API UpdatePortalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API UpdatePortalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the portal, which contains a state (<code>UPDATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline const PortalStatus& GetPortalStatus() const{ return m_portalStatus; }

    /**
     * <p>The status of the portal, which contains a state (<code>UPDATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline void SetPortalStatus(const PortalStatus& value) { m_portalStatus = value; }

    /**
     * <p>The status of the portal, which contains a state (<code>UPDATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline void SetPortalStatus(PortalStatus&& value) { m_portalStatus = std::move(value); }

    /**
     * <p>The status of the portal, which contains a state (<code>UPDATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline UpdatePortalResult& WithPortalStatus(const PortalStatus& value) { SetPortalStatus(value); return *this;}

    /**
     * <p>The status of the portal, which contains a state (<code>UPDATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline UpdatePortalResult& WithPortalStatus(PortalStatus&& value) { SetPortalStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdatePortalResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdatePortalResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdatePortalResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PortalStatus m_portalStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
