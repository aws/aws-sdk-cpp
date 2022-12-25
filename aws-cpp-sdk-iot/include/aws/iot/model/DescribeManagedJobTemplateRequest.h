/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class DescribeManagedJobTemplateRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DescribeManagedJobTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeManagedJobTemplate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique name of a managed job template, which is required.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The unique name of a managed job template, which is required.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The unique name of a managed job template, which is required.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The unique name of a managed job template, which is required.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The unique name of a managed job template, which is required.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The unique name of a managed job template, which is required.</p>
     */
    inline DescribeManagedJobTemplateRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The unique name of a managed job template, which is required.</p>
     */
    inline DescribeManagedJobTemplateRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The unique name of a managed job template, which is required.</p>
     */
    inline DescribeManagedJobTemplateRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>An optional parameter to specify version of a managed template. If not
     * specified, the pre-defined default version is returned.</p>
     */
    inline const Aws::String& GetTemplateVersion() const{ return m_templateVersion; }

    /**
     * <p>An optional parameter to specify version of a managed template. If not
     * specified, the pre-defined default version is returned.</p>
     */
    inline bool TemplateVersionHasBeenSet() const { return m_templateVersionHasBeenSet; }

    /**
     * <p>An optional parameter to specify version of a managed template. If not
     * specified, the pre-defined default version is returned.</p>
     */
    inline void SetTemplateVersion(const Aws::String& value) { m_templateVersionHasBeenSet = true; m_templateVersion = value; }

    /**
     * <p>An optional parameter to specify version of a managed template. If not
     * specified, the pre-defined default version is returned.</p>
     */
    inline void SetTemplateVersion(Aws::String&& value) { m_templateVersionHasBeenSet = true; m_templateVersion = std::move(value); }

    /**
     * <p>An optional parameter to specify version of a managed template. If not
     * specified, the pre-defined default version is returned.</p>
     */
    inline void SetTemplateVersion(const char* value) { m_templateVersionHasBeenSet = true; m_templateVersion.assign(value); }

    /**
     * <p>An optional parameter to specify version of a managed template. If not
     * specified, the pre-defined default version is returned.</p>
     */
    inline DescribeManagedJobTemplateRequest& WithTemplateVersion(const Aws::String& value) { SetTemplateVersion(value); return *this;}

    /**
     * <p>An optional parameter to specify version of a managed template. If not
     * specified, the pre-defined default version is returned.</p>
     */
    inline DescribeManagedJobTemplateRequest& WithTemplateVersion(Aws::String&& value) { SetTemplateVersion(std::move(value)); return *this;}

    /**
     * <p>An optional parameter to specify version of a managed template. If not
     * specified, the pre-defined default version is returned.</p>
     */
    inline DescribeManagedJobTemplateRequest& WithTemplateVersion(const char* value) { SetTemplateVersion(value); return *this;}

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_templateVersion;
    bool m_templateVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
