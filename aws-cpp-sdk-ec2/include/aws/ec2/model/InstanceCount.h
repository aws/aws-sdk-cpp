/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ListingState.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a Reserved Instance listing state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceCount">AWS
   * API Reference</a></p>
   */
  class InstanceCount
  {
  public:
    AWS_EC2_API InstanceCount();
    AWS_EC2_API InstanceCount(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceCount& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The number of listed Reserved Instances in the state specified by the
     * <code>state</code>.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of listed Reserved Instances in the state specified by the
     * <code>state</code>.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of listed Reserved Instances in the state specified by the
     * <code>state</code>.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of listed Reserved Instances in the state specified by the
     * <code>state</code>.</p>
     */
    inline InstanceCount& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The states of the listed Reserved Instances.</p>
     */
    inline const ListingState& GetState() const{ return m_state; }

    /**
     * <p>The states of the listed Reserved Instances.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The states of the listed Reserved Instances.</p>
     */
    inline void SetState(const ListingState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The states of the listed Reserved Instances.</p>
     */
    inline void SetState(ListingState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The states of the listed Reserved Instances.</p>
     */
    inline InstanceCount& WithState(const ListingState& value) { SetState(value); return *this;}

    /**
     * <p>The states of the listed Reserved Instances.</p>
     */
    inline InstanceCount& WithState(ListingState&& value) { SetState(std::move(value)); return *this;}

  private:

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    ListingState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
