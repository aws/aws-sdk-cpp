/**
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
   * <p>The container of the noncurrent version expiration.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/NoncurrentVersionExpiration">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API NoncurrentVersionExpiration
  {
  public:
    NoncurrentVersionExpiration();
    NoncurrentVersionExpiration(const Aws::Utils::Xml::XmlNode& xmlNode);
    NoncurrentVersionExpiration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies the number of days an object is noncurrent before Amazon S3 can
     * perform the associated action. For information about the noncurrent days
     * calculations, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html#non-current-days-calculations">How
     * Amazon S3 Calculates When an Object Became Noncurrent</a> in the <i>Amazon
     * Simple Storage Service Developer Guide</i>.</p>
     */
    inline int GetNoncurrentDays() const{ return m_noncurrentDays; }

    /**
     * <p>Specifies the number of days an object is noncurrent before Amazon S3 can
     * perform the associated action. For information about the noncurrent days
     * calculations, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html#non-current-days-calculations">How
     * Amazon S3 Calculates When an Object Became Noncurrent</a> in the <i>Amazon
     * Simple Storage Service Developer Guide</i>.</p>
     */
    inline bool NoncurrentDaysHasBeenSet() const { return m_noncurrentDaysHasBeenSet; }

    /**
     * <p>Specifies the number of days an object is noncurrent before Amazon S3 can
     * perform the associated action. For information about the noncurrent days
     * calculations, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html#non-current-days-calculations">How
     * Amazon S3 Calculates When an Object Became Noncurrent</a> in the <i>Amazon
     * Simple Storage Service Developer Guide</i>.</p>
     */
    inline void SetNoncurrentDays(int value) { m_noncurrentDaysHasBeenSet = true; m_noncurrentDays = value; }

    /**
     * <p>Specifies the number of days an object is noncurrent before Amazon S3 can
     * perform the associated action. For information about the noncurrent days
     * calculations, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html#non-current-days-calculations">How
     * Amazon S3 Calculates When an Object Became Noncurrent</a> in the <i>Amazon
     * Simple Storage Service Developer Guide</i>.</p>
     */
    inline NoncurrentVersionExpiration& WithNoncurrentDays(int value) { SetNoncurrentDays(value); return *this;}

  private:

    int m_noncurrentDays;
    bool m_noncurrentDaysHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
