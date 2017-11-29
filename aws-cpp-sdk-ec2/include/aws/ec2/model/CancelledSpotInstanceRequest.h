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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CancelSpotInstanceRequestState.h>
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
   * <p>Describes a request to cancel a Spot Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelledSpotInstanceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CancelledSpotInstanceRequest
  {
  public:
    CancelledSpotInstanceRequest();
    CancelledSpotInstanceRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    CancelledSpotInstanceRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline const Aws::String& GetSpotInstanceRequestId() const{ return m_spotInstanceRequestId; }

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline void SetSpotInstanceRequestId(const Aws::String& value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId = value; }

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline void SetSpotInstanceRequestId(Aws::String&& value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId = std::move(value); }

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline void SetSpotInstanceRequestId(const char* value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId.assign(value); }

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline CancelledSpotInstanceRequest& WithSpotInstanceRequestId(const Aws::String& value) { SetSpotInstanceRequestId(value); return *this;}

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline CancelledSpotInstanceRequest& WithSpotInstanceRequestId(Aws::String&& value) { SetSpotInstanceRequestId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline CancelledSpotInstanceRequest& WithSpotInstanceRequestId(const char* value) { SetSpotInstanceRequestId(value); return *this;}


    /**
     * <p>The state of the Spot Instance request.</p>
     */
    inline const CancelSpotInstanceRequestState& GetState() const{ return m_state; }

    /**
     * <p>The state of the Spot Instance request.</p>
     */
    inline void SetState(const CancelSpotInstanceRequestState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the Spot Instance request.</p>
     */
    inline void SetState(CancelSpotInstanceRequestState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the Spot Instance request.</p>
     */
    inline CancelledSpotInstanceRequest& WithState(const CancelSpotInstanceRequestState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the Spot Instance request.</p>
     */
    inline CancelledSpotInstanceRequest& WithState(CancelSpotInstanceRequestState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_spotInstanceRequestId;
    bool m_spotInstanceRequestIdHasBeenSet;

    CancelSpotInstanceRequestState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
