/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/Ec2Platform.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Meta data details of an Amazon EC2 instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Ec2Metadata">AWS
   * API Reference</a></p>
   */
  class Ec2Metadata
  {
  public:
    AWS_INSPECTOR2_API Ec2Metadata();
    AWS_INSPECTOR2_API Ec2Metadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Ec2Metadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Amazon Machine Image (AMI) used to launch the instance.</p>
     */
    inline const Aws::String& GetAmiId() const{ return m_amiId; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) used to launch the instance.</p>
     */
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) used to launch the instance.</p>
     */
    inline void SetAmiId(const Aws::String& value) { m_amiIdHasBeenSet = true; m_amiId = value; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) used to launch the instance.</p>
     */
    inline void SetAmiId(Aws::String&& value) { m_amiIdHasBeenSet = true; m_amiId = std::move(value); }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) used to launch the instance.</p>
     */
    inline void SetAmiId(const char* value) { m_amiIdHasBeenSet = true; m_amiId.assign(value); }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) used to launch the instance.</p>
     */
    inline Ec2Metadata& WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}

    /**
     * <p>The ID of the Amazon Machine Image (AMI) used to launch the instance.</p>
     */
    inline Ec2Metadata& WithAmiId(Aws::String&& value) { SetAmiId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Machine Image (AMI) used to launch the instance.</p>
     */
    inline Ec2Metadata& WithAmiId(const char* value) { SetAmiId(value); return *this;}


    /**
     * <p>The platform of the instance.</p>
     */
    inline const Ec2Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform of the instance.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform of the instance.</p>
     */
    inline void SetPlatform(const Ec2Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform of the instance.</p>
     */
    inline void SetPlatform(Ec2Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform of the instance.</p>
     */
    inline Ec2Metadata& WithPlatform(const Ec2Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform of the instance.</p>
     */
    inline Ec2Metadata& WithPlatform(Ec2Platform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>The tags attached to the instance.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2Metadata& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2Metadata& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2Metadata& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2Metadata& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2Metadata& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2Metadata& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2Metadata& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2Metadata& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the instance.</p>
     */
    inline Ec2Metadata& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet = false;

    Ec2Platform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
