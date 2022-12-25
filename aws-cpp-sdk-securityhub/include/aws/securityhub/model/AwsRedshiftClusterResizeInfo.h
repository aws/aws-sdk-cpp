/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the resize operation for the cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterResizeInfo">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterResizeInfo
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterResizeInfo();
    AWS_SECURITYHUB_API AwsRedshiftClusterResizeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterResizeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the resize operation can be canceled.</p>
     */
    inline bool GetAllowCancelResize() const{ return m_allowCancelResize; }

    /**
     * <p>Indicates whether the resize operation can be canceled.</p>
     */
    inline bool AllowCancelResizeHasBeenSet() const { return m_allowCancelResizeHasBeenSet; }

    /**
     * <p>Indicates whether the resize operation can be canceled.</p>
     */
    inline void SetAllowCancelResize(bool value) { m_allowCancelResizeHasBeenSet = true; m_allowCancelResize = value; }

    /**
     * <p>Indicates whether the resize operation can be canceled.</p>
     */
    inline AwsRedshiftClusterResizeInfo& WithAllowCancelResize(bool value) { SetAllowCancelResize(value); return *this;}


    /**
     * <p>The type of resize operation.</p> <p>Valid values: <code>ClassicResize</code>
     * </p>
     */
    inline const Aws::String& GetResizeType() const{ return m_resizeType; }

    /**
     * <p>The type of resize operation.</p> <p>Valid values: <code>ClassicResize</code>
     * </p>
     */
    inline bool ResizeTypeHasBeenSet() const { return m_resizeTypeHasBeenSet; }

    /**
     * <p>The type of resize operation.</p> <p>Valid values: <code>ClassicResize</code>
     * </p>
     */
    inline void SetResizeType(const Aws::String& value) { m_resizeTypeHasBeenSet = true; m_resizeType = value; }

    /**
     * <p>The type of resize operation.</p> <p>Valid values: <code>ClassicResize</code>
     * </p>
     */
    inline void SetResizeType(Aws::String&& value) { m_resizeTypeHasBeenSet = true; m_resizeType = std::move(value); }

    /**
     * <p>The type of resize operation.</p> <p>Valid values: <code>ClassicResize</code>
     * </p>
     */
    inline void SetResizeType(const char* value) { m_resizeTypeHasBeenSet = true; m_resizeType.assign(value); }

    /**
     * <p>The type of resize operation.</p> <p>Valid values: <code>ClassicResize</code>
     * </p>
     */
    inline AwsRedshiftClusterResizeInfo& WithResizeType(const Aws::String& value) { SetResizeType(value); return *this;}

    /**
     * <p>The type of resize operation.</p> <p>Valid values: <code>ClassicResize</code>
     * </p>
     */
    inline AwsRedshiftClusterResizeInfo& WithResizeType(Aws::String&& value) { SetResizeType(std::move(value)); return *this;}

    /**
     * <p>The type of resize operation.</p> <p>Valid values: <code>ClassicResize</code>
     * </p>
     */
    inline AwsRedshiftClusterResizeInfo& WithResizeType(const char* value) { SetResizeType(value); return *this;}

  private:

    bool m_allowCancelResize;
    bool m_allowCancelResizeHasBeenSet = false;

    Aws::String m_resizeType;
    bool m_resizeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
