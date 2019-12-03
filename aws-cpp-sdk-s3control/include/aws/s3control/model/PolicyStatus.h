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
   * <p>Indicates whether this access point policy is public. For more information
   * about how Amazon S3 evaluates policies to determine whether they are public, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html#access-control-block-public-access-policy-status">The
   * Meaning of "Public"</a> in the <i>Amazon Simple Storage Service Developer
   * Guide</i>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PolicyStatus">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API PolicyStatus
  {
  public:
    PolicyStatus();
    PolicyStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    PolicyStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline bool GetIsPublic() const{ return m_isPublic; }

    /**
     * <p/>
     */
    inline bool IsPublicHasBeenSet() const { return m_isPublicHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetIsPublic(bool value) { m_isPublicHasBeenSet = true; m_isPublic = value; }

    /**
     * <p/>
     */
    inline PolicyStatus& WithIsPublic(bool value) { SetIsPublic(value); return *this;}

  private:

    bool m_isPublic;
    bool m_isPublicHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
