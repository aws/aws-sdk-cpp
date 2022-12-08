/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/Portal.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class UpdatePortalResult
  {
  public:
    AWS_WORKSPACESWEB_API UpdatePortalResult();
    AWS_WORKSPACESWEB_API UpdatePortalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API UpdatePortalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The web portal.</p>
     */
    inline const Portal& GetPortal() const{ return m_portal; }

    /**
     * <p>The web portal.</p>
     */
    inline void SetPortal(const Portal& value) { m_portal = value; }

    /**
     * <p>The web portal.</p>
     */
    inline void SetPortal(Portal&& value) { m_portal = std::move(value); }

    /**
     * <p>The web portal.</p>
     */
    inline UpdatePortalResult& WithPortal(const Portal& value) { SetPortal(value); return *this;}

    /**
     * <p>The web portal.</p>
     */
    inline UpdatePortalResult& WithPortal(Portal&& value) { SetPortal(std::move(value)); return *this;}

  private:

    Portal m_portal;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
