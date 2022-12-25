/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The parameters for ServiceNow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ServiceNowParameters">AWS
   * API Reference</a></p>
   */
  class ServiceNowParameters
  {
  public:
    AWS_QUICKSIGHT_API ServiceNowParameters();
    AWS_QUICKSIGHT_API ServiceNowParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ServiceNowParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>URL of the base site.</p>
     */
    inline const Aws::String& GetSiteBaseUrl() const{ return m_siteBaseUrl; }

    /**
     * <p>URL of the base site.</p>
     */
    inline bool SiteBaseUrlHasBeenSet() const { return m_siteBaseUrlHasBeenSet; }

    /**
     * <p>URL of the base site.</p>
     */
    inline void SetSiteBaseUrl(const Aws::String& value) { m_siteBaseUrlHasBeenSet = true; m_siteBaseUrl = value; }

    /**
     * <p>URL of the base site.</p>
     */
    inline void SetSiteBaseUrl(Aws::String&& value) { m_siteBaseUrlHasBeenSet = true; m_siteBaseUrl = std::move(value); }

    /**
     * <p>URL of the base site.</p>
     */
    inline void SetSiteBaseUrl(const char* value) { m_siteBaseUrlHasBeenSet = true; m_siteBaseUrl.assign(value); }

    /**
     * <p>URL of the base site.</p>
     */
    inline ServiceNowParameters& WithSiteBaseUrl(const Aws::String& value) { SetSiteBaseUrl(value); return *this;}

    /**
     * <p>URL of the base site.</p>
     */
    inline ServiceNowParameters& WithSiteBaseUrl(Aws::String&& value) { SetSiteBaseUrl(std::move(value)); return *this;}

    /**
     * <p>URL of the base site.</p>
     */
    inline ServiceNowParameters& WithSiteBaseUrl(const char* value) { SetSiteBaseUrl(value); return *this;}

  private:

    Aws::String m_siteBaseUrl;
    bool m_siteBaseUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
