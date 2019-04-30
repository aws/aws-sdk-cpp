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
#include <aws/s3control/model/S3Grantee.h>
#include <aws/s3control/model/S3Permission.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3Grant">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API S3Grant
  {
  public:
    S3Grant();
    S3Grant(const Aws::Utils::Xml::XmlNode& xmlNode);
    S3Grant& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline const S3Grantee& GetGrantee() const{ return m_grantee; }

    /**
     * <p/>
     */
    inline bool GranteeHasBeenSet() const { return m_granteeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetGrantee(const S3Grantee& value) { m_granteeHasBeenSet = true; m_grantee = value; }

    /**
     * <p/>
     */
    inline void SetGrantee(S3Grantee&& value) { m_granteeHasBeenSet = true; m_grantee = std::move(value); }

    /**
     * <p/>
     */
    inline S3Grant& WithGrantee(const S3Grantee& value) { SetGrantee(value); return *this;}

    /**
     * <p/>
     */
    inline S3Grant& WithGrantee(S3Grantee&& value) { SetGrantee(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const S3Permission& GetPermission() const{ return m_permission; }

    /**
     * <p/>
     */
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetPermission(const S3Permission& value) { m_permissionHasBeenSet = true; m_permission = value; }

    /**
     * <p/>
     */
    inline void SetPermission(S3Permission&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }

    /**
     * <p/>
     */
    inline S3Grant& WithPermission(const S3Permission& value) { SetPermission(value); return *this;}

    /**
     * <p/>
     */
    inline S3Grant& WithPermission(S3Permission&& value) { SetPermission(std::move(value)); return *this;}

  private:

    S3Grantee m_grantee;
    bool m_granteeHasBeenSet;

    S3Permission m_permission;
    bool m_permissionHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
