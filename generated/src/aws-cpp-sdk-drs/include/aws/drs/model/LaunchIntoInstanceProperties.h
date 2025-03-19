/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Launch into existing instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/LaunchIntoInstanceProperties">AWS
   * API Reference</a></p>
   */
  class LaunchIntoInstanceProperties
  {
  public:
    AWS_DRS_API LaunchIntoInstanceProperties() = default;
    AWS_DRS_API LaunchIntoInstanceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API LaunchIntoInstanceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Optionally holds EC2 instance ID of an instance to launch into, instead of
     * launching a new instance during drill, recovery or failback.</p>
     */
    inline const Aws::String& GetLaunchIntoEC2InstanceID() const { return m_launchIntoEC2InstanceID; }
    inline bool LaunchIntoEC2InstanceIDHasBeenSet() const { return m_launchIntoEC2InstanceIDHasBeenSet; }
    template<typename LaunchIntoEC2InstanceIDT = Aws::String>
    void SetLaunchIntoEC2InstanceID(LaunchIntoEC2InstanceIDT&& value) { m_launchIntoEC2InstanceIDHasBeenSet = true; m_launchIntoEC2InstanceID = std::forward<LaunchIntoEC2InstanceIDT>(value); }
    template<typename LaunchIntoEC2InstanceIDT = Aws::String>
    LaunchIntoInstanceProperties& WithLaunchIntoEC2InstanceID(LaunchIntoEC2InstanceIDT&& value) { SetLaunchIntoEC2InstanceID(std::forward<LaunchIntoEC2InstanceIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_launchIntoEC2InstanceID;
    bool m_launchIntoEC2InstanceIDHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
