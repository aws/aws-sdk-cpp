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
#include <aws/s3control/model/S3AccessControlPolicy.h>
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
   * <p>Contains the configuration parameters for a Set Object ACL operation. Amazon
   * S3 batch operations passes each value through to the underlying PUT Object acl
   * API. For more information about the parameters for this operation, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectPUTacl.html">PUT
   * Object acl</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3SetObjectAclOperation">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API S3SetObjectAclOperation
  {
  public:
    S3SetObjectAclOperation();
    S3SetObjectAclOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    S3SetObjectAclOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline const S3AccessControlPolicy& GetAccessControlPolicy() const{ return m_accessControlPolicy; }

    /**
     * <p/>
     */
    inline bool AccessControlPolicyHasBeenSet() const { return m_accessControlPolicyHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAccessControlPolicy(const S3AccessControlPolicy& value) { m_accessControlPolicyHasBeenSet = true; m_accessControlPolicy = value; }

    /**
     * <p/>
     */
    inline void SetAccessControlPolicy(S3AccessControlPolicy&& value) { m_accessControlPolicyHasBeenSet = true; m_accessControlPolicy = std::move(value); }

    /**
     * <p/>
     */
    inline S3SetObjectAclOperation& WithAccessControlPolicy(const S3AccessControlPolicy& value) { SetAccessControlPolicy(value); return *this;}

    /**
     * <p/>
     */
    inline S3SetObjectAclOperation& WithAccessControlPolicy(S3AccessControlPolicy&& value) { SetAccessControlPolicy(std::move(value)); return *this;}

  private:

    S3AccessControlPolicy m_accessControlPolicy;
    bool m_accessControlPolicyHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
