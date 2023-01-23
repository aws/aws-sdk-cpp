/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/PortalStatus.h>
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
  class DeletePortalResult
  {
  public:
    AWS_IOTSITEWISE_API DeletePortalResult();
    AWS_IOTSITEWISE_API DeletePortalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DeletePortalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the portal, which contains a state (<code>DELETING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline const PortalStatus& GetPortalStatus() const{ return m_portalStatus; }

    /**
     * <p>The status of the portal, which contains a state (<code>DELETING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline void SetPortalStatus(const PortalStatus& value) { m_portalStatus = value; }

    /**
     * <p>The status of the portal, which contains a state (<code>DELETING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline void SetPortalStatus(PortalStatus&& value) { m_portalStatus = std::move(value); }

    /**
     * <p>The status of the portal, which contains a state (<code>DELETING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline DeletePortalResult& WithPortalStatus(const PortalStatus& value) { SetPortalStatus(value); return *this;}

    /**
     * <p>The status of the portal, which contains a state (<code>DELETING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline DeletePortalResult& WithPortalStatus(PortalStatus&& value) { SetPortalStatus(std::move(value)); return *this;}

  private:

    PortalStatus m_portalStatus;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
