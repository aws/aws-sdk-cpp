/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/LaunchProfile.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NimbleStudio
{
namespace Model
{
  /**
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateLaunchProfileResponse">AWS
   * API Reference</a></p>
   */
  class AWS_NIMBLESTUDIO_API CreateLaunchProfileResult
  {
  public:
    CreateLaunchProfileResult();
    CreateLaunchProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateLaunchProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The launch profile.</p>
     */
    inline const LaunchProfile& GetLaunchProfile() const{ return m_launchProfile; }

    /**
     * <p>The launch profile.</p>
     */
    inline void SetLaunchProfile(const LaunchProfile& value) { m_launchProfile = value; }

    /**
     * <p>The launch profile.</p>
     */
    inline void SetLaunchProfile(LaunchProfile&& value) { m_launchProfile = std::move(value); }

    /**
     * <p>The launch profile.</p>
     */
    inline CreateLaunchProfileResult& WithLaunchProfile(const LaunchProfile& value) { SetLaunchProfile(value); return *this;}

    /**
     * <p>The launch profile.</p>
     */
    inline CreateLaunchProfileResult& WithLaunchProfile(LaunchProfile&& value) { SetLaunchProfile(std::move(value)); return *this;}

  private:

    LaunchProfile m_launchProfile;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
