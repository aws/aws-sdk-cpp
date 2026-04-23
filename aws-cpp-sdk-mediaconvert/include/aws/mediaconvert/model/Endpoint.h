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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Describes an account-specific API endpoint.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Endpoint">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Endpoint
  {
  public:
    Endpoint();
    Endpoint(Aws::Utils::Json::JsonView jsonValue);
    Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * URL of endpoint
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * URL of endpoint
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * URL of endpoint
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * URL of endpoint
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * URL of endpoint
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * URL of endpoint
     */
    inline Endpoint& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * URL of endpoint
     */
    inline Endpoint& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * URL of endpoint
     */
    inline Endpoint& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_url;
    bool m_urlHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
