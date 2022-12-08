/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>The proposed access control policy for the Multi-Region Access Point.</p>
   * <p>When you update the policy, the update is first listed as the proposed
   * policy. After the update is finished and all Regions have been updated, the
   * proposed policy is listed as the established policy. If both policies have the
   * same version number, the proposed policy is the established
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ProposedMultiRegionAccessPointPolicy">AWS
   * API Reference</a></p>
   */
  class ProposedMultiRegionAccessPointPolicy
  {
  public:
    AWS_S3CONTROL_API ProposedMultiRegionAccessPointPolicy();
    AWS_S3CONTROL_API ProposedMultiRegionAccessPointPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ProposedMultiRegionAccessPointPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The details of the proposed policy.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The details of the proposed policy.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The details of the proposed policy.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The details of the proposed policy.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The details of the proposed policy.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The details of the proposed policy.</p>
     */
    inline ProposedMultiRegionAccessPointPolicy& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The details of the proposed policy.</p>
     */
    inline ProposedMultiRegionAccessPointPolicy& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The details of the proposed policy.</p>
     */
    inline ProposedMultiRegionAccessPointPolicy& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
