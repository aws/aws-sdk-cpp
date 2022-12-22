/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies which version of a message template to use as the active version of
   * the template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/TemplateActiveVersionRequest">AWS
   * API Reference</a></p>
   */
  class TemplateActiveVersionRequest
  {
  public:
    AWS_PINPOINT_API TemplateActiveVersionRequest();
    AWS_PINPOINT_API TemplateActiveVersionRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API TemplateActiveVersionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of the message template to use as the active version of the
     * template. Valid values are: latest, for the most recent version of the template;
     * or, the unique identifier for any existing version of the template. If you
     * specify an identifier, the value must match the identifier for an existing
     * template version. To retrieve a list of versions and version identifiers for a
     * template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the message template to use as the active version of the
     * template. Valid values are: latest, for the most recent version of the template;
     * or, the unique identifier for any existing version of the template. If you
     * specify an identifier, the value must match the identifier for an existing
     * template version. To retrieve a list of versions and version identifiers for a
     * template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the message template to use as the active version of the
     * template. Valid values are: latest, for the most recent version of the template;
     * or, the unique identifier for any existing version of the template. If you
     * specify an identifier, the value must match the identifier for an existing
     * template version. To retrieve a list of versions and version identifiers for a
     * template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the message template to use as the active version of the
     * template. Valid values are: latest, for the most recent version of the template;
     * or, the unique identifier for any existing version of the template. If you
     * specify an identifier, the value must match the identifier for an existing
     * template version. To retrieve a list of versions and version identifiers for a
     * template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the message template to use as the active version of the
     * template. Valid values are: latest, for the most recent version of the template;
     * or, the unique identifier for any existing version of the template. If you
     * specify an identifier, the value must match the identifier for an existing
     * template version. To retrieve a list of versions and version identifiers for a
     * template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the message template to use as the active version of the
     * template. Valid values are: latest, for the most recent version of the template;
     * or, the unique identifier for any existing version of the template. If you
     * specify an identifier, the value must match the identifier for an existing
     * template version. To retrieve a list of versions and version identifiers for a
     * template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p>
     */
    inline TemplateActiveVersionRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the message template to use as the active version of the
     * template. Valid values are: latest, for the most recent version of the template;
     * or, the unique identifier for any existing version of the template. If you
     * specify an identifier, the value must match the identifier for an existing
     * template version. To retrieve a list of versions and version identifiers for a
     * template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p>
     */
    inline TemplateActiveVersionRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the message template to use as the active version of the
     * template. Valid values are: latest, for the most recent version of the template;
     * or, the unique identifier for any existing version of the template. If you
     * specify an identifier, the value must match the identifier for an existing
     * template version. To retrieve a list of versions and version identifiers for a
     * template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p>
     */
    inline TemplateActiveVersionRequest& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
