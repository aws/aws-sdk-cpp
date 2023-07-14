﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>A container for the activity metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ActivityMetrics">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API ActivityMetrics
  {
  public:
    ActivityMetrics();
    ActivityMetrics(const Aws::Utils::Xml::XmlNode& xmlNode);
    ActivityMetrics& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A container for whether the activity metrics are enabled.</p>
     */
    inline bool GetIsEnabled() const{ return m_isEnabled; }

    /**
     * <p>A container for whether the activity metrics are enabled.</p>
     */
    inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }

    /**
     * <p>A container for whether the activity metrics are enabled.</p>
     */
    inline void SetIsEnabled(bool value) { m_isEnabledHasBeenSet = true; m_isEnabled = value; }

    /**
     * <p>A container for whether the activity metrics are enabled.</p>
     */
    inline ActivityMetrics& WithIsEnabled(bool value) { SetIsEnabled(value); return *this;}

  private:

    bool m_isEnabled;
    bool m_isEnabledHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
