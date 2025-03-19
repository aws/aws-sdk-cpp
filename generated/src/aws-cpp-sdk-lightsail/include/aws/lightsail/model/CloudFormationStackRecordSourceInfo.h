/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CloudFormationStackRecordSourceInfo
  {
  public:
    AWS_LIGHTSAIL_API CloudFormationStackRecordSourceInfo() = default;
    AWS_LIGHTSAIL_API CloudFormationStackRecordSourceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API CloudFormationStackRecordSourceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Lightsail resource type (<code>ExportSnapshotRecord</code>).</p>
     */
    inline CloudFormationStackRecordSourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(CloudFormationStackRecordSourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline CloudFormationStackRecordSourceInfo& WithResourceType(CloudFormationStackRecordSourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the record.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CloudFormationStackRecordSourceInfo& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CloudFormationStackRecordSourceInfo& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}
  private:

    CloudFormationStackRecordSourceType m_resourceType{CloudFormationStackRecordSourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
