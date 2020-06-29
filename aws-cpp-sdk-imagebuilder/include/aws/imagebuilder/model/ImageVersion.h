/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/Platform.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>An image semantic version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImageVersion">AWS
   * API Reference</a></p>
   */
  class AWS_IMAGEBUILDER_API ImageVersion
  {
  public:
    ImageVersion();
    ImageVersion(Aws::Utils::Json::JsonView jsonValue);
    ImageVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the image semantic version.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image semantic version.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image semantic version.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image semantic version.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image semantic version.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image semantic version.</p>
     */
    inline ImageVersion& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image semantic version.</p>
     */
    inline ImageVersion& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image semantic version.</p>
     */
    inline ImageVersion& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the image semantic version.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the image semantic version.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the image semantic version.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the image semantic version.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the image semantic version.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the image semantic version.</p>
     */
    inline ImageVersion& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the image semantic version.</p>
     */
    inline ImageVersion& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the image semantic version.</p>
     */
    inline ImageVersion& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The semantic version of the image semantic version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The semantic version of the image semantic version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The semantic version of the image semantic version.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The semantic version of the image semantic version.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The semantic version of the image semantic version.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The semantic version of the image semantic version.</p>
     */
    inline ImageVersion& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The semantic version of the image semantic version.</p>
     */
    inline ImageVersion& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The semantic version of the image semantic version.</p>
     */
    inline ImageVersion& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The platform of the image semantic version.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform of the image semantic version.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform of the image semantic version.</p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform of the image semantic version.</p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform of the image semantic version.</p>
     */
    inline ImageVersion& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform of the image semantic version.</p>
     */
    inline ImageVersion& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p> The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019. </p>
     */
    inline const Aws::String& GetOsVersion() const{ return m_osVersion; }

    /**
     * <p> The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019. </p>
     */
    inline bool OsVersionHasBeenSet() const { return m_osVersionHasBeenSet; }

    /**
     * <p> The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019. </p>
     */
    inline void SetOsVersion(const Aws::String& value) { m_osVersionHasBeenSet = true; m_osVersion = value; }

    /**
     * <p> The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019. </p>
     */
    inline void SetOsVersion(Aws::String&& value) { m_osVersionHasBeenSet = true; m_osVersion = std::move(value); }

    /**
     * <p> The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019. </p>
     */
    inline void SetOsVersion(const char* value) { m_osVersionHasBeenSet = true; m_osVersion.assign(value); }

    /**
     * <p> The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019. </p>
     */
    inline ImageVersion& WithOsVersion(const Aws::String& value) { SetOsVersion(value); return *this;}

    /**
     * <p> The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019. </p>
     */
    inline ImageVersion& WithOsVersion(Aws::String&& value) { SetOsVersion(std::move(value)); return *this;}

    /**
     * <p> The operating system version of the instance. For example, Amazon Linux 2,
     * Ubuntu 18, or Microsoft Windows Server 2019. </p>
     */
    inline ImageVersion& WithOsVersion(const char* value) { SetOsVersion(value); return *this;}


    /**
     * <p>The owner of the image semantic version.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the image semantic version.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the image semantic version.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the image semantic version.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the image semantic version.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the image semantic version.</p>
     */
    inline ImageVersion& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the image semantic version.</p>
     */
    inline ImageVersion& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the image semantic version.</p>
     */
    inline ImageVersion& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The date at which this image semantic version was created.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date at which this image semantic version was created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date at which this image semantic version was created.</p>
     */
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date at which this image semantic version was created.</p>
     */
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date at which this image semantic version was created.</p>
     */
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }

    /**
     * <p>The date at which this image semantic version was created.</p>
     */
    inline ImageVersion& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date at which this image semantic version was created.</p>
     */
    inline ImageVersion& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}

    /**
     * <p>The date at which this image semantic version was created.</p>
     */
    inline ImageVersion& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    Platform m_platform;
    bool m_platformHasBeenSet;

    Aws::String m_osVersion;
    bool m_osVersionHasBeenSet;

    Aws::String m_owner;
    bool m_ownerHasBeenSet;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
