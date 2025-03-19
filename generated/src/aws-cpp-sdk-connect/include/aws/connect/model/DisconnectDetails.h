/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the call disconnect experience.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisconnectDetails">AWS
   * API Reference</a></p>
   */
  class DisconnectDetails
  {
  public:
    AWS_CONNECT_API DisconnectDetails() = default;
    AWS_CONNECT_API DisconnectDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API DisconnectDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the potential disconnection issues for a call. This field is not
     * populated if the service does not detect potential issues.</p>
     */
    inline const Aws::String& GetPotentialDisconnectIssue() const { return m_potentialDisconnectIssue; }
    inline bool PotentialDisconnectIssueHasBeenSet() const { return m_potentialDisconnectIssueHasBeenSet; }
    template<typename PotentialDisconnectIssueT = Aws::String>
    void SetPotentialDisconnectIssue(PotentialDisconnectIssueT&& value) { m_potentialDisconnectIssueHasBeenSet = true; m_potentialDisconnectIssue = std::forward<PotentialDisconnectIssueT>(value); }
    template<typename PotentialDisconnectIssueT = Aws::String>
    DisconnectDetails& WithPotentialDisconnectIssue(PotentialDisconnectIssueT&& value) { SetPotentialDisconnectIssue(std::forward<PotentialDisconnectIssueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_potentialDisconnectIssue;
    bool m_potentialDisconnectIssueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
