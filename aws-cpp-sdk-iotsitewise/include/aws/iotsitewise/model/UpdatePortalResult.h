/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOTSITEWISE_API UpdatePortalResult
  {
  public:
    UpdatePortalResult();
    UpdatePortalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdatePortalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the portal, which contains a state (<code>UPDATING</code> after
     * successfully calling this action) and any error message.</p>
     */
    inline const PortalStatus& GetPortalStatus() const{ return m_portalStatus; }

    /**
     * <p>The status of the portal, which contains a state (<code>UPDATING</code> after
     * successfully calling this action) and any error message.</p>
     */
    inline void SetPortalStatus(const PortalStatus& value) { m_portalStatus = value; }

    /**
     * <p>The status of the portal, which contains a state (<code>UPDATING</code> after
     * successfully calling this action) and any error message.</p>
     */
    inline void SetPortalStatus(PortalStatus&& value) { m_portalStatus = std::move(value); }

    /**
     * <p>The status of the portal, which contains a state (<code>UPDATING</code> after
     * successfully calling this action) and any error message.</p>
     */
    inline UpdatePortalResult& WithPortalStatus(const PortalStatus& value) { SetPortalStatus(value); return *this;}

    /**
     * <p>The status of the portal, which contains a state (<code>UPDATING</code> after
     * successfully calling this action) and any error message.</p>
     */
    inline UpdatePortalResult& WithPortalStatus(PortalStatus&& value) { SetPortalStatus(std::move(value)); return *this;}

  private:

    PortalStatus m_portalStatus;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
