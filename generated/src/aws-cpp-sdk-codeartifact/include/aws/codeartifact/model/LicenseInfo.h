/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
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
namespace CodeArtifact
{
namespace Model
{

  /**
   * <p> Details of the license data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/LicenseInfo">AWS
   * API Reference</a></p>
   */
  class LicenseInfo
  {
  public:
    AWS_CODEARTIFACT_API LicenseInfo();
    AWS_CODEARTIFACT_API LicenseInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API LicenseInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Name of the license. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> Name of the license. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> Name of the license. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> Name of the license. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> Name of the license. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> Name of the license. </p>
     */
    inline LicenseInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> Name of the license. </p>
     */
    inline LicenseInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> Name of the license. </p>
     */
    inline LicenseInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The URL for license data. </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p> The URL for license data. </p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p> The URL for license data. </p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p> The URL for license data. </p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p> The URL for license data. </p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p> The URL for license data. </p>
     */
    inline LicenseInfo& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p> The URL for license data. </p>
     */
    inline LicenseInfo& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p> The URL for license data. </p>
     */
    inline LicenseInfo& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
