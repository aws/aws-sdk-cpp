/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/LaunchStatus.h>
#include <aws/drs/model/ParticipatingResourceID.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Represents a resource participating in an asynchronous Job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ParticipatingResource">AWS
   * API Reference</a></p>
   */
  class ParticipatingResource
  {
  public:
    AWS_DRS_API ParticipatingResource() = default;
    AWS_DRS_API ParticipatingResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API ParticipatingResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The launch status of a participating resource.</p>
     */
    inline LaunchStatus GetLaunchStatus() const { return m_launchStatus; }
    inline bool LaunchStatusHasBeenSet() const { return m_launchStatusHasBeenSet; }
    inline void SetLaunchStatus(LaunchStatus value) { m_launchStatusHasBeenSet = true; m_launchStatus = value; }
    inline ParticipatingResource& WithLaunchStatus(LaunchStatus value) { SetLaunchStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a participating resource.</p>
     */
    inline const ParticipatingResourceID& GetParticipatingResourceID() const { return m_participatingResourceID; }
    inline bool ParticipatingResourceIDHasBeenSet() const { return m_participatingResourceIDHasBeenSet; }
    template<typename ParticipatingResourceIDT = ParticipatingResourceID>
    void SetParticipatingResourceID(ParticipatingResourceIDT&& value) { m_participatingResourceIDHasBeenSet = true; m_participatingResourceID = std::forward<ParticipatingResourceIDT>(value); }
    template<typename ParticipatingResourceIDT = ParticipatingResourceID>
    ParticipatingResource& WithParticipatingResourceID(ParticipatingResourceIDT&& value) { SetParticipatingResourceID(std::forward<ParticipatingResourceIDT>(value)); return *this;}
    ///@}
  private:

    LaunchStatus m_launchStatus{LaunchStatus::NOT_SET};
    bool m_launchStatusHasBeenSet = false;

    ParticipatingResourceID m_participatingResourceID;
    bool m_participatingResourceIDHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
