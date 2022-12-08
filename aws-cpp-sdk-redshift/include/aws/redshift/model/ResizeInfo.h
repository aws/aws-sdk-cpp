/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ResizeInfo
  {
  public:
    AWS_REDSHIFT_API ResizeInfo();
    AWS_REDSHIFT_API ResizeInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ResizeInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_resizeTypeHasBeenSet = false;

    bool m_allowCancelResize;
    bool m_allowCancelResizeHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
