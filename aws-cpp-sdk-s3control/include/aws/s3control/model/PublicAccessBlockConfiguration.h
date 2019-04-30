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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PublicAccessBlockConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API PublicAccessBlockConfiguration
  {
  public:
    PublicAccessBlockConfiguration();
    PublicAccessBlockConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    PublicAccessBlockConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline bool GetBlockPublicAcls() const{ return m_blockPublicAcls; }

    /**
     * <p/>
     */
    inline bool BlockPublicAclsHasBeenSet() const { return m_blockPublicAclsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetBlockPublicAcls(bool value) { m_blockPublicAclsHasBeenSet = true; m_blockPublicAcls = value; }

    /**
     * <p/>
     */
    inline PublicAccessBlockConfiguration& WithBlockPublicAcls(bool value) { SetBlockPublicAcls(value); return *this;}


    /**
     * <p/>
     */
    inline bool GetIgnorePublicAcls() const{ return m_ignorePublicAcls; }

    /**
     * <p/>
     */
    inline bool IgnorePublicAclsHasBeenSet() const { return m_ignorePublicAclsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetIgnorePublicAcls(bool value) { m_ignorePublicAclsHasBeenSet = true; m_ignorePublicAcls = value; }

    /**
     * <p/>
     */
    inline PublicAccessBlockConfiguration& WithIgnorePublicAcls(bool value) { SetIgnorePublicAcls(value); return *this;}


    /**
     * <p/>
     */
    inline bool GetBlockPublicPolicy() const{ return m_blockPublicPolicy; }

    /**
     * <p/>
     */
    inline bool BlockPublicPolicyHasBeenSet() const { return m_blockPublicPolicyHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetBlockPublicPolicy(bool value) { m_blockPublicPolicyHasBeenSet = true; m_blockPublicPolicy = value; }

    /**
     * <p/>
     */
    inline PublicAccessBlockConfiguration& WithBlockPublicPolicy(bool value) { SetBlockPublicPolicy(value); return *this;}


    /**
     * <p/>
     */
    inline bool GetRestrictPublicBuckets() const{ return m_restrictPublicBuckets; }

    /**
     * <p/>
     */
    inline bool RestrictPublicBucketsHasBeenSet() const { return m_restrictPublicBucketsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetRestrictPublicBuckets(bool value) { m_restrictPublicBucketsHasBeenSet = true; m_restrictPublicBuckets = value; }

    /**
     * <p/>
     */
    inline PublicAccessBlockConfiguration& WithRestrictPublicBuckets(bool value) { SetRestrictPublicBuckets(value); return *this;}

  private:

    bool m_blockPublicAcls;
    bool m_blockPublicAclsHasBeenSet;

    bool m_ignorePublicAcls;
    bool m_ignorePublicAclsHasBeenSet;

    bool m_blockPublicPolicy;
    bool m_blockPublicPolicyHasBeenSet;

    bool m_restrictPublicBuckets;
    bool m_restrictPublicBucketsHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
