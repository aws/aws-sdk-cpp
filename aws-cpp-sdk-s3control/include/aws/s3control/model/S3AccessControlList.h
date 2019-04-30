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
  class AWS_S3CONTROL_API S3AccessControlList
  {
  public:
    S3AccessControlList();
    S3AccessControlList(const Aws::Utils::Xml::XmlNode& xmlNode);
    S3AccessControlList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


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
    bool m_ownerHasBeenSet;

    Aws::Vector<S3Grant> m_grants;
    bool m_grantsHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
