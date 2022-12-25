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
   * <p>The container for abort incomplete multipart upload</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/AbortIncompleteMultipartUpload">AWS
   * API Reference</a></p>
   */
  class AbortIncompleteMultipartUpload
  {
  public:
    AWS_S3CONTROL_API AbortIncompleteMultipartUpload();
    AWS_S3CONTROL_API AbortIncompleteMultipartUpload(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API AbortIncompleteMultipartUpload& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies the number of days after which Amazon S3 aborts an incomplete
     * multipart upload to the Outposts bucket.</p>
     */
    inline int GetDaysAfterInitiation() const{ return m_daysAfterInitiation; }

    /**
     * <p>Specifies the number of days after which Amazon S3 aborts an incomplete
     * multipart upload to the Outposts bucket.</p>
     */
    inline bool DaysAfterInitiationHasBeenSet() const { return m_daysAfterInitiationHasBeenSet; }

    /**
     * <p>Specifies the number of days after which Amazon S3 aborts an incomplete
     * multipart upload to the Outposts bucket.</p>
     */
    inline void SetDaysAfterInitiation(int value) { m_daysAfterInitiationHasBeenSet = true; m_daysAfterInitiation = value; }

    /**
     * <p>Specifies the number of days after which Amazon S3 aborts an incomplete
     * multipart upload to the Outposts bucket.</p>
     */
    inline AbortIncompleteMultipartUpload& WithDaysAfterInitiation(int value) { SetDaysAfterInitiation(value); return *this;}

  private:

    int m_daysAfterInitiation;
    bool m_daysAfterInitiationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
