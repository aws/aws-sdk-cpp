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
#include <aws/lightsail/model/CloudFormationStackRecordSourceType.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the source of a CloudFormation stack record (i.e., the export
   * snapshot record).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CloudFormationStackRecordSourceInfo">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API CloudFormationStackRecordSourceInfo
  {
  public:
    CloudFormationStackRecordSourceInfo();
    CloudFormationStackRecordSourceInfo(Aws::Utils::Json::JsonView jsonValue);
    CloudFormationStackRecordSourceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Lightsail resource type (e.g., <code>ExportSnapshotRecord</code>).</p>
     */
    inline const CloudFormationStackRecordSourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The Lightsail resource type (e.g., <code>ExportSnapshotRecord</code>).</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The Lightsail resource type (e.g., <code>ExportSnapshotRecord</code>).</p>
     */
    inline void SetResourceType(const CloudFormationStackRecordSourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The Lightsail resource type (e.g., <code>ExportSnapshotRecord</code>).</p>
     */
    inline void SetResourceType(CloudFormationStackRecordSourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The Lightsail resource type (e.g., <code>ExportSnapshotRecord</code>).</p>
     */
    inline CloudFormationStackRecordSourceInfo& WithResourceType(const CloudFormationStackRecordSourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The Lightsail resource type (e.g., <code>ExportSnapshotRecord</code>).</p>
     */
    inline CloudFormationStackRecordSourceInfo& WithResourceType(CloudFormationStackRecordSourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The name of the record.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the record.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the record.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the record.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the record.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the record.</p>
     */
    inline CloudFormationStackRecordSourceInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the record.</p>
     */
    inline CloudFormationStackRecordSourceInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the record.</p>
     */
    inline CloudFormationStackRecordSourceInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline CloudFormationStackRecordSourceInfo& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline CloudFormationStackRecordSourceInfo& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline CloudFormationStackRecordSourceInfo& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    CloudFormationStackRecordSourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
