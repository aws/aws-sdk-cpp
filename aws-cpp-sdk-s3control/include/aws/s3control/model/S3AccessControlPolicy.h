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
#include <aws/s3control/model/S3AccessControlList.h>
#include <aws/s3control/model/S3CannedAccessControlList.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3AccessControlPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API S3AccessControlPolicy
  {
  public:
    S3AccessControlPolicy();
    S3AccessControlPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    S3AccessControlPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline const S3AccessControlList& GetAccessControlList() const{ return m_accessControlList; }

    /**
     * <p/>
     */
    inline bool AccessControlListHasBeenSet() const { return m_accessControlListHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAccessControlList(const S3AccessControlList& value) { m_accessControlListHasBeenSet = true; m_accessControlList = value; }

    /**
     * <p/>
     */
    inline void SetAccessControlList(S3AccessControlList&& value) { m_accessControlListHasBeenSet = true; m_accessControlList = std::move(value); }

    /**
     * <p/>
     */
    inline S3AccessControlPolicy& WithAccessControlList(const S3AccessControlList& value) { SetAccessControlList(value); return *this;}

    /**
     * <p/>
     */
    inline S3AccessControlPolicy& WithAccessControlList(S3AccessControlList&& value) { SetAccessControlList(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const S3CannedAccessControlList& GetCannedAccessControlList() const{ return m_cannedAccessControlList; }

    /**
     * <p/>
     */
    inline bool CannedAccessControlListHasBeenSet() const { return m_cannedAccessControlListHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetCannedAccessControlList(const S3CannedAccessControlList& value) { m_cannedAccessControlListHasBeenSet = true; m_cannedAccessControlList = value; }

    /**
     * <p/>
     */
    inline void SetCannedAccessControlList(S3CannedAccessControlList&& value) { m_cannedAccessControlListHasBeenSet = true; m_cannedAccessControlList = std::move(value); }

    /**
     * <p/>
     */
    inline S3AccessControlPolicy& WithCannedAccessControlList(const S3CannedAccessControlList& value) { SetCannedAccessControlList(value); return *this;}

    /**
     * <p/>
     */
    inline S3AccessControlPolicy& WithCannedAccessControlList(S3CannedAccessControlList&& value) { SetCannedAccessControlList(std::move(value)); return *this;}

  private:

    S3AccessControlList m_accessControlList;
    bool m_accessControlListHasBeenSet;

    S3CannedAccessControlList m_cannedAccessControlList;
    bool m_cannedAccessControlListHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
