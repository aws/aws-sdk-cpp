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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains an image that is available at a URL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Image">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API Image
  {
  public:
    Image();
    Image(Aws::Utils::Json::JsonView jsonValue);
    Image& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A URL at which the image is available. The URL is valid for 15 minutes for
     * you to view and download the image.</p>
     */
    inline const Aws::String& GetLocationUrl() const{ return m_locationUrl; }

    /**
     * <p>A URL at which the image is available. The URL is valid for 15 minutes for
     * you to view and download the image.</p>
     */
    inline bool LocationUrlHasBeenSet() const { return m_locationUrlHasBeenSet; }

    /**
     * <p>A URL at which the image is available. The URL is valid for 15 minutes for
     * you to view and download the image.</p>
     */
    inline void SetLocationUrl(const Aws::String& value) { m_locationUrlHasBeenSet = true; m_locationUrl = value; }

    /**
     * <p>A URL at which the image is available. The URL is valid for 15 minutes for
     * you to view and download the image.</p>
     */
    inline void SetLocationUrl(Aws::String&& value) { m_locationUrlHasBeenSet = true; m_locationUrl = std::move(value); }

    /**
     * <p>A URL at which the image is available. The URL is valid for 15 minutes for
     * you to view and download the image.</p>
     */
    inline void SetLocationUrl(const char* value) { m_locationUrlHasBeenSet = true; m_locationUrl.assign(value); }

    /**
     * <p>A URL at which the image is available. The URL is valid for 15 minutes for
     * you to view and download the image.</p>
     */
    inline Image& WithLocationUrl(const Aws::String& value) { SetLocationUrl(value); return *this;}

    /**
     * <p>A URL at which the image is available. The URL is valid for 15 minutes for
     * you to view and download the image.</p>
     */
    inline Image& WithLocationUrl(Aws::String&& value) { SetLocationUrl(std::move(value)); return *this;}

    /**
     * <p>A URL at which the image is available. The URL is valid for 15 minutes for
     * you to view and download the image.</p>
     */
    inline Image& WithLocationUrl(const char* value) { SetLocationUrl(value); return *this;}


    /**
     * <p>The date the image was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDate() const{ return m_lastUpdateDate; }

    /**
     * <p>The date the image was last updated, in Unix epoch time.</p>
     */
    inline bool LastUpdateDateHasBeenSet() const { return m_lastUpdateDateHasBeenSet; }

    /**
     * <p>The date the image was last updated, in Unix epoch time.</p>
     */
    inline void SetLastUpdateDate(const Aws::Utils::DateTime& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = value; }

    /**
     * <p>The date the image was last updated, in Unix epoch time.</p>
     */
    inline void SetLastUpdateDate(Aws::Utils::DateTime&& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = std::move(value); }

    /**
     * <p>The date the image was last updated, in Unix epoch time.</p>
     */
    inline Image& WithLastUpdateDate(const Aws::Utils::DateTime& value) { SetLastUpdateDate(value); return *this;}

    /**
     * <p>The date the image was last updated, in Unix epoch time.</p>
     */
    inline Image& WithLastUpdateDate(Aws::Utils::DateTime&& value) { SetLastUpdateDate(std::move(value)); return *this;}

  private:

    Aws::String m_locationUrl;
    bool m_locationUrlHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateDate;
    bool m_lastUpdateDateHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
