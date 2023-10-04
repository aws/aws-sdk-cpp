/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>Part of the provisioning properties of the environment
   * blueprint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CloudFormationProperties">AWS
   * API Reference</a></p>
   */
  class CloudFormationProperties
  {
  public:
    AWS_DATAZONE_API CloudFormationProperties();
    AWS_DATAZONE_API CloudFormationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API CloudFormationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The template URL of the cloud formation provisioning properties of the
     * environment blueprint.</p>
     */
    inline const Aws::String& GetTemplateUrl() const{ return m_templateUrl; }

    /**
     * <p>The template URL of the cloud formation provisioning properties of the
     * environment blueprint.</p>
     */
    inline bool TemplateUrlHasBeenSet() const { return m_templateUrlHasBeenSet; }

    /**
     * <p>The template URL of the cloud formation provisioning properties of the
     * environment blueprint.</p>
     */
    inline void SetTemplateUrl(const Aws::String& value) { m_templateUrlHasBeenSet = true; m_templateUrl = value; }

    /**
     * <p>The template URL of the cloud formation provisioning properties of the
     * environment blueprint.</p>
     */
    inline void SetTemplateUrl(Aws::String&& value) { m_templateUrlHasBeenSet = true; m_templateUrl = std::move(value); }

    /**
     * <p>The template URL of the cloud formation provisioning properties of the
     * environment blueprint.</p>
     */
    inline void SetTemplateUrl(const char* value) { m_templateUrlHasBeenSet = true; m_templateUrl.assign(value); }

    /**
     * <p>The template URL of the cloud formation provisioning properties of the
     * environment blueprint.</p>
     */
    inline CloudFormationProperties& WithTemplateUrl(const Aws::String& value) { SetTemplateUrl(value); return *this;}

    /**
     * <p>The template URL of the cloud formation provisioning properties of the
     * environment blueprint.</p>
     */
    inline CloudFormationProperties& WithTemplateUrl(Aws::String&& value) { SetTemplateUrl(std::move(value)); return *this;}

    /**
     * <p>The template URL of the cloud formation provisioning properties of the
     * environment blueprint.</p>
     */
    inline CloudFormationProperties& WithTemplateUrl(const char* value) { SetTemplateUrl(value); return *this;}

  private:

    Aws::String m_templateUrl;
    bool m_templateUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
