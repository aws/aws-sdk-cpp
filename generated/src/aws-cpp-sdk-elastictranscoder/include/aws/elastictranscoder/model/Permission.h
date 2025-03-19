/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The <code>Permission</code> structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/Permission">AWS
   * API Reference</a></p>
   */
  class Permission
  {
  public:
    AWS_ELASTICTRANSCODER_API Permission() = default;
    AWS_ELASTICTRANSCODER_API Permission(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Permission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of value that appears in the Grantee object:</p> <ul> <li> <p>
     * <code>Canonical</code>: Either the canonical user ID for an AWS account or an
     * origin access identity for an Amazon CloudFront distribution.</p> 
     * <p>A canonical user ID is not the same as an AWS account number.</p>
     *  </li> <li> <p> <code>Email</code>: The registered email address of
     * an AWS account.</p> </li> <li> <p> <code>Group</code>: One of the following
     * predefined Amazon S3 groups: <code>AllUsers</code>,
     * <code>AuthenticatedUsers</code>, or <code>LogDelivery</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetGranteeType() const { return m_granteeType; }
    inline bool GranteeTypeHasBeenSet() const { return m_granteeTypeHasBeenSet; }
    template<typename GranteeTypeT = Aws::String>
    void SetGranteeType(GranteeTypeT&& value) { m_granteeTypeHasBeenSet = true; m_granteeType = std::forward<GranteeTypeT>(value); }
    template<typename GranteeTypeT = Aws::String>
    Permission& WithGranteeType(GranteeTypeT&& value) { SetGranteeType(std::forward<GranteeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS user or group that you want to have access to transcoded files and
     * playlists. To identify the user or group, you can specify the canonical user ID
     * for an AWS account, an origin access identity for a CloudFront distribution, the
     * registered email address of an AWS account, or a predefined Amazon S3 group.</p>
     */
    inline const Aws::String& GetGrantee() const { return m_grantee; }
    inline bool GranteeHasBeenSet() const { return m_granteeHasBeenSet; }
    template<typename GranteeT = Aws::String>
    void SetGrantee(GranteeT&& value) { m_granteeHasBeenSet = true; m_grantee = std::forward<GranteeT>(value); }
    template<typename GranteeT = Aws::String>
    Permission& WithGrantee(GranteeT&& value) { SetGrantee(std::forward<GranteeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The permission that you want to give to the AWS user that is listed in
     * Grantee. Valid values include: </p> <ul> <li> <p> <code>READ</code>: The grantee
     * can read the thumbnails and metadata for thumbnails that Elastic Transcoder adds
     * to the Amazon S3 bucket.</p> </li> <li> <p> <code>READ_ACP</code>: The grantee
     * can read the object ACL for thumbnails that Elastic Transcoder adds to the
     * Amazon S3 bucket.</p> </li> <li> <p> <code>WRITE_ACP</code>: The grantee can
     * write the ACL for the thumbnails that Elastic Transcoder adds to the Amazon S3
     * bucket.</p> </li> <li> <p> <code>FULL_CONTROL</code>: The grantee has READ,
     * READ_ACP, and WRITE_ACP permissions for the thumbnails that Elastic Transcoder
     * adds to the Amazon S3 bucket.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetAccess() const { return m_access; }
    inline bool AccessHasBeenSet() const { return m_accessHasBeenSet; }
    template<typename AccessT = Aws::Vector<Aws::String>>
    void SetAccess(AccessT&& value) { m_accessHasBeenSet = true; m_access = std::forward<AccessT>(value); }
    template<typename AccessT = Aws::Vector<Aws::String>>
    Permission& WithAccess(AccessT&& value) { SetAccess(std::forward<AccessT>(value)); return *this;}
    template<typename AccessT = Aws::String>
    Permission& AddAccess(AccessT&& value) { m_accessHasBeenSet = true; m_access.emplace_back(std::forward<AccessT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_granteeType;
    bool m_granteeTypeHasBeenSet = false;

    Aws::String m_grantee;
    bool m_granteeHasBeenSet = false;

    Aws::Vector<Aws::String> m_access;
    bool m_accessHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
