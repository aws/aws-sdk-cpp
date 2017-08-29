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
  class AWS_EC2_API InstanceCount
  {
  public:
    InstanceCount();
    InstanceCount(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceCount& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The number of listed Reserved Instances in the state specified by the
     * <code>state</code>.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

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
    bool m_instanceCountHasBeenSet;

    ListingState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
