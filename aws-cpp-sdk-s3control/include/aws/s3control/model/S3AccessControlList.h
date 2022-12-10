/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/S3ObjectOwner.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/S3Grant.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3AccessControlList">AWS
   * API Reference</a></p>
   */
  class S3AccessControlList
  {
  public:
    AWS_S3CONTROL_API S3AccessControlList();
    AWS_S3CONTROL_API S3AccessControlList(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3AccessControlList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline const S3ObjectOwner& GetOwner() const{ return m_owner; }

    /**
     * <p/>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetOwner(const S3ObjectOwner& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p/>
     */
    inline void SetOwner(S3ObjectOwner&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p/>
     */
    inline S3AccessControlList& WithOwner(const S3ObjectOwner& value) { SetOwner(value); return *this;}

    /**
     * <p/>
     */
    inline S3AccessControlList& WithOwner(S3ObjectOwner&& value) { SetOwner(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<S3Grant>& GetGrants() const{ return m_grants; }

    /**
     * <p/>
     */
    inline bool GrantsHasBeenSet() const { return m_grantsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetGrants(const Aws::Vector<S3Grant>& value) { m_grantsHasBeenSet = true; m_grants = value; }

    /**
     * <p/>
     */
    inline void SetGrants(Aws::Vector<S3Grant>&& value) { m_grantsHasBeenSet = true; m_grants = std::move(value); }

    /**
     * <p/>
     */
    inline S3AccessControlList& WithGrants(const Aws::Vector<S3Grant>& value) { SetGrants(value); return *this;}

    /**
     * <p/>
     */
    inline S3AccessControlList& WithGrants(Aws::Vector<S3Grant>&& value) { SetGrants(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline S3AccessControlList& AddGrants(const S3Grant& value) { m_grantsHasBeenSet = true; m_grants.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline S3AccessControlList& AddGrants(S3Grant&& value) { m_grantsHasBeenSet = true; m_grants.push_back(std::move(value)); return *this; }

  private:

    S3ObjectOwner m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::Vector<S3Grant> m_grants;
    bool m_grantsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
