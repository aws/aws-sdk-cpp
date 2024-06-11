/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about the compute fleet of the build project. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/codebuild/latest/userguide/fleets.html">Working
   * with reserved capacity in CodeBuild</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ProjectFleet">AWS
   * API Reference</a></p>
   */
  class ProjectFleet
  {
  public:
    AWS_CODEBUILD_API ProjectFleet();
    AWS_CODEBUILD_API ProjectFleet(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ProjectFleet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the compute fleet ARN for the build project.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }
    inline ProjectFleet& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}
    inline ProjectFleet& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}
    inline ProjectFleet& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
