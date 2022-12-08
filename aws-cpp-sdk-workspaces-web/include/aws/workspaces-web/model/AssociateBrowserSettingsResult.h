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
  class AssociateBrowserSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API AssociateBrowserSettingsResult();
    AWS_WORKSPACESWEB_API AssociateBrowserSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API AssociateBrowserSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline const Aws::String& GetBrowserSettingsArn() const{ return m_browserSettingsArn; }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline void SetBrowserSettingsArn(const Aws::String& value) { m_browserSettingsArn = value; }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline void SetBrowserSettingsArn(Aws::String&& value) { m_browserSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline void SetBrowserSettingsArn(const char* value) { m_browserSettingsArn.assign(value); }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline AssociateBrowserSettingsResult& WithBrowserSettingsArn(const Aws::String& value) { SetBrowserSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline AssociateBrowserSettingsResult& WithBrowserSettingsArn(Aws::String&& value) { SetBrowserSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline AssociateBrowserSettingsResult& WithBrowserSettingsArn(const char* value) { SetBrowserSettingsArn(value); return *this;}


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
    inline AssociateBrowserSettingsResult& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline AssociateBrowserSettingsResult& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline AssociateBrowserSettingsResult& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}

  private:

    Aws::String m_browserSettingsArn;

    Aws::String m_portalArn;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
