/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GroundStation
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CancelContactRequest">AWS
   * API Reference</a></p>
   */
  class CancelContactRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API CancelContactRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelContact"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>UUID of a contact.</p>
     */
    inline const Aws::String& GetContactId() const { return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    template<typename ContactIdT = Aws::String>
    void SetContactId(ContactIdT&& value) { m_contactIdHasBeenSet = true; m_contactId = std::forward<ContactIdT>(value); }
    template<typename ContactIdT = Aws::String>
    CancelContactRequest& WithContactId(ContactIdT&& value) { SetContactId(std::forward<ContactIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
