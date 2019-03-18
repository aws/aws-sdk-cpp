/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/ResourceLocation.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/Tag.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a database snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RelationalDatabaseSnapshot">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API RelationalDatabaseSnapshot
  {
  public:
    RelationalDatabaseSnapshot();
    RelationalDatabaseSnapshot(Aws::Utils::Json::JsonView jsonValue);
    RelationalDatabaseSnapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the database snapshot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the database snapshot.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the database snapshot.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the database snapshot.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the database snapshot.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the database snapshot.</p>
     */
    inline RelationalDatabaseSnapshot& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the database snapshot.</p>
     */
    inline RelationalDatabaseSnapshot& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the database snapshot.</p>
     */
    inline RelationalDatabaseSnapshot& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the database snapshot.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database snapshot.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database snapshot.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database snapshot.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the database snapshot.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the database snapshot.</p>
     */
    inline RelationalDatabaseSnapshot& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the database snapshot.</p>
     */
    inline RelationalDatabaseSnapshot& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the database snapshot.</p>
     */
    inline RelationalDatabaseSnapshot& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The support code for the database snapshot. Include this code in your email
     * to support when you have questions about a database snapshot in Lightsail. This
     * code enables our support team to look up your Lightsail information more
     * easily.</p>
     */
    inline const Aws::String& GetSupportCode() const{ return m_supportCode; }

    /**
     * <p>The support code for the database snapshot. Include this code in your email
     * to support when you have questions about a database snapshot in Lightsail. This
     * code enables our support team to look up your Lightsail information more
     * easily.</p>
     */
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }

    /**
     * <p>The support code for the database snapshot. Include this code in your email
     * to support when you have questions about a database snapshot in Lightsail. This
     * code enables our support team to look up your Lightsail information more
     * easily.</p>
     */
    inline void SetSupportCode(const Aws::String& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }

    /**
     * <p>The support code for the database snapshot. Include this code in your email
     * to support when you have questions about a database snapshot in Lightsail. This
     * code enables our support team to look up your Lightsail information more
     * easily.</p>
     */
    inline void SetSupportCode(Aws::String&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::move(value); }

    /**
     * <p>The support code for the database snapshot. Include this code in your email
     * to support when you have questions about a database snapshot in Lightsail. This
     * code enables our support team to look up your Lightsail information more
     * easily.</p>
     */
    inline void SetSupportCode(const char* value) { m_supportCodeHasBeenSet = true; m_supportCode.assign(value); }

    /**
     * <p>The support code for the database snapshot. Include this code in your email
     * to support when you have questions about a database snapshot in Lightsail. This
     * code enables our support team to look up your Lightsail information more
     * easily.</p>
     */
    inline RelationalDatabaseSnapshot& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}

    /**
     * <p>The support code for the database snapshot. Include this code in your email
     * to support when you have questions about a database snapshot in Lightsail. This
     * code enables our support team to look up your Lightsail information more
     * easily.</p>
     */
    inline RelationalDatabaseSnapshot& WithSupportCode(Aws::String&& value) { SetSupportCode(std::move(value)); return *this;}

    /**
     * <p>The support code for the database snapshot. Include this code in your email
     * to support when you have questions about a database snapshot in Lightsail. This
     * code enables our support team to look up your Lightsail information more
     * easily.</p>
     */
    inline RelationalDatabaseSnapshot& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}


    /**
     * <p>The timestamp when the database snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the database snapshot was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the database snapshot was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the database snapshot was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the database snapshot was created.</p>
     */
    inline RelationalDatabaseSnapshot& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the database snapshot was created.</p>
     */
    inline RelationalDatabaseSnapshot& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Region name and Availability Zone where the database snapshot is
     * located.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }

    /**
     * <p>The Region name and Availability Zone where the database snapshot is
     * located.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The Region name and Availability Zone where the database snapshot is
     * located.</p>
     */
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The Region name and Availability Zone where the database snapshot is
     * located.</p>
     */
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The Region name and Availability Zone where the database snapshot is
     * located.</p>
     */
    inline RelationalDatabaseSnapshot& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>The Region name and Availability Zone where the database snapshot is
     * located.</p>
     */
    inline RelationalDatabaseSnapshot& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The Lightsail resource type.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The Lightsail resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The Lightsail resource type.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The Lightsail resource type.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The Lightsail resource type.</p>
     */
    inline RelationalDatabaseSnapshot& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The Lightsail resource type.</p>
     */
    inline RelationalDatabaseSnapshot& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline RelationalDatabaseSnapshot& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline RelationalDatabaseSnapshot& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline RelationalDatabaseSnapshot& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline RelationalDatabaseSnapshot& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The software of the database snapshot (for example, <code>MySQL</code>)</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The software of the database snapshot (for example, <code>MySQL</code>)</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The software of the database snapshot (for example, <code>MySQL</code>)</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The software of the database snapshot (for example, <code>MySQL</code>)</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The software of the database snapshot (for example, <code>MySQL</code>)</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The software of the database snapshot (for example, <code>MySQL</code>)</p>
     */
    inline RelationalDatabaseSnapshot& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The software of the database snapshot (for example, <code>MySQL</code>)</p>
     */
    inline RelationalDatabaseSnapshot& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The software of the database snapshot (for example, <code>MySQL</code>)</p>
     */
    inline RelationalDatabaseSnapshot& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The database engine version for the database snapshot (for example,
     * <code>5.7.23</code>).</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The database engine version for the database snapshot (for example,
     * <code>5.7.23</code>).</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The database engine version for the database snapshot (for example,
     * <code>5.7.23</code>).</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The database engine version for the database snapshot (for example,
     * <code>5.7.23</code>).</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The database engine version for the database snapshot (for example,
     * <code>5.7.23</code>).</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The database engine version for the database snapshot (for example,
     * <code>5.7.23</code>).</p>
     */
    inline RelationalDatabaseSnapshot& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The database engine version for the database snapshot (for example,
     * <code>5.7.23</code>).</p>
     */
    inline RelationalDatabaseSnapshot& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The database engine version for the database snapshot (for example,
     * <code>5.7.23</code>).</p>
     */
    inline RelationalDatabaseSnapshot& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The size of the disk in GB (for example, <code>32</code>) for the database
     * snapshot.</p>
     */
    inline int GetSizeInGb() const{ return m_sizeInGb; }

    /**
     * <p>The size of the disk in GB (for example, <code>32</code>) for the database
     * snapshot.</p>
     */
    inline bool SizeInGbHasBeenSet() const { return m_sizeInGbHasBeenSet; }

    /**
     * <p>The size of the disk in GB (for example, <code>32</code>) for the database
     * snapshot.</p>
     */
    inline void SetSizeInGb(int value) { m_sizeInGbHasBeenSet = true; m_sizeInGb = value; }

    /**
     * <p>The size of the disk in GB (for example, <code>32</code>) for the database
     * snapshot.</p>
     */
    inline RelationalDatabaseSnapshot& WithSizeInGb(int value) { SetSizeInGb(value); return *this;}


    /**
     * <p>The state of the database snapshot.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of the database snapshot.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the database snapshot.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the database snapshot.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the database snapshot.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state of the database snapshot.</p>
     */
    inline RelationalDatabaseSnapshot& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the database snapshot.</p>
     */
    inline RelationalDatabaseSnapshot& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the database snapshot.</p>
     */
    inline RelationalDatabaseSnapshot& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The name of the source database from which the database snapshot was
     * created.</p>
     */
    inline const Aws::String& GetFromRelationalDatabaseName() const{ return m_fromRelationalDatabaseName; }

    /**
     * <p>The name of the source database from which the database snapshot was
     * created.</p>
     */
    inline bool FromRelationalDatabaseNameHasBeenSet() const { return m_fromRelationalDatabaseNameHasBeenSet; }

    /**
     * <p>The name of the source database from which the database snapshot was
     * created.</p>
     */
    inline void SetFromRelationalDatabaseName(const Aws::String& value) { m_fromRelationalDatabaseNameHasBeenSet = true; m_fromRelationalDatabaseName = value; }

    /**
     * <p>The name of the source database from which the database snapshot was
     * created.</p>
     */
    inline void SetFromRelationalDatabaseName(Aws::String&& value) { m_fromRelationalDatabaseNameHasBeenSet = true; m_fromRelationalDatabaseName = std::move(value); }

    /**
     * <p>The name of the source database from which the database snapshot was
     * created.</p>
     */
    inline void SetFromRelationalDatabaseName(const char* value) { m_fromRelationalDatabaseNameHasBeenSet = true; m_fromRelationalDatabaseName.assign(value); }

    /**
     * <p>The name of the source database from which the database snapshot was
     * created.</p>
     */
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseName(const Aws::String& value) { SetFromRelationalDatabaseName(value); return *this;}

    /**
     * <p>The name of the source database from which the database snapshot was
     * created.</p>
     */
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseName(Aws::String&& value) { SetFromRelationalDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the source database from which the database snapshot was
     * created.</p>
     */
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseName(const char* value) { SetFromRelationalDatabaseName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the database from which the database
     * snapshot was created.</p>
     */
    inline const Aws::String& GetFromRelationalDatabaseArn() const{ return m_fromRelationalDatabaseArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database from which the database
     * snapshot was created.</p>
     */
    inline bool FromRelationalDatabaseArnHasBeenSet() const { return m_fromRelationalDatabaseArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database from which the database
     * snapshot was created.</p>
     */
    inline void SetFromRelationalDatabaseArn(const Aws::String& value) { m_fromRelationalDatabaseArnHasBeenSet = true; m_fromRelationalDatabaseArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database from which the database
     * snapshot was created.</p>
     */
    inline void SetFromRelationalDatabaseArn(Aws::String&& value) { m_fromRelationalDatabaseArnHasBeenSet = true; m_fromRelationalDatabaseArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the database from which the database
     * snapshot was created.</p>
     */
    inline void SetFromRelationalDatabaseArn(const char* value) { m_fromRelationalDatabaseArnHasBeenSet = true; m_fromRelationalDatabaseArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the database from which the database
     * snapshot was created.</p>
     */
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseArn(const Aws::String& value) { SetFromRelationalDatabaseArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the database from which the database
     * snapshot was created.</p>
     */
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseArn(Aws::String&& value) { SetFromRelationalDatabaseArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the database from which the database
     * snapshot was created.</p>
     */
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseArn(const char* value) { SetFromRelationalDatabaseArn(value); return *this;}


    /**
     * <p>The bundle ID of the database from which the database snapshot was
     * created.</p>
     */
    inline const Aws::String& GetFromRelationalDatabaseBundleId() const{ return m_fromRelationalDatabaseBundleId; }

    /**
     * <p>The bundle ID of the database from which the database snapshot was
     * created.</p>
     */
    inline bool FromRelationalDatabaseBundleIdHasBeenSet() const { return m_fromRelationalDatabaseBundleIdHasBeenSet; }

    /**
     * <p>The bundle ID of the database from which the database snapshot was
     * created.</p>
     */
    inline void SetFromRelationalDatabaseBundleId(const Aws::String& value) { m_fromRelationalDatabaseBundleIdHasBeenSet = true; m_fromRelationalDatabaseBundleId = value; }

    /**
     * <p>The bundle ID of the database from which the database snapshot was
     * created.</p>
     */
    inline void SetFromRelationalDatabaseBundleId(Aws::String&& value) { m_fromRelationalDatabaseBundleIdHasBeenSet = true; m_fromRelationalDatabaseBundleId = std::move(value); }

    /**
     * <p>The bundle ID of the database from which the database snapshot was
     * created.</p>
     */
    inline void SetFromRelationalDatabaseBundleId(const char* value) { m_fromRelationalDatabaseBundleIdHasBeenSet = true; m_fromRelationalDatabaseBundleId.assign(value); }

    /**
     * <p>The bundle ID of the database from which the database snapshot was
     * created.</p>
     */
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseBundleId(const Aws::String& value) { SetFromRelationalDatabaseBundleId(value); return *this;}

    /**
     * <p>The bundle ID of the database from which the database snapshot was
     * created.</p>
     */
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseBundleId(Aws::String&& value) { SetFromRelationalDatabaseBundleId(std::move(value)); return *this;}

    /**
     * <p>The bundle ID of the database from which the database snapshot was
     * created.</p>
     */
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseBundleId(const char* value) { SetFromRelationalDatabaseBundleId(value); return *this;}


    /**
     * <p>The blueprint ID of the database from which the database snapshot was
     * created. A blueprint describes the major engine version of a database.</p>
     */
    inline const Aws::String& GetFromRelationalDatabaseBlueprintId() const{ return m_fromRelationalDatabaseBlueprintId; }

    /**
     * <p>The blueprint ID of the database from which the database snapshot was
     * created. A blueprint describes the major engine version of a database.</p>
     */
    inline bool FromRelationalDatabaseBlueprintIdHasBeenSet() const { return m_fromRelationalDatabaseBlueprintIdHasBeenSet; }

    /**
     * <p>The blueprint ID of the database from which the database snapshot was
     * created. A blueprint describes the major engine version of a database.</p>
     */
    inline void SetFromRelationalDatabaseBlueprintId(const Aws::String& value) { m_fromRelationalDatabaseBlueprintIdHasBeenSet = true; m_fromRelationalDatabaseBlueprintId = value; }

    /**
     * <p>The blueprint ID of the database from which the database snapshot was
     * created. A blueprint describes the major engine version of a database.</p>
     */
    inline void SetFromRelationalDatabaseBlueprintId(Aws::String&& value) { m_fromRelationalDatabaseBlueprintIdHasBeenSet = true; m_fromRelationalDatabaseBlueprintId = std::move(value); }

    /**
     * <p>The blueprint ID of the database from which the database snapshot was
     * created. A blueprint describes the major engine version of a database.</p>
     */
    inline void SetFromRelationalDatabaseBlueprintId(const char* value) { m_fromRelationalDatabaseBlueprintIdHasBeenSet = true; m_fromRelationalDatabaseBlueprintId.assign(value); }

    /**
     * <p>The blueprint ID of the database from which the database snapshot was
     * created. A blueprint describes the major engine version of a database.</p>
     */
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseBlueprintId(const Aws::String& value) { SetFromRelationalDatabaseBlueprintId(value); return *this;}

    /**
     * <p>The blueprint ID of the database from which the database snapshot was
     * created. A blueprint describes the major engine version of a database.</p>
     */
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseBlueprintId(Aws::String&& value) { SetFromRelationalDatabaseBlueprintId(std::move(value)); return *this;}

    /**
     * <p>The blueprint ID of the database from which the database snapshot was
     * created. A blueprint describes the major engine version of a database.</p>
     */
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseBlueprintId(const char* value) { SetFromRelationalDatabaseBlueprintId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    ResourceLocation m_location;
    bool m_locationHasBeenSet;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    int m_sizeInGb;
    bool m_sizeInGbHasBeenSet;

    Aws::String m_state;
    bool m_stateHasBeenSet;

    Aws::String m_fromRelationalDatabaseName;
    bool m_fromRelationalDatabaseNameHasBeenSet;

    Aws::String m_fromRelationalDatabaseArn;
    bool m_fromRelationalDatabaseArnHasBeenSet;

    Aws::String m_fromRelationalDatabaseBundleId;
    bool m_fromRelationalDatabaseBundleIdHasBeenSet;

    Aws::String m_fromRelationalDatabaseBlueprintId;
    bool m_fromRelationalDatabaseBlueprintIdHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
