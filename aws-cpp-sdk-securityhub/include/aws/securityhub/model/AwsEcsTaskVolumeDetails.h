/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEcsTaskVolumeHostDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about a data volume that's used in a task definition.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskVolumeDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskVolumeDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskVolumeDetails();
    AWS_SECURITYHUB_API AwsEcsTaskVolumeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskVolumeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>. </p>
     */
    inline AwsEcsTaskVolumeDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>. </p>
     */
    inline AwsEcsTaskVolumeDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>. </p>
     */
    inline AwsEcsTaskVolumeDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>This parameter is specified when you use bind mount host volumes. The
     * contents of the <code>host</code> parameter determine whether your bind mount
     * host volume persists on the host container instance and where it's stored. </p>
     */
    inline const AwsEcsTaskVolumeHostDetails& GetHost() const{ return m_host; }

    /**
     * <p>This parameter is specified when you use bind mount host volumes. The
     * contents of the <code>host</code> parameter determine whether your bind mount
     * host volume persists on the host container instance and where it's stored. </p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>This parameter is specified when you use bind mount host volumes. The
     * contents of the <code>host</code> parameter determine whether your bind mount
     * host volume persists on the host container instance and where it's stored. </p>
     */
    inline void SetHost(const AwsEcsTaskVolumeHostDetails& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>This parameter is specified when you use bind mount host volumes. The
     * contents of the <code>host</code> parameter determine whether your bind mount
     * host volume persists on the host container instance and where it's stored. </p>
     */
    inline void SetHost(AwsEcsTaskVolumeHostDetails&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>This parameter is specified when you use bind mount host volumes. The
     * contents of the <code>host</code> parameter determine whether your bind mount
     * host volume persists on the host container instance and where it's stored. </p>
     */
    inline AwsEcsTaskVolumeDetails& WithHost(const AwsEcsTaskVolumeHostDetails& value) { SetHost(value); return *this;}

    /**
     * <p>This parameter is specified when you use bind mount host volumes. The
     * contents of the <code>host</code> parameter determine whether your bind mount
     * host volume persists on the host container instance and where it's stored. </p>
     */
    inline AwsEcsTaskVolumeDetails& WithHost(AwsEcsTaskVolumeHostDetails&& value) { SetHost(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AwsEcsTaskVolumeHostDetails m_host;
    bool m_hostHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
