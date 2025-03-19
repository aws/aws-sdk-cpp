/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CancelledSpotInstanceRequest
  {
  public:
    AWS_EC2_API CancelledSpotInstanceRequest() = default;
    AWS_EC2_API CancelledSpotInstanceRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CancelledSpotInstanceRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline const Aws::String& GetSpotInstanceRequestId() const { return m_spotInstanceRequestId; }
    inline bool SpotInstanceRequestIdHasBeenSet() const { return m_spotInstanceRequestIdHasBeenSet; }
    template<typename SpotInstanceRequestIdT = Aws::String>
    void SetSpotInstanceRequestId(SpotInstanceRequestIdT&& value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId = std::forward<SpotInstanceRequestIdT>(value); }
    template<typename SpotInstanceRequestIdT = Aws::String>
    CancelledSpotInstanceRequest& WithSpotInstanceRequestId(SpotInstanceRequestIdT&& value) { SetSpotInstanceRequestId(std::forward<SpotInstanceRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Spot Instance request.</p>
     */
    inline CancelSpotInstanceRequestState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CancelSpotInstanceRequestState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CancelledSpotInstanceRequest& WithState(CancelSpotInstanceRequestState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_spotInstanceRequestId;
    bool m_spotInstanceRequestIdHasBeenSet = false;

    CancelSpotInstanceRequestState m_state{CancelSpotInstanceRequestState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
