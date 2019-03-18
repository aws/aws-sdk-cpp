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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a resize operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ResizeInfo">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API ResizeInfo
  {
  public:
    ResizeInfo();
    ResizeInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    ResizeInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Returns the value <code>ClassicResize</code>.</p>
     */
    inline const Aws::String& GetResizeType() const{ return m_resizeType; }

    /**
     * <p>Returns the value <code>ClassicResize</code>.</p>
     */
    inline bool ResizeTypeHasBeenSet() const { return m_resizeTypeHasBeenSet; }

    /**
     * <p>Returns the value <code>ClassicResize</code>.</p>
     */
    inline void SetResizeType(const Aws::String& value) { m_resizeTypeHasBeenSet = true; m_resizeType = value; }

    /**
     * <p>Returns the value <code>ClassicResize</code>.</p>
     */
    inline void SetResizeType(Aws::String&& value) { m_resizeTypeHasBeenSet = true; m_resizeType = std::move(value); }

    /**
     * <p>Returns the value <code>ClassicResize</code>.</p>
     */
    inline void SetResizeType(const char* value) { m_resizeTypeHasBeenSet = true; m_resizeType.assign(value); }

    /**
     * <p>Returns the value <code>ClassicResize</code>.</p>
     */
    inline ResizeInfo& WithResizeType(const Aws::String& value) { SetResizeType(value); return *this;}

    /**
     * <p>Returns the value <code>ClassicResize</code>.</p>
     */
    inline ResizeInfo& WithResizeType(Aws::String&& value) { SetResizeType(std::move(value)); return *this;}

    /**
     * <p>Returns the value <code>ClassicResize</code>.</p>
     */
    inline ResizeInfo& WithResizeType(const char* value) { SetResizeType(value); return *this;}


    /**
     * <p>A boolean value indicating if the resize operation can be cancelled.</p>
     */
    inline bool GetAllowCancelResize() const{ return m_allowCancelResize; }

    /**
     * <p>A boolean value indicating if the resize operation can be cancelled.</p>
     */
    inline bool AllowCancelResizeHasBeenSet() const { return m_allowCancelResizeHasBeenSet; }

    /**
     * <p>A boolean value indicating if the resize operation can be cancelled.</p>
     */
    inline void SetAllowCancelResize(bool value) { m_allowCancelResizeHasBeenSet = true; m_allowCancelResize = value; }

    /**
     * <p>A boolean value indicating if the resize operation can be cancelled.</p>
     */
    inline ResizeInfo& WithAllowCancelResize(bool value) { SetAllowCancelResize(value); return *this;}

  private:

    Aws::String m_resizeType;
    bool m_resizeTypeHasBeenSet;

    bool m_allowCancelResize;
    bool m_allowCancelResizeHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
