/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class CreatePortalResult
  {
  public:
    AWS_WORKSPACESWEB_API CreatePortalResult();
    AWS_WORKSPACESWEB_API CreatePortalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API CreatePortalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the web portal.</p>
     */
    inline const Aws::String& GetPortalArn() const{ return m_portalArn; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(const Aws::String& value) { m_portalArn = value; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(Aws::String&& value) { m_portalArn = std::move(value); }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(const char* value) { m_portalArn.assign(value); }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline CreatePortalResult& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline CreatePortalResult& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline CreatePortalResult& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}


    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline const Aws::String& GetPortalEndpoint() const{ return m_portalEndpoint; }

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline void SetPortalEndpoint(const Aws::String& value) { m_portalEndpoint = value; }

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline void SetPortalEndpoint(Aws::String&& value) { m_portalEndpoint = std::move(value); }

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline void SetPortalEndpoint(const char* value) { m_portalEndpoint.assign(value); }

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline CreatePortalResult& WithPortalEndpoint(const Aws::String& value) { SetPortalEndpoint(value); return *this;}

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline CreatePortalResult& WithPortalEndpoint(Aws::String&& value) { SetPortalEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint URL of the web portal that users access in order to start
     * streaming sessions.</p>
     */
    inline CreatePortalResult& WithPortalEndpoint(const char* value) { SetPortalEndpoint(value); return *this;}

  private:

    Aws::String m_portalArn;

    Aws::String m_portalEndpoint;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
