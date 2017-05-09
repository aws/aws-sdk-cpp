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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * A complex type that contains information related to a Header<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2016-01-28/OriginCustomHeader">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API OriginCustomHeader
  {
  public:
    OriginCustomHeader();
    OriginCustomHeader(const Aws::Utils::Xml::XmlNode& xmlNode);
    OriginCustomHeader& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The header's name.
     */
    inline const Aws::String& GetHeaderName() const{ return m_headerName; }

    /**
     * The header's name.
     */
    inline void SetHeaderName(const Aws::String& value) { m_headerNameHasBeenSet = true; m_headerName = value; }

    /**
     * The header's name.
     */
    inline void SetHeaderName(Aws::String&& value) { m_headerNameHasBeenSet = true; m_headerName = std::move(value); }

    /**
     * The header's name.
     */
    inline void SetHeaderName(const char* value) { m_headerNameHasBeenSet = true; m_headerName.assign(value); }

    /**
     * The header's name.
     */
    inline OriginCustomHeader& WithHeaderName(const Aws::String& value) { SetHeaderName(value); return *this;}

    /**
     * The header's name.
     */
    inline OriginCustomHeader& WithHeaderName(Aws::String&& value) { SetHeaderName(std::move(value)); return *this;}

    /**
     * The header's name.
     */
    inline OriginCustomHeader& WithHeaderName(const char* value) { SetHeaderName(value); return *this;}

    /**
     * The header's value.
     */
    inline const Aws::String& GetHeaderValue() const{ return m_headerValue; }

    /**
     * The header's value.
     */
    inline void SetHeaderValue(const Aws::String& value) { m_headerValueHasBeenSet = true; m_headerValue = value; }

    /**
     * The header's value.
     */
    inline void SetHeaderValue(Aws::String&& value) { m_headerValueHasBeenSet = true; m_headerValue = std::move(value); }

    /**
     * The header's value.
     */
    inline void SetHeaderValue(const char* value) { m_headerValueHasBeenSet = true; m_headerValue.assign(value); }

    /**
     * The header's value.
     */
    inline OriginCustomHeader& WithHeaderValue(const Aws::String& value) { SetHeaderValue(value); return *this;}

    /**
     * The header's value.
     */
    inline OriginCustomHeader& WithHeaderValue(Aws::String&& value) { SetHeaderValue(std::move(value)); return *this;}

    /**
     * The header's value.
     */
    inline OriginCustomHeader& WithHeaderValue(const char* value) { SetHeaderValue(value); return *this;}

  private:
    Aws::String m_headerName;
    bool m_headerNameHasBeenSet;
    Aws::String m_headerValue;
    bool m_headerValueHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
